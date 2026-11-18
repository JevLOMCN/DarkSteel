// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 70

// BindInputs @ 14b20a610

void __thiscall
Metasound::TTriggerSelectOperator<8>::BindInputs
          (TTriggerSelectOperator<8> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->IndexInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20a700

void __thiscall
Metasound::TTriggerSelectOperator<8>::BindOutputs
          (TTriggerSelectOperator<8> *this,FOutputVertexInterfaceData *param_1)

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
    FLazyName::Resolve(&TriggerSelectVertexNames::OutputTriggerName);
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

// BindInputs @ 14b20ab20

void __thiscall
Metasound::TTriggerSelectOperator<7>::BindInputs
          (TTriggerSelectOperator<7> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->IndexInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20aca0

void __thiscall
Metasound::TTriggerSelectOperator<7>::BindOutputs
          (TTriggerSelectOperator<7> *this,FOutputVertexInterfaceData *param_1)

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
    FLazyName::Resolve(&TriggerSelectVertexNames::OutputTriggerName);
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

// BindInputs @ 14b20af60

void __thiscall
Metasound::TTriggerSelectOperator<6>::BindInputs
          (TTriggerSelectOperator<6> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->IndexInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20b050

void __thiscall
Metasound::TTriggerSelectOperator<6>::BindOutputs
          (TTriggerSelectOperator<6> *this,FOutputVertexInterfaceData *param_1)

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
    FLazyName::Resolve(&TriggerSelectVertexNames::OutputTriggerName);
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

// BindInputs @ 14b20b4c0

void __thiscall
Metasound::TTriggerSelectOperator<5>::BindInputs
          (TTriggerSelectOperator<5> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->IndexInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20b5d0

void __thiscall
Metasound::TTriggerSelectOperator<5>::BindOutputs
          (TTriggerSelectOperator<5> *this,FOutputVertexInterfaceData *param_1)

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
    FLazyName::Resolve(&TriggerSelectVertexNames::OutputTriggerName);
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

// BindInputs @ 14b20c0f0

void __thiscall
Metasound::TTriggerSelectOperator<4>::BindInputs
          (TTriggerSelectOperator<4> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->IndexInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20c1e0

void __thiscall
Metasound::TTriggerSelectOperator<4>::BindOutputs
          (TTriggerSelectOperator<4> *this,FOutputVertexInterfaceData *param_1)

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
    FLazyName::Resolve(&TriggerSelectVertexNames::OutputTriggerName);
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

// BindInputs @ 14b20c880

void __thiscall
Metasound::TTriggerSelectOperator<3>::BindInputs
          (TTriggerSelectOperator<3> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->IndexInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20c970

void __thiscall
Metasound::TTriggerSelectOperator<3>::BindOutputs
          (TTriggerSelectOperator<3> *this,FOutputVertexInterfaceData *param_1)

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
    FLazyName::Resolve(&TriggerSelectVertexNames::OutputTriggerName);
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

// BindInputs @ 14b20ce10

void __thiscall
Metasound::TTriggerSelectOperator<2>::BindInputs
          (TTriggerSelectOperator<2> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->IndexInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20cf00

void __thiscall
Metasound::TTriggerSelectOperator<2>::BindOutputs
          (TTriggerSelectOperator<2> *this,FOutputVertexInterfaceData *param_1)

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
    FLazyName::Resolve(&TriggerSelectVertexNames::OutputTriggerName);
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

// TTriggerSelectOperator<2> @ 14b22fad0

TTriggerSelectOperator<2> * __thiscall
Metasound::TTriggerSelectOperator<2>::TTriggerSelectOperator<2>
          (TTriggerSelectOperator<2> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,TDataReadReference<int> *param_3)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSelectOperator<2> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSelectOperator__01_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->IndexInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->IndexInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->IndexInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->IndexInput = &___7__TDataReadReference_H_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
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
      pTVar6 = (TTriggerSelectOperator<2> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<2> *)(*pcVar3)();
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

// TTriggerSelectOperator<3> @ 14b22fd40

TTriggerSelectOperator<3> * __thiscall
Metasound::TTriggerSelectOperator<3>::TTriggerSelectOperator<3>
          (TTriggerSelectOperator<3> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,TDataReadReference<int> *param_3)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSelectOperator<3> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSelectOperator__02_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->IndexInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->IndexInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->IndexInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->IndexInput = &___7__TDataReadReference_H_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
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
      pTVar6 = (TTriggerSelectOperator<3> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<3> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<3> *)(*pcVar3)();
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

// TTriggerSelectOperator<4> @ 14b230080

TTriggerSelectOperator<4> * __thiscall
Metasound::TTriggerSelectOperator<4>::TTriggerSelectOperator<4>
          (TTriggerSelectOperator<4> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,TDataReadReference<int> *param_3)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSelectOperator<4> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSelectOperator__03_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->IndexInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->IndexInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->IndexInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->IndexInput = &___7__TDataReadReference_H_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
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
      pTVar6 = (TTriggerSelectOperator<4> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<4> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<4> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<4> *)(*pcVar3)();
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

// TTriggerSelectOperator<5> @ 14b230490

TTriggerSelectOperator<5> * __thiscall
Metasound::TTriggerSelectOperator<5>::TTriggerSelectOperator<5>
          (TTriggerSelectOperator<5> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,TDataReadReference<int> *param_3)

{
  longlong lVar1;
  TDataReference<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTriggerSelectOperator<5> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSelectOperator__04_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->IndexInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->IndexInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->IndexInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->IndexInput = &___7__TDataReadReference_H_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
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
      pTVar6 = (TTriggerSelectOperator<5> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<5> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<5> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<5> *)(*pcVar3)();
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
      pTVar6 = (TTriggerSelectOperator<5> *)(*pcVar3)();
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

// TTriggerSelectOperator<6> @ 14b230980

TTriggerSelectOperator<6> * __thiscall
Metasound::TTriggerSelectOperator<6>::TTriggerSelectOperator<6>
          (TTriggerSelectOperator<6> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,TDataReadReference<int> *param_3)

{
  TDataReference<Metasound::FTrigger> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTriggerSelectOperator<6> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSelectOperator__05_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->IndexInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->IndexInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar7 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->IndexInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  lVar7 = 6;
  *(undefined ***)&this->IndexInput = &___7__TDataReadReference_H_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
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
        pTVar5 = (TTriggerSelectOperator<6> *)(*pcVar2)();
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

// TTriggerSelectOperator<7> @ 14b230b30

TTriggerSelectOperator<7> * __thiscall
Metasound::TTriggerSelectOperator<7>::TTriggerSelectOperator<7>
          (TTriggerSelectOperator<7> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,TDataReadReference<int> *param_3)

{
  TDataReference<Metasound::FTrigger> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTriggerSelectOperator<7> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSelectOperator__06_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->IndexInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->IndexInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar7 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->IndexInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  lVar7 = 7;
  *(undefined ***)&this->IndexInput = &___7__TDataReadReference_H_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
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
        pTVar5 = (TTriggerSelectOperator<7> *)(*pcVar2)();
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

// TTriggerSelectOperator<8> @ 14b230ce0

TTriggerSelectOperator<8> * __thiscall
Metasound::TTriggerSelectOperator<8>::TTriggerSelectOperator<8>
          (TTriggerSelectOperator<8> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,TDataReadReference<int> *param_3)

{
  TDataReference<Metasound::FTrigger> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTriggerSelectOperator<8> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDataReference<Metasound::FTrigger> local_38;
  
  this->_padding_ = (longlong)&___7__TTriggerSelectOperator__07_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->IndexInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->IndexInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar7 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->IndexInput).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  lVar7 = 8;
  *(undefined ***)&this->IndexInput = &___7__TDataReadReference_H_Metasound__6B_;
  (this->TriggerOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerOutputs).ArrayNum = 0;
  (this->TriggerOutputs).ArrayMax = 0;
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
        pTVar5 = (TTriggerSelectOperator<8> *)(*pcVar2)();
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

// operator() @ 14b2403a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSelectOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Select (%d)");
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
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSelectOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSelectOperator<2>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
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

// operator() @ 14b240620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSelectOperator<3>::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Select (%d)");
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
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSelectOperator<3>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSelectOperator<3>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
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

// operator() @ 14b2408a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSelectOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Select (%d)");
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
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSelectOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSelectOperator<4>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
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

// operator() @ 14b240b20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSelectOperator<5>::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Select (%d)");
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
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSelectOperator<5>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSelectOperator<5>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
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

// operator() @ 14b240da0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSelectOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Select (%d)");
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
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSelectOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSelectOperator<6>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
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

// operator() @ 14b241020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSelectOperator<7>::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Select (%d)");
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
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSelectOperator<7>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSelectOperator<7>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
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

// operator() @ 14b2412a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerSelectOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  ::FString::PrintfImpl((FString *)&local_48,L"Trigger Select (%d)");
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
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TTriggerSelectOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TTriggerSelectOperator<8>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
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

// operator() @ 14b243510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSelectOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
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
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  FOutputVertexInterface local_150;
  FInputVertexInterface local_130;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  TOutputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_130);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a0,&Metasound::TriggerSelectVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_a0._48_1_) {
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
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  local_158[0] = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_68,&Metasound::TriggerSelectVertexNames::InputIndexName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_158);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_68._48_1_) {
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
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_150);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_e0,uVar10);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_168.AllocatorInstance.Data,&local_e0,1);
    FLazyName::Resolve(&Metasound::TriggerSelectVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_110,&local_f0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_100,pwVar8,&local_168);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_108,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&local_108,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b2437f5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20));
    }
    if (((ulonglong)local_150._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x20))) {
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
    if ((int)local_150._padding_ == local_150._padding_._4_4_) {
      local_150._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_150,
                      (int *)((longlong)&local_150._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20);
    *(undefined ***)(local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_150._padding_._0_4_ = (int)local_150._padding_ + 1;
LAB_14b2437f5:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (1 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_130,&local_150);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
                 local_150.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_150._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
                 local_130.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_130._padding_,(int)local_130._padding_);
      if ((FInputDataVertex *)local_130._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_130._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b243910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSelectOperator<3>::GetVertexInterface'::__l2::<lambda_1>::operator()
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
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  FOutputVertexInterface local_150;
  FInputVertexInterface local_130;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  TOutputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_130);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a0,&Metasound::TriggerSelectVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_a0._48_1_) {
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
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  local_158[0] = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_68,&Metasound::TriggerSelectVertexNames::InputIndexName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_158);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_68._48_1_) {
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
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_150);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_e0,uVar10);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_168.AllocatorInstance.Data,&local_e0,1);
    FLazyName::Resolve(&Metasound::TriggerSelectVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_110,&local_f0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_100,pwVar8,&local_168);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_108,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&local_108,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b243bf5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20));
    }
    if (((ulonglong)local_150._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x20))) {
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
    if ((int)local_150._padding_ == local_150._padding_._4_4_) {
      local_150._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_150,
                      (int *)((longlong)&local_150._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20);
    *(undefined ***)(local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_150._padding_._0_4_ = (int)local_150._padding_ + 1;
LAB_14b243bf5:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (2 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_130,&local_150);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
                 local_150.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_150._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
                 local_130.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_130._padding_,(int)local_130._padding_);
      if ((FInputDataVertex *)local_130._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_130._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b243d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSelectOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
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
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  FOutputVertexInterface local_150;
  FInputVertexInterface local_130;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  TOutputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_130);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a0,&Metasound::TriggerSelectVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_a0._48_1_) {
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
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  local_158[0] = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_68,&Metasound::TriggerSelectVertexNames::InputIndexName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_158);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_68._48_1_) {
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
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_150);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_e0,uVar10);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_168.AllocatorInstance.Data,&local_e0,1);
    FLazyName::Resolve(&Metasound::TriggerSelectVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_110,&local_f0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_100,pwVar8,&local_168);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_108,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&local_108,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b243ff5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20));
    }
    if (((ulonglong)local_150._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x20))) {
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
    if ((int)local_150._padding_ == local_150._padding_._4_4_) {
      local_150._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_150,
                      (int *)((longlong)&local_150._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20);
    *(undefined ***)(local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_150._padding_._0_4_ = (int)local_150._padding_ + 1;
LAB_14b243ff5:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (3 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_130,&local_150);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
                 local_150.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_150._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
                 local_130.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_130._padding_,(int)local_130._padding_);
      if ((FInputDataVertex *)local_130._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_130._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b244110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSelectOperator<5>::GetVertexInterface'::__l2::<lambda_1>::operator()
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
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  FOutputVertexInterface local_150;
  FInputVertexInterface local_130;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  TOutputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_130);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a0,&Metasound::TriggerSelectVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_a0._48_1_) {
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
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  local_158[0] = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_68,&Metasound::TriggerSelectVertexNames::InputIndexName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_158);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_68._48_1_) {
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
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_150);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_e0,uVar10);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_168.AllocatorInstance.Data,&local_e0,1);
    FLazyName::Resolve(&Metasound::TriggerSelectVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_110,&local_f0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_100,pwVar8,&local_168);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_108,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&local_108,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b2443f5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20));
    }
    if (((ulonglong)local_150._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x20))) {
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
    if ((int)local_150._padding_ == local_150._padding_._4_4_) {
      local_150._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_150,
                      (int *)((longlong)&local_150._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20);
    *(undefined ***)(local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_150._padding_._0_4_ = (int)local_150._padding_ + 1;
LAB_14b2443f5:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (4 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_130,&local_150);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
                 local_150.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_150._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
                 local_130.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_130._padding_,(int)local_130._padding_);
      if ((FInputDataVertex *)local_130._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_130._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b244510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSelectOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
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
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  FOutputVertexInterface local_150;
  FInputVertexInterface local_130;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  TOutputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_130);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a0,&Metasound::TriggerSelectVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_a0._48_1_) {
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
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  local_158[0] = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_68,&Metasound::TriggerSelectVertexNames::InputIndexName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_158);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_68._48_1_) {
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
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_150);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_e0,uVar10);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_168.AllocatorInstance.Data,&local_e0,1);
    FLazyName::Resolve(&Metasound::TriggerSelectVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_110,&local_f0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_100,pwVar8,&local_168);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_108,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&local_108,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b2447f5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20));
    }
    if (((ulonglong)local_150._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x20))) {
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
    if ((int)local_150._padding_ == local_150._padding_._4_4_) {
      local_150._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_150,
                      (int *)((longlong)&local_150._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20);
    *(undefined ***)(local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_150._padding_._0_4_ = (int)local_150._padding_ + 1;
LAB_14b2447f5:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (5 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_130,&local_150);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
                 local_150.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_150._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
                 local_130.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_130._padding_,(int)local_130._padding_);
      if ((FInputDataVertex *)local_130._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_130._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b244910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSelectOperator<7>::GetVertexInterface'::__l2::<lambda_1>::operator()
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
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  FOutputVertexInterface local_150;
  FInputVertexInterface local_130;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  TOutputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_130);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a0,&Metasound::TriggerSelectVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_a0._48_1_) {
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
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  local_158[0] = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_68,&Metasound::TriggerSelectVertexNames::InputIndexName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_158);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_68._48_1_) {
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
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_150);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_e0,uVar10);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_168.AllocatorInstance.Data,&local_e0,1);
    FLazyName::Resolve(&Metasound::TriggerSelectVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_110,&local_f0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_100,pwVar8,&local_168);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_108,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&local_108,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b244bf5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20));
    }
    if (((ulonglong)local_150._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x20))) {
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
    if ((int)local_150._padding_ == local_150._padding_._4_4_) {
      local_150._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_150,
                      (int *)((longlong)&local_150._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20);
    *(undefined ***)(local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_150._padding_._0_4_ = (int)local_150._padding_ + 1;
LAB_14b244bf5:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (6 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_130,&local_150);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
                 local_150.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_150._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
                 local_130.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_130._padding_,(int)local_130._padding_);
      if ((FInputDataVertex *)local_130._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_130._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b244d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerSelectOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
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
  undefined1 auStackY_1b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  FOutputVertexInterface local_150;
  FInputVertexInterface local_130;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  TOutputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_130);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_a0,&Metasound::TriggerSelectVertexNames::InputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_a0._48_1_) {
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
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  local_158[0] = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_68,&Metasound::TriggerSelectVertexNames::InputIndexName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_158);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_130,pFVar3);
  if (0xc < (byte)local_68._48_1_) {
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
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_150);
  uVar10 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_e0,uVar10);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_168.AllocatorInstance.Data,&local_e0,1);
    FLazyName::Resolve(&Metasound::TriggerSelectVertexNames::OutputTriggerName);
    pFVar5 = ::FName::ToString(&local_110,&local_f0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_100,pwVar8,&local_168);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar9.Data = local_100.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_108,(wchar_t *)FVar9.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
             TOutputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&local_108,&Metasound::FDataVertexMetadata::EmptyBasic);
    if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
        (TOutputDataVertex<Metasound::FTrigger> *)
        (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b244ff5;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FTrigger> *)
                         (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20));
    }
    if (((ulonglong)local_150._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FTrigger> *)
                 (local_150._padding_ + (longlong)local_150._padding_._4_4_ * 0x20))) {
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
    if ((int)local_150._padding_ == local_150._padding_._4_4_) {
      local_150._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_150,
                      (int *)((longlong)&local_150._padding_ + 4));
    }
    pTVar7 = (TOutputDataVertex<Metasound::FTrigger> *)
             (local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20);
    *(undefined ***)(local_150._padding_ + (longlong)(int)local_150._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)pTVar7 = &___7FOutputDataVertex_Metasound__6B_;
    local_150._padding_._0_4_ = (int)local_150._padding_ + 1;
