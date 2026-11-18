// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 70

// BindInputs @ 14b206960

void __thiscall
Metasound::TTriggerSequenceOperator<8>::BindInputs
          (TTriggerSequenceOperator<8> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoopInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b206ab0

void __thiscall
Metasound::TTriggerSequenceOperator<8>::BindOutputs
          (TTriggerSequenceOperator<8> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar6 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar6) {
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
    pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar6);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&TriggerSequenceVertexNames::OutputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar4,&local_c8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar7;
    local_98 = pFVar7;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  return;
}

// BindInputs @ 14b206fa0

void __thiscall
Metasound::TTriggerSequenceOperator<7>::BindInputs
          (TTriggerSequenceOperator<7> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoopInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b2070f0

void __thiscall
Metasound::TTriggerSequenceOperator<7>::BindOutputs
          (TTriggerSequenceOperator<7> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar6 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar6) {
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
    pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar6);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&TriggerSequenceVertexNames::OutputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar4,&local_c8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar7;
    local_98 = pFVar7;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 7);
  return;
}

// BindInputs @ 14b207eb0

void __thiscall
Metasound::TTriggerSequenceOperator<6>::BindInputs
          (TTriggerSequenceOperator<6> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoopInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b2080f0

void __thiscall
Metasound::TTriggerSequenceOperator<6>::BindOutputs
          (TTriggerSequenceOperator<6> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar6 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar6) {
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
    pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar6);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&TriggerSequenceVertexNames::OutputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar4,&local_c8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar7;
    local_98 = pFVar7;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  return;
}

// BindInputs @ 14b208ab0

void __thiscall
Metasound::TTriggerSequenceOperator<5>::BindInputs
          (TTriggerSequenceOperator<5> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoopInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b208c00

void __thiscall
Metasound::TTriggerSequenceOperator<5>::BindOutputs
          (TTriggerSequenceOperator<5> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar6 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar6) {
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
    pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar6);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&TriggerSequenceVertexNames::OutputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar4,&local_c8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar7;
    local_98 = pFVar7;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 5);
  return;
}

// BindInputs @ 14b209190

void __thiscall
Metasound::TTriggerSequenceOperator<4>::BindInputs
          (TTriggerSequenceOperator<4> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoopInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b2092e0

void __thiscall
Metasound::TTriggerSequenceOperator<4>::BindOutputs
          (TTriggerSequenceOperator<4> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar6 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar6) {
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
    pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar6);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&TriggerSequenceVertexNames::OutputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar4,&local_c8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar7;
    local_98 = pFVar7;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  return;
}

// BindInputs @ 14b2098e0

void __thiscall
Metasound::TTriggerSequenceOperator<3>::BindInputs
          (TTriggerSequenceOperator<3> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoopInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b209a30

void __thiscall
Metasound::TTriggerSequenceOperator<3>::BindOutputs
          (TTriggerSequenceOperator<3> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar6 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar6) {
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
    pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar6);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&TriggerSequenceVertexNames::OutputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar4,&local_c8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar7;
    local_98 = pFVar7;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  return;
}

// BindInputs @ 14b209d30

void __thiscall
Metasound::TTriggerSequenceOperator<2>::BindInputs
          (TTriggerSequenceOperator<2> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoopInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b209e80

void __thiscall
Metasound::TTriggerSequenceOperator<2>::BindOutputs
          (TTriggerSequenceOperator<2> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar6 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar6) {
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
    pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar6);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&TriggerSequenceVertexNames::OutputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar4,&local_c8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar7;
    local_98 = pFVar7;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  return;
}

// TTriggerSequenceOperator<2> @ 14b230e90

