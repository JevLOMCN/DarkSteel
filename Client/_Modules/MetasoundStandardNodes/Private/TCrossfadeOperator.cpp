// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 133

// BindInputs @ 14b03a490

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::BindInputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,8> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar3 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

// BindOutputs @ 14b03a610

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::BindOutputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,8> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03c610

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::BindInputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,7> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar3 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

// BindOutputs @ 14b03c7e0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::BindOutputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,7> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03d0d0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::BindInputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,6> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar3 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  return;
}

// BindOutputs @ 14b03d210

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::BindOutputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,6> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03d590

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::BindInputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,5> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar3 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  return;
}

// BindOutputs @ 14b03d6d0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::BindOutputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,5> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03d9f0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::BindInputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,4> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar3 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}

// BindOutputs @ 14b03db30

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::BindOutputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,4> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03dd30

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::BindInputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,3> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar3 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

// BindOutputs @ 14b03de70

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::BindOutputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,3> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03e1f0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::BindInputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar3 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return;
}

// BindOutputs @ 14b03e330

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::BindOutputs
          (TCrossfadeOperator<Metasound::FAudioBuffer,2> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03e560

void __thiscall
Metasound::TCrossfadeOperator<float,8>::BindInputs
          (TCrossfadeOperator<float,8> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_a0 = local_res8;
  local_78 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar4 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar4) {
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
    pFVar3 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar3;
    local_68 = pFVar3;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return;
}

// BindOutputs @ 14b03e690

void __thiscall
Metasound::TCrossfadeOperator<float,8>::BindOutputs
          (TCrossfadeOperator<float,8> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03f2b0

void __thiscall
Metasound::TCrossfadeOperator<float,7>::BindInputs
          (TCrossfadeOperator<float,7> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_a0 = local_res8;
  local_78 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar4 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar4) {
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
    pFVar3 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar3;
    local_68 = pFVar3;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  return;
}

// BindOutputs @ 14b03f3e0

void __thiscall
Metasound::TCrossfadeOperator<float,7>::BindOutputs
          (TCrossfadeOperator<float,7> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03f790

void __thiscall
Metasound::TCrossfadeOperator<float,6>::BindInputs
          (TCrossfadeOperator<float,6> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_a0 = local_res8;
  local_78 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar4 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar4) {
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
    pFVar3 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar3;
    local_68 = pFVar3;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  return;
}

// BindOutputs @ 14b03f8c0

void __thiscall
Metasound::TCrossfadeOperator<float,6>::BindOutputs
          (TCrossfadeOperator<float,6> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b03fc40

void __thiscall
Metasound::TCrossfadeOperator<float,5>::BindInputs
          (TCrossfadeOperator<float,5> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_a0 = local_res8;
  local_78 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar4 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar4) {
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
    pFVar3 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar3;
    local_68 = pFVar3;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  return;
}

// BindOutputs @ 14b03fd70

void __thiscall
Metasound::TCrossfadeOperator<float,5>::BindOutputs
          (TCrossfadeOperator<float,5> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0400b0

void __thiscall
Metasound::TCrossfadeOperator<float,4>::BindInputs
          (TCrossfadeOperator<float,4> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_a0 = local_res8;
  local_78 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar4 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar4) {
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
    pFVar3 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar3;
    local_68 = pFVar3;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

// BindOutputs @ 14b0401e0

void __thiscall
Metasound::TCrossfadeOperator<float,4>::BindOutputs
          (TCrossfadeOperator<float,4> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0405f0

void __thiscall
Metasound::TCrossfadeOperator<float,3>::BindInputs
          (TCrossfadeOperator<float,3> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_a0 = local_res8;
  local_78 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar4 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar4) {
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
    pFVar3 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar3;
    local_68 = pFVar3;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  return;
}

// BindOutputs @ 14b040720

void __thiscall
Metasound::TCrossfadeOperator<float,3>::BindOutputs
          (TCrossfadeOperator<float,3> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0408a0

void __thiscall
Metasound::TCrossfadeOperator<float,2>::BindInputs
          (TCrossfadeOperator<float,2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FName local_res8 [2];
  TDataReadReference<float> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_a8 [8];
  FName *local_a0;
  TDataReadReference<float> *local_98;
  code *local_90;
  TDataReadReference<float> **local_88;
  code *local_80;
  FName **local_78;
  FName local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName *local_48;
  
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  local_res18 = &this->CrossfadeValue;
  local_88 = &local_res18;
  local_a0 = local_res8;
  local_78 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  uVar4 = 0;
  do {
    if ((this->InputValues).ArrayNum <= (int)uVar4) {
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
    pFVar3 = (this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    local_70 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    local_58 = &local_res20;
    local_48 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res20 = pFVar3;
    local_68 = pFVar3;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return;
}

// BindOutputs @ 14b0409d0

void __thiscall
Metasound::TCrossfadeOperator<float,2>::BindOutputs
          (TCrossfadeOperator<float,2> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&CrossfadeVertexNames::OutputTriggerName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TCrossfadeOperator<Metasound::FAudioBuffer,2> @ 14b04eae0

TCrossfadeOperator<Metasound::FAudioBuffer,2> * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::
TCrossfadeOperator<Metasound::FAudioBuffer,2>
          (TCrossfadeOperator<Metasound::FAudioBuffer,2> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  
  this->_padding_ = (longlong)&___7__TCrossfadeOperator_VFAudioBuffer_Metasound___01_Metasound__6B_;
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->CrossfadeValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->CrossfadeValue).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
  (this->InputValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputValues).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputValues).ArrayNum = param_3->ArrayNum;
  (this->InputValues).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  piVar1 = &(this->Crossfader).PrevGains.ArrayNum;
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Crossfader).CurrentGains.ArrayMax;
  this->IndexA = 0;
  this->IndexB = 0;
  piVar4 = &(this->Crossfader).NeedsMixing.ArrayNum;
  this->Alpha = 0.0;
  this->PrevCrossfadeValue = -1.0;
  iVar8 = param_1->NumFramesPerBlock;
  piVar5 = &(this->Crossfader).CurrentGains.ArrayNum;
  *piVar1 = 0;
  (this->Crossfader).NumFramesPerBlock = iVar8;
  piVar2 = &(this->Crossfader).PrevGains.ArrayMax;
  *piVar2 = 0;
  (this->Crossfader).PrevGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Crossfader).CurrentGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  *piVar3 = 0;
  (this->Crossfader).NeedsMixing.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  piVar6 = &(this->Crossfader).NeedsMixing.ArrayMax;
  *piVar6 = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&(this->Crossfader).PrevGains.AllocatorInstance,piVar1,piVar2);
  *(undefined8 *)((this->Crossfader).PrevGains.AllocatorInstance.Data + (longlong)iVar8 * 4) = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&(this->Crossfader).CurrentGains.AllocatorInstance,piVar5,piVar3);
  *(undefined8 *)((this->Crossfader).CurrentGains.AllocatorInstance.Data + (longlong)iVar8 * 4) = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,2,&(this->Crossfader).NeedsMixing.AllocatorInstance,piVar4,piVar6);
  *(undefined2 *)((this->Crossfader).NeedsMixing.AllocatorInstance.Data + iVar8) = 0;
  PerformCrossfadeOutput(this);
  return this;
}

// TCrossfadeOperator<Metasound::FAudioBuffer,3> @ 14b04eca0

TCrossfadeOperator<Metasound::FAudioBuffer,3> * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::
TCrossfadeOperator<Metasound::FAudioBuffer,3>
          (TCrossfadeOperator<Metasound::FAudioBuffer,3> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  this->_padding_ = (longlong)&___7__TCrossfadeOperator_VFAudioBuffer_Metasound___02_Metasound__6B_;
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->CrossfadeValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->CrossfadeValue).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
  (this->InputValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputValues).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputValues).ArrayNum = param_3->ArrayNum;
  (this->InputValues).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  piVar1 = &(this->Crossfader).PrevGains.ArrayNum;
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Crossfader).CurrentGains.ArrayMax;
  this->IndexA = 0;
  this->IndexB = 0;
  piVar4 = &(this->Crossfader).NeedsMixing.ArrayNum;
  this->Alpha = 0.0;
  this->PrevCrossfadeValue = -1.0;
  iVar8 = param_1->NumFramesPerBlock;
  piVar5 = &(this->Crossfader).CurrentGains.ArrayNum;
  *piVar1 = 0;
  (this->Crossfader).NumFramesPerBlock = iVar8;
  piVar2 = &(this->Crossfader).PrevGains.ArrayMax;
  *piVar2 = 0;
  (this->Crossfader).PrevGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Crossfader).CurrentGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  *piVar3 = 0;
  (this->Crossfader).NeedsMixing.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  piVar6 = &(this->Crossfader).NeedsMixing.ArrayMax;
  *piVar6 = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&(this->Crossfader).PrevGains.AllocatorInstance,piVar1,piVar2);
  pFVar9 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  *(undefined8 *)(pFVar9 + (longlong)iVar8 * 4) = 0;
  *(undefined4 *)(pFVar9 + (longlong)iVar8 * 4 + 8) = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&(this->Crossfader).CurrentGains.AllocatorInstance,piVar5,piVar3);
  pFVar9 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  *(undefined8 *)(pFVar9 + (longlong)iVar8 * 4) = 0;
  *(undefined4 *)(pFVar9 + (longlong)iVar8 * 4 + 8) = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,3,&(this->Crossfader).NeedsMixing.AllocatorInstance,piVar4,piVar6);
  pFVar9 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data + iVar8;
  *(undefined2 *)pFVar9 = 0;
  pFVar9[2] = (FScriptContainerElement)0x0;
  PerformCrossfadeOutput(this);
  return this;
}