LAB_14b244ff5:
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar10 = uVar10 + 1;
    if (7 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_130,&local_150);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
                 local_150.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FTrigger> *)local_150._padding_ !=
          (TOutputDataVertex<Metasound::FTrigger> *)0x0) {
        FMemory::Free((void *)local_150._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
                 local_130.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_130._padding_,(int)local_130._padding_);
      if ((FInputDataVertex *)local_130._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_130._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// CreateOperator @ 14b268980

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSelectOperator<2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSelectOperator<2> *this_00;
  TTriggerSelectOperator<2> *pTVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x58);
  pTVar2 = (TTriggerSelectOperator<2> *)0x0;
  if (this_00 != (TTriggerSelectOperator<2> *)0x0) {
    pTVar2 = TTriggerSelectOperator<2>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<int> *)local_48);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b268a60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSelectOperator<3>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSelectOperator<3> *this_00;
  TTriggerSelectOperator<3> *pTVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x58);
  pTVar2 = (TTriggerSelectOperator<3> *)0x0;
  if (this_00 != (TTriggerSelectOperator<3> *)0x0) {
    pTVar2 = TTriggerSelectOperator<3>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<int> *)local_48);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b268b40

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSelectOperator<4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSelectOperator<4> *this_00;
  TTriggerSelectOperator<4> *pTVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x58);
  pTVar2 = (TTriggerSelectOperator<4> *)0x0;
  if (this_00 != (TTriggerSelectOperator<4> *)0x0) {
    pTVar2 = TTriggerSelectOperator<4>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<int> *)local_48);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b268c20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSelectOperator<5>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSelectOperator<5> *this_00;
  TTriggerSelectOperator<5> *pTVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x58);
  pTVar2 = (TTriggerSelectOperator<5> *)0x0;
  if (this_00 != (TTriggerSelectOperator<5> *)0x0) {
    pTVar2 = TTriggerSelectOperator<5>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<int> *)local_48);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b268d00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSelectOperator<6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSelectOperator<6> *this_00;
  TTriggerSelectOperator<6> *pTVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x58);
  pTVar2 = (TTriggerSelectOperator<6> *)0x0;
  if (this_00 != (TTriggerSelectOperator<6> *)0x0) {
    pTVar2 = TTriggerSelectOperator<6>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<int> *)local_48);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b268de0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSelectOperator<7>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSelectOperator<7> *this_00;
  TTriggerSelectOperator<7> *pTVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x58);
  pTVar2 = (TTriggerSelectOperator<7> *)0x0;
  if (this_00 != (TTriggerSelectOperator<7> *)0x0) {
    pTVar2 = TTriggerSelectOperator<7>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<int> *)local_48);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b268ec0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerSelectOperator<8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TTriggerSelectOperator<8> *this_00;
  TTriggerSelectOperator<8> *pTVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerSelectVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x58);
  pTVar2 = (TTriggerSelectOperator<8> *)0x0;
  if (this_00 != (TTriggerSelectOperator<8> *)0x0) {
    pTVar2 = TTriggerSelectOperator<8>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<int> *)local_48);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b271880