TTriggerSequenceOperator<2> * __thiscall
Metasound::TTriggerSequenceOperator<2>::TTriggerSequenceOperator<2>
          (TTriggerSequenceOperator<2> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSequenceOperator<2> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSequenceOperator__01_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->bLoopInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoopInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->bLoopInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bLoopInput = &___7__TDataReadReference__N_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
  this->CurrentIndex = 0;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<2> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<2> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TTriggerSequenceOperator<3> @ 14b231130

TTriggerSequenceOperator<3> * __thiscall
Metasound::TTriggerSequenceOperator<3>::TTriggerSequenceOperator<3>
          (TTriggerSequenceOperator<3> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSequenceOperator<3> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSequenceOperator__02_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->bLoopInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoopInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->bLoopInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bLoopInput = &___7__TDataReadReference__N_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
  this->CurrentIndex = 0;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TTriggerSequenceOperator<4> @ 14b2314a0

TTriggerSequenceOperator<4> * __thiscall
Metasound::TTriggerSequenceOperator<4>::TTriggerSequenceOperator<4>
          (TTriggerSequenceOperator<4> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSequenceOperator<4> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSequenceOperator__03_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->bLoopInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoopInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->bLoopInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bLoopInput = &___7__TDataReadReference__N_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
  this->CurrentIndex = 0;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<4> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<4> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<4> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<4> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TTriggerSequenceOperator<5> @ 14b2318e0

TTriggerSequenceOperator<5> * __thiscall
Metasound::TTriggerSequenceOperator<5>::TTriggerSequenceOperator<5>
          (TTriggerSequenceOperator<5> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSequenceOperator<5> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSequenceOperator__04_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->bLoopInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoopInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->bLoopInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bLoopInput = &___7__TDataReadReference__N_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
  this->CurrentIndex = 0;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<5> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<5> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<5> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<5> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            (&local_38,NewObject,param_1);
  pTVar2 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  if ((pTVar2 <= &local_38) && (&local_38 < pTVar2 + (this->TriggerOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTriggerSequenceOperator<5> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->TriggerOutputs).ArrayNum;
  if (iVar5 == (this->TriggerOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->TriggerOutputs).AllocatorInstance,
                       &(this->TriggerOutputs).ArrayMax);
  }
  (this->TriggerOutputs).ArrayNum = iVar5 + 1;
  pFVar7 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(FTrigger **)(pFVar7 + 8) = local_38.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) =
       local_38.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TTriggerSequenceOperator<6> @ 14b231df0

TTriggerSequenceOperator<6> * __thiscall
Metasound::TTriggerSequenceOperator<6>::TTriggerSequenceOperator<6>
          (TTriggerSequenceOperator<6> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  TDataReference<Metasound::FTrigger> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTriggerSequenceOperator<6> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSequenceOperator__05_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar7 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->bLoopInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoopInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar7 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->bLoopInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  lVar7 = 6;
  *(undefined ***)&this->bLoopInput = &___7__TDataReadReference__N_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
  this->CurrentIndex = 0;
  do {
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              (&local_38,NewObject,param_1);
    pTVar1 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
    local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    if ((pTVar1 <= &local_38) && (&local_38 < pTVar1 + (this->TriggerOutputs).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TTriggerSequenceOperator<6> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = (this->TriggerOutputs).ArrayNum;
    if (iVar4 == (this->TriggerOutputs).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->TriggerOutputs).AllocatorInstance,
                         &(this->TriggerOutputs).ArrayMax);
    }
    (this->TriggerOutputs).ArrayNum = iVar4 + 1;
    pFVar6 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar4 * 0x20;
    *(undefined ***)pFVar6 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(FTrigger **)(pFVar6 + 8) = local_38.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar6 + 0x10) =
         local_38.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)pFVar6 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return this;
}

// TTriggerSequenceOperator<7> @ 14b231fd0

TTriggerSequenceOperator<7> * __thiscall
Metasound::TTriggerSequenceOperator<7>::TTriggerSequenceOperator<7>
          (TTriggerSequenceOperator<7> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  TDataReference<Metasound::FTrigger> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTriggerSequenceOperator<7> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSequenceOperator__06_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar7 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->bLoopInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoopInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar7 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->bLoopInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  lVar7 = 7;
  *(undefined ***)&this->bLoopInput = &___7__TDataReadReference__N_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
  this->CurrentIndex = 0;
  do {
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              (&local_38,NewObject,param_1);
    pTVar1 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
    local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    if ((pTVar1 <= &local_38) && (&local_38 < pTVar1 + (this->TriggerOutputs).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TTriggerSequenceOperator<7> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = (this->TriggerOutputs).ArrayNum;
    if (iVar4 == (this->TriggerOutputs).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->TriggerOutputs).AllocatorInstance,
                         &(this->TriggerOutputs).ArrayMax);
    }
    (this->TriggerOutputs).ArrayNum = iVar4 + 1;
    pFVar6 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar4 * 0x20;
    *(undefined ***)pFVar6 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(FTrigger **)(pFVar6 + 8) = local_38.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar6 + 0x10) =
         local_38.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)pFVar6 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return this;
}

// TTriggerSequenceOperator<8> @ 14b2321b0

TTriggerSequenceOperator<8> * __thiscall
Metasound::TTriggerSequenceOperator<8>::TTriggerSequenceOperator<8>
          (TTriggerSequenceOperator<8> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  TDataReference<Metasound::FTrigger> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTriggerSequenceOperator<8> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSequenceOperator__07_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar7 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->bLoopInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoopInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar7 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->bLoopInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  lVar7 = 8;
  *(undefined ***)&this->bLoopInput = &___7__TDataReadReference__N_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
  this->CurrentIndex = 0;
  do {
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              (&local_38,NewObject,param_1);
    pTVar1 = (TDataReference<Metasound::FTrigger> *)(this->TriggerOutputs).AllocatorInstance.Data;
    local_38._padding_ = (longlong)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    if ((pTVar1 <= &local_38) && (&local_38 < pTVar1 + (this->TriggerOutputs).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TTriggerSequenceOperator<8> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = (this->TriggerOutputs).ArrayNum;
    if (iVar4 == (this->TriggerOutputs).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->TriggerOutputs).AllocatorInstance,
                         &(this->TriggerOutputs).ArrayMax);
    }
    (this->TriggerOutputs).ArrayNum = iVar4 + 1;
    pFVar6 = (this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar4 * 0x20;
    *(undefined ***)pFVar6 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(FTrigger **)(pFVar6 + 8) = local_38.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar6 + 0x10) =
         local_38.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_38.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_38.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)pFVar6 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_38.ObjectReference.SharedReferenceCount.ReferenceController);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return this;
}

// operator() @ 14b241520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSequenceOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Sequence (%d)");
  pwVar6 = L"";
  if (local_48.Name.ComparisonIndex.Value != 0) {
    pwVar6 = (wchar_t *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(&local_res18,pwVar6);
  if ((void *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48.Namespace.Number,
                                   local_48.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar5 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSequenceOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSequenceOperator<2>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b2417a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSequenceOperator<3>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Sequence (%d)");
  pwVar6 = L"";
  if (local_48.Name.ComparisonIndex.Value != 0) {
    pwVar6 = (wchar_t *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(&local_res18,pwVar6);
  if ((void *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48.Namespace.Number,
                                   local_48.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar5 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSequenceOperator<3>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSequenceOperator<3>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b241a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSequenceOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Sequence (%d)");
  pwVar6 = L"";
  if (local_48.Name.ComparisonIndex.Value != 0) {
    pwVar6 = (wchar_t *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(&local_res18,pwVar6);
  if ((void *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48.Namespace.Number,
                                   local_48.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar5 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSequenceOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSequenceOperator<4>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b241ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSequenceOperator<5>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Sequence (%d)");
  pwVar6 = L"";
  if (local_48.Name.ComparisonIndex.Value != 0) {
    pwVar6 = (wchar_t *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(&local_res18,pwVar6);
  if ((void *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48.Namespace.Number,
                                   local_48.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar5 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSequenceOperator<5>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSequenceOperator<5>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b241f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSequenceOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Sequence (%d)");
  pwVar6 = L"";
  if (local_48.Name.ComparisonIndex.Value != 0) {
    pwVar6 = (wchar_t *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(&local_res18,pwVar6);
  if ((void *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48.Namespace.Number,
                                   local_48.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar5 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSequenceOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSequenceOperator<6>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b2421a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSequenceOperator<7>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Sequence (%d)");
  pwVar6 = L"";
  if (local_48.Name.ComparisonIndex.Value != 0) {
    pwVar6 = (wchar_t *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(&local_res18,pwVar6);
  if ((void *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48.Namespace.Number,
                                   local_48.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar5 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSequenceOperator<7>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSequenceOperator<7>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b242420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSequenceOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Sequence (%d)");
  pwVar6 = L"";
  if (local_48.Name.ComparisonIndex.Value != 0) {
    pwVar6 = (wchar_t *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(&local_res18,pwVar6);
  if ((void *)CONCAT44(local_48.Namespace.Number,local_48.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48.Namespace.Number,
                                   local_48.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar5 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSequenceOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSequenceOperator<8>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b245110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSequenceOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FOutputVertexInterface local_190;
  FInputVertexInterface local_170;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_170);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_e0,&Metasound::TriggerSequenceVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_e0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a8,&Metasound::TriggerSequenceVertexNames::InputResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_a8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  local_1a8[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_70,&Metasound::TriggerSequenceVertexNames::InputLoopName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_70._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_190);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_120,uVar10);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a0.AllocatorInstance.Data,&local_120,1);
    FLazyName::Resolve(&Metasound::TriggerSequenceVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_150,&local_130);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_140,pwVar8,&local_1a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar9.Data = local_140.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_100,&local_148,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b245455;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20));
    }
    if (((ulonglong)local_190._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_190._padding_ + (longlong)local_190._padding_._4_4_ * 0x20))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_190._padding_ == local_190._padding_._4_4_) {
      local_190._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_190,
                      (int *)((longlong)&local_190._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20);
    *(undefined ***)(local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_190._padding_._0_4_ = (int)local_190._padding_ + 1;
LAB_14b245455:
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
    if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (1 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_170,&local_190);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
      if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b245570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSequenceOperator<3>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FOutputVertexInterface local_190;
  FInputVertexInterface local_170;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_170);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_e0,&Metasound::TriggerSequenceVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_e0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a8,&Metasound::TriggerSequenceVertexNames::InputResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_a8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  local_1a8[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_70,&Metasound::TriggerSequenceVertexNames::InputLoopName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_70._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_190);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_120,uVar10);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a0.AllocatorInstance.Data,&local_120,1);
    FLazyName::Resolve(&Metasound::TriggerSequenceVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_150,&local_130);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_140,pwVar8,&local_1a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar9.Data = local_140.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_100,&local_148,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b2458b5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20));
    }
    if (((ulonglong)local_190._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_190._padding_ + (longlong)local_190._padding_._4_4_ * 0x20))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_190._padding_ == local_190._padding_._4_4_) {
      local_190._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_190,
                      (int *)((longlong)&local_190._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20);
    *(undefined ***)(local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_190._padding_._0_4_ = (int)local_190._padding_ + 1;
LAB_14b2458b5:
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
    if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (2 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_170,&local_190);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
      if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b2459d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSequenceOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FOutputVertexInterface local_190;
  FInputVertexInterface local_170;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_170);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_e0,&Metasound::TriggerSequenceVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_e0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a8,&Metasound::TriggerSequenceVertexNames::InputResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_a8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  local_1a8[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_70,&Metasound::TriggerSequenceVertexNames::InputLoopName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_70._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_190);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_120,uVar10);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a0.AllocatorInstance.Data,&local_120,1);
    FLazyName::Resolve(&Metasound::TriggerSequenceVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_150,&local_130);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_140,pwVar8,&local_1a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar9.Data = local_140.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_100,&local_148,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b245d15;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20));
    }
    if (((ulonglong)local_190._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_190._padding_ + (longlong)local_190._padding_._4_4_ * 0x20))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_190._padding_ == local_190._padding_._4_4_) {
      local_190._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_190,
                      (int *)((longlong)&local_190._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20);
    *(undefined ***)(local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_190._padding_._0_4_ = (int)local_190._padding_ + 1;
LAB_14b245d15:
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
    if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (3 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_170,&local_190);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
      if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b245e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSequenceOperator<5>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FOutputVertexInterface local_190;
  FInputVertexInterface local_170;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_170);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_e0,&Metasound::TriggerSequenceVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_e0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a8,&Metasound::TriggerSequenceVertexNames::InputResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_a8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  local_1a8[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_70,&Metasound::TriggerSequenceVertexNames::InputLoopName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_70._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_190);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_120,uVar10);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a0.AllocatorInstance.Data,&local_120,1);
    FLazyName::Resolve(&Metasound::TriggerSequenceVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_150,&local_130);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_140,pwVar8,&local_1a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar9.Data = local_140.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_100,&local_148,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b246175;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20));
    }
    if (((ulonglong)local_190._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_190._padding_ + (longlong)local_190._padding_._4_4_ * 0x20))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_190._padding_ == local_190._padding_._4_4_) {
      local_190._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_190,
                      (int *)((longlong)&local_190._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20);
    *(undefined ***)(local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_190._padding_._0_4_ = (int)local_190._padding_ + 1;
LAB_14b246175:
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
    if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (4 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_170,&local_190);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
      if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b246290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSequenceOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FOutputVertexInterface local_190;
  FInputVertexInterface local_170;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_170);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_e0,&Metasound::TriggerSequenceVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_e0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a8,&Metasound::TriggerSequenceVertexNames::InputResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_a8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  local_1a8[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_70,&Metasound::TriggerSequenceVertexNames::InputLoopName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_70._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_190);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_120,uVar10);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a0.AllocatorInstance.Data,&local_120,1);
    FLazyName::Resolve(&Metasound::TriggerSequenceVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_150,&local_130);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_140,pwVar8,&local_1a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar9.Data = local_140.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_100,&local_148,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b2465d5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20));
    }
    if (((ulonglong)local_190._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_190._padding_ + (longlong)local_190._padding_._4_4_ * 0x20))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_190._padding_ == local_190._padding_._4_4_) {
      local_190._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_190,
                      (int *)((longlong)&local_190._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20);
    *(undefined ***)(local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_190._padding_._0_4_ = (int)local_190._padding_ + 1;
LAB_14b2465d5:
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
    if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (5 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_170,&local_190);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
      if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b2466f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSequenceOperator<7>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FOutputVertexInterface local_190;
  FInputVertexInterface local_170;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_170);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_e0,&Metasound::TriggerSequenceVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_e0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a8,&Metasound::TriggerSequenceVertexNames::InputResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_a8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  local_1a8[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_70,&Metasound::TriggerSequenceVertexNames::InputLoopName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_70._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_190);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_120,uVar10);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a0.AllocatorInstance.Data,&local_120,1);
    FLazyName::Resolve(&Metasound::TriggerSequenceVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_150,&local_130);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_140,pwVar8,&local_1a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar9.Data = local_140.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_100,&local_148,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b246a35;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20));
    }
    if (((ulonglong)local_190._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_190._padding_ + (longlong)local_190._padding_._4_4_ * 0x20))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_190._padding_ == local_190._padding_._4_4_) {
      local_190._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_190,
                      (int *)((longlong)&local_190._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20);
    *(undefined ***)(local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_190._padding_._0_4_ = (int)local_190._padding_ + 1;
LAB_14b246a35:
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
    if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (6 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_170,&local_190);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
      if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b246b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSequenceOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FOutputVertexInterface local_190;
  FInputVertexInterface local_170;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_170);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_e0,&Metasound::TriggerSequenceVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_e0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a8,&Metasound::TriggerSequenceVertexNames::InputResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_a8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  local_1a8[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_70,&Metasound::TriggerSequenceVertexNames::InputLoopName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_170,pFVar3);
  if (0xc < (byte)local_70._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_190);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_120,uVar10);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a0.AllocatorInstance.Data,&local_120,1);
    FLazyName::Resolve(&Metasound::TriggerSequenceVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_150,&local_130);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_140,pwVar8,&local_1a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar9.Data = local_140.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_100,&local_148,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b246e95;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20));
    }
    if (((ulonglong)local_190._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_190._padding_ + (longlong)local_190._padding_._4_4_ * 0x20))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_190._padding_ == local_190._padding_._4_4_) {
      local_190._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_190,
                      (int *)((longlong)&local_190._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20);
    *(undefined ***)(local_190._padding_ + (longlong)(int)local_190._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_190._padding_._0_4_ = (int)local_190._padding_ + 1;
LAB_14b246e95:
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
    if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (7 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_170,&local_190);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_190._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
      if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// CreateOperator @ 14b268fa0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSequenceOperator<2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSequenceOperator<2> *this_00;
  TTriggerSequenceOperator<2> *pTVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x80);
  pTVar2 = (TTriggerSequenceOperator<2> *)0x0;
  if (this_00 != (TTriggerSequenceOperator<2> *)0x0) {
    pTVar2 = TTriggerSequenceOperator<2>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<bool> *)local_68);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2690d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSequenceOperator<3>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSequenceOperator<3> *this_00;
  TTriggerSequenceOperator<3> *pTVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x80);
  pTVar2 = (TTriggerSequenceOperator<3> *)0x0;
  if (this_00 != (TTriggerSequenceOperator<3> *)0x0) {
    pTVar2 = TTriggerSequenceOperator<3>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<bool> *)local_68);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b269200

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSequenceOperator<4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSequenceOperator<4> *this_00;
  TTriggerSequenceOperator<4> *pTVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x80);
  pTVar2 = (TTriggerSequenceOperator<4> *)0x0;
  if (this_00 != (TTriggerSequenceOperator<4> *)0x0) {
    pTVar2 = TTriggerSequenceOperator<4>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<bool> *)local_68);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b269330

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSequenceOperator<5>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSequenceOperator<5> *this_00;
  TTriggerSequenceOperator<5> *pTVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x80);
  pTVar2 = (TTriggerSequenceOperator<5> *)0x0;
  if (this_00 != (TTriggerSequenceOperator<5> *)0x0) {
    pTVar2 = TTriggerSequenceOperator<5>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<bool> *)local_68);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b269460

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSequenceOperator<6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSequenceOperator<6> *this_00;
  TTriggerSequenceOperator<6> *pTVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x80);
  pTVar2 = (TTriggerSequenceOperator<6> *)0x0;
  if (this_00 != (TTriggerSequenceOperator<6> *)0x0) {
    pTVar2 = TTriggerSequenceOperator<6>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<bool> *)local_68);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b269590

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSequenceOperator<7>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSequenceOperator<7> *this_00;
  TTriggerSequenceOperator<7> *pTVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x80);
  pTVar2 = (TTriggerSequenceOperator<7> *)0x0;
  if (this_00 != (TTriggerSequenceOperator<7> *)0x0) {
    pTVar2 = TTriggerSequenceOperator<7>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<bool> *)local_68);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2696c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSequenceOperator<8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSequenceOperator<8> *this_00;
  TTriggerSequenceOperator<8> *pTVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSequenceVertexNames::InputLoopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x80);
  pTVar2 = (TTriggerSequenceOperator<8> *)0x0;
  if (this_00 != (TTriggerSequenceOperator<8> *)0x0) {
    pTVar2 = TTriggerSequenceOperator<8>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<bool> *)local_68);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b2724c0