// TCrossfadeOperator<Metasound::FAudioBuffer,4> @ 14b04ee70

TCrossfadeOperator<Metasound::FAudioBuffer,4> * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::
TCrossfadeOperator<Metasound::FAudioBuffer,4>
          (TCrossfadeOperator<Metasound::FAudioBuffer,4> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  
  this->_padding_ = (longlong)&___7__TCrossfadeOperator_VFAudioBuffer_Metasound___03_Metasound__6B_;
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->CrossfadeValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar8 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->CrossfadeValue).field_0x10 = lVar8;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
  (this->InputValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputValues).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputValues).ArrayNum = param_3->ArrayNum;
  (this->InputValues).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  piVar1 = &(this->Crossfader).PrevGains.ArrayNum;
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Crossfader).CurrentGains.ArrayMax;
  this->IndexA = 0;
  this->IndexB = 0;
  piVar4 = &(this->Crossfader).NeedsMixing.ArrayNum;
  this->Alpha = 0.0;
  this->PrevCrossfadeValue = -1.0;
  iVar9 = param_1->NumFramesPerBlock;
  piVar5 = &(this->Crossfader).CurrentGains.ArrayNum;
  *piVar1 = 0;
  (this->Crossfader).NumFramesPerBlock = iVar9;
  piVar2 = &(this->Crossfader).PrevGains.ArrayMax;
  *piVar2 = 0;
  (this->Crossfader).PrevGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Crossfader).CurrentGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  *piVar3 = 0;
  (this->Crossfader).NeedsMixing.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  piVar6 = &(this->Crossfader).NeedsMixing.ArrayMax;
  *piVar6 = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&(this->Crossfader).PrevGains.AllocatorInstance,piVar1,piVar2);
  pFVar7 = (this->Crossfader).PrevGains.AllocatorInstance.Data + (longlong)iVar9 * 4;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&(this->Crossfader).CurrentGains.AllocatorInstance,piVar5,piVar3);
  pFVar7 = (this->Crossfader).CurrentGains.AllocatorInstance.Data + (longlong)iVar9 * 4;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&(this->Crossfader).NeedsMixing.AllocatorInstance,piVar4,piVar6);
  *(undefined4 *)((this->Crossfader).NeedsMixing.AllocatorInstance.Data + iVar9) = 0;
  PerformCrossfadeOutput(this);
  return this;
}

// TCrossfadeOperator<Metasound::FAudioBuffer,5> @ 14b04f030

TCrossfadeOperator<Metasound::FAudioBuffer,5> * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::
TCrossfadeOperator<Metasound::FAudioBuffer,5>
          (TCrossfadeOperator<Metasound::FAudioBuffer,5> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  this->_padding_ = (longlong)&___7__TCrossfadeOperator_VFAudioBuffer_Metasound___04_Metasound__6B_;
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->CrossfadeValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->CrossfadeValue).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
  (this->InputValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputValues).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputValues).ArrayNum = param_3->ArrayNum;
  (this->InputValues).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  piVar1 = &(this->Crossfader).PrevGains.ArrayNum;
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Crossfader).CurrentGains.ArrayMax;
  this->IndexA = 0;
  this->IndexB = 0;
  piVar4 = &(this->Crossfader).NeedsMixing.ArrayNum;
  this->Alpha = 0.0;
  this->PrevCrossfadeValue = -1.0;
  iVar9 = param_1->NumFramesPerBlock;
  piVar5 = &(this->Crossfader).CurrentGains.ArrayNum;
  *piVar1 = 0;
  (this->Crossfader).NumFramesPerBlock = iVar9;
  piVar2 = &(this->Crossfader).PrevGains.ArrayMax;
  *piVar2 = 0;
  (this->Crossfader).PrevGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Crossfader).CurrentGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  *piVar3 = 0;
  (this->Crossfader).NeedsMixing.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  piVar6 = &(this->Crossfader).NeedsMixing.ArrayMax;
  *piVar6 = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&(this->Crossfader).PrevGains.AllocatorInstance,piVar1,piVar2);
  pFVar8 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  pFVar10 = pFVar8 + (longlong)iVar9 * 4;
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(undefined4 *)(pFVar8 + (longlong)iVar9 * 4 + 0x10) = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&(this->Crossfader).CurrentGains.AllocatorInstance,piVar5,piVar3);
  pFVar8 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  pFVar10 = pFVar8 + (longlong)iVar9 * 4;
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(undefined4 *)(pFVar8 + (longlong)iVar9 * 4 + 0x10) = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,5,&(this->Crossfader).NeedsMixing.AllocatorInstance,piVar4,piVar6);
  pFVar10 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data + iVar9;
  *(undefined4 *)pFVar10 = 0;
  pFVar10[4] = (FScriptContainerElement)0x0;
  PerformCrossfadeOutput(this);
  return this;
}

// TCrossfadeOperator<Metasound::FAudioBuffer,6> @ 14b04f200

TCrossfadeOperator<Metasound::FAudioBuffer,6> * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::
TCrossfadeOperator<Metasound::FAudioBuffer,6>
          (TCrossfadeOperator<Metasound::FAudioBuffer,6> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  this->_padding_ = (longlong)&___7__TCrossfadeOperator_VFAudioBuffer_Metasound___05_Metasound__6B_;
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->CrossfadeValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->CrossfadeValue).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
  (this->InputValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputValues).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputValues).ArrayNum = param_3->ArrayNum;
  (this->InputValues).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  piVar1 = &(this->Crossfader).PrevGains.ArrayNum;
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Crossfader).CurrentGains.ArrayMax;
  this->IndexA = 0;
  this->IndexB = 0;
  piVar4 = &(this->Crossfader).NeedsMixing.ArrayNum;
  this->Alpha = 0.0;
  this->PrevCrossfadeValue = -1.0;
  iVar9 = param_1->NumFramesPerBlock;
  piVar5 = &(this->Crossfader).CurrentGains.ArrayNum;
  *piVar1 = 0;
  (this->Crossfader).NumFramesPerBlock = iVar9;
  piVar2 = &(this->Crossfader).PrevGains.ArrayMax;
  *piVar2 = 0;
  (this->Crossfader).PrevGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Crossfader).CurrentGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  *piVar3 = 0;
  (this->Crossfader).NeedsMixing.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  piVar6 = &(this->Crossfader).NeedsMixing.ArrayMax;
  *piVar6 = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&(this->Crossfader).PrevGains.AllocatorInstance,piVar1,piVar2);
  pFVar8 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  pFVar10 = pFVar8 + (longlong)iVar9 * 4;
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(undefined8 *)(pFVar8 + (longlong)iVar9 * 4 + 0x10) = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,&(this->Crossfader).CurrentGains.AllocatorInstance,piVar5,piVar3);
  pFVar8 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  pFVar10 = pFVar8 + (longlong)iVar9 * 4;
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(undefined8 *)(pFVar8 + (longlong)iVar9 * 4 + 0x10) = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,6,&(this->Crossfader).NeedsMixing.AllocatorInstance,piVar4,piVar6);
  pFVar10 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data + iVar9;
  *(undefined4 *)pFVar10 = 0;
  *(undefined2 *)(pFVar10 + 4) = 0;
  PerformCrossfadeOutput(this);
  return this;
}