void __thiscall Metasound::TTriggerSelectOperator<2>::Execute(TTriggerSelectOperator<2> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar9 = (int)uVar10;
    if (((this->TriggerOutputs).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 8));
    uVar10 = (ulonglong)(iVar9 + 1U);
  } while (iVar9 + 1U < 2);
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar9 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar9) {
    lVar5 = *plVar4;
    puVar1 = &(this->IndexInput).field_0x8;
    lVar2 = (longlong)iVar9 + -1;
    if (0 < lVar2) {
      do {
        iVar9 = *(int *)(lVar5 + uVar11 * 4);
        uVar3 = **(uint **)puVar1;
        if (uVar3 < 2) {
          uVar8 = 0;
          if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FTrigger::TriggerFrame
                    (*(FTrigger **)
                      ((this->TriggerOutputs).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x20 + 8),iVar9);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar2);
    }
    iVar9 = *(int *)(lVar5 + lVar2 * 4);
    uVar3 = **(uint **)puVar1;
    if (uVar3 < 2) {
      uVar8 = 0;
      if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)
                  ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8),
                 iVar9);
    }
  }
  return;
}

// Execute @ 14b271a40

void __thiscall Metasound::TTriggerSelectOperator<3>::Execute(TTriggerSelectOperator<3> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar9 = (int)uVar10;
    if (((this->TriggerOutputs).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 8));
    uVar10 = (ulonglong)(iVar9 + 1U);
  } while (iVar9 + 1U < 3);
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar9 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar9) {
    lVar5 = *plVar4;
    puVar1 = &(this->IndexInput).field_0x8;
    lVar2 = (longlong)iVar9 + -1;
    if (0 < lVar2) {
      do {
        iVar9 = *(int *)(lVar5 + uVar11 * 4);
        uVar3 = **(uint **)puVar1;
        if (uVar3 < 3) {
          uVar8 = 0;
          if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FTrigger::TriggerFrame
                    (*(FTrigger **)
                      ((this->TriggerOutputs).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x20 + 8),iVar9);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar2);
    }
    iVar9 = *(int *)(lVar5 + lVar2 * 4);
    uVar3 = **(uint **)puVar1;
    if (uVar3 < 3) {
      uVar8 = 0;
      if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)
                  ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8),
                 iVar9);
    }
  }
  return;
}

