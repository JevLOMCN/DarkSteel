// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 88

// BindInputs @ 14b292fd0

void __thiscall
Metasound::TWaveWriterOperator<8>::BindInputs
          (TWaveWriterOperator<8> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_f8;
  TDataReadReference<bool> *local_f0;
  TDataReadReference<FString> *local_e8;
  FString local_e0;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  code *local_c0;
  FScriptContainerElement **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  TDataReadReference<FString> *local_68;
  code *local_60;
  TDataReadReference<FString> **local_58;
  code *local_50;
  FName **local_48;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= iVar4) {
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
    pFVar5 = (this->AudioInputs).AllocatorInstance.Data + lVar6;
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar3.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_b8 = &local_f8;
    local_d0 = &local_res8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a8 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_f8 = pFVar5;
    local_c8 = pFVar5;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_c0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 0x20;
  } while (iVar4 < 8);
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_f0 = &this->Enabled;
  local_88 = &local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_f0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_e8 = &this->FileNamePrefix;
  local_58 = &local_e8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_68 = local_e8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14b2931c0

void __thiscall
Metasound::TWaveWriterOperator<8>::BindOutputs
          (TWaveWriterOperator<8> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b293300

void __thiscall
Metasound::TWaveWriterOperator<7>::BindInputs
          (TWaveWriterOperator<7> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_f8;
  TDataReadReference<bool> *local_f0;
  TDataReadReference<FString> *local_e8;
  FString local_e0;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  code *local_c0;
  FScriptContainerElement **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  TDataReadReference<FString> *local_68;
  code *local_60;
  TDataReadReference<FString> **local_58;
  code *local_50;
  FName **local_48;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= iVar4) {
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
    pFVar5 = (this->AudioInputs).AllocatorInstance.Data + lVar6;
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar3.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_b8 = &local_f8;
    local_d0 = &local_res8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a8 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_f8 = pFVar5;
    local_c8 = pFVar5;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_c0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 0x20;
  } while (iVar4 < 7);
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_f0 = &this->Enabled;
  local_88 = &local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_f0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_e8 = &this->FileNamePrefix;
  local_58 = &local_e8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_68 = local_e8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14b2934f0

void __thiscall
Metasound::TWaveWriterOperator<7>::BindOutputs
          (TWaveWriterOperator<7> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b293630

void __thiscall
Metasound::TWaveWriterOperator<6>::BindInputs
          (TWaveWriterOperator<6> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_f8;
  TDataReadReference<bool> *local_f0;
  TDataReadReference<FString> *local_e8;
  FString local_e0;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  code *local_c0;
  FScriptContainerElement **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  TDataReadReference<FString> *local_68;
  code *local_60;
  TDataReadReference<FString> **local_58;
  code *local_50;
  FName **local_48;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= iVar4) {
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
    pFVar5 = (this->AudioInputs).AllocatorInstance.Data + lVar6;
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar3.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_b8 = &local_f8;
    local_d0 = &local_res8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a8 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_f8 = pFVar5;
    local_c8 = pFVar5;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_c0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 0x20;
  } while (iVar4 < 6);
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_f0 = &this->Enabled;
  local_88 = &local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_f0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_e8 = &this->FileNamePrefix;
  local_58 = &local_e8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_68 = local_e8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14b293820

void __thiscall
Metasound::TWaveWriterOperator<6>::BindOutputs
          (TWaveWriterOperator<6> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b293960

void __thiscall
Metasound::TWaveWriterOperator<5>::BindInputs
          (TWaveWriterOperator<5> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_f8;
  TDataReadReference<bool> *local_f0;
  TDataReadReference<FString> *local_e8;
  FString local_e0;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  code *local_c0;
  FScriptContainerElement **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  TDataReadReference<FString> *local_68;
  code *local_60;
  TDataReadReference<FString> **local_58;
  code *local_50;
  FName **local_48;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= iVar4) {
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
    pFVar5 = (this->AudioInputs).AllocatorInstance.Data + lVar6;
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar3.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_b8 = &local_f8;
    local_d0 = &local_res8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a8 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_f8 = pFVar5;
    local_c8 = pFVar5;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_c0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 0x20;
  } while (iVar4 < 5);
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_f0 = &this->Enabled;
  local_88 = &local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_f0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_e8 = &this->FileNamePrefix;
  local_58 = &local_e8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_68 = local_e8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14b293b50

void __thiscall
Metasound::TWaveWriterOperator<5>::BindOutputs
          (TWaveWriterOperator<5> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b293c90

void __thiscall
Metasound::TWaveWriterOperator<4>::BindInputs
          (TWaveWriterOperator<4> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_f8;
  TDataReadReference<bool> *local_f0;
  TDataReadReference<FString> *local_e8;
  FString local_e0;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  code *local_c0;
  FScriptContainerElement **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  TDataReadReference<FString> *local_68;
  code *local_60;
  TDataReadReference<FString> **local_58;
  code *local_50;
  FName **local_48;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= iVar4) {
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
    pFVar5 = (this->AudioInputs).AllocatorInstance.Data + lVar6;
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar3.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_b8 = &local_f8;
    local_d0 = &local_res8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a8 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_f8 = pFVar5;
    local_c8 = pFVar5;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_c0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 0x20;
  } while (iVar4 < 4);
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_f0 = &this->Enabled;
  local_88 = &local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_f0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_e8 = &this->FileNamePrefix;
  local_58 = &local_e8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_68 = local_e8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14b293e80

void __thiscall
Metasound::TWaveWriterOperator<4>::BindOutputs
          (TWaveWriterOperator<4> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b293fc0

void __thiscall
Metasound::TWaveWriterOperator<3>::BindInputs
          (TWaveWriterOperator<3> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_f8;
  TDataReadReference<bool> *local_f0;
  TDataReadReference<FString> *local_e8;
  FString local_e0;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  code *local_c0;
  FScriptContainerElement **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  TDataReadReference<FString> *local_68;
  code *local_60;
  TDataReadReference<FString> **local_58;
  code *local_50;
  FName **local_48;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= iVar4) {
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
    pFVar5 = (this->AudioInputs).AllocatorInstance.Data + lVar6;
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar3.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_b8 = &local_f8;
    local_d0 = &local_res8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a8 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_f8 = pFVar5;
    local_c8 = pFVar5;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_c0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 0x20;
  } while (iVar4 < 3);
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_f0 = &this->Enabled;
  local_88 = &local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_f0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_e8 = &this->FileNamePrefix;
  local_58 = &local_e8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_68 = local_e8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14b2941b0

void __thiscall
Metasound::TWaveWriterOperator<3>::BindOutputs
          (TWaveWriterOperator<3> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2942f0

void __thiscall
Metasound::TWaveWriterOperator<2>::BindInputs
          (TWaveWriterOperator<2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_f8;
  TDataReadReference<bool> *local_f0;
  TDataReadReference<FString> *local_e8;
  FString local_e0;
  FName *local_d0;
  FScriptContainerElement *local_c8;
  code *local_c0;
  FScriptContainerElement **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  TDataReadReference<FString> *local_68;
  code *local_60;
  TDataReadReference<FString> **local_58;
  code *local_50;
  FName **local_48;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if (((this->AudioInputs).ArrayNum <= iVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = (this->AudioInputs).AllocatorInstance.Data + lVar6;
    ::FString::PrintfImpl(&local_e0,L"In %d %s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar3.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_b8 = &local_f8;
    local_d0 = &local_res8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a8 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_f8 = pFVar5;
    local_c8 = pFVar5;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_c0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 0x20;
  } while (iVar4 < 2);
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_f0 = &this->Enabled;
  local_88 = &local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_f0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_e8 = &this->FileNamePrefix;
  local_58 = &local_e8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_68 = local_e8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14b2944f0

void __thiscall
Metasound::TWaveWriterOperator<2>::BindOutputs
          (TWaveWriterOperator<2> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b294630

void __thiscall
Metasound::TWaveWriterOperator<1>::BindInputs
          (TWaveWriterOperator<1> *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_d8;
  TDataReadReference<bool> *local_d0;
  TDataReadReference<FString> *local_c8;
  FName *local_c0;
  FScriptContainerElement *local_b8;
  code *local_b0;
  FScriptContainerElement **local_a8;
  code *local_a0;
  FName **local_98;
  FName *local_90;
  TDataReadReference<bool> *local_88;
  code *local_80;
  TDataReadReference<bool> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<FString> *local_58;
  code *local_50;
  TDataReadReference<FString> **local_48;
  code *local_40;
  FName **local_38;
  
  pvVar3 = ThreadLocalStoragePointer;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                      ::__l5::AudioInputPinName,L"In");
      _Init_thread_footer(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  local_res8 = `protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
               ::__l5::AudioInputPinName;
  local_a8 = &local_d8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_c0 = &local_res8;
  local_98 = &local_c0;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_d8 = pFVar1;
  local_b8 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b0)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
  local_d0 = &this->Enabled;
  local_78 = &local_d0;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_68 = &local_90;
  local_90 = &local_res18;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_d0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
  local_c8 = &this->FileNamePrefix;
  local_48 = &local_c8;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res20;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_c8;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b294820

void __thiscall
Metasound::TWaveWriterOperator<1>::BindOutputs
          (TWaveWriterOperator<1> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TWaveWriterOperator<1> @ 14b295930

TWaveWriterOperator<1> * __thiscall
Metasound::TWaveWriterOperator<1>::TWaveWriterOperator<1>
          (TWaveWriterOperator<1> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TWaveWriterOperator<1> *pTVar7;
  
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__00_Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputBufferPtrs).ArrayNum = 0;
  (this->AudioInputBufferPtrs).ArrayMax = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar1 = (this->AudioInputs).ArrayNum;
  iVar2 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar2;
  if (iVar1 != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioInputs.Num() == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x57,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TWaveWriterOperator<1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  return this;
}

// TWaveWriterOperator<2> @ 14b295a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWaveWriterOperator<2> * __thiscall
Metasound::TWaveWriterOperator<2>::TWaveWriterOperator<2>
          (TWaveWriterOperator<2> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TWaveWriterOperator<2> *pTVar10;
  FScriptContainerElement *_Dst;
  int iVar11;
  
  piVar1 = &(this->AudioInputBufferPtrs).ArrayNum;
  piVar2 = &(this->AudioInputBufferPtrs).ArrayMax;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__01_Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar11 = (this->AudioInputs).ArrayNum;
  iVar9 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar9;
  if (iVar11 != 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioInputs.Num() == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<2> *)(*pcVar7)();
      return pTVar10;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterleaveBuffer,param_1->NumFramesPerBlock * 2,Default);
  iVar11 = *piVar1;
  if (iVar11 < 2) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,2 - iVar11,&(this->AudioInputBufferPtrs).AllocatorInstance,piVar1,piVar2)
    ;
    memset((this->AudioInputBufferPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(2 - iVar11) << 3);
  }
  else if (2 < iVar11) {
    iVar11 = iVar11 + -2;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TWaveWriterOperator<2> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if (iVar11 == 0) goto LAB_14b295c77;
    _Dst = (this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x10;
    iVar9 = (*piVar1 - iVar11) + -2;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar11 * 8,(longlong)iVar9 << 3);
    }
    *piVar1 = *piVar1 - iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AudioInputBufferPtrs).AllocatorInstance,*piVar1,piVar2);
  }
LAB_14b295c77:
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<2> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<2> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)(this->AudioInputBufferPtrs).AllocatorInstance.Data = uVar6;
  if ((this->AudioInputs).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<2> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<2> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 8) = uVar6;
  return this;
}

// TWaveWriterOperator<3> @ 14b295e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWaveWriterOperator<3> * __thiscall
Metasound::TWaveWriterOperator<3>::TWaveWriterOperator<3>
          (TWaveWriterOperator<3> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TWaveWriterOperator<3> *pTVar10;
  FScriptContainerElement *_Dst;
  int iVar11;
  
  piVar1 = &(this->AudioInputBufferPtrs).ArrayNum;
  piVar2 = &(this->AudioInputBufferPtrs).ArrayMax;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__02_Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar11 = (this->AudioInputs).ArrayNum;
  iVar9 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar9;
  if (iVar11 != 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioInputs.Num() == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterleaveBuffer,param_1->NumFramesPerBlock * 3,Default);
  iVar11 = *piVar1;
  if (iVar11 < 3) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,3 - iVar11,&(this->AudioInputBufferPtrs).AllocatorInstance,piVar1,piVar2)
    ;
    memset((this->AudioInputBufferPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(3 - iVar11) << 3);
  }
  else if (3 < iVar11) {
    iVar11 = iVar11 + -3;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if (iVar11 == 0) goto LAB_14b296028;
    _Dst = (this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x18;
    iVar9 = (*piVar1 - iVar11) + -3;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar11 * 8,(longlong)iVar9 << 3);
    }
    *piVar1 = *piVar1 - iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AudioInputBufferPtrs).AllocatorInstance,*piVar1,piVar2);
  }
LAB_14b296028:
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)(this->AudioInputBufferPtrs).AllocatorInstance.Data = uVar6;
  if ((this->AudioInputs).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 8) = uVar6;
  if ((this->AudioInputs).ArrayNum < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x10) = uVar6;
  return this;
}

// TWaveWriterOperator<4> @ 14b296260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWaveWriterOperator<4> * __thiscall
Metasound::TWaveWriterOperator<4>::TWaveWriterOperator<4>
          (TWaveWriterOperator<4> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TWaveWriterOperator<4> *pTVar10;
  FScriptContainerElement *_Dst;
  int iVar11;
  
  piVar1 = &(this->AudioInputBufferPtrs).ArrayNum;
  piVar2 = &(this->AudioInputBufferPtrs).ArrayMax;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__03_Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar11 = (this->AudioInputs).ArrayNum;
  iVar9 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar9;
  if (iVar11 != 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioInputs.Num() == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterleaveBuffer,param_1->NumFramesPerBlock << 2,Default);
  iVar11 = *piVar1;
  if (iVar11 < 4) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,4 - iVar11,&(this->AudioInputBufferPtrs).AllocatorInstance,piVar1,piVar2)
    ;
    memset((this->AudioInputBufferPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(4 - iVar11) << 3);
  }
  else if (4 < iVar11) {
    iVar11 = iVar11 + -4;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if (iVar11 == 0) goto LAB_14b296488;
    _Dst = (this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x20;
    iVar9 = (*piVar1 - iVar11) + -4;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar11 * 8,(longlong)iVar9 << 3);
    }
    *piVar1 = *piVar1 - iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AudioInputBufferPtrs).AllocatorInstance,*piVar1,piVar2);
  }
LAB_14b296488:
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)(this->AudioInputBufferPtrs).AllocatorInstance.Data = uVar6;
  if ((this->AudioInputs).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 8) = uVar6;
  if ((this->AudioInputs).ArrayNum < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x10) = uVar6;
  if ((this->AudioInputs).ArrayNum < 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x68);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<4> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x18) = uVar6;
  return this;
}

// TWaveWriterOperator<5> @ 14b296770

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWaveWriterOperator<5> * __thiscall
Metasound::TWaveWriterOperator<5>::TWaveWriterOperator<5>
          (TWaveWriterOperator<5> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TWaveWriterOperator<5> *pTVar10;
  FScriptContainerElement *_Dst;
  int iVar11;
  
  piVar1 = &(this->AudioInputBufferPtrs).ArrayNum;
  piVar2 = &(this->AudioInputBufferPtrs).ArrayMax;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__04_Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar11 = (this->AudioInputs).ArrayNum;
  iVar9 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar9;
  if (iVar11 != 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioInputs.Num() == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterleaveBuffer,param_1->NumFramesPerBlock * 5,Default);
  iVar11 = *piVar1;
  if (iVar11 < 5) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,5 - iVar11,&(this->AudioInputBufferPtrs).AllocatorInstance,piVar1,piVar2)
    ;
    memset((this->AudioInputBufferPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(5 - iVar11) << 3);
  }
  else if (5 < iVar11) {
    iVar11 = iVar11 + -5;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if (iVar11 == 0) goto LAB_14b296998;
    _Dst = (this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x28;
    iVar9 = (*piVar1 - iVar11) + -5;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar11 * 8,(longlong)iVar9 << 3);
    }
    *piVar1 = *piVar1 - iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AudioInputBufferPtrs).AllocatorInstance,*piVar1,piVar2);
  }
LAB_14b296998:
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)(this->AudioInputBufferPtrs).AllocatorInstance.Data = uVar6;
  if ((this->AudioInputs).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 8) = uVar6;
  if ((this->AudioInputs).ArrayNum < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x10) = uVar6;
  if ((this->AudioInputs).ArrayNum < 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x68);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x18) = uVar6;
  if ((this->AudioInputs).ArrayNum < 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x88);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<5> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x20) = uVar6;
  return this;
}

// TWaveWriterOperator<6> @ 14b296d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWaveWriterOperator<6> * __thiscall
Metasound::TWaveWriterOperator<6>::TWaveWriterOperator<6>
          (TWaveWriterOperator<6> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TWaveWriterOperator<6> *pTVar10;
  FScriptContainerElement *_Dst;
  int iVar11;
  
  piVar1 = &(this->AudioInputBufferPtrs).ArrayNum;
  piVar2 = &(this->AudioInputBufferPtrs).ArrayMax;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__05_Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar11 = (this->AudioInputs).ArrayNum;
  iVar9 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar9;
  if (iVar11 != 6) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioInputs.Num() == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterleaveBuffer,param_1->NumFramesPerBlock * 6,Default);
  iVar11 = *piVar1;
  if (iVar11 < 6) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,6 - iVar11,&(this->AudioInputBufferPtrs).AllocatorInstance,piVar1,piVar2)
    ;
    memset((this->AudioInputBufferPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(6 - iVar11) << 3);
  }
  else if (6 < iVar11) {
    iVar11 = iVar11 + -6;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if (iVar11 == 0) goto LAB_14b296f5a;
    _Dst = (this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x30;
    iVar9 = (*piVar1 - iVar11) + -6;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar11 * 8,(longlong)iVar9 << 3);
    }
    *piVar1 = *piVar1 - iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AudioInputBufferPtrs).AllocatorInstance,*piVar1,piVar2);
  }
LAB_14b296f5a:
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)(this->AudioInputBufferPtrs).AllocatorInstance.Data = uVar6;
  if ((this->AudioInputs).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 8) = uVar6;
  if ((this->AudioInputs).ArrayNum < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x10) = uVar6;
  if ((this->AudioInputs).ArrayNum < 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x68);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x18) = uVar6;
  if ((this->AudioInputs).ArrayNum < 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x88);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x20) = uVar6;
  if ((this->AudioInputs).ArrayNum < 6) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0xa8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar6 = *puVar5;
  if (*piVar1 < 6) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<6> *)(*pcVar7)();
      return pTVar10;
    }
  }
  *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x28) = uVar6;
  return this;
}

// TWaveWriterOperator<7> @ 14b2973a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWaveWriterOperator<7> * __thiscall
Metasound::TWaveWriterOperator<7>::TWaveWriterOperator<7>
          (TWaveWriterOperator<7> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TWaveWriterOperator<7> *pTVar10;
  FScriptContainerElement *_Dst;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar11 = 0;
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__06_Metasound__6B_;
  piVar1 = &(this->AudioInputBufferPtrs).ArrayNum;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AudioInputBufferPtrs).ArrayMax;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar12 = (this->AudioInputs).ArrayNum;
  iVar9 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar9;
  if ((iVar12 != 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioInputs.Num() == NumInputChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                         ,0x57,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TWaveWriterOperator<7> *)(*pcVar7)();
    return pTVar10;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterleaveBuffer,param_1->NumFramesPerBlock * 7,Default);
  iVar12 = *piVar1;
  uVar13 = uVar11;
  uVar14 = uVar11;
  if (iVar12 < 7) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,7 - iVar12,&(this->AudioInputBufferPtrs).AllocatorInstance,piVar1,piVar2)
    ;
    memset((this->AudioInputBufferPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(7 - iVar12) << 3);
  }
  else if (7 < iVar12) {
    iVar12 = iVar12 + -7;
    if (iVar12 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TWaveWriterOperator<7> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if (iVar12 == 0) goto LAB_14b2975d0;
    _Dst = (this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x38;
    iVar9 = (*piVar1 - iVar12) + -7;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar12 * 8,(longlong)iVar9 << 3);
    }
    *piVar1 = *piVar1 - iVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AudioInputBufferPtrs).AllocatorInstance,*piVar1,piVar2);
  }
LAB_14b2975d0:
  while( true ) {
    iVar12 = (int)uVar11;
    if (((this->AudioInputs).ArrayNum <= iVar12) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<7> *)(*pcVar7)();
      return pTVar10;
    }
    puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + uVar13 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    uVar6 = *puVar5;
    if ((*piVar1 <= iVar12) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    uVar11 = (ulonglong)(iVar12 + 1U);
    *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + uVar14) = uVar6;
    uVar13 = uVar13 + 0x20;
    uVar14 = uVar14 + 8;
    if (6 < (int)(iVar12 + 1U)) {
      return this;
    }
  }
  pcVar7 = (code *)swi(3);
  pTVar10 = (TWaveWriterOperator<7> *)(*pcVar7)();
  return pTVar10;
}

// TWaveWriterOperator<8> @ 14b2976c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWaveWriterOperator<8> * __thiscall
Metasound::TWaveWriterOperator<8>::TWaveWriterOperator<8>
          (TWaveWriterOperator<8> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TDataReadReference<bool> *param_3,
          TSharedPtr<Metasound::FNumberedFileCache,1> *param_4,TDataReadReference<FString> *param_5)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TWaveWriterOperator<8> *pTVar10;
  FScriptContainerElement *_Dst;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar12 = 0;
  this->_padding_ = (longlong)&___7__TWaveWriterOperator__07_Metasound__6B_;
  piVar1 = &(this->AudioInputBufferPtrs).ArrayNum;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AudioInputBufferPtrs).ArrayMax;
  (this->AudioInputs).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_2->ArrayNum;
  (this->AudioInputs).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->AudioInputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InterleaveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleaveBuffer).ArrayNum = 0;
  (this->InterleaveBuffer).ArrayMax = 0;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar3 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
  (this->NumberedFileCacheSP).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FileNamePrefix).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar3 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->FileNamePrefix).field_0x10 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  *(undefined ***)&this->FileNamePrefix = &___7__TDataReadReference_VFString___Metasound__6B_;
  iVar11 = (this->AudioInputs).ArrayNum;
  iVar9 = param_1->SampleRate;
  this->bIsEnabled = false;
  this->SampleRate = (float)iVar9;
  if ((iVar11 != 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioInputs.Num() == NumInputChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                         ,0x57,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TWaveWriterOperator<8> *)(*pcVar7)();
    return pTVar10;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterleaveBuffer,param_1->NumFramesPerBlock << 3,Default);
  iVar11 = *piVar1;
  uVar13 = uVar12;
  uVar14 = uVar12;
  if (iVar11 < 8) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,8 - iVar11,&(this->AudioInputBufferPtrs).AllocatorInstance,piVar1,piVar2)
    ;
    memset((this->AudioInputBufferPtrs).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(8 - iVar11) << 3);
  }
  else if (8 < iVar11) {
    iVar11 = iVar11 + -8;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TWaveWriterOperator<8> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if (iVar11 == 0) goto LAB_14b2978f0;
    _Dst = (this->AudioInputBufferPtrs).AllocatorInstance.Data + 0x40;
    iVar9 = (*piVar1 - iVar11) + -8;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar11 * 8,(longlong)iVar9 << 3);
    }
    *piVar1 = *piVar1 - iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AudioInputBufferPtrs).AllocatorInstance,*piVar1,piVar2);
  }
LAB_14b2978f0:
  while( true ) {
    iVar11 = (int)uVar12;
    if (((this->AudioInputs).ArrayNum <= iVar11) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TWaveWriterOperator<8> *)(*pcVar7)();
      return pTVar10;
    }
    puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + uVar13 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    uVar6 = *puVar5;
    if ((*piVar1 <= iVar11) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    uVar12 = (ulonglong)(iVar11 + 1U);
    *(undefined8 *)((this->AudioInputBufferPtrs).AllocatorInstance.Data + uVar14) = uVar6;
    uVar13 = uVar13 + 0x20;
    uVar14 = uVar14 + 8;
    if (7 < (int)(iVar11 + 1U)) {
      return this;
    }
  }
  pcVar7 = (code *)swi(3);
  pTVar10 = (TWaveWriterOperator<8> *)(*pcVar7)();
  return pTVar10;
}

// operator() @ 14b297b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<1>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_198 [32];
  bool local_168 [8];
  FInputVertexInterface local_160;
  FName local_140;
  FOutputVertexInterface local_138;
  FDataVertexMetadata local_118;
  FString local_f0;
  FInputVertexInterfaceDeclarationBuilder local_e0;
  TInputDataVertex<FString> local_b8;
  TInputDataVertex<bool> local_80;
  TInputDataVertex<Metasound::FAudioBuffer> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_168[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_80,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_168);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_f0);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_b8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  local_160._padding_ = 0;
  local_160._padding_ = 0;
  local_160.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.SubInterfaces.ArrayNum = 0;
  local_160.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_e0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_160
             ,&local_160.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_e0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_e0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  if (0xc < (byte)local_b8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (0xc < (byte)local_80._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
  FText::FText(&local_118.Description);
  FText::FText(&local_118.DisplayName);
  local_118.bIsAdvancedDisplay = false;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                      ::__l5::AudioInputPinName,L"In");
      _Init_thread_footer(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  local_140 = `protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
              ::__l5::AudioInputPinName;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>(&local_48,&local_140,&local_118);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_160,pFVar3);
  if (0xc < (byte)local_48._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  if (local_118.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_118.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.Description.TextData.Reference + 0x10))();
  }
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_138);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_160,&local_138);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_160.SubInterfaces.AllocatorInstance.Data,
             local_160.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_160.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_160.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_160._padding_,(int)local_160._padding_);
  if ((FInputDataVertex *)local_160._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_160._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b297e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<2>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  bool local_188 [8];
  FInputVertexInterface local_180;
  FName local_160;
  FString local_158;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FString local_100;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TInputDataVertex<FString> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_188);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_100);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_c8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  iVar8 = 0;
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.SubInterfaces.ArrayNum = 0;
  local_180.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_f0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180
             ,&local_180.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  if ((0xc < (byte)local_c8._48_1_) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FVertexInterface *)(*pcVar1)();
    return pFVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if ((0xc < (byte)local_90._48_1_) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FVertexInterface *)(*pcVar1)();
    return pFVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  while( true ) {
    FText::FText(&local_128.Description);
    FText::FText(&local_128.DisplayName);
    local_128.bIsAdvancedDisplay = false;
    ::FString::PrintfImpl(&local_158,L"In %d %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar7.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_58,&local_160,&local_128);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_180,pFVar3);
    uVar9 = (ulonglong)(byte)local_58._48_1_;
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_58.field_0x20);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    iVar8 = iVar8 + 1;
    if (1 < iVar8) {
      Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_148);
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_180,&local_148);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
                 local_148.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
                 local_180.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
      if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_180._padding_);
      }
      return __return_storage_ptr__;
    }
  }
  pcVar1 = (code *)swi(3);
  pFVar6 = (FVertexInterface *)(*pcVar1)();
  return pFVar6;
}