void __thiscall Metasound::TTriggerSequenceOperator<2>::Execute(TTriggerSequenceOperator<2> *this)

{
  int iVar1;
  FTrigger *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_3> local_res8;
  
  uVar4 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar4) {
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
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 8));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  iVar1 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->CurrentIndex = 0;
    }
    this->CurrentIndex = 0;
  }
  this_00 = *(FTrigger **)&(this->TriggerInput).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<2>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<2>::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8,
             (<lambda_4>)this);
  return;
}

// Execute @ 14b272580

void __thiscall Metasound::TTriggerSequenceOperator<3>::Execute(TTriggerSequenceOperator<3> *this)

{
  int iVar1;
  FTrigger *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_3> local_res8;
  
  uVar4 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar4) {
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
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 8));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  iVar1 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->CurrentIndex = 0;
    }
    this->CurrentIndex = 0;
  }
  this_00 = *(FTrigger **)&(this->TriggerInput).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<3>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<3>::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8,
             (<lambda_4>)this);
  return;
}

// Execute @ 14b272640

void __thiscall Metasound::TTriggerSequenceOperator<4>::Execute(TTriggerSequenceOperator<4> *this)

{
  int iVar1;
  FTrigger *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_3> local_res8;
  
  uVar4 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar4) {
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
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 8));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  iVar1 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->CurrentIndex = 0;
    }
    this->CurrentIndex = 0;
  }
  this_00 = *(FTrigger **)&(this->TriggerInput).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<4>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<4>::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8,
             (<lambda_4>)this);
  return;
}