// Execute @ 14b271c00

void __thiscall Metasound::TTriggerSelectOperator<4>::Execute(TTriggerSelectOperator<4> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar9 = (int)uVar10;
    if (((this->TriggerOutputs).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 8));
    uVar10 = (ulonglong)(iVar9 + 1U);
  } while (iVar9 + 1U < 4);
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar9 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar9) {
    lVar5 = *plVar4;
    puVar1 = &(this->IndexInput).field_0x8;
    lVar2 = (longlong)iVar9 + -1;
    if (0 < lVar2) {
      do {
        iVar9 = *(int *)(lVar5 + uVar11 * 4);
        uVar3 = **(uint **)puVar1;
        if (uVar3 < 4) {
          uVar8 = 0;
          if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FTrigger::TriggerFrame
                    (*(FTrigger **)
                      ((this->TriggerOutputs).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x20 + 8),iVar9);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar2);
    }
    iVar9 = *(int *)(lVar5 + lVar2 * 4);
    uVar3 = **(uint **)puVar1;
    if (uVar3 < 4) {
      uVar8 = 0;
      if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)
                  ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8),
                 iVar9);
    }
  }
  return;
}

// Execute @ 14b271dc0

void __thiscall Metasound::TTriggerSelectOperator<5>::Execute(TTriggerSelectOperator<5> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar9 = (int)uVar10;
    if (((this->TriggerOutputs).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 8));
    uVar10 = (ulonglong)(iVar9 + 1U);
  } while (iVar9 + 1U < 5);
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar9 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar9) {
    lVar5 = *plVar4;
    puVar1 = &(this->IndexInput).field_0x8;
    lVar2 = (longlong)iVar9 + -1;
    if (0 < lVar2) {
      do {
        iVar9 = *(int *)(lVar5 + uVar11 * 4);
        uVar3 = **(uint **)puVar1;
        if (uVar3 < 5) {
          uVar8 = 0;
          if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FTrigger::TriggerFrame
                    (*(FTrigger **)
                      ((this->TriggerOutputs).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x20 + 8),iVar9);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar2);
    }
    iVar9 = *(int *)(lVar5 + lVar2 * 4);
    uVar3 = **(uint **)puVar1;
    if (uVar3 < 5) {
      uVar8 = 0;
      if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)
                  ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8),
                 iVar9);
    }
  }
  return;
}