// operator() @ 14b2981c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<3>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  bool local_188 [8];
  FInputVertexInterface local_180;
  FName local_160;
  FString local_158;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FString local_100;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TInputDataVertex<FString> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_188);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_100);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_c8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  iVar8 = 0;
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.SubInterfaces.ArrayNum = 0;
  local_180.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_f0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180
             ,&local_180.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  if (0xc < (byte)local_c8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  do {
    FText::FText(&local_128.Description);
    FText::FText(&local_128.DisplayName);
    local_128.bIsAdvancedDisplay = false;
    ::FString::PrintfImpl(&local_158,L"In %d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar7.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_58,&local_160,&local_128);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_180,pFVar3);
    uVar9 = (ulonglong)(byte)local_58._48_1_;
    if (0xc < (byte)local_58._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FVertexInterface *)(*pcVar1)();
        return pFVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_58.field_0x20);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_148);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_180,&local_148);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
             local_180.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
  if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_180._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b2984d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<4>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  bool local_188 [8];
  FInputVertexInterface local_180;
  FName local_160;
  FString local_158;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FString local_100;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TInputDataVertex<FString> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_188);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_100);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_c8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  iVar8 = 0;
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.SubInterfaces.ArrayNum = 0;
  local_180.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_f0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180
             ,&local_180.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  if (0xc < (byte)local_c8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  do {
    FText::FText(&local_128.Description);
    FText::FText(&local_128.DisplayName);
    local_128.bIsAdvancedDisplay = false;
    ::FString::PrintfImpl(&local_158,L"In %d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar7.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_58,&local_160,&local_128);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_180,pFVar3);
    uVar9 = (ulonglong)(byte)local_58._48_1_;
    if (0xc < (byte)local_58._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FVertexInterface *)(*pcVar1)();
        return pFVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_58.field_0x20);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_148);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_180,&local_148);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
             local_180.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
  if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_180._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b2987e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<5>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  bool local_188 [8];
  FInputVertexInterface local_180;
  FName local_160;
  FString local_158;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FString local_100;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TInputDataVertex<FString> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_188);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_100);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_c8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  iVar8 = 0;
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.SubInterfaces.ArrayNum = 0;
  local_180.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_f0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180
             ,&local_180.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  if (0xc < (byte)local_c8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  do {
    FText::FText(&local_128.Description);
    FText::FText(&local_128.DisplayName);
    local_128.bIsAdvancedDisplay = false;
    ::FString::PrintfImpl(&local_158,L"In %d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar7.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_58,&local_160,&local_128);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_180,pFVar3);
    uVar9 = (ulonglong)(byte)local_58._48_1_;
    if (0xc < (byte)local_58._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FVertexInterface *)(*pcVar1)();
        return pFVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_58.field_0x20);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_148);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_180,&local_148);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
             local_180.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
  if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_180._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b298af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<6>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  bool local_188 [8];
  FInputVertexInterface local_180;
  FName local_160;
  FString local_158;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FString local_100;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TInputDataVertex<FString> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_188);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_100);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_c8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  iVar8 = 0;
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.SubInterfaces.ArrayNum = 0;
  local_180.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_f0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180
             ,&local_180.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  if (0xc < (byte)local_c8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  do {
    FText::FText(&local_128.Description);
    FText::FText(&local_128.DisplayName);
    local_128.bIsAdvancedDisplay = false;
    ::FString::PrintfImpl(&local_158,L"In %d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar7.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_58,&local_160,&local_128);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_180,pFVar3);
    uVar9 = (ulonglong)(byte)local_58._48_1_;
    if (0xc < (byte)local_58._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FVertexInterface *)(*pcVar1)();
        return pFVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_58.field_0x20);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_148);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_180,&local_148);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
             local_180.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
  if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_180._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b298e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<7>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  bool local_188 [8];
  FInputVertexInterface local_180;
  FName local_160;
  FString local_158;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FString local_100;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TInputDataVertex<FString> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_188);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_100);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_c8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  iVar8 = 0;
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.SubInterfaces.ArrayNum = 0;
  local_180.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_f0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180
             ,&local_180.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  if (0xc < (byte)local_c8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  do {
    FText::FText(&local_128.Description);
    FText::FText(&local_128.DisplayName);
    local_128.bIsAdvancedDisplay = false;
    ::FString::PrintfImpl(&local_158,L"In %d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar7.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_58,&local_160,&local_128);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_180,pFVar3);
    uVar9 = (ulonglong)(byte)local_58._48_1_;
    if (0xc < (byte)local_58._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FVertexInterface *)(*pcVar1)();
        return pFVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_58.field_0x20);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 7);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_148);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_180,&local_148);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
             local_180.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
  if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_180._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b299110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TWaveWriterOperator<8>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FString *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  bool local_188 [8];
  FInputVertexInterface local_180;
  FName local_160;
  FString local_158;
  FOutputVertexInterface local_148;
  FDataVertexMetadata local_128;
  FString local_100;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TInputDataVertex<FString> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188[0] = true;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::WaveWriterVertexNames::InEnabledPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_188);
  pFVar4 = Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(&local_100);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
                     (&local_c8,&Metasound::WaveWriterVertexNames::InFilenamePrefixPinName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,pFVar4);
  iVar8 = 0;
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.SubInterfaces.ArrayNum = 0;
  local_180.SubInterfaces.ArrayMax = 0;
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
  FInputVertexInterfaceDeclarationBuilder
            (&local_f0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180
             ,&local_180.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
  Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar3);
  Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  if (0xc < (byte)local_c8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  do {
    FText::FText(&local_128.Description);
    FText::FText(&local_128.DisplayName);
    local_128.bIsAdvancedDisplay = false;
    ::FString::PrintfImpl(&local_158,L"In %d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar7.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_58,&local_160,&local_128);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_180,pFVar3);
    uVar9 = (ulonglong)(byte)local_58._48_1_;
    if (0xc < (byte)local_58._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FVertexInterface *)(*pcVar1)();
        return pFVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_58.field_0x20);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_148);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_180,&local_148);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
             local_180.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
  if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_180._padding_);
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29a360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<1>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29a630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<2>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29a900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<3>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29abd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<4>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29aea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<5>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29b170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<6>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29b440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<7>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b29b710

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWaveWriterOperator<8>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_a8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_a8,1);
  local_e8.TextData.Reference = NodeCategories::Io.TextData.Reference;
  if (NodeCategories::Io.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Io.TextData.Reference + 8))
              (NodeCategories::Io.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Io.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_80,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  FVar1 = local_148.Name;
  local_b8.Flags = param_2->Flags;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName
                     (&local_98,&StandardNodes::Namespace,param_1,&StandardNodes::AudioVariant);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,1,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b29b9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FLiteral *pFVar8;
  code *pcVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<1> *pTVar13;
  TWaveWriterOperator<1> *pTVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_158 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_108;
  FName local_f8;
  undefined1 local_f0 [32];
  FName local_d0;
  FName local_c8;
  FString local_c0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_b0;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pTVar14 = (TWaveWriterOperator<1> *)0x0;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                           ::__l5::_thread_safe_static_guard_0__),
     `protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                    ::__l5::AudioInputPinName,L"In");
    _Init_thread_footer(&`protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  local_f8 = `protected:_static_class_FName_const___cdecl_Metasound::TWaveWriterOperator<1>::GetAudioInputName(int)'
             ::__l5::AudioInputPinName;
  bVar3 = FInputVertexInterfaceData::IsVertexBound(this,&local_f8);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar6 = FInputVertexInterfaceData::Find(this,&local_f8);
  if (pFVar6 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_f8,&local_c0);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_48);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_f0,pFVar2,pFVar8);
    if ((0xc < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar9 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar9)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_48.TypeIndex];
    pTVar15 = &local_48;
  }
  else {
    if ((pFVar6->Data).bIsSet != false) {
      if (((pFVar6->Data).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar9 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar9)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar6->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_f0)
      ;
      goto LAB_14b29bbd1;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_60,&(pFVar6->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs
              ((TDataReadReference<Metasound::FAudioBuffer> *)local_f0,pFVar2,(FLiteral *)&local_60)
    ;
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar9 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar9)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_60.TypeIndex];
    pTVar15 = &local_60;
  }
  (*pcVar9)(pTVar15);
LAB_14b29bbd1:
  if (((local_108.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_f0)
      && ((FScriptContainerElement *)local_f0 <
          local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar9 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar9)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar5 = local_108.ArrayNum;
  if (local_108.ArrayNum == local_108.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_108.AllocatorInstance,&local_108.ArrayMax);
  }
  local_108.ArrayNum = iVar5 + 1;
  pFVar16 = local_108.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar16 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar16 + 8) = local_f0._8_8_;
  *(undefined8 *)(pFVar16 + 0x10) = local_f0._16_8_;
  if ((TReferenceControllerBase<0> *)local_f0._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_f0._16_8_ + 8) = *(int *)(local_f0._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar16 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f0._16_8_);
  if (bVar3) {
    FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
    pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                        (this,(TDataReadReference<FString> *)local_80,&local_d0,pFVar1);
    pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_b0);
    FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
    pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                        (this,(TDataReadReference<bool> *)local_a0,&local_c8,pFVar1);
    pTVar13 = ::operator_new(0x98);
    if (pTVar13 != (TWaveWriterOperator<1> *)0x0) {
      pTVar14 = TWaveWriterOperator<1>(pTVar13,pFVar1,&local_108,pTVar12,pTVar11,pTVar10);
    }
    param_1->Node = (INode *)pTVar14;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_a0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_80._16_8_);
  }
  else {
    pTVar13 = ::operator_new(8);
    if (pTVar13 != (TWaveWriterOperator<1> *)0x0) {
      pTVar13->_padding_ = (longlong)&___7FNoOpOperator_Metasound__6B_;
      pTVar14 = pTVar13;
    }
    param_1->Node = (INode *)pTVar14;
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_108.AllocatorInstance.Data,
             local_108.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_108.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b29be20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<2> *this_00;
  INode *pIVar13;
  int iVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TWaveWriterOperator<2> *pTVar19;
  undefined1 auStackY_188 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_138;
  FName local_128;
  undefined1 local_120 [32];
  FBuildOperatorParams *local_100;
  FOperatorSettings *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  iVar18 = 0;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_100 = param_1;
  iVar6 = iVar18;
  do {
    ::FString::PrintfImpl(&local_e0,L"In %d %s");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar16.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar16.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar5 = FInputVertexInterfaceData::IsVertexBound(this,&local_128);
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    iVar14 = iVar6 + 1;
    if (!bVar5) {
      iVar14 = iVar6;
    }
    pFVar7 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar15 = &local_58;
LAB_14b29c03d:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar15);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
        pTVar15 = &local_70;
        goto LAB_14b29c03d;
      }
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_120
                );
    }
    if (((local_138.AllocatorInstance.Data <=
          (TDataReadReference<Metasound::FAudioBuffer> *)local_120) &&
        ((FScriptContainerElement *)local_120 <
         local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    iVar6 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar6 + 1;
    pFVar17 = local_138.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar17 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar17 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar17 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar17 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    pFVar2 = local_f8;
    pFVar4 = local_100;
    iVar18 = iVar18 + 1;
    iVar6 = iVar14;
    if (1 < iVar18) {
      pTVar19 = (TWaveWriterOperator<2> *)0x0;
      if (iVar14 < 1) {
        pIVar13 = ::operator_new(8);
        if (pIVar13 == (INode *)0x0) {
          pIVar13 = (INode *)0x0;
        }
        else {
          *pIVar13 = (INode)&___7FNoOpOperator_Metasound__6B_;
        }
        pFVar4->Node = pIVar13;
      }
      else {
        FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
        pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                            (this,(TDataReadReference<FString> *)local_90,&local_f0,pFVar2);
        pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_c0);
        FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
        pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                            (this,(TDataReadReference<bool> *)local_b0,&local_e8,pFVar2);
        this_00 = ::operator_new(0x98);
        if (this_00 != (TWaveWriterOperator<2> *)0x0) {
          pTVar19 = TWaveWriterOperator<2>(this_00,pFVar2,&local_138,pTVar12,pTVar11,pTVar10);
        }
        pFVar4->Node = (INode *)pTVar19;
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_b0._16_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_90._16_8_);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data,
                 local_138.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b29c270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<3>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<3> *this_00;
  INode *pIVar13;
  int iVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TWaveWriterOperator<3> *pTVar19;
  undefined1 auStackY_188 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_138;
  FName local_128;
  undefined1 local_120 [32];
  FBuildOperatorParams *local_100;
  FOperatorSettings *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  iVar18 = 0;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_100 = param_1;
  iVar6 = iVar18;
  do {
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar16.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar16.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar5 = FInputVertexInterfaceData::IsVertexBound(this,&local_128);
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    iVar14 = iVar6 + 1;
    if (!bVar5) {
      iVar14 = iVar6;
    }
    pFVar7 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar15 = &local_58;
LAB_14b29c470:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar15);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
        pTVar15 = &local_70;
        goto LAB_14b29c470;
      }
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_120
                );
    }
    if (((local_138.AllocatorInstance.Data <=
          (TDataReadReference<Metasound::FAudioBuffer> *)local_120) &&
        ((FScriptContainerElement *)local_120 <
         local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    iVar6 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar6 + 1;
    pFVar17 = local_138.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar17 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar17 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar17 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar17 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    pFVar2 = local_f8;
    pFVar4 = local_100;
    iVar18 = iVar18 + 1;
    iVar6 = iVar14;
    if (2 < iVar18) {
      pTVar19 = (TWaveWriterOperator<3> *)0x0;
      if (iVar14 < 1) {
        pIVar13 = ::operator_new(8);
        if (pIVar13 == (INode *)0x0) {
          pIVar13 = (INode *)0x0;
        }
        else {
          *pIVar13 = (INode)&___7FNoOpOperator_Metasound__6B_;
        }
        pFVar4->Node = pIVar13;
      }
      else {
        FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
        pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                            (this,(TDataReadReference<FString> *)local_90,&local_f0,pFVar2);
        pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_c0);
        FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
        pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                            (this,(TDataReadReference<bool> *)local_b0,&local_e8,pFVar2);
        this_00 = ::operator_new(0x98);
        if (this_00 != (TWaveWriterOperator<3> *)0x0) {
          pTVar19 = TWaveWriterOperator<3>(this_00,pFVar2,&local_138,pTVar12,pTVar11,pTVar10);
        }
        pFVar4->Node = (INode *)pTVar19;
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_b0._16_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_90._16_8_);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data,
                 local_138.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b29c690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<4> *this_00;
  INode *pIVar13;
  int iVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TWaveWriterOperator<4> *pTVar19;
  undefined1 auStackY_188 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_138;
  FName local_128;
  undefined1 local_120 [32];
  FBuildOperatorParams *local_100;
  FOperatorSettings *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  iVar18 = 0;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_100 = param_1;
  iVar6 = iVar18;
  do {
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar16.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar16.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar5 = FInputVertexInterfaceData::IsVertexBound(this,&local_128);
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    iVar14 = iVar6 + 1;
    if (!bVar5) {
      iVar14 = iVar6;
    }
    pFVar7 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar15 = &local_58;
LAB_14b29c890:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar15);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
        pTVar15 = &local_70;
        goto LAB_14b29c890;
      }
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_120
                );
    }
    if (((local_138.AllocatorInstance.Data <=
          (TDataReadReference<Metasound::FAudioBuffer> *)local_120) &&
        ((FScriptContainerElement *)local_120 <
         local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    iVar6 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar6 + 1;
    pFVar17 = local_138.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar17 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar17 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar17 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar17 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    pFVar2 = local_f8;
    pFVar4 = local_100;
    iVar18 = iVar18 + 1;
    iVar6 = iVar14;
    if (3 < iVar18) {
      pTVar19 = (TWaveWriterOperator<4> *)0x0;
      if (iVar14 < 1) {
        pIVar13 = ::operator_new(8);
        if (pIVar13 == (INode *)0x0) {
          pIVar13 = (INode *)0x0;
        }
        else {
          *pIVar13 = (INode)&___7FNoOpOperator_Metasound__6B_;
        }
        pFVar4->Node = pIVar13;
      }
      else {
        FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
        pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                            (this,(TDataReadReference<FString> *)local_90,&local_f0,pFVar2);
        pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_c0);
        FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
        pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                            (this,(TDataReadReference<bool> *)local_b0,&local_e8,pFVar2);
        this_00 = ::operator_new(0x98);
        if (this_00 != (TWaveWriterOperator<4> *)0x0) {
          pTVar19 = TWaveWriterOperator<4>(this_00,pFVar2,&local_138,pTVar12,pTVar11,pTVar10);
        }
        pFVar4->Node = (INode *)pTVar19;
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_b0._16_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_90._16_8_);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data,
                 local_138.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b29cab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<5>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<5> *this_00;
  INode *pIVar13;
  int iVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TWaveWriterOperator<5> *pTVar19;
  undefined1 auStackY_188 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_138;
  FName local_128;
  undefined1 local_120 [32];
  FBuildOperatorParams *local_100;
  FOperatorSettings *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  iVar18 = 0;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_100 = param_1;
  iVar6 = iVar18;
  do {
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar16.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar16.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar5 = FInputVertexInterfaceData::IsVertexBound(this,&local_128);
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    iVar14 = iVar6 + 1;
    if (!bVar5) {
      iVar14 = iVar6;
    }
    pFVar7 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar15 = &local_58;
LAB_14b29ccb0:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar15);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
        pTVar15 = &local_70;
        goto LAB_14b29ccb0;
      }
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_120
                );
    }
    if (((local_138.AllocatorInstance.Data <=
          (TDataReadReference<Metasound::FAudioBuffer> *)local_120) &&
        ((FScriptContainerElement *)local_120 <
         local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    iVar6 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar6 + 1;
    pFVar17 = local_138.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar17 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar17 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar17 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar17 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    pFVar2 = local_f8;
    pFVar4 = local_100;
    iVar18 = iVar18 + 1;
    iVar6 = iVar14;
    if (4 < iVar18) {
      pTVar19 = (TWaveWriterOperator<5> *)0x0;
      if (iVar14 < 1) {
        pIVar13 = ::operator_new(8);
        if (pIVar13 == (INode *)0x0) {
          pIVar13 = (INode *)0x0;
        }
        else {
          *pIVar13 = (INode)&___7FNoOpOperator_Metasound__6B_;
        }
        pFVar4->Node = pIVar13;
      }
      else {
        FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
        pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                            (this,(TDataReadReference<FString> *)local_90,&local_f0,pFVar2);
        pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_c0);
        FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
        pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                            (this,(TDataReadReference<bool> *)local_b0,&local_e8,pFVar2);
        this_00 = ::operator_new(0x98);
        if (this_00 != (TWaveWriterOperator<5> *)0x0) {
          pTVar19 = TWaveWriterOperator<5>(this_00,pFVar2,&local_138,pTVar12,pTVar11,pTVar10);
        }
        pFVar4->Node = (INode *)pTVar19;
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_b0._16_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_90._16_8_);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data,
                 local_138.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b29ced0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<6> *this_00;
  INode *pIVar13;
  int iVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TWaveWriterOperator<6> *pTVar19;
  undefined1 auStackY_188 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_138;
  FName local_128;
  undefined1 local_120 [32];
  FBuildOperatorParams *local_100;
  FOperatorSettings *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  iVar18 = 0;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_100 = param_1;
  iVar6 = iVar18;
  do {
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar16.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar16.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar5 = FInputVertexInterfaceData::IsVertexBound(this,&local_128);
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    iVar14 = iVar6 + 1;
    if (!bVar5) {
      iVar14 = iVar6;
    }
    pFVar7 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar15 = &local_58;
LAB_14b29d0d0:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar15);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
        pTVar15 = &local_70;
        goto LAB_14b29d0d0;
      }
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_120
                );
    }
    if (((local_138.AllocatorInstance.Data <=
          (TDataReadReference<Metasound::FAudioBuffer> *)local_120) &&
        ((FScriptContainerElement *)local_120 <
         local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    iVar6 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar6 + 1;
    pFVar17 = local_138.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar17 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar17 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar17 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar17 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    pFVar2 = local_f8;
    pFVar4 = local_100;
    iVar18 = iVar18 + 1;
    iVar6 = iVar14;
    if (5 < iVar18) {
      pTVar19 = (TWaveWriterOperator<6> *)0x0;
      if (iVar14 < 1) {
        pIVar13 = ::operator_new(8);
        if (pIVar13 == (INode *)0x0) {
          pIVar13 = (INode *)0x0;
        }
        else {
          *pIVar13 = (INode)&___7FNoOpOperator_Metasound__6B_;
        }
        pFVar4->Node = pIVar13;
      }
      else {
        FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
        pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                            (this,(TDataReadReference<FString> *)local_90,&local_f0,pFVar2);
        pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_c0);
        FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
        pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                            (this,(TDataReadReference<bool> *)local_b0,&local_e8,pFVar2);
        this_00 = ::operator_new(0x98);
        if (this_00 != (TWaveWriterOperator<6> *)0x0) {
          pTVar19 = TWaveWriterOperator<6>(this_00,pFVar2,&local_138,pTVar12,pTVar11,pTVar10);
        }
        pFVar4->Node = (INode *)pTVar19;
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_b0._16_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_90._16_8_);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data,
                 local_138.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b29d2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<7>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<7> *this_00;
  INode *pIVar13;
  int iVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TWaveWriterOperator<7> *pTVar19;
  undefined1 auStackY_188 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_138;
  FName local_128;
  undefined1 local_120 [32];
  FBuildOperatorParams *local_100;
  FOperatorSettings *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  iVar18 = 0;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_100 = param_1;
  iVar6 = iVar18;
  do {
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar16.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar16.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar5 = FInputVertexInterfaceData::IsVertexBound(this,&local_128);
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    iVar14 = iVar6 + 1;
    if (!bVar5) {
      iVar14 = iVar6;
    }
    pFVar7 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar15 = &local_58;
LAB_14b29d4f0:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar15);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
        pTVar15 = &local_70;
        goto LAB_14b29d4f0;
      }
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_120
                );
    }
    if (((local_138.AllocatorInstance.Data <=
          (TDataReadReference<Metasound::FAudioBuffer> *)local_120) &&
        ((FScriptContainerElement *)local_120 <
         local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    iVar6 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar6 + 1;
    pFVar17 = local_138.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar17 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar17 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar17 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar17 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    pFVar2 = local_f8;
    pFVar4 = local_100;
    iVar18 = iVar18 + 1;
    iVar6 = iVar14;
    if (6 < iVar18) {
      pTVar19 = (TWaveWriterOperator<7> *)0x0;
      if (iVar14 < 1) {
        pIVar13 = ::operator_new(8);
        if (pIVar13 == (INode *)0x0) {
          pIVar13 = (INode *)0x0;
        }
        else {
          *pIVar13 = (INode)&___7FNoOpOperator_Metasound__6B_;
        }
        pFVar4->Node = pIVar13;
      }
      else {
        FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
        pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                            (this,(TDataReadReference<FString> *)local_90,&local_f0,pFVar2);
        pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_c0);
        FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
        pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                            (this,(TDataReadReference<bool> *)local_b0,&local_e8,pFVar2);
        this_00 = ::operator_new(0x98);
        if (this_00 != (TWaveWriterOperator<7> *)0x0) {
          pTVar19 = TWaveWriterOperator<7>(this_00,pFVar2,&local_138,pTVar12,pTVar11,pTVar10);
        }
        pFVar4->Node = (INode *)pTVar19;
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_b0._16_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_90._16_8_);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data,
                 local_138.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b29d710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TWaveWriterOperator<8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TDataReadReference<FString> *pTVar10;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar11;
  TDataReadReference<bool> *pTVar12;
  TWaveWriterOperator<8> *this_00;
  INode *pIVar13;
  int iVar14;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TWaveWriterOperator<8> *pTVar19;
  undefined1 auStackY_188 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_138;
  FName local_128;
  undefined1 local_120 [32];
  FBuildOperatorParams *local_100;
  FOperatorSettings *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TSharedPtr<Metasound::FNumberedFileCache,1> local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  iVar18 = 0;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_100 = param_1;
  iVar6 = iVar18;
  do {
    ::FString::PrintfImpl(&local_e0,L"In %d");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar16.Data = local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar16.Data);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar5 = FInputVertexInterfaceData::IsVertexBound(this,&local_128);
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    iVar14 = iVar6 + 1;
    if (!bVar5) {
      iVar14 = iVar6;
    }
    pFVar7 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar15 = &local_58;
LAB_14b29d910:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar15);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_120,pFVar2,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
        pTVar15 = &local_70;
        goto LAB_14b29d910;
      }
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_120
                );
    }
    if (((local_138.AllocatorInstance.Data <=
          (TDataReadReference<Metasound::FAudioBuffer> *)local_120) &&
        ((FScriptContainerElement *)local_120 <
         local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    iVar6 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar6 + 1;
    pFVar17 = local_138.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar17 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar17 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar17 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar17 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    pFVar2 = local_f8;
    pFVar4 = local_100;
    iVar18 = iVar18 + 1;
    iVar6 = iVar14;
    if (7 < iVar18) {
      pTVar19 = (TWaveWriterOperator<8> *)0x0;
      if (iVar14 < 1) {
        pIVar13 = ::operator_new(8);
        if (pIVar13 == (INode *)0x0) {
          pIVar13 = (INode *)0x0;
        }
        else {
          *pIVar13 = (INode)&___7FNoOpOperator_Metasound__6B_;
        }
        pFVar4->Node = pIVar13;
      }
      else {
        FLazyName::Resolve(&WaveWriterVertexNames::InFilenamePrefixPinName);
        pTVar10 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                            (this,(TDataReadReference<FString> *)local_90,&local_f0,pFVar2);
        pTVar11 = WaveWriterOperatorPrivate::GetNameCache(&local_c0);
        FLazyName::Resolve(&WaveWriterVertexNames::InEnabledPinName);
        pTVar12 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                            (this,(TDataReadReference<bool> *)local_b0,&local_e8,pFVar2);
        this_00 = ::operator_new(0x98);
        if (this_00 != (TWaveWriterOperator<8> *)0x0) {
          pTVar19 = TWaveWriterOperator<8>(this_00,pFVar2,&local_138,pTVar12,pTVar11,pTVar10);
        }
        pFVar4->Node = (INode *)pTVar19;
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_b0._16_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<0> *)local_90._16_8_);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data,
                 local_138.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_138.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// DeclareVertexInterface @ 14b29db30

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<1>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<1>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// DeclareVertexInterface @ 14b29dbc0

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<2>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<2>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// DeclareVertexInterface @ 14b29dc50

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<3>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<3>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// DeclareVertexInterface @ 14b29dce0

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<4>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<4>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// DeclareVertexInterface @ 14b29dd70

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<5>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<5>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// DeclareVertexInterface @ 14b29de00

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<6>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<6>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// DeclareVertexInterface @ 14b29de90

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<7>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<7>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// DeclareVertexInterface @ 14b29df20

FVertexInterface * __cdecl Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TWaveWriterOperator<8>::DeclareVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TWaveWriterOperator<8>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
          ::__l2::DefaultInterface;
}

// Disable @ 14b29dfc0

void __thiscall Metasound::TWaveWriterOperator<1>::Disable(TWaveWriterOperator<1> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Disable @ 14b29e050

void __thiscall Metasound::TWaveWriterOperator<2>::Disable(TWaveWriterOperator<2> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Disable @ 14b29e0e0

void __thiscall Metasound::TWaveWriterOperator<3>::Disable(TWaveWriterOperator<3> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Disable @ 14b29e170

void __thiscall Metasound::TWaveWriterOperator<4>::Disable(TWaveWriterOperator<4> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Disable @ 14b29e200

void __thiscall Metasound::TWaveWriterOperator<5>::Disable(TWaveWriterOperator<5> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Disable @ 14b29e290

void __thiscall Metasound::TWaveWriterOperator<6>::Disable(TWaveWriterOperator<6> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Disable @ 14b29e320

void __thiscall Metasound::TWaveWriterOperator<7>::Disable(TWaveWriterOperator<7> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Disable @ 14b29e3b0

void __thiscall Metasound::TWaveWriterOperator<8>::Disable(TWaveWriterOperator<8> *this)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Execute @ 14b29e440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<1>::Execute(TWaveWriterOperator<1> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  char cVar2;
  int iVar3;
  FSimpleWaveWriter *this_00;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  IFileManager *pIVar8;
  FSimpleWaveWriter *pFVar9;
  ForAnyElementType FVar10;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res8;
  undefined8 local_48;
  FString local_40;
  float *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  cVar2 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar2 == '\0') {
      this->bIsEnabled = false;
      pFVar9 = (this->Writer).Ptr;
      if (pFVar9 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar9);
        ::operator_delete(pFVar9,0x18);
      }
    }
    goto LAB_14b29e5c8;
  }
  if (cVar2 == '\0') goto LAB_14b29e5c8;
  this->bIsEnabled = true;
  if ((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_40,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar8 = IFileManager::Get();
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar10.Data = local_40.Data.AllocatorInstance.Data;
  }
  local_res8.Ptr = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar10.Data,2);
  if (local_res8.Ptr != (FArchive *)0x0) {
    pFVar9 = ::operator_new(0x18);
    if (pFVar9 == (FSimpleWaveWriter *)0x0) {
      pFVar9 = (FSimpleWaveWriter *)0x0;
    }
    else {
      pFVar9 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                         (pFVar9,&local_res8,(int)this->SampleRate,1,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_48) {
      if (pFVar9 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar9);
        goto LAB_14b29e55f;
      }
    }
    else {
      this_00 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar9;
      if (this_00 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
        pFVar9 = this_00;
LAB_14b29e55f:
        ::operator_delete(pFVar9,0x18);
      }
    }
    if (local_res8.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
    }
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
LAB_14b29e5c8:
  pFVar9 = (this->Writer).Ptr;
  if ((pFVar9 != (FSimpleWaveWriter *)0x0) && (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    if ((this->AudioInputs).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar3 = *(int *)(lVar4 + 8);
    if ((this->AudioInputs).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_28 = (float *)*puVar5;
    iStack_20 = iVar3;
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iStack_20;
    local_18.DataPtr = local_28;
    Audio::FSimpleWaveWriter::Write(pFVar9,&local_18);
  }
  return;
}

// Execute @ 14b29e720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<2>::Execute(TWaveWriterOperator<2> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  IFileManager *pIVar8;
  FSimpleWaveWriter *pFVar9;
  FSimpleWaveWriter *pFVar10;
  undefined4 *puVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FSimpleWaveWriter *pFVar15;
  longlong lVar16;
  longlong lVar17;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res8;
  undefined8 local_48;
  FString local_40;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  pFVar15 = (FSimpleWaveWriter *)0x0;
  cVar3 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar3 == '\0') {
      this->bIsEnabled = false;
      pFVar10 = (this->Writer).Ptr;
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        ::operator_delete(pFVar10,0x18);
      }
    }
    goto LAB_14b29e8ab;
  }
  if (cVar3 == '\0') goto LAB_14b29e8ab;
  this->bIsEnabled = true;
  if (((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_40,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar8 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar12.Data = local_40.Data.AllocatorInstance.Data;
  }
  local_res8.Ptr = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar12.Data,2);
  if (local_res8.Ptr != (FArchive *)0x0) {
    pFVar9 = ::operator_new(0x18);
    pFVar10 = pFVar15;
    if (pFVar9 != (FSimpleWaveWriter *)0x0) {
      pFVar10 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                          (pFVar9,&local_res8,(int)this->SampleRate,2,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_48) {
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        goto LAB_14b29e845;
      }
    }
    else {
      pFVar9 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar10;
      if (pFVar9 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar9);
        pFVar10 = pFVar9;
LAB_14b29e845:
        ::operator_delete(pFVar10,0x18);
      }
    }
    if (local_res8.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
    }
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
LAB_14b29e8ab:
  if (((this->Writer).Ptr != (FSimpleWaveWriter *)0x0) &&
     (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    pFVar14 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if (((this->AudioInputs).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar13 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    lVar13 = (longlong)*(int *)(lVar13 + 8);
    pFVar5 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
    if (3 < lVar13) {
      lVar16 = *(longlong *)pFVar5 - *(longlong *)(pFVar5 + 8);
      lVar17 = (lVar13 - 4U >> 2) + 1;
      pFVar15 = (FSimpleWaveWriter *)(lVar17 * 4);
      puVar11 = (undefined4 *)(*(longlong *)(pFVar5 + 8) + 4);
      do {
        puVar2 = puVar11 + 4;
        *(undefined4 *)pFVar14 = *(undefined4 *)(lVar16 + -4 + (longlong)puVar11);
        *(undefined4 *)(pFVar14 + 4) = puVar11[-1];
        *(undefined4 *)(pFVar14 + 8) = *(undefined4 *)(lVar16 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar14 + 0xc) = *puVar11;
        *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar16 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar14 + 0x14) = puVar11[1];
        *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar16 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar14 + 0x1c) = puVar11[2];
        pFVar14 = pFVar14 + 0x20;
        lVar17 = lVar17 + -1;
        puVar11 = puVar2;
      } while (lVar17 != 0);
    }
    if ((longlong)pFVar15 < lVar13) {
      lVar16 = *(longlong *)(pFVar5 + 8);
      lVar17 = *(longlong *)pFVar5;
      lVar13 = lVar13 - (longlong)pFVar15;
      puVar11 = (undefined4 *)(lVar16 + (longlong)pFVar15 * 4);
      do {
        *(undefined4 *)pFVar14 = *(undefined4 *)((lVar17 - lVar16) + (longlong)puVar11);
        *(undefined4 *)(pFVar14 + 4) = *puVar11;
        lVar13 = lVar13 + -1;
        puVar11 = puVar11 + 1;
        pFVar14 = pFVar14 + 8;
      } while (lVar13 != 0);
    }
    iVar4 = (this->InterleaveBuffer).ArrayNum;
    pFVar15 = (this->Writer).Ptr;
    pFVar14 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar4;
    local_28 = pFVar14;
    iStack_20 = iVar4;
    local_18.DataPtr = (float *)pFVar14;
    Audio::FSimpleWaveWriter::Write(pFVar15,&local_18);
  }
  return;
}

// Execute @ 14b29ea50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<3>::Execute(TWaveWriterOperator<3> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  IFileManager *pIVar9;
  FSimpleWaveWriter *pFVar10;
  FSimpleWaveWriter *pFVar11;
  undefined4 *puVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FSimpleWaveWriter *pFVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res8;
  undefined8 local_58;
  FString local_50;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  
  pFVar16 = (FSimpleWaveWriter *)0x0;
  cVar3 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar3 == '\0') {
      this->bIsEnabled = false;
      pFVar11 = (this->Writer).Ptr;
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        ::operator_delete(pFVar11,0x18);
      }
    }
    goto LAB_14b29ebd3;
  }
  if (cVar3 == '\0') goto LAB_14b29ebd3;
  this->bIsEnabled = true;
  if (((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_50,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar9 = IFileManager::Get();
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar14.Data = local_50.Data.AllocatorInstance.Data;
  }
  local_res8.Ptr = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar14.Data,2);
  if (local_res8.Ptr != (FArchive *)0x0) {
    pFVar10 = ::operator_new(0x18);
    pFVar11 = pFVar16;
    if (pFVar10 != (FSimpleWaveWriter *)0x0) {
      pFVar11 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                          (pFVar10,&local_res8,(int)this->SampleRate,3,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_58) {
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        goto LAB_14b29eb6d;
      }
    }
    else {
      pFVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        pFVar11 = pFVar10;
LAB_14b29eb6d:
        ::operator_delete(pFVar11,0x18);
      }
    }
    if (local_res8.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_14b29ebd3:
  if (((this->Writer).Ptr != (FSimpleWaveWriter *)0x0) &&
     (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if (((this->AudioInputs).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar17 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar17 + 0x10) != *(int *)(lVar17 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    lVar17 = (longlong)*(int *)(lVar17 + 8);
    pFVar5 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
    if (3 < lVar17) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar18 = *(longlong *)pFVar5 - lVar6;
      lVar19 = *(longlong *)(pFVar5 + 0x10) - lVar6;
      lVar15 = (lVar17 - 4U >> 2) + 1;
      pFVar16 = (FSimpleWaveWriter *)(lVar15 * 4);
      puVar12 = (undefined4 *)(lVar6 + 4);
      do {
        puVar2 = puVar12 + 4;
        *(undefined4 *)pFVar13 = *(undefined4 *)(lVar18 + -4 + (longlong)puVar12);
        *(undefined4 *)(pFVar13 + 4) = puVar12[-1];
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(lVar19 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(lVar18 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x10) = *puVar12;
        *(undefined4 *)(pFVar13 + 0x14) = *(undefined4 *)(lVar19 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x18) = *(undefined4 *)(lVar18 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x1c) = puVar12[1];
        *(undefined4 *)(pFVar13 + 0x20) = *(undefined4 *)(lVar19 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x24) = *(undefined4 *)(lVar18 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x28) = puVar12[2];
        *(undefined4 *)(pFVar13 + 0x2c) = *(undefined4 *)(lVar19 + -8 + (longlong)puVar2);
        pFVar13 = pFVar13 + 0x30;
        lVar15 = lVar15 + -1;
        puVar12 = puVar2;
      } while (lVar15 != 0);
    }
    if ((longlong)pFVar16 < lVar17) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar15 = *(longlong *)pFVar5;
      lVar18 = *(longlong *)(pFVar5 + 0x10);
      lVar17 = lVar17 - (longlong)pFVar16;
      pFVar13 = pFVar13 + 8;
      puVar12 = (undefined4 *)(lVar6 + (longlong)pFVar16 * 4);
      do {
        *(undefined4 *)(pFVar13 + -8) = *(undefined4 *)((lVar15 - lVar6) + (longlong)puVar12);
        *(undefined4 *)(pFVar13 + -4) = *puVar12;
        *(undefined4 *)pFVar13 = *(undefined4 *)((lVar18 - lVar6) + -4 + (longlong)(puVar12 + 1));
        lVar17 = lVar17 + -1;
        pFVar13 = pFVar13 + 0xc;
        puVar12 = puVar12 + 1;
      } while (lVar17 != 0);
    }
    pFVar16 = (this->Writer).Ptr;
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    iVar4 = (this->InterleaveBuffer).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar4;
    local_38 = pFVar13;
    iStack_30 = iVar4;
    local_28.DataPtr = (float *)pFVar13;
    Audio::FSimpleWaveWriter::Write(pFVar16,&local_28);
  }
  return;
}

// Execute @ 14b29edc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<4>::Execute(TWaveWriterOperator<4> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  IFileManager *pIVar9;
  FSimpleWaveWriter *pFVar10;
  FSimpleWaveWriter *pFVar11;
  undefined4 *puVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FSimpleWaveWriter *pFVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res8;
  undefined8 local_58;
  FString local_50;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  
  pFVar16 = (FSimpleWaveWriter *)0x0;
  cVar3 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar3 == '\0') {
      this->bIsEnabled = false;
      pFVar11 = (this->Writer).Ptr;
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        ::operator_delete(pFVar11,0x18);
      }
    }
    goto LAB_14b29ef43;
  }
  if (cVar3 == '\0') goto LAB_14b29ef43;
  this->bIsEnabled = true;
  if (((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_50,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar9 = IFileManager::Get();
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar14.Data = local_50.Data.AllocatorInstance.Data;
  }
  local_res8.Ptr = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar14.Data,2);
  if (local_res8.Ptr != (FArchive *)0x0) {
    pFVar10 = ::operator_new(0x18);
    pFVar11 = pFVar16;
    if (pFVar10 != (FSimpleWaveWriter *)0x0) {
      pFVar11 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                          (pFVar10,&local_res8,(int)this->SampleRate,4,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_58) {
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        goto LAB_14b29eedd;
      }
    }
    else {
      pFVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        pFVar11 = pFVar10;
LAB_14b29eedd:
        ::operator_delete(pFVar11,0x18);
      }
    }
    if (local_res8.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_14b29ef43:
  if (((this->Writer).Ptr != (FSimpleWaveWriter *)0x0) &&
     (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if (((this->AudioInputs).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar17 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar17 + 0x10) != *(int *)(lVar17 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    lVar17 = (longlong)*(int *)(lVar17 + 8);
    pFVar5 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
    if (3 < lVar17) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar18 = *(longlong *)pFVar5 - lVar6;
      lVar19 = *(longlong *)(pFVar5 + 0x10) - lVar6;
      lVar20 = *(longlong *)(pFVar5 + 0x18) - lVar6;
      lVar15 = (lVar17 - 4U >> 2) + 1;
      pFVar16 = (FSimpleWaveWriter *)(lVar15 * 4);
      puVar12 = (undefined4 *)(lVar6 + 4);
      do {
        puVar2 = puVar12 + 4;
        *(undefined4 *)pFVar13 = *(undefined4 *)(lVar18 + -4 + (longlong)puVar12);
        *(undefined4 *)(pFVar13 + 4) = puVar12[-1];
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(lVar19 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(lVar20 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x10) = *(undefined4 *)(lVar18 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x14) = *puVar12;
        *(undefined4 *)(pFVar13 + 0x18) = *(undefined4 *)(lVar19 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x1c) = *(undefined4 *)(lVar20 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x20) = *(undefined4 *)(lVar18 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x24) = puVar12[1];
        *(undefined4 *)(pFVar13 + 0x28) = *(undefined4 *)(lVar19 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x2c) = *(undefined4 *)(lVar20 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x30) = *(undefined4 *)(lVar18 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x34) = puVar12[2];
        *(undefined4 *)(pFVar13 + 0x38) = *(undefined4 *)(lVar19 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x3c) = *(undefined4 *)(lVar20 + -8 + (longlong)puVar2);
        pFVar13 = pFVar13 + 0x40;
        lVar15 = lVar15 + -1;
        puVar12 = puVar2;
      } while (lVar15 != 0);
    }
    if ((longlong)pFVar16 < lVar17) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar15 = *(longlong *)(pFVar5 + 0x18);
      lVar18 = *(longlong *)pFVar5;
      lVar19 = *(longlong *)(pFVar5 + 0x10);
      lVar17 = lVar17 - (longlong)pFVar16;
      pFVar13 = pFVar13 + 8;
      puVar12 = (undefined4 *)(lVar6 + (longlong)pFVar16 * 4);
      do {
        puVar2 = puVar12 + 1;
        *(undefined4 *)(pFVar13 + -8) = *(undefined4 *)((lVar18 - lVar6) + (longlong)puVar12);
        *(undefined4 *)(pFVar13 + -4) = *puVar12;
        *(undefined4 *)pFVar13 = *(undefined4 *)((lVar19 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 4) = *(undefined4 *)((lVar15 - lVar6) + -4 + (longlong)puVar2);
        lVar17 = lVar17 + -1;
        pFVar13 = pFVar13 + 0x10;
        puVar12 = puVar2;
      } while (lVar17 != 0);
    }
    pFVar16 = (this->Writer).Ptr;
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    iVar4 = (this->InterleaveBuffer).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar4;
    local_38 = pFVar13;
    iStack_30 = iVar4;
    local_28.DataPtr = (float *)pFVar13;
    Audio::FSimpleWaveWriter::Write(pFVar16,&local_28);
  }
  return;
}

// Execute @ 14b29f180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<5>::Execute(TWaveWriterOperator<5> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  IFileManager *pIVar9;
  FSimpleWaveWriter *pFVar10;
  FSimpleWaveWriter *pFVar11;
  undefined4 *puVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FSimpleWaveWriter *pFVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res8;
  undefined8 local_58;
  FString local_50;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  
  pFVar16 = (FSimpleWaveWriter *)0x0;
  cVar3 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar3 == '\0') {
      this->bIsEnabled = false;
      pFVar11 = (this->Writer).Ptr;
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        ::operator_delete(pFVar11,0x18);
      }
    }
    goto LAB_14b29f303;
  }
  if (cVar3 == '\0') goto LAB_14b29f303;
  this->bIsEnabled = true;
  if (((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_50,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar9 = IFileManager::Get();
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar14.Data = local_50.Data.AllocatorInstance.Data;
  }
  local_res8.Ptr = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar14.Data,2);
  if (local_res8.Ptr != (FArchive *)0x0) {
    pFVar10 = ::operator_new(0x18);
    pFVar11 = pFVar16;
    if (pFVar10 != (FSimpleWaveWriter *)0x0) {
      pFVar11 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                          (pFVar10,&local_res8,(int)this->SampleRate,5,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_58) {
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        goto LAB_14b29f29d;
      }
    }
    else {
      pFVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        pFVar11 = pFVar10;
LAB_14b29f29d:
        ::operator_delete(pFVar11,0x18);
      }
    }
    if (local_res8.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_14b29f303:
  if (((this->Writer).Ptr != (FSimpleWaveWriter *)0x0) &&
     (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if (((this->AudioInputs).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar18 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar18 + 0x10) != *(int *)(lVar18 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    lVar18 = (longlong)*(int *)(lVar18 + 8);
    pFVar5 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
    if (3 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar19 = *(longlong *)pFVar5 - lVar6;
      lVar20 = *(longlong *)(pFVar5 + 0x10) - lVar6;
      lVar17 = *(longlong *)(pFVar5 + 0x18) - lVar6;
      lVar21 = *(longlong *)(pFVar5 + 0x20) - lVar6;
      lVar15 = (lVar18 - 4U >> 2) + 1;
      pFVar16 = (FSimpleWaveWriter *)(lVar15 * 4);
      puVar12 = (undefined4 *)(lVar6 + 4);
      do {
        puVar2 = puVar12 + 4;
        *(undefined4 *)pFVar13 = *(undefined4 *)((longlong)puVar12 + lVar19 + -4);
        *(undefined4 *)(pFVar13 + 4) = puVar12[-1];
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(lVar20 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(lVar17 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x10) = *(undefined4 *)((longlong)puVar12 + lVar21 + -4);
        *(undefined4 *)(pFVar13 + 0x14) = *(undefined4 *)((longlong)puVar12 + lVar19);
        *(undefined4 *)(pFVar13 + 0x18) = *puVar12;
        *(undefined4 *)(pFVar13 + 0x1c) = *(undefined4 *)(lVar20 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x20) = *(undefined4 *)(lVar17 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x24) = *(undefined4 *)((longlong)puVar12 + lVar21);
        *(undefined4 *)(pFVar13 + 0x28) = *(undefined4 *)((longlong)puVar12 + lVar19 + 4);
        *(undefined4 *)(pFVar13 + 0x2c) = puVar12[1];
        *(undefined4 *)(pFVar13 + 0x30) = *(undefined4 *)(lVar20 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x34) = *(undefined4 *)(lVar17 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x38) = *(undefined4 *)((longlong)puVar12 + lVar21 + 4);
        *(undefined4 *)(pFVar13 + 0x3c) = *(undefined4 *)((longlong)puVar12 + lVar19 + 8);
        *(undefined4 *)(pFVar13 + 0x40) = puVar12[2];
        *(undefined4 *)(pFVar13 + 0x44) = *(undefined4 *)(lVar20 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x48) = *(undefined4 *)(lVar17 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x4c) = *(undefined4 *)((longlong)puVar12 + lVar21 + 8);
        pFVar13 = pFVar13 + 0x50;
        lVar15 = lVar15 + -1;
        puVar12 = puVar2;
      } while (lVar15 != 0);
    }
    if ((longlong)pFVar16 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar15 = *(longlong *)(pFVar5 + 0x18);
      lVar17 = *(longlong *)pFVar5;
      lVar19 = *(longlong *)(pFVar5 + 0x10);
      lVar20 = *(longlong *)(pFVar5 + 0x20);
      lVar18 = lVar18 - (longlong)pFVar16;
      pFVar13 = pFVar13 + 8;
      puVar12 = (undefined4 *)(lVar6 + (longlong)pFVar16 * 4);
      do {
        *(undefined4 *)(pFVar13 + -8) = *(undefined4 *)((longlong)puVar12 + (lVar17 - lVar6));
        *(undefined4 *)(pFVar13 + -4) = *puVar12;
        *(undefined4 *)pFVar13 = *(undefined4 *)((longlong)puVar12 + (lVar19 - lVar6));
        *(undefined4 *)(pFVar13 + 4) = *(undefined4 *)((longlong)puVar12 + (lVar15 - lVar6));
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)((longlong)puVar12 + (lVar20 - lVar6));
        lVar18 = lVar18 + -1;
        pFVar13 = pFVar13 + 0x14;
        puVar12 = puVar12 + 1;
      } while (lVar18 != 0);
    }
    pFVar16 = (this->Writer).Ptr;
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    iVar4 = (this->InterleaveBuffer).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar4;
    local_38 = pFVar13;
    iStack_30 = iVar4;
    local_28.DataPtr = (float *)pFVar13;
    Audio::FSimpleWaveWriter::Write(pFVar16,&local_28);
  }
  return;
}

// Execute @ 14b29f570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<6>::Execute(TWaveWriterOperator<6> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  IFileManager *pIVar9;
  FSimpleWaveWriter *pFVar10;
  FSimpleWaveWriter *pFVar11;
  undefined4 *puVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong lVar16;
  FSimpleWaveWriter *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res8;
  undefined8 local_68;
  FString local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38;
  
  pFVar17 = (FSimpleWaveWriter *)0x0;
  cVar3 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar3 == '\0') {
      this->bIsEnabled = false;
      pFVar11 = (this->Writer).Ptr;
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        ::operator_delete(pFVar11,0x18);
      }
    }
    goto LAB_14b29f6f0;
  }
  if (cVar3 == '\0') goto LAB_14b29f6f0;
  this->bIsEnabled = true;
  if (((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_60,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar9 = IFileManager::Get();
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar14.Data = local_60.Data.AllocatorInstance.Data;
  }
  local_res8.Ptr = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar14.Data,2);
  if (local_res8.Ptr != (FArchive *)0x0) {
    pFVar10 = ::operator_new(0x18);
    pFVar11 = pFVar17;
    if (pFVar10 != (FSimpleWaveWriter *)0x0) {
      pFVar11 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                          (pFVar10,&local_res8,(int)this->SampleRate,6,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_68) {
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        goto LAB_14b29f68a;
      }
    }
    else {
      pFVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        pFVar11 = pFVar10;
LAB_14b29f68a:
        ::operator_delete(pFVar11,0x18);
      }
    }
    if (local_res8.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
    }
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
LAB_14b29f6f0:
  if (((this->Writer).Ptr != (FSimpleWaveWriter *)0x0) &&
     (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if (((this->AudioInputs).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar18 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar18 + 0x10) != *(int *)(lVar18 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    lVar18 = (longlong)*(int *)(lVar18 + 8);
    pFVar5 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
    if (3 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar19 = *(longlong *)pFVar5 - lVar6;
      lVar16 = *(longlong *)(pFVar5 + 0x10) - lVar6;
      lVar21 = *(longlong *)(pFVar5 + 0x18) - lVar6;
      lVar22 = *(longlong *)(pFVar5 + 0x20) - lVar6;
      lVar20 = *(longlong *)(pFVar5 + 0x28) - lVar6;
      lVar15 = (lVar18 - 4U >> 2) + 1;
      pFVar17 = (FSimpleWaveWriter *)(lVar15 * 4);
      puVar12 = (undefined4 *)(lVar6 + 4);
      do {
        *(undefined4 *)pFVar13 = *(undefined4 *)((longlong)puVar12 + lVar19 + -4);
        *(undefined4 *)(pFVar13 + 4) = puVar12[-1];
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)((longlong)puVar12 + lVar16 + -4);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((longlong)puVar12 + lVar21 + -4);
        *(undefined4 *)(pFVar13 + 0x10) = *(undefined4 *)((longlong)puVar12 + lVar22 + -4);
        *(undefined4 *)(pFVar13 + 0x14) = *(undefined4 *)((longlong)puVar12 + lVar20 + -4);
        *(undefined4 *)(pFVar13 + 0x18) = *(undefined4 *)((longlong)puVar12 + lVar19);
        *(undefined4 *)(pFVar13 + 0x1c) = *puVar12;
        *(undefined4 *)(pFVar13 + 0x20) = *(undefined4 *)((longlong)puVar12 + lVar16);
        *(undefined4 *)(pFVar13 + 0x24) = *(undefined4 *)((longlong)puVar12 + lVar21);
        *(undefined4 *)(pFVar13 + 0x28) = *(undefined4 *)((longlong)puVar12 + lVar22);
        *(undefined4 *)(pFVar13 + 0x2c) = *(undefined4 *)((longlong)puVar12 + lVar20);
        *(undefined4 *)(pFVar13 + 0x30) = *(undefined4 *)((longlong)puVar12 + lVar19 + 4);
        *(undefined4 *)(pFVar13 + 0x34) = puVar12[1];
        *(undefined4 *)(pFVar13 + 0x38) = *(undefined4 *)((longlong)puVar12 + lVar16 + 4);
        *(undefined4 *)(pFVar13 + 0x3c) = *(undefined4 *)((longlong)puVar12 + lVar21 + 4);
        *(undefined4 *)(pFVar13 + 0x40) = *(undefined4 *)((longlong)puVar12 + lVar22 + 4);
        *(undefined4 *)(pFVar13 + 0x44) = *(undefined4 *)((longlong)puVar12 + lVar20 + 4);
        *(undefined4 *)(pFVar13 + 0x48) = *(undefined4 *)((longlong)puVar12 + lVar19 + 8);
        *(undefined4 *)(pFVar13 + 0x4c) = puVar12[2];
        *(undefined4 *)(pFVar13 + 0x50) = *(undefined4 *)((longlong)puVar12 + lVar16 + 8);
        *(undefined4 *)(pFVar13 + 0x54) = *(undefined4 *)((longlong)puVar12 + lVar21 + 8);
        *(undefined4 *)(pFVar13 + 0x58) = *(undefined4 *)((longlong)puVar12 + lVar22 + 8);
        *(undefined4 *)(pFVar13 + 0x5c) = *(undefined4 *)((longlong)puVar12 + lVar20 + 8);
        pFVar13 = pFVar13 + 0x60;
        lVar15 = lVar15 + -1;
        puVar12 = puVar12 + 4;
      } while (lVar15 != 0);
    }
    if ((longlong)pFVar17 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar15 = *(longlong *)(pFVar5 + 0x18);
      lVar16 = *(longlong *)pFVar5;
      lVar19 = *(longlong *)(pFVar5 + 0x10);
      lVar20 = *(longlong *)(pFVar5 + 0x20);
      lVar21 = *(longlong *)(pFVar5 + 0x28);
      lVar18 = lVar18 - (longlong)pFVar17;
      pFVar13 = pFVar13 + 8;
      puVar12 = (undefined4 *)(lVar6 + (longlong)pFVar17 * 4);
      do {
        puVar2 = puVar12 + 1;
        *(undefined4 *)(pFVar13 + -8) = *(undefined4 *)((lVar16 - lVar6) + (longlong)puVar12);
        *(undefined4 *)(pFVar13 + -4) = *puVar12;
        *(undefined4 *)pFVar13 = *(undefined4 *)((lVar19 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 4) = *(undefined4 *)((lVar15 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)((lVar20 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((lVar21 - lVar6) + -4 + (longlong)puVar2);
        lVar18 = lVar18 + -1;
        pFVar13 = pFVar13 + 0x18;
        puVar12 = puVar2;
      } while (lVar18 != 0);
    }
    pFVar17 = (this->Writer).Ptr;
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    iVar4 = (this->InterleaveBuffer).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iVar4;
    local_48 = pFVar13;
    iStack_40 = iVar4;
    local_38.DataPtr = (float *)pFVar13;
    Audio::FSimpleWaveWriter::Write(pFVar17,&local_38);
  }
  return;
}

// Execute @ 14b29f990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<7>::Execute(TWaveWriterOperator<7> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  IFileManager *pIVar9;
  FSimpleWaveWriter *pFVar10;
  FSimpleWaveWriter *pFVar11;
  undefined4 *puVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong lVar16;
  FSimpleWaveWriter *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res8;
  undefined8 local_68;
  FString local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38;
  
  pFVar17 = (FSimpleWaveWriter *)0x0;
  cVar3 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar3 == '\0') {
      this->bIsEnabled = false;
      pFVar11 = (this->Writer).Ptr;
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        ::operator_delete(pFVar11,0x18);
      }
    }
    goto LAB_14b29fb10;
  }
  if (cVar3 == '\0') goto LAB_14b29fb10;
  this->bIsEnabled = true;
  if (((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_60,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar9 = IFileManager::Get();
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar14.Data = local_60.Data.AllocatorInstance.Data;
  }
  local_res8.Ptr = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar14.Data,2);
  if (local_res8.Ptr != (FArchive *)0x0) {
    pFVar10 = ::operator_new(0x18);
    pFVar11 = pFVar17;
    if (pFVar10 != (FSimpleWaveWriter *)0x0) {
      pFVar11 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                          (pFVar10,&local_res8,(int)this->SampleRate,7,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_68) {
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        goto LAB_14b29faaa;
      }
    }
    else {
      pFVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        pFVar11 = pFVar10;
LAB_14b29faaa:
        ::operator_delete(pFVar11,0x18);
      }
    }
    if (local_res8.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
    }
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
LAB_14b29fb10:
  if (((this->Writer).Ptr != (FSimpleWaveWriter *)0x0) &&
     (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if (((this->AudioInputs).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar18 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar18 + 0x10) != *(int *)(lVar18 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    lVar18 = (longlong)*(int *)(lVar18 + 8);
    pFVar5 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
    if (3 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar19 = *(longlong *)pFVar5 - lVar6;
      lVar16 = *(longlong *)(pFVar5 + 0x10) - lVar6;
      lVar22 = *(longlong *)(pFVar5 + 0x18) - lVar6;
      lVar23 = *(longlong *)(pFVar5 + 0x20) - lVar6;
      lVar20 = *(longlong *)(pFVar5 + 0x28) - lVar6;
      lVar21 = *(longlong *)(pFVar5 + 0x30) - lVar6;
      lVar15 = (lVar18 - 4U >> 2) + 1;
      pFVar17 = (FSimpleWaveWriter *)(lVar15 * 4);
      puVar12 = (undefined4 *)(lVar6 + 4);
      do {
        *(undefined4 *)pFVar13 = *(undefined4 *)((longlong)puVar12 + lVar19 + -4);
        *(undefined4 *)(pFVar13 + 4) = puVar12[-1];
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)((longlong)puVar12 + lVar16 + -4);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((longlong)puVar12 + lVar22 + -4);
        *(undefined4 *)(pFVar13 + 0x10) = *(undefined4 *)((longlong)puVar12 + lVar23 + -4);
        *(undefined4 *)(pFVar13 + 0x14) = *(undefined4 *)((longlong)puVar12 + lVar20 + -4);
        *(undefined4 *)(pFVar13 + 0x18) = *(undefined4 *)((longlong)puVar12 + lVar21 + -4);
        *(undefined4 *)(pFVar13 + 0x1c) = *(undefined4 *)((longlong)puVar12 + lVar19);
        *(undefined4 *)(pFVar13 + 0x20) = *puVar12;
        *(undefined4 *)(pFVar13 + 0x24) = *(undefined4 *)((longlong)puVar12 + lVar16);
        *(undefined4 *)(pFVar13 + 0x28) = *(undefined4 *)((longlong)puVar12 + lVar22);
        *(undefined4 *)(pFVar13 + 0x2c) = *(undefined4 *)((longlong)puVar12 + lVar23);
        *(undefined4 *)(pFVar13 + 0x30) = *(undefined4 *)((longlong)puVar12 + lVar20);
        *(undefined4 *)(pFVar13 + 0x34) = *(undefined4 *)((longlong)puVar12 + lVar21);
        *(undefined4 *)(pFVar13 + 0x38) = *(undefined4 *)((longlong)puVar12 + lVar19 + 4);
        *(undefined4 *)(pFVar13 + 0x3c) = puVar12[1];
        *(undefined4 *)(pFVar13 + 0x40) = *(undefined4 *)((longlong)puVar12 + lVar16 + 4);
        *(undefined4 *)(pFVar13 + 0x44) = *(undefined4 *)((longlong)puVar12 + lVar22 + 4);
        *(undefined4 *)(pFVar13 + 0x48) = *(undefined4 *)((longlong)puVar12 + lVar23 + 4);
        *(undefined4 *)(pFVar13 + 0x4c) = *(undefined4 *)((longlong)puVar12 + lVar20 + 4);
        *(undefined4 *)(pFVar13 + 0x50) = *(undefined4 *)((longlong)puVar12 + lVar21 + 4);
        *(undefined4 *)(pFVar13 + 0x54) = *(undefined4 *)((longlong)puVar12 + lVar19 + 8);
        *(undefined4 *)(pFVar13 + 0x58) = puVar12[2];
        *(undefined4 *)(pFVar13 + 0x5c) = *(undefined4 *)((longlong)puVar12 + lVar16 + 8);
        *(undefined4 *)(pFVar13 + 0x60) = *(undefined4 *)((longlong)puVar12 + lVar22 + 8);
        *(undefined4 *)(pFVar13 + 100) = *(undefined4 *)((longlong)puVar12 + lVar23 + 8);
        *(undefined4 *)(pFVar13 + 0x68) = *(undefined4 *)((longlong)puVar12 + lVar20 + 8);
        *(undefined4 *)(pFVar13 + 0x6c) = *(undefined4 *)((longlong)puVar12 + lVar21 + 8);
        pFVar13 = pFVar13 + 0x70;
        lVar15 = lVar15 + -1;
        puVar12 = puVar12 + 4;
      } while (lVar15 != 0);
    }
    if ((longlong)pFVar17 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar15 = *(longlong *)(pFVar5 + 0x18);
      lVar16 = *(longlong *)pFVar5;
      lVar19 = *(longlong *)(pFVar5 + 0x10);
      lVar20 = *(longlong *)(pFVar5 + 0x20);
      lVar21 = *(longlong *)(pFVar5 + 0x28);
      lVar22 = *(longlong *)(pFVar5 + 0x30);
      lVar18 = lVar18 - (longlong)pFVar17;
      pFVar13 = pFVar13 + 8;
      puVar12 = (undefined4 *)(lVar6 + (longlong)pFVar17 * 4);
      do {
        puVar2 = puVar12 + 1;
        *(undefined4 *)(pFVar13 + -8) = *(undefined4 *)((lVar16 - lVar6) + (longlong)puVar12);
        *(undefined4 *)(pFVar13 + -4) = *puVar12;
        *(undefined4 *)pFVar13 = *(undefined4 *)((lVar19 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 4) = *(undefined4 *)((lVar15 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)((lVar20 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((lVar21 - lVar6) + -4 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x10) = *(undefined4 *)((lVar22 - lVar6) + -4 + (longlong)puVar2);
        lVar18 = lVar18 + -1;
        pFVar13 = pFVar13 + 0x1c;
        puVar12 = puVar2;
      } while (lVar18 != 0);
    }
    pFVar17 = (this->Writer).Ptr;
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    iVar4 = (this->InterleaveBuffer).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iVar4;
    local_48 = pFVar13;
    iStack_40 = iVar4;
    local_38.DataPtr = (float *)pFVar13;
    Audio::FSimpleWaveWriter::Write(pFVar17,&local_38);
  }
  return;
}

// Execute @ 14b29fdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TWaveWriterOperator<8>::Execute(TWaveWriterOperator<8> *this)

{
  TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *pTVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  IFileManager *pIVar9;
  FSimpleWaveWriter *pFVar10;
  FSimpleWaveWriter *pFVar11;
  undefined4 *puVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong lVar16;
  FSimpleWaveWriter *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> local_res10;
  longlong local_res18;
  undefined8 local_78;
  FString local_70;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<float_const_,int> local_48;
  
  pFVar17 = (FSimpleWaveWriter *)0x0;
  cVar3 = **(char **)&(this->Enabled).field_0x8;
  if (this->bIsEnabled != false) {
    if (cVar3 == '\0') {
      this->bIsEnabled = false;
      pFVar11 = (this->Writer).Ptr;
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        ::operator_delete(pFVar11,0x18);
      }
    }
    goto LAB_14b29ff77;
  }
  if (cVar3 == '\0') goto LAB_14b29ff77;
  this->bIsEnabled = true;
  if (((this->NumberedFileCacheSP).Object == (FNumberedFileCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FNumberedFileCache::GenerateNextNumberedFilename
            ((this->NumberedFileCacheSP).Object,&local_70,
             *(FString **)&(this->FileNamePrefix).field_0x8);
  pIVar9 = IFileManager::Get();
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar14.Data = local_70.Data.AllocatorInstance.Data;
  }
  local_res10.Ptr = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar14.Data,2);
  if (local_res10.Ptr != (FArchive *)0x0) {
    pFVar10 = ::operator_new(0x18);
    pFVar11 = pFVar17;
    if (pFVar10 != (FSimpleWaveWriter *)0x0) {
      pFVar11 = Audio::FSimpleWaveWriter::FSimpleWaveWriter
                          (pFVar10,&local_res10,(int)this->SampleRate,8,true);
    }
    pTVar1 = &this->Writer;
    if (pTVar1 == (TUniquePtr<Audio::FSimpleWaveWriter,TDefaultDelete<Audio::FSimpleWaveWriter>_> *)
                  &local_78) {
      if (pFVar11 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar11);
        goto LAB_14b29ff11;
      }
    }
    else {
      pFVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      if (pFVar10 != (FSimpleWaveWriter *)0x0) {
        Audio::FSimpleWaveWriter::~FSimpleWaveWriter(pFVar10);
        pFVar11 = pFVar10;
LAB_14b29ff11:
        ::operator_delete(pFVar11,0x18);
      }
    }
    if (local_res10.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_res10.Ptr)(local_res10.Ptr,1);
    }
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
LAB_14b29ff77:
  if (((this->Writer).Ptr != (FSimpleWaveWriter *)0x0) &&
     (**(char **)&(this->Enabled).field_0x8 != '\0')) {
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    if (((this->AudioInputs).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar18 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar18 + 0x10) != *(int *)(lVar18 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    lVar18 = (longlong)*(int *)(lVar18 + 8);
    pFVar5 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
    if (3 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      local_res18 = *(longlong *)(pFVar5 + 0x38) - lVar6;
      lVar19 = *(longlong *)pFVar5 - lVar6;
      lVar16 = *(longlong *)(pFVar5 + 0x10) - lVar6;
      lVar22 = *(longlong *)(pFVar5 + 0x18) - lVar6;
      lVar23 = *(longlong *)(pFVar5 + 0x20) - lVar6;
      lVar20 = *(longlong *)(pFVar5 + 0x28) - lVar6;
      lVar21 = *(longlong *)(pFVar5 + 0x30) - lVar6;
      lVar15 = (lVar18 - 4U >> 2) + 1;
      pFVar17 = (FSimpleWaveWriter *)(lVar15 * 4);
      puVar12 = (undefined4 *)(lVar6 + 4);
      do {
        puVar2 = puVar12 + 4;
        *(undefined4 *)pFVar13 = *(undefined4 *)(lVar19 + -4 + (longlong)puVar12);
        *(undefined4 *)(pFVar13 + 4) = puVar12[-1];
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)((longlong)puVar12 + lVar16 + -4);
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((longlong)puVar12 + lVar22 + -4);
        *(undefined4 *)(pFVar13 + 0x10) = *(undefined4 *)(lVar23 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x14) = *(undefined4 *)(lVar20 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x18) = *(undefined4 *)((longlong)puVar12 + lVar21 + -4);
        *(undefined4 *)(pFVar13 + 0x1c) = *(undefined4 *)(local_res18 + -0x14 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x20) = *(undefined4 *)(lVar19 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x24) = *puVar12;
        *(undefined4 *)(pFVar13 + 0x28) = *(undefined4 *)((longlong)puVar12 + lVar16);
        *(undefined4 *)(pFVar13 + 0x2c) = *(undefined4 *)((longlong)puVar12 + lVar22);
        *(undefined4 *)(pFVar13 + 0x30) = *(undefined4 *)(lVar23 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x34) = *(undefined4 *)(lVar20 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x38) = *(undefined4 *)((longlong)puVar12 + lVar21);
        *(undefined4 *)(pFVar13 + 0x3c) = *(undefined4 *)(local_res18 + -0x10 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x40) = *(undefined4 *)(lVar19 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x44) = puVar12[1];
        *(undefined4 *)(pFVar13 + 0x48) = *(undefined4 *)((longlong)puVar12 + lVar16 + 4);
        *(undefined4 *)(pFVar13 + 0x4c) = *(undefined4 *)((longlong)puVar12 + lVar22 + 4);
        *(undefined4 *)(pFVar13 + 0x50) = *(undefined4 *)(lVar23 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x54) = *(undefined4 *)(lVar20 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x58) = *(undefined4 *)((longlong)puVar12 + lVar21 + 4);
        *(undefined4 *)(pFVar13 + 0x5c) = *(undefined4 *)(local_res18 + -0xc + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x60) = *(undefined4 *)(lVar19 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 100) = puVar12[2];
        *(undefined4 *)(pFVar13 + 0x68) = *(undefined4 *)((longlong)puVar12 + lVar16 + 8);
        *(undefined4 *)(pFVar13 + 0x6c) = *(undefined4 *)((longlong)puVar12 + lVar22 + 8);
        *(undefined4 *)(pFVar13 + 0x70) = *(undefined4 *)(lVar23 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x74) = *(undefined4 *)(lVar20 + -8 + (longlong)puVar2);
        *(undefined4 *)(pFVar13 + 0x78) = *(undefined4 *)((longlong)puVar12 + lVar21 + 8);
        *(undefined4 *)(pFVar13 + 0x7c) = *(undefined4 *)(local_res18 + -8 + (longlong)puVar2);
        pFVar13 = pFVar13 + 0x80;
        lVar15 = lVar15 + -1;
        puVar12 = puVar2;
      } while (lVar15 != 0);
    }
    if ((longlong)pFVar17 < lVar18) {
      lVar6 = *(longlong *)(pFVar5 + 8);
      lVar15 = *(longlong *)(pFVar5 + 0x18);
      lVar16 = *(longlong *)pFVar5;
      lVar19 = *(longlong *)(pFVar5 + 0x10);
      lVar20 = *(longlong *)(pFVar5 + 0x20);
      lVar21 = *(longlong *)(pFVar5 + 0x28);
      lVar22 = *(longlong *)(pFVar5 + 0x30);
      lVar23 = *(longlong *)(pFVar5 + 0x38);
      lVar18 = lVar18 - (longlong)pFVar17;
      pFVar13 = pFVar13 + 8;
      puVar12 = (undefined4 *)(lVar6 + (longlong)pFVar17 * 4);
      do {
        *(undefined4 *)(pFVar13 + -8) = *(undefined4 *)((longlong)puVar12 + (lVar16 - lVar6));
        *(undefined4 *)(pFVar13 + -4) = *puVar12;
        *(undefined4 *)pFVar13 = *(undefined4 *)((longlong)puVar12 + (lVar19 - lVar6));
        *(undefined4 *)(pFVar13 + 4) = *(undefined4 *)((longlong)puVar12 + (lVar15 - lVar6));
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)((longlong)puVar12 + (lVar20 - lVar6));
        *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((longlong)puVar12 + (lVar21 - lVar6));
        *(undefined4 *)(pFVar13 + 0x10) = *(undefined4 *)((longlong)puVar12 + (lVar22 - lVar6));
        *(undefined4 *)(pFVar13 + 0x14) = *(undefined4 *)((longlong)puVar12 + (lVar23 - lVar6));
        lVar18 = lVar18 + -1;
        pFVar13 = pFVar13 + 0x20;
        puVar12 = puVar12 + 1;
      } while (lVar18 != 0);
    }
    pFVar17 = (this->Writer).Ptr;
    pFVar13 = (this->InterleaveBuffer).AllocatorInstance.Data;
    iVar4 = (this->InterleaveBuffer).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = iVar4;
    local_58 = pFVar13;
    iStack_50 = iVar4;
    local_48.DataPtr = (float *)pFVar13;
    Audio::FSimpleWaveWriter::Write(pFVar17,&local_48);
  }
  return;
}

// GetNodeInfo @ 14b2a09a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  FName local_res8 [4];
  FText local_158;
  FText local_148;
  FVertexInterface local_138;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"WaveWriter");
      FText::FText(&local_148);
      FText::FText(&local_158);
      pFVar1 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_138,pFVar1);
      CreateNodeClassMetadata(&local_e8,local_res8,&local_148,&local_158,&local_138);
      FVertexInterface::~FVertexInterface(&local_138);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      atexit(`Metasound::TWaveWriterOperator<1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2a0ae0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8 [4];
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"Wave Writer (Stereo)");
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TWaveWriterOperator<2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2a0c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Wave Writer (%d-Channel)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TWaveWriterOperator<3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2a0dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Wave Writer (%d-Channel)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TWaveWriterOperator<4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2a0f60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Wave Writer (%d-Channel)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TWaveWriterOperator<5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2a10f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Wave Writer (%d-Channel)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TWaveWriterOperator<6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2a1280

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Wave Writer (%d-Channel)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TWaveWriterOperator<7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2a1410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Wave Writer (%d-Channel)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = DeclareVertexInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TWaveWriterOperator<8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b2a17a0