// TCrossfadeOperator<Metasound::FAudioBuffer,7> @ 14b04f3d0

TCrossfadeOperator<Metasound::FAudioBuffer,7> * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::
TCrossfadeOperator<Metasound::FAudioBuffer,7>
          (TCrossfadeOperator<Metasound::FAudioBuffer,7> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  this->_padding_ = (longlong)&___7__TCrossfadeOperator_VFAudioBuffer_Metasound___06_Metasound__6B_;
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->CrossfadeValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar9 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->CrossfadeValue).field_0x10 = lVar9;
  if (lVar9 != 0) {
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
  }
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
  (this->InputValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputValues).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputValues).ArrayNum = param_3->ArrayNum;
  (this->InputValues).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  piVar1 = &(this->Crossfader).PrevGains.ArrayNum;
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Crossfader).CurrentGains.ArrayNum;
  this->IndexA = 0;
  this->IndexB = 0;
  piVar4 = &(this->Crossfader).CurrentGains.ArrayMax;
  this->Alpha = 0.0;
  piVar5 = &(this->Crossfader).NeedsMixing.ArrayNum;
  this->PrevCrossfadeValue = -1.0;
  iVar7 = param_1->NumFramesPerBlock;
  *piVar1 = 0;
  (this->Crossfader).NumFramesPerBlock = iVar7;
  piVar2 = &(this->Crossfader).PrevGains.ArrayMax;
  *piVar2 = 0;
  (this->Crossfader).PrevGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Crossfader).CurrentGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar4 = 0;
  (this->Crossfader).NeedsMixing.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  piVar6 = &(this->Crossfader).NeedsMixing.ArrayMax;
  *piVar6 = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&(this->Crossfader).PrevGains.AllocatorInstance,piVar1,piVar2);
  lVar9 = (longlong)iVar7;
  pFVar8 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  *(undefined8 *)(pFVar8 + lVar9 * 4) = 0;
  *(undefined8 *)(pFVar8 + lVar9 * 4 + 8) = 0;
  *(undefined8 *)(pFVar8 + lVar9 * 4 + 0x10) = 0;
  *(undefined4 *)(pFVar8 + lVar9 * 4 + 0x18) = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&(this->Crossfader).CurrentGains.AllocatorInstance,piVar3,piVar4);
  lVar9 = (longlong)iVar7;
  pFVar8 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  *(undefined8 *)(pFVar8 + lVar9 * 4) = 0;
  *(undefined8 *)(pFVar8 + lVar9 * 4 + 8) = 0;
  *(undefined8 *)(pFVar8 + lVar9 * 4 + 0x10) = 0;
  *(undefined4 *)(pFVar8 + lVar9 * 4 + 0x18) = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,7,&(this->Crossfader).NeedsMixing.AllocatorInstance,piVar5,piVar6);
  pFVar8 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data + iVar7;
  *(undefined4 *)pFVar8 = 0;
  *(undefined2 *)(pFVar8 + 4) = 0;
  pFVar8[6] = (FScriptContainerElement)0x0;
  PerformCrossfadeOutput(this);
  return this;
}

// TCrossfadeOperator<Metasound::FAudioBuffer,8> @ 14b04f5b0

TCrossfadeOperator<Metasound::FAudioBuffer,8> * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::
TCrossfadeOperator<Metasound::FAudioBuffer,8>
          (TCrossfadeOperator<Metasound::FAudioBuffer,8> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  
  this->_padding_ = (longlong)&___7__TCrossfadeOperator_VFAudioBuffer_Metasound___07_Metasound__6B_;
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->CrossfadeValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar8 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->CrossfadeValue).field_0x10 = lVar8;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  *(undefined ***)&this->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
  (this->InputValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputValues).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputValues).ArrayNum = param_3->ArrayNum;
  (this->InputValues).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  piVar1 = &(this->Crossfader).PrevGains.ArrayNum;
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Crossfader).CurrentGains.ArrayMax;
  this->IndexA = 0;
  this->IndexB = 0;
  piVar4 = &(this->Crossfader).NeedsMixing.ArrayNum;
  this->Alpha = 0.0;
  this->PrevCrossfadeValue = -1.0;
  iVar10 = param_1->NumFramesPerBlock;
  piVar5 = &(this->Crossfader).CurrentGains.ArrayNum;
  *piVar1 = 0;
  (this->Crossfader).NumFramesPerBlock = iVar10;
  piVar2 = &(this->Crossfader).PrevGains.ArrayMax;
  *piVar2 = 0;
  (this->Crossfader).PrevGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Crossfader).CurrentGains.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar5 = 0;
  *piVar3 = 0;
  (this->Crossfader).NeedsMixing.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  piVar6 = &(this->Crossfader).NeedsMixing.ArrayMax;
  *piVar6 = 0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,8,&(this->Crossfader).PrevGains.AllocatorInstance,piVar1,piVar2);
  pFVar9 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  pFVar7 = pFVar9 + (longlong)iVar10 * 4;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  pFVar9 = pFVar9 + (longlong)iVar10 * 4 + 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,8,&(this->Crossfader).CurrentGains.AllocatorInstance,piVar5,piVar3);
  pFVar9 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  pFVar7 = pFVar9 + (longlong)iVar10 * 4;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  pFVar9 = pFVar9 + (longlong)iVar10 * 4 + 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,8,&(this->Crossfader).NeedsMixing.AllocatorInstance,piVar4,piVar6);
  *(undefined8 *)((this->Crossfader).NeedsMixing.AllocatorInstance.Data + iVar10) = 0;
  PerformCrossfadeOutput(this);
  return this;
}

// ~TCrossfadeOperator<float,2> @ 14b053970