// Execute @ 14b271f80

void __thiscall Metasound::TTriggerSelectOperator<6>::Execute(TTriggerSelectOperator<6> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar9 = (int)uVar10;
    if (((this->TriggerOutputs).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 8));
    uVar10 = (ulonglong)(iVar9 + 1U);
  } while (iVar9 + 1U < 6);
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar9 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar9) {
    lVar5 = *plVar4;
    puVar1 = &(this->IndexInput).field_0x8;
    lVar2 = (longlong)iVar9 + -1;
    if (0 < lVar2) {
      do {
        iVar9 = *(int *)(lVar5 + uVar11 * 4);
        uVar3 = **(uint **)puVar1;
        if (uVar3 < 6) {
          uVar8 = 0;
          if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FTrigger::TriggerFrame
                    (*(FTrigger **)
                      ((this->TriggerOutputs).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x20 + 8),iVar9);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar2);
    }
    iVar9 = *(int *)(lVar5 + lVar2 * 4);
    uVar3 = **(uint **)puVar1;
    if (uVar3 < 6) {
      uVar8 = 0;
      if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)
                  ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8),
                 iVar9);
    }
  }
  return;
}

// Execute @ 14b272140

void __thiscall Metasound::TTriggerSelectOperator<7>::Execute(TTriggerSelectOperator<7> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar9 = (int)uVar10;
    if (((this->TriggerOutputs).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 8));
    uVar10 = (ulonglong)(iVar9 + 1U);
  } while (iVar9 + 1U < 7);
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar9 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar9) {
    lVar5 = *plVar4;
    puVar1 = &(this->IndexInput).field_0x8;
    lVar2 = (longlong)iVar9 + -1;
    if (0 < lVar2) {
      do {
        iVar9 = *(int *)(lVar5 + uVar11 * 4);
        uVar3 = **(uint **)puVar1;
        if (uVar3 < 7) {
          uVar8 = 0;
          if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FTrigger::TriggerFrame
                    (*(FTrigger **)
                      ((this->TriggerOutputs).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x20 + 8),iVar9);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar2);
    }
    iVar9 = *(int *)(lVar5 + lVar2 * 4);
    uVar3 = **(uint **)puVar1;
    if (uVar3 < 7) {
      uVar8 = 0;
      if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)
                  ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8),
                 iVar9);
    }
  }
  return;
}