// Execute @ 14b272700

void __thiscall Metasound::TTriggerSequenceOperator<5>::Execute(TTriggerSequenceOperator<5> *this)

{
  int iVar1;
  FTrigger *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_3> local_res8;
  
  uVar4 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar4) {
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
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 8));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  iVar1 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->CurrentIndex = 0;
    }
    this->CurrentIndex = 0;
  }
  this_00 = *(FTrigger **)&(this->TriggerInput).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<5>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<5>::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8,
             (<lambda_4>)this);
  return;
}

// Execute @ 14b2727c0

void __thiscall Metasound::TTriggerSequenceOperator<6>::Execute(TTriggerSequenceOperator<6> *this)

{
  int iVar1;
  FTrigger *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_3> local_res8;
  
  uVar4 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar4) {
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
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 8));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  iVar1 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->CurrentIndex = 0;
    }
    this->CurrentIndex = 0;
  }
  this_00 = *(FTrigger **)&(this->TriggerInput).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<6>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<6>::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8,
             (<lambda_4>)this);
  return;
}

// Execute @ 14b272880

void __thiscall Metasound::TTriggerSequenceOperator<7>::Execute(TTriggerSequenceOperator<7> *this)

{
  int iVar1;
  FTrigger *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_3> local_res8;
  
  uVar4 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar4) {
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
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 8));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  iVar1 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->CurrentIndex = 0;
    }
    this->CurrentIndex = 0;
  }
  this_00 = *(FTrigger **)&(this->TriggerInput).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<7>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<7>::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8,
             (<lambda_4>)this);
  return;
}