void __thiscall
Metasound::TCrossfadeOperator<float,2>::~TCrossfadeOperator<float,2>
          (TCrossfadeOperator<float,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<float,3> @ 14b0539c0

void __thiscall
Metasound::TCrossfadeOperator<float,3>::~TCrossfadeOperator<float,3>
          (TCrossfadeOperator<float,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<float,4> @ 14b053a10

void __thiscall
Metasound::TCrossfadeOperator<float,4>::~TCrossfadeOperator<float,4>
          (TCrossfadeOperator<float,4> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<float,5> @ 14b053a60

void __thiscall
Metasound::TCrossfadeOperator<float,5>::~TCrossfadeOperator<float,5>
          (TCrossfadeOperator<float,5> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<float,6> @ 14b053ab0

void __thiscall
Metasound::TCrossfadeOperator<float,6>::~TCrossfadeOperator<float,6>
          (TCrossfadeOperator<float,6> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<float,7> @ 14b053b00

void __thiscall
Metasound::TCrossfadeOperator<float,7>::~TCrossfadeOperator<float,7>
          (TCrossfadeOperator<float,7> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<float,8> @ 14b053b50

void __thiscall
Metasound::TCrossfadeOperator<float,8>::~TCrossfadeOperator<float,8>
          (TCrossfadeOperator<float,8> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<Metasound::FAudioBuffer,2> @ 14b053ba0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::
~TCrossfadeOperator<Metasound::FAudioBuffer,2>(TCrossfadeOperator<Metasound::FAudioBuffer,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<Metasound::FAudioBuffer,3> @ 14b053c20

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::
~TCrossfadeOperator<Metasound::FAudioBuffer,3>(TCrossfadeOperator<Metasound::FAudioBuffer,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<Metasound::FAudioBuffer,4> @ 14b053ca0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::
~TCrossfadeOperator<Metasound::FAudioBuffer,4>(TCrossfadeOperator<Metasound::FAudioBuffer,4> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<Metasound::FAudioBuffer,5> @ 14b053d20

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::
~TCrossfadeOperator<Metasound::FAudioBuffer,5>(TCrossfadeOperator<Metasound::FAudioBuffer,5> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<Metasound::FAudioBuffer,6> @ 14b053da0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::
~TCrossfadeOperator<Metasound::FAudioBuffer,6>(TCrossfadeOperator<Metasound::FAudioBuffer,6> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<Metasound::FAudioBuffer,7> @ 14b053e20

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::
~TCrossfadeOperator<Metasound::FAudioBuffer,7>(TCrossfadeOperator<Metasound::FAudioBuffer,7> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TCrossfadeOperator<Metasound::FAudioBuffer,8> @ 14b053ea0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::
~TCrossfadeOperator<Metasound::FAudioBuffer,8>(TCrossfadeOperator<Metasound::FAudioBuffer,8> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b056320

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<float,2>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<float,2>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0566c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<float,3>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<float,3>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b056a60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<float,4>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<float,4>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b056e00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<float,5>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<float,5>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0571a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<float,6>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<float,6>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b057540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<float,7>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<float,7>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0578e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<float,8>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<float,8>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b057c80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b058020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0583c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b058760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b058b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b058ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b059240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1b8;
  FNodeClassName local_1a8;
  FString local_188;
  FText local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::ToString(&local_res18,(FString *)&local_178);
  ::FString::PrintfImpl((FString *)&local_1b8,L"Trigger Route (%s, %d)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_1b8.ArrayNum != 0) {
    FVar4.Data = local_1b8.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar4.Data);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  FText::FText(&local_118);
  FText::FText(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface'::__l2::<lambda_1>::operator()
              (local_res10,
               &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface(void)'
                ::__l2::DefaultInterface);
    atexit(TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  Metasound::FVertexInterface::FVertexInterface
            (&local_c8,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FText,FText,int>(local_1b8.AllocatorInstance.Data,&local_138,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_108.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  FVar4.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_108.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,FVar4.Data,lVar5 * 2);
  }
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  local_178.TextData.Reference = local_118.TextData.Reference;
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 8))
              (local_118.TextData.Reference,local_res10);
  }
  local_178.Flags = local_118.Flags;
  ::FName::FName(local_168,"Crossfade");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar3->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar3->Variant;
  local_1a8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_178,&local_f8,&local_188,&local_108,pFVar2
             ,&local_1b8,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05aae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<float,2>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<float> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<float> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05ad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<float,3>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<float> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<float> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05af20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<float,4>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<float> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<float> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05b140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<float,5>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<float> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<float> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 5);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<float,6>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<float> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<float> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05b580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<float,7>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<float> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<float> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 7);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05b7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<float,8>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<float> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<float> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05b9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface'::__l2::<lambda_1>::
operator()(void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface'::__l2::<lambda_1>::
operator()(void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05be00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface'::__l2::<lambda_1>::
operator()(void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05c020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface'::__l2::<lambda_1>::
operator()(void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 5);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05c240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface'::__l2::<lambda_1>::
operator()(void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05c460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface'::__l2::<lambda_1>::
operator()(void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 7);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b05c680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface'::__l2::<lambda_1>::
operator()(void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FName FVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  FInputVertexInterface local_128;
  FOutputVertexInterface local_108;
  FDataVertexMetadata local_e8;
  undefined1 local_c0 [8];
  TOutputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
                     (&local_98,&Metasound::CrossfadeVertexNames::InputCrossfadeValueName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar7 = 0;
  do {
    FText::FText(&local_e8.Description);
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    FVar5 = Metasound::CrossfadeVertexNames::GetInputName((uint)local_c0);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>(&local_60,(FName *)FVar5,&local_e8);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar8 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar8])(&local_60.field_0x20);
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_b8,&Metasound::CrossfadeVertexNames::OutputTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_108);
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
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0618c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<float,2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<float,2> *this_00;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  TCrossfadeOperator<float,2> *pTVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<float> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  FName local_b8;
  undefined1 local_b0 [8];
  FString local_a8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_b8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar11 = (TCrossfadeOperator<float,2> *)0x0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  FVar6 = CrossfadeVertexNames::GetInputName((uint)local_b0);
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)FVar6);
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar6,&local_a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_d8,pFVar2,pFVar9);
    bVar1 = local_60.TypeIndex;
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    pTVar10 = &local_60;
LAB_14b061a84:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar10);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_78,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_78);
      bVar1 = local_78.TypeIndex;
      if ((0xc < local_78.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar10 = &local_78;
      goto LAB_14b061a84;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<float> *)local_d8);
  }
  if (local_e8.Data <= (TDataReadReference<float> *)local_d8) {
    if ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)local_e0._4_4_ * 0x20) {
      local_100 = (longlong)(int)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)local_e0._4_4_;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
    }
  }
  iVar5 = (int)local_e0;
  if ((int)local_e0 == local_e0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_e8,(int *)((longlong)&local_e0 + 4));
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar5 + 1);
  lVar12 = (longlong)iVar5 * 0x20;
  *(undefined ***)(local_e8.Data + lVar12) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(local_e8.Data + lVar12 + 8) = local_d8._8_8_;
  *(undefined8 *)(local_e8.Data + lVar12 + 0x10) = local_d8._16_8_;
  if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
  }
  *(undefined ***)(local_e8.Data + lVar12) = &___7__TDataReadReference_M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FVar6 = CrossfadeVertexNames::GetInputName((uint)local_b0);
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)FVar6);
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar6,&local_a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_d8,pFVar2,pFVar9);
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    pTVar10 = &local_60;
    local_78.TypeIndex = local_60.TypeIndex;
  }
  else {
    if ((pFVar7->Data).bIsSet != false) {
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<float> *)local_d8);
      goto LAB_14b061cd0;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_78,&(pFVar7->Vertex).Literal.Value);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_78);
    if ((0xc < local_78.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    pTVar10 = &local_78;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_78.TypeIndex])(pTVar10);