// Execute @ 14b272300

void __thiscall Metasound::TTriggerSelectOperator<8>::Execute(TTriggerSelectOperator<8> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    iVar9 = (int)uVar10;
    if (((this->TriggerOutputs).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FTrigger::AdvanceBlock
              (*(FTrigger **)
                ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 8));
    uVar10 = (ulonglong)(iVar9 + 1U);
  } while (iVar9 + 1U < 8);
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar9 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar9) {
    lVar5 = *plVar4;
    puVar1 = &(this->IndexInput).field_0x8;
    lVar2 = (longlong)iVar9 + -1;
    if (0 < lVar2) {
      do {
        iVar9 = *(int *)(lVar5 + uVar11 * 4);
        uVar3 = **(uint **)puVar1;
        if (uVar3 < 8) {
          uVar8 = 0;
          if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FTrigger::TriggerFrame
                    (*(FTrigger **)
                      ((this->TriggerOutputs).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x20 + 8),iVar9);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar2);
    }
    iVar9 = *(int *)(lVar5 + lVar2 * 4);
    uVar3 = **(uint **)puVar1;
    if (uVar3 < 8) {
      uVar8 = 0;
      if ((int)uVar3 < (this->TriggerOutputs).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)
                  ((this->TriggerOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8),
                 iVar9);
    }
  }
  return;
}