// Execute @ 14b272940

void __thiscall Metasound::TTriggerSequenceOperator<8>::Execute(TTriggerSequenceOperator<8> *this)

{
  int iVar1;
  FTrigger *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_3> local_res8;
  
  uVar4 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar4) {
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
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 8));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  iVar1 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->CurrentIndex = 0;
    }
    this->CurrentIndex = 0;
  }
  this_00 = *(FTrigger **)&(this->TriggerInput).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<8>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<8>::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8,
             (<lambda_4>)this);
  return;
}

// GetNodeInfo @ 14b281ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSequenceOperator<2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281c30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<3>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSequenceOperator<3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSequenceOperator<4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281d50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<5>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSequenceOperator<5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281de0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSequenceOperator<6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281e70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<7>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSequenceOperator<7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281f00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSequenceOperator<8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b2851e0

FVertexInterface * __cdecl Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSequenceOperator<2>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<2>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b285270

FVertexInterface * __cdecl Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<3>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSequenceOperator<3>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<3>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b285300

FVertexInterface * __cdecl Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSequenceOperator<4>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<4>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b285390

FVertexInterface * __cdecl Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<5>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSequenceOperator<5>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<5>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b285420

FVertexInterface * __cdecl Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSequenceOperator<6>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<6>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b2854b0

FVertexInterface * __cdecl Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<7>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSequenceOperator<7>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<7>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b285540