LAB_14b061cd0:
  if (local_e8.Data <= (TDataReadReference<float> *)local_d8) {
    if ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)local_e0._4_4_ * 0x20) {
      local_100 = (longlong)(int)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)local_e0._4_4_;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
    }
  }
  iVar5 = (int)local_e0;
  if ((int)local_e0 == local_e0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_e8,(int *)((longlong)&local_e0 + 4));
  }
  lVar12 = (longlong)iVar5 * 0x20;
  *(undefined ***)(local_e8.Data + lVar12) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(local_e8.Data + lVar12 + 8) = local_d8._8_8_;
  *(undefined8 *)(local_e8.Data + lVar12 + 0x10) = local_d8._16_8_;
  if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
  }
  *(undefined ***)(local_e8.Data + lVar12) = &___7__TDataReadReference_M_Metasound__6B_;
  local_e0._0_4_ = iVar5 + 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  this_00 = ::operator_new(0x70);
  if (this_00 != (TCrossfadeOperator<float,2> *)0x0) {
    this_00->_padding_ = (longlong)&___7__TCrossfadeOperator_M_01_Metasound__6B_;
    *(undefined ***)&this_00->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->CrossfadeValue).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->CrossfadeValue).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
    (this_00->InputValues).AllocatorInstance.Data = local_e8.Data;
    local_e8.Data = (FScriptContainerElement *)0x0;
    (this_00->InputValues).ArrayNum = (int)local_e0;
    (this_00->InputValues).ArrayMax = local_e0._4_4_;
    local_e0._0_4_ = 0;
    local_e0._4_4_ = 0;
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)&this_00->OutputValue,NewObject);
    *(undefined ***)&this_00->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
    this_00->PrevCrossfadeValue = -1.0;
    this_00->IndexA = 0;
    this_00->IndexB = 0;
    this_00->Alpha = 0.0;
    PerformCrossfadeOutput(this_00);
    pTVar11 = this_00;
  }
  param_1->Node = (INode *)pTVar11;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_e8.Data,(int)local_e0);
  if ((TDataReadReference<float> *)local_e8.Data != (TDataReadReference<float> *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b061e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<float,3>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  FName this_00;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FLiteral *pFVar8;
  TCrossfadeOperator<float,3> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<float> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar10 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar6 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar6 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_d8,pFVar2,pFVar8);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar9 = &local_58;
LAB_14b062065:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar9);
    }
    else {
      if ((pFVar6->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar6->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar9 = &local_70;
        goto LAB_14b062065;
      }
      if (((pFVar6->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar6->Data).TypedValue,(TDataReadReference<float> *)local_d8);
    }
    if ((local_e8.Data <= (TDataReadReference<float> *)local_d8) &&
       ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)iStack_dc * 0x20)) {
      local_100 = (longlong)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)iStack_dc;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
    }
    if (local_e0 == iStack_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_e8,&iStack_dc);
    }
    lVar11 = (longlong)local_e0 * 0x20;
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(local_e8.Data + lVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(local_e8.Data + lVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReadReference_M_Metasound__6B_;
    local_e0 = local_e0 + 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar10 = uVar10 + 1;
    if (2 < uVar10) {
      this_01 = ::operator_new(0x70);
      if (this_01 == (TCrossfadeOperator<float,3> *)0x0) {
        this_01 = (TCrossfadeOperator<float,3> *)0x0;
      }
      else {
        this_01->_padding_ = (longlong)&___7__TCrossfadeOperator_M_02_Metasound__6B_;
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x8 = local_90._8_8_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x10 = local_90._16_8_;
        if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
          *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
        }
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
        (this_01->InputValues).AllocatorInstance.Data = local_e8.Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        (this_01->InputValues).ArrayNum = local_e0;
        (this_01->InputValues).ArrayMax = iStack_dc;
        local_e0 = 0;
        iStack_dc = 0;
        TDataReference<float>::TDataReference<float><>
                  ((TDataReference<float> *)&this_01->OutputValue,NewObject);
        *(undefined ***)&this_01->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
        this_01->PrevCrossfadeValue = -1.0;
        this_01->IndexA = 0;
        this_01->IndexB = 0;
        this_01->Alpha = 0.0;
        PerformCrossfadeOutput(this_01);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)this_01;
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_e8.Data,local_e0);
      if ((TDataReadReference<float> *)local_e8.Data != (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b062240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<float,4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  FName this_00;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FLiteral *pFVar8;
  TCrossfadeOperator<float,4> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<float> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar10 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar6 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar6 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_d8,pFVar2,pFVar8);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar9 = &local_58;
LAB_14b062415:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar9);
    }
    else {
      if ((pFVar6->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar6->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar9 = &local_70;
        goto LAB_14b062415;
      }
      if (((pFVar6->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar6->Data).TypedValue,(TDataReadReference<float> *)local_d8);
    }
    if ((local_e8.Data <= (TDataReadReference<float> *)local_d8) &&
       ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)iStack_dc * 0x20)) {
      local_100 = (longlong)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)iStack_dc;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
    }
    if (local_e0 == iStack_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_e8,&iStack_dc);
    }
    lVar11 = (longlong)local_e0 * 0x20;
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(local_e8.Data + lVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(local_e8.Data + lVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReadReference_M_Metasound__6B_;
    local_e0 = local_e0 + 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar10 = uVar10 + 1;
    if (3 < uVar10) {
      this_01 = ::operator_new(0x70);
      if (this_01 == (TCrossfadeOperator<float,4> *)0x0) {
        this_01 = (TCrossfadeOperator<float,4> *)0x0;
      }
      else {
        this_01->_padding_ = (longlong)&___7__TCrossfadeOperator_M_03_Metasound__6B_;
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x8 = local_90._8_8_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x10 = local_90._16_8_;
        if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
          *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
        }
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
        (this_01->InputValues).AllocatorInstance.Data = local_e8.Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        (this_01->InputValues).ArrayNum = local_e0;
        (this_01->InputValues).ArrayMax = iStack_dc;
        local_e0 = 0;
        iStack_dc = 0;
        TDataReference<float>::TDataReference<float><>
                  ((TDataReference<float> *)&this_01->OutputValue,NewObject);
        *(undefined ***)&this_01->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
        this_01->PrevCrossfadeValue = -1.0;
        this_01->IndexA = 0;
        this_01->IndexB = 0;
        this_01->Alpha = 0.0;
        PerformCrossfadeOutput(this_01);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)this_01;
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_e8.Data,local_e0);
      if ((TDataReadReference<float> *)local_e8.Data != (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b0625f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<float,5>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  FName this_00;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FLiteral *pFVar8;
  TCrossfadeOperator<float,5> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<float> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar10 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar6 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar6 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_d8,pFVar2,pFVar8);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar9 = &local_58;
LAB_14b0627c5:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar9);
    }
    else {
      if ((pFVar6->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar6->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar9 = &local_70;
        goto LAB_14b0627c5;
      }
      if (((pFVar6->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar6->Data).TypedValue,(TDataReadReference<float> *)local_d8);
    }
    if ((local_e8.Data <= (TDataReadReference<float> *)local_d8) &&
       ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)iStack_dc * 0x20)) {
      local_100 = (longlong)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)iStack_dc;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
    }
    if (local_e0 == iStack_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_e8,&iStack_dc);
    }
    lVar11 = (longlong)local_e0 * 0x20;
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(local_e8.Data + lVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(local_e8.Data + lVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReadReference_M_Metasound__6B_;
    local_e0 = local_e0 + 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar10 = uVar10 + 1;
    if (4 < uVar10) {
      this_01 = ::operator_new(0x70);
      if (this_01 == (TCrossfadeOperator<float,5> *)0x0) {
        this_01 = (TCrossfadeOperator<float,5> *)0x0;
      }
      else {
        this_01->_padding_ = (longlong)&___7__TCrossfadeOperator_M_04_Metasound__6B_;
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x8 = local_90._8_8_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x10 = local_90._16_8_;
        if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
          *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
        }
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
        (this_01->InputValues).AllocatorInstance.Data = local_e8.Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        (this_01->InputValues).ArrayNum = local_e0;
        (this_01->InputValues).ArrayMax = iStack_dc;
        local_e0 = 0;
        iStack_dc = 0;
        TDataReference<float>::TDataReference<float><>
                  ((TDataReference<float> *)&this_01->OutputValue,NewObject);
        *(undefined ***)&this_01->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
        this_01->PrevCrossfadeValue = -1.0;
        this_01->IndexA = 0;
        this_01->IndexB = 0;
        this_01->Alpha = 0.0;
        PerformCrossfadeOutput(this_01);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)this_01;
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_e8.Data,local_e0);
      if ((TDataReadReference<float> *)local_e8.Data != (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b0629a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<float,6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  FName this_00;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FLiteral *pFVar8;
  TCrossfadeOperator<float,6> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<float> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar10 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar6 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar6 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_d8,pFVar2,pFVar8);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar9 = &local_58;
LAB_14b062b75:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar9);
    }
    else {
      if ((pFVar6->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar6->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar9 = &local_70;
        goto LAB_14b062b75;
      }
      if (((pFVar6->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar6->Data).TypedValue,(TDataReadReference<float> *)local_d8);
    }
    if ((local_e8.Data <= (TDataReadReference<float> *)local_d8) &&
       ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)iStack_dc * 0x20)) {
      local_100 = (longlong)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)iStack_dc;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
    }
    if (local_e0 == iStack_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_e8,&iStack_dc);
    }
    lVar11 = (longlong)local_e0 * 0x20;
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(local_e8.Data + lVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(local_e8.Data + lVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReadReference_M_Metasound__6B_;
    local_e0 = local_e0 + 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar10 = uVar10 + 1;
    if (5 < uVar10) {
      this_01 = ::operator_new(0x70);
      if (this_01 == (TCrossfadeOperator<float,6> *)0x0) {
        this_01 = (TCrossfadeOperator<float,6> *)0x0;
      }
      else {
        this_01->_padding_ = (longlong)&___7__TCrossfadeOperator_M_05_Metasound__6B_;
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x8 = local_90._8_8_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x10 = local_90._16_8_;
        if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
          *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
        }
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
        (this_01->InputValues).AllocatorInstance.Data = local_e8.Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        (this_01->InputValues).ArrayNum = local_e0;
        (this_01->InputValues).ArrayMax = iStack_dc;
        local_e0 = 0;
        iStack_dc = 0;
        TDataReference<float>::TDataReference<float><>
                  ((TDataReference<float> *)&this_01->OutputValue,NewObject);
        *(undefined ***)&this_01->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
        this_01->PrevCrossfadeValue = -1.0;
        this_01->IndexA = 0;
        this_01->IndexB = 0;
        this_01->Alpha = 0.0;
        PerformCrossfadeOutput(this_01);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)this_01;
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_e8.Data,local_e0);
      if ((TDataReadReference<float> *)local_e8.Data != (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b062d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<float,7>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  FName this_00;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FLiteral *pFVar8;
  TCrossfadeOperator<float,7> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<float> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar10 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar6 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar6 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_d8,pFVar2,pFVar8);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar9 = &local_58;
LAB_14b062f25:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar9);
    }
    else {
      if ((pFVar6->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar6->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar9 = &local_70;
        goto LAB_14b062f25;
      }
      if (((pFVar6->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar6->Data).TypedValue,(TDataReadReference<float> *)local_d8);
    }
    if ((local_e8.Data <= (TDataReadReference<float> *)local_d8) &&
       ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)iStack_dc * 0x20)) {
      local_100 = (longlong)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)iStack_dc;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
    }
    if (local_e0 == iStack_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_e8,&iStack_dc);
    }
    lVar11 = (longlong)local_e0 * 0x20;
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(local_e8.Data + lVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(local_e8.Data + lVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReadReference_M_Metasound__6B_;
    local_e0 = local_e0 + 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar10 = uVar10 + 1;
    if (6 < uVar10) {
      this_01 = ::operator_new(0x70);
      if (this_01 == (TCrossfadeOperator<float,7> *)0x0) {
        this_01 = (TCrossfadeOperator<float,7> *)0x0;
      }
      else {
        this_01->_padding_ = (longlong)&___7__TCrossfadeOperator_M_06_Metasound__6B_;
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x8 = local_90._8_8_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x10 = local_90._16_8_;
        if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
          *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
        }
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
        (this_01->InputValues).AllocatorInstance.Data = local_e8.Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        (this_01->InputValues).ArrayNum = local_e0;
        (this_01->InputValues).ArrayMax = iStack_dc;
        local_e0 = 0;
        iStack_dc = 0;
        TDataReference<float>::TDataReference<float><>
                  ((TDataReference<float> *)&this_01->OutputValue,NewObject);
        *(undefined ***)&this_01->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
        this_01->PrevCrossfadeValue = -1.0;
        this_01->IndexA = 0;
        this_01->IndexB = 0;
        this_01->Alpha = 0.0;
        PerformCrossfadeOutput(this_01);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)this_01;
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_e8.Data,local_e0);
      if ((TDataReadReference<float> *)local_e8.Data != (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b063100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<float,8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  FName this_00;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FLiteral *pFVar8;
  TCrossfadeOperator<float,8> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<float> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar10 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar6 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar6 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_d8,pFVar2,pFVar8);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar9 = &local_58;
LAB_14b0632d5:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar9);
    }
    else {
      if ((pFVar6->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar6->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_d8,pFVar2,(FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar9 = &local_70;
        goto LAB_14b0632d5;
      }
      if (((pFVar6->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar6->Data).TypedValue,(TDataReadReference<float> *)local_d8);
    }
    if ((local_e8.Data <= (TDataReadReference<float> *)local_d8) &&
       ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)iStack_dc * 0x20)) {
      local_100 = (longlong)local_e0;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<float> *)local_e8.Data;
      local_108 = (longlong)iStack_dc;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
    }
    if (local_e0 == iStack_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_e8,&iStack_dc);
    }
    lVar11 = (longlong)local_e0 * 0x20;
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(local_e8.Data + lVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(local_e8.Data + lVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)(local_e8.Data + lVar11) = &___7__TDataReadReference_M_Metasound__6B_;
    local_e0 = local_e0 + 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar10 = uVar10 + 1;
    if (7 < uVar10) {
      this_01 = ::operator_new(0x70);
      if (this_01 == (TCrossfadeOperator<float,8> *)0x0) {
        this_01 = (TCrossfadeOperator<float,8> *)0x0;
      }
      else {
        this_01->_padding_ = (longlong)&___7__TCrossfadeOperator_M_07_Metasound__6B_;
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReference_M_Metasound__6B_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x8 = local_90._8_8_;
        *(undefined8 *)&(this_01->CrossfadeValue).field_0x10 = local_90._16_8_;
        if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
          *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
        }
        *(undefined ***)&this_01->CrossfadeValue = &___7__TDataReadReference_M_Metasound__6B_;
        (this_01->InputValues).AllocatorInstance.Data = local_e8.Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        (this_01->InputValues).ArrayNum = local_e0;
        (this_01->InputValues).ArrayMax = iStack_dc;
        local_e0 = 0;
        iStack_dc = 0;
        TDataReference<float>::TDataReference<float><>
                  ((TDataReference<float> *)&this_01->OutputValue,NewObject);
        *(undefined ***)&this_01->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
        this_01->PrevCrossfadeValue = -1.0;
        this_01->IndexA = 0;
        this_01->IndexB = 0;
        this_01->Alpha = 0.0;
        PerformCrossfadeOutput(this_01);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)this_01;
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_e8.Data,local_e0);
      if ((TDataReadReference<float> *)local_e8.Data != (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b0634b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<Metasound::FAudioBuffer,2> *this_00;
  TCrossfadeOperator<Metasound::FAudioBuffer,2> *pTVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<Metasound::FAudioBuffer> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined1 local_d8 [32];
  FName local_b8;
  undefined1 local_b0 [8];
  FString local_a8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_b8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar10 = (TCrossfadeOperator<Metasound::FAudioBuffer,2> *)0x0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  FVar6 = CrossfadeVertexNames::GetInputName((uint)local_b0);
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)FVar6);
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar6,&local_a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
    bVar1 = local_60.TypeIndex;
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    pTVar11 = &local_60;
LAB_14b063674:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar11);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_78,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,
                 (FLiteral *)&local_78);
      bVar1 = local_78.TypeIndex;
      if ((0xc < local_78.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      pTVar11 = &local_78;
      goto LAB_14b063674;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8);
  }
  if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8) {
    if ((FScriptContainerElement *)local_d8 <
        local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
      local_100 = (longlong)local_e8.ArrayNum;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
      local_108 = (longlong)local_e8.ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
    }
  }
  iVar5 = local_e8.ArrayNum;
  if (local_e8.ArrayNum == local_e8.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
  }
  local_e8.ArrayNum = iVar5 + 1;
  pFVar12 = local_e8.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar12 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar12 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar12 + 0x10) = local_d8._16_8_;
  if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar12 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FVar6 = CrossfadeVertexNames::GetInputName((uint)local_b0);
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)FVar6);
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar6,&local_a8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    pTVar11 = &local_60;
    local_78.TypeIndex = local_60.TypeIndex;
  }
  else {
    if ((pFVar7->Data).bIsSet != false) {
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
      ;
      goto LAB_14b0638b7;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_78,&(pFVar7->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs
              ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,(FLiteral *)&local_78)
    ;
    if ((0xc < local_78.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
    }
    pTVar11 = &local_78;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_78.TypeIndex])(pTVar11);
LAB_14b0638b7:
  if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8) {
    if ((FScriptContainerElement *)local_d8 <
        local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
      local_100 = (longlong)local_e8.ArrayNum;
      local_f8 = 0x20;
      local_118 = local_d8;
      local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
      local_108 = (longlong)local_e8.ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
    }
  }
  iVar5 = local_e8.ArrayNum;
  if (local_e8.ArrayNum == local_e8.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
  }
  local_e8.ArrayNum = iVar5 + 1;
  pFVar12 = local_e8.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar12 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar12 + 8) = local_d8._8_8_;
  *(undefined8 *)(pFVar12 + 0x10) = local_d8._16_8_;
  if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar12 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xa0);
  if (this_00 != (TCrossfadeOperator<Metasound::FAudioBuffer,2> *)0x0) {
    pTVar10 = TCrossfadeOperator<Metasound::FAudioBuffer,2>
                        (this_00,pFVar2,(TDataReadReference<float> *)local_98,&local_e8);
  }
  param_1->Node = (INode *)pTVar10;
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data,
             local_e8.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b063a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FName this_00;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<Metasound::FAudioBuffer,3> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TCrossfadeOperator<Metasound::FAudioBuffer,3> *pTVar13;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<Metasound::FAudioBuffer> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar12 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
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
      pTVar10 = &local_58;