// GetNodeInfo @ 14b2817b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSelectOperator<2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281840

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<3>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSelectOperator<3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b2818d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSelectOperator<4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281960

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<5>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSelectOperator<5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b2819f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSelectOperator<6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<7>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSelectOperator<7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b281b10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerSelectOperator<8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b284df0

FVertexInterface * __cdecl Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSelectOperator<2>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<2>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b284e80

FVertexInterface * __cdecl Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<3>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSelectOperator<3>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<3>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b284f10

FVertexInterface * __cdecl Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSelectOperator<4>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<4>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b284fa0

FVertexInterface * __cdecl Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<5>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSelectOperator<5>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<5>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b285030

FVertexInterface * __cdecl Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSelectOperator<6>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<6>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b2850c0

FVertexInterface * __cdecl Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<7>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSelectOperator<7>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<7>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b285150

FVertexInterface * __cdecl Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerSelectOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(`Metasound::TTriggerSelectOperator<8>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
              ::__l2::Interface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerSelectOperator<8>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b28aee0

void __thiscall
Metasound::TTriggerSelectOperator<2>::Reset(TTriggerSelectOperator<2> *this,FResetParams *param_1)

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
  return;
}

// Reset @ 14b28af60

void __thiscall
Metasound::TTriggerSelectOperator<3>::Reset(TTriggerSelectOperator<3> *this,FResetParams *param_1)

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
  return;
}

// Reset @ 14b28afe0

void __thiscall
Metasound::TTriggerSelectOperator<4>::Reset(TTriggerSelectOperator<4> *this,FResetParams *param_1)

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
  return;
}

// Reset @ 14b28b060

void __thiscall
Metasound::TTriggerSelectOperator<5>::Reset(TTriggerSelectOperator<5> *this,FResetParams *param_1)

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
  return;
}

// Reset @ 14b28b0e0

void __thiscall
Metasound::TTriggerSelectOperator<6>::Reset(TTriggerSelectOperator<6> *this,FResetParams *param_1)

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
  return;
}

// Reset @ 14b28b160

void __thiscall
Metasound::TTriggerSelectOperator<7>::Reset(TTriggerSelectOperator<7> *this,FResetParams *param_1)

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
  return;
}

// Reset @ 14b28b1e0

void __thiscall
Metasound::TTriggerSelectOperator<8>::Reset(TTriggerSelectOperator<8> *this,FResetParams *param_1)

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
  return;
}