void __thiscall
Metasound::TWaveWriterOperator<1>::Reset(TWaveWriterOperator<1> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Reset @ 14b2a17c0

void __thiscall
Metasound::TWaveWriterOperator<2>::Reset(TWaveWriterOperator<2> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Reset @ 14b2a17e0

void __thiscall
Metasound::TWaveWriterOperator<3>::Reset(TWaveWriterOperator<3> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Reset @ 14b2a1800

void __thiscall
Metasound::TWaveWriterOperator<4>::Reset(TWaveWriterOperator<4> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Reset @ 14b2a1820

void __thiscall
Metasound::TWaveWriterOperator<5>::Reset(TWaveWriterOperator<5> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Reset @ 14b2a1840

void __thiscall
Metasound::TWaveWriterOperator<6>::Reset(TWaveWriterOperator<6> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Reset @ 14b2a1860

void __thiscall
Metasound::TWaveWriterOperator<7>::Reset(TWaveWriterOperator<7> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

// Reset @ 14b2a1880

void __thiscall
Metasound::TWaveWriterOperator<8>::Reset(TWaveWriterOperator<8> *this,FResetParams *param_1)

{
  FSimpleWaveWriter *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsEnabled == false) {
    return;
  }
  if (this->bIsEnabled == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412928549823185223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundWaveWriterNode.cpp"
                       ,0x147,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->bIsEnabled = false;
    this_00 = (this->Writer).Ptr;
    if (this_00 != (FSimpleWaveWriter *)0x0) {
      (this->Writer).Ptr = (FSimpleWaveWriter *)0x0;
      Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
      ::operator_delete(this_00,0x18);
      return;
    }
  }
  return;
}