LAB_14b063bf5:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar10);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,
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
        pTVar10 = &local_70;
        goto LAB_14b063bf5;
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
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
      ;
    }
    if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
    {
      if ((FScriptContainerElement *)local_d8 <
          local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
        local_100 = (longlong)local_e8.ArrayNum;
        local_f8 = 0x20;
        local_118 = local_d8;
        local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
        local_108 = (longlong)local_e8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
      }
    }
    iVar6 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar6 + 1;
    pFVar11 = local_e8.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar11 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(pFVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar11 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar12 = uVar12 + 1;
    if (2 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xa0);
      pTVar13 = (TCrossfadeOperator<Metasound::FAudioBuffer,3> *)0x0;
      if (this_01 != (TCrossfadeOperator<Metasound::FAudioBuffer,3> *)0x0) {
        pTVar13 = TCrossfadeOperator<Metasound::FAudioBuffer,3>
                            (this_01,pFVar2,(TDataReadReference<float> *)local_90,&local_e8);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)pTVar13;
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data,
                 local_e8.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b063d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FName this_00;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<Metasound::FAudioBuffer,4> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TCrossfadeOperator<Metasound::FAudioBuffer,4> *pTVar13;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<Metasound::FAudioBuffer> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar12 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
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
      pTVar10 = &local_58;
LAB_14b063f45:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar10);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,
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
        pTVar10 = &local_70;
        goto LAB_14b063f45;
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
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
      ;
    }
    if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
    {
      if ((FScriptContainerElement *)local_d8 <
          local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
        local_100 = (longlong)local_e8.ArrayNum;
        local_f8 = 0x20;
        local_118 = local_d8;
        local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
        local_108 = (longlong)local_e8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
      }
    }
    iVar6 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar6 + 1;
    pFVar11 = local_e8.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar11 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(pFVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar11 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar12 = uVar12 + 1;
    if (3 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xa0);
      pTVar13 = (TCrossfadeOperator<Metasound::FAudioBuffer,4> *)0x0;
      if (this_01 != (TCrossfadeOperator<Metasound::FAudioBuffer,4> *)0x0) {
        pTVar13 = TCrossfadeOperator<Metasound::FAudioBuffer,4>
                            (this_01,pFVar2,(TDataReadReference<float> *)local_90,&local_e8);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)pTVar13;
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data,
                 local_e8.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b0640c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FName this_00;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<Metasound::FAudioBuffer,5> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TCrossfadeOperator<Metasound::FAudioBuffer,5> *pTVar13;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<Metasound::FAudioBuffer> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar12 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
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
      pTVar10 = &local_58;
LAB_14b064295:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar10);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,
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
        pTVar10 = &local_70;
        goto LAB_14b064295;
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
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
      ;
    }
    if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
    {
      if ((FScriptContainerElement *)local_d8 <
          local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
        local_100 = (longlong)local_e8.ArrayNum;
        local_f8 = 0x20;
        local_118 = local_d8;
        local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
        local_108 = (longlong)local_e8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
      }
    }
    iVar6 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar6 + 1;
    pFVar11 = local_e8.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar11 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(pFVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar11 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar12 = uVar12 + 1;
    if (4 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xa0);
      pTVar13 = (TCrossfadeOperator<Metasound::FAudioBuffer,5> *)0x0;
      if (this_01 != (TCrossfadeOperator<Metasound::FAudioBuffer,5> *)0x0) {
        pTVar13 = TCrossfadeOperator<Metasound::FAudioBuffer,5>
                            (this_01,pFVar2,(TDataReadReference<float> *)local_90,&local_e8);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)pTVar13;
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data,
                 local_e8.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b064410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FName this_00;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<Metasound::FAudioBuffer,6> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TCrossfadeOperator<Metasound::FAudioBuffer,6> *pTVar13;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<Metasound::FAudioBuffer> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar12 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
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
      pTVar10 = &local_58;
LAB_14b0645e5:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar10);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,
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
        pTVar10 = &local_70;
        goto LAB_14b0645e5;
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
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
      ;
    }
    if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
    {
      if ((FScriptContainerElement *)local_d8 <
          local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
        local_100 = (longlong)local_e8.ArrayNum;
        local_f8 = 0x20;
        local_118 = local_d8;
        local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
        local_108 = (longlong)local_e8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
      }
    }
    iVar6 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar6 + 1;
    pFVar11 = local_e8.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar11 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(pFVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar11 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar12 = uVar12 + 1;
    if (5 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xa0);
      pTVar13 = (TCrossfadeOperator<Metasound::FAudioBuffer,6> *)0x0;
      if (this_01 != (TCrossfadeOperator<Metasound::FAudioBuffer,6> *)0x0) {
        pTVar13 = TCrossfadeOperator<Metasound::FAudioBuffer,6>
                            (this_01,pFVar2,(TDataReadReference<float> *)local_90,&local_e8);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)pTVar13;
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data,
                 local_e8.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b064760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FName this_00;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<Metasound::FAudioBuffer,7> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TCrossfadeOperator<Metasound::FAudioBuffer,7> *pTVar13;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<Metasound::FAudioBuffer> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar12 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
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
      pTVar10 = &local_58;
LAB_14b064935:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar10);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,
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
        pTVar10 = &local_70;
        goto LAB_14b064935;
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
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
      ;
    }
    if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
    {
      if ((FScriptContainerElement *)local_d8 <
          local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
        local_100 = (longlong)local_e8.ArrayNum;
        local_f8 = 0x20;
        local_118 = local_d8;
        local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
        local_108 = (longlong)local_e8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
      }
    }
    iVar6 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar6 + 1;
    pFVar11 = local_e8.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar11 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(pFVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar11 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar12 = uVar12 + 1;
    if (6 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xa0);
      pTVar13 = (TCrossfadeOperator<Metasound::FAudioBuffer,7> *)0x0;
      if (this_01 != (TCrossfadeOperator<Metasound::FAudioBuffer,7> *)0x0) {
        pTVar13 = TCrossfadeOperator<Metasound::FAudioBuffer,7>
                            (this_01,pFVar2,(TDataReadReference<float> *)local_90,&local_e8);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)pTVar13;
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data,
                 local_e8.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b064ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FName this_00;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  FLiteral *pFVar9;
  TCrossfadeOperator<Metasound::FAudioBuffer,8> *this_01;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TCrossfadeOperator<Metasound::FAudioBuffer,8> *pTVar13;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TDataReadReference<Metasound::FAudioBuffer> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined1 local_d8 [32];
  FName local_b8;
  FBuildOperatorParams *local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_b0 = param_1;
  FLazyName::Resolve(&CrossfadeVertexNames::InputCrossfadeValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_90,&local_b8,pFVar2);
  uVar12 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = CrossfadeVertexNames::GetInputName((uint)local_a8);
    pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar7 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_a0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,pFVar9);
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
      pTVar10 = &local_58;