FVertexInterface * __cdecl Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSequenceOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSequenceOperator<8>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSequenceOperator<8>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b28b260

void __thiscall
Metasound::TTriggerSequenceOperator<2>::Reset
          (TTriggerSequenceOperator<2> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)
                     ((this->TriggerOutputs).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x20 + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  this->CurrentIndex = 0;
  return;
}

// Reset @ 14b28b2e0

void __thiscall
Metasound::TTriggerSequenceOperator<3>::Reset
          (TTriggerSequenceOperator<3> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)
                     ((this->TriggerOutputs).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x20 + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  this->CurrentIndex = 0;
  return;
}

// Reset @ 14b28b360

void __thiscall
Metasound::TTriggerSequenceOperator<4>::Reset
          (TTriggerSequenceOperator<4> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)
                     ((this->TriggerOutputs).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x20 + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  this->CurrentIndex = 0;
  return;
}

// Reset @ 14b28b3e0

void __thiscall
Metasound::TTriggerSequenceOperator<5>::Reset
          (TTriggerSequenceOperator<5> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)
                     ((this->TriggerOutputs).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x20 + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  this->CurrentIndex = 0;
  return;
}

// Reset @ 14b28b460

void __thiscall
Metasound::TTriggerSequenceOperator<6>::Reset
          (TTriggerSequenceOperator<6> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)
                     ((this->TriggerOutputs).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x20 + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  this->CurrentIndex = 0;
  return;
}

// Reset @ 14b28b4e0

void __thiscall
Metasound::TTriggerSequenceOperator<7>::Reset
          (TTriggerSequenceOperator<7> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)
                     ((this->TriggerOutputs).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x20 + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  this->CurrentIndex = 0;
  return;
}

// Reset @ 14b28b560

void __thiscall
Metasound::TTriggerSequenceOperator<8>::Reset
          (TTriggerSequenceOperator<8> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((this->TriggerOutputs).ArrayNum <= (int)uVar3) {
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
    FTrigger::Reset(*(FTrigger **)
                     ((this->TriggerOutputs).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x20 + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  this->CurrentIndex = 0;
  return;
}