LAB_14b064c85:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar10);
    }
    else {
      if ((pFVar7->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar7->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_d8,pFVar2,
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
        pTVar10 = &local_70;
        goto LAB_14b064c85;
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
                (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
      ;
    }
    if (local_e8.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_d8)
    {
      if ((FScriptContainerElement *)local_d8 <
          local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20) {
        local_100 = (longlong)local_e8.ArrayNum;
        local_f8 = 0x20;
        local_118 = local_d8;
        local_110 = (TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data;
        local_108 = (longlong)local_e8.ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
        }
      }
    }
    iVar6 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar6 + 1;
    pFVar11 = local_e8.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar11 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar11 + 8) = local_d8._8_8_;
    *(undefined8 *)(pFVar11 + 0x10) = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar11 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d8._16_8_);
    uVar12 = uVar12 + 1;
    if (7 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xa0);
      pTVar13 = (TCrossfadeOperator<Metasound::FAudioBuffer,8> *)0x0;
      if (this_01 != (TCrossfadeOperator<Metasound::FAudioBuffer,8> *)0x0) {
        pTVar13 = TCrossfadeOperator<Metasound::FAudioBuffer,8>
                            (this_01,pFVar2,(TDataReadReference<float> *)local_90,&local_e8);
      }
      pFVar4 = local_b0;
      local_b0->Node = (INode *)pTVar13;
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data,
                 local_e8.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_e8.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_90._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// GetNodeInfo @ 14b074450

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0744e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074690

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0747b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074840

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0748d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074960

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0749f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074b10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// PerformCrossfadeOutput @ 14b077ee0

void __thiscall
Metasound::TCrossfadeOperator<float,2>::PerformCrossfadeOutput(TCrossfadeOperator<float,2> *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_3f800000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// PerformCrossfadeOutput @ 14b078070

void __thiscall
Metasound::TCrossfadeOperator<float,3>::PerformCrossfadeOutput(TCrossfadeOperator<float,3> *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40000000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40000000 <= fVar12) {
    fVar12 = __real_40000000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// PerformCrossfadeOutput @ 14b078200

void __thiscall
Metasound::TCrossfadeOperator<float,4>::PerformCrossfadeOutput(TCrossfadeOperator<float,4> *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40400000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40400000 <= fVar12) {
    fVar12 = __real_40400000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// PerformCrossfadeOutput @ 14b078390

void __thiscall
Metasound::TCrossfadeOperator<float,5>::PerformCrossfadeOutput(TCrossfadeOperator<float,5> *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40800000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40800000 <= fVar12) {
    fVar12 = __real_40800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// PerformCrossfadeOutput @ 14b078520

void __thiscall
Metasound::TCrossfadeOperator<float,6>::PerformCrossfadeOutput(TCrossfadeOperator<float,6> *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40a00000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40a00000 <= fVar12) {
    fVar12 = __real_40a00000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// PerformCrossfadeOutput @ 14b0786b0

void __thiscall
Metasound::TCrossfadeOperator<float,7>::PerformCrossfadeOutput(TCrossfadeOperator<float,7> *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40c00000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40c00000 <= fVar12) {
    fVar12 = __real_40c00000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// PerformCrossfadeOutput @ 14b078840

void __thiscall
Metasound::TCrossfadeOperator<float,8>::PerformCrossfadeOutput(TCrossfadeOperator<float,8> *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40e00000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40e00000 <= fVar12) {
    fVar12 = __real_40e00000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// PerformCrossfadeOutput @ 14b0789d0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::PerformCrossfadeOutput
          (TCrossfadeOperator<Metasound::FAudioBuffer,2> *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_3f800000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,2>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// PerformCrossfadeOutput @ 14b078a80

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::PerformCrossfadeOutput
          (TCrossfadeOperator<Metasound::FAudioBuffer,3> *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40000000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40000000 <= fVar5) {
    fVar5 = __real_40000000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,3>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// PerformCrossfadeOutput @ 14b078b30

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::PerformCrossfadeOutput
          (TCrossfadeOperator<Metasound::FAudioBuffer,4> *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40400000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40400000 <= fVar5) {
    fVar5 = __real_40400000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,4>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// PerformCrossfadeOutput @ 14b078be0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::PerformCrossfadeOutput
          (TCrossfadeOperator<Metasound::FAudioBuffer,5> *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40800000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40800000 <= fVar5) {
    fVar5 = __real_40800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,5>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// PerformCrossfadeOutput @ 14b078c90

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::PerformCrossfadeOutput
          (TCrossfadeOperator<Metasound::FAudioBuffer,6> *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40a00000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40a00000 <= fVar5) {
    fVar5 = __real_40a00000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,6>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// PerformCrossfadeOutput @ 14b078d40

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::PerformCrossfadeOutput
          (TCrossfadeOperator<Metasound::FAudioBuffer,7> *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40c00000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40c00000 <= fVar5) {
    fVar5 = __real_40c00000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,7>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// PerformCrossfadeOutput @ 14b078df0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::PerformCrossfadeOutput
          (TCrossfadeOperator<Metasound::FAudioBuffer,8> *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40e00000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40e00000 <= fVar5) {
    fVar5 = __real_40e00000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,8>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079d30

void __thiscall
Metasound::TCrossfadeOperator<float,2>::Reset
          (TCrossfadeOperator<float,2> *this,FResetParams *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_3f800000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// Reset @ 14b079d40

void __thiscall
Metasound::TCrossfadeOperator<float,3>::Reset
          (TCrossfadeOperator<float,3> *this,FResetParams *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40000000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40000000 <= fVar12) {
    fVar12 = __real_40000000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// Reset @ 14b079d50

void __thiscall
Metasound::TCrossfadeOperator<float,4>::Reset
          (TCrossfadeOperator<float,4> *this,FResetParams *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40400000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40400000 <= fVar12) {
    fVar12 = __real_40400000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// Reset @ 14b079d60

void __thiscall
Metasound::TCrossfadeOperator<float,5>::Reset
          (TCrossfadeOperator<float,5> *this,FResetParams *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40800000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40800000 <= fVar12) {
    fVar12 = __real_40800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// Reset @ 14b079d70

void __thiscall
Metasound::TCrossfadeOperator<float,6>::Reset
          (TCrossfadeOperator<float,6> *this,FResetParams *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40a00000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40a00000 <= fVar12) {
    fVar12 = __real_40a00000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// Reset @ 14b079d80

void __thiscall
Metasound::TCrossfadeOperator<float,7>::Reset
          (TCrossfadeOperator<float,7> *this,FResetParams *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40c00000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40c00000 <= fVar12) {
    fVar12 = __real_40c00000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// Reset @ 14b079d90

void __thiscall
Metasound::TCrossfadeOperator<float,8>::Reset
          (TCrossfadeOperator<float,8> *this,FResetParams *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar1 = __real_40e00000;
  fVar12 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40e00000 <= fVar12) {
    fVar12 = __real_40e00000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar12;
    auVar11 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    iVar8 = (int)auVar11._0_4_;
    this->IndexA = iVar8;
    fVar10 = (float)(iVar8 + 1);
    if (fVar1 <= (float)(iVar8 + 1)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    this->IndexB = (int)fVar10;
    this->Alpha = fVar12 - (float)iVar8;
  }
  uVar2 = this->IndexA;
  pfVar4 = *(float **)&(this->OutputValue).field_0x8;
  fVar12 = this->Alpha;
  uVar3 = this->IndexB;
  uVar9 = 0;
  if ((int)uVar2 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  pFVar5 = (this->InputValues).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar3 < (this->InputValues).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  fVar1 = **(float **)(pFVar5 + (longlong)(int)uVar2 * 0x20 + 8);
  *pfVar4 = (**(float **)
               ((this->InputValues).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8) -
            fVar1) * fVar12 + fVar1;
  return;
}

// Reset @ 14b079da0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::Reset
          (TCrossfadeOperator<Metasound::FAudioBuffer,2> *this,FResetParams *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_3f800000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,2>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079db0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::Reset
          (TCrossfadeOperator<Metasound::FAudioBuffer,3> *this,FResetParams *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40000000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40000000 <= fVar5) {
    fVar5 = __real_40000000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,3>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079dc0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::Reset
          (TCrossfadeOperator<Metasound::FAudioBuffer,4> *this,FResetParams *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40400000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40400000 <= fVar5) {
    fVar5 = __real_40400000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,4>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079dd0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::Reset
          (TCrossfadeOperator<Metasound::FAudioBuffer,5> *this,FResetParams *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40800000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40800000 <= fVar5) {
    fVar5 = __real_40800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,5>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079de0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::Reset
          (TCrossfadeOperator<Metasound::FAudioBuffer,6> *this,FResetParams *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40a00000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40a00000 <= fVar5) {
    fVar5 = __real_40a00000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,6>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079df0

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::Reset
          (TCrossfadeOperator<Metasound::FAudioBuffer,7> *this,FResetParams *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40c00000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40c00000 <= fVar5) {
    fVar5 = __real_40c00000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,7>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079e00

void __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::Reset
          (TCrossfadeOperator<Metasound::FAudioBuffer,8> *this,FResetParams *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar1 = __real_40e00000;
  fVar5 = **(float **)&(this->CrossfadeValue).field_0x8;
  if (__real_40e00000 <= fVar5) {
    fVar5 = __real_40e00000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar5 - this->PrevCrossfadeValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevCrossfadeValue = fVar5;
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar2 = (int)auVar4._0_4_;
    this->IndexA = iVar2;
    fVar3 = (float)(iVar2 + 1);
    if (fVar1 <= (float)(iVar2 + 1)) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->IndexB = (int)fVar3;
    this->Alpha = fVar5 - (float)iVar2;
  }
  TCrossfadeHelper<Metasound::FAudioBuffer,8>::GetCrossfadeOutput
            (&this->Crossfader,this->IndexA,this->IndexB,this->Alpha,&this->InputValues,
             *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

