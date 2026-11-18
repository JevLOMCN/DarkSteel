// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 63

// BindInputs @ 14b1fc420

void __thiscall
Metasound::TTriggerAnyOperator<8>::BindInputs
          (TTriggerAnyOperator<8> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  FName local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName *local_30;
  
  uVar3 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_58 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_res20);
    local_40 = &local_res18;
    local_30 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res18 = pFVar4;
    local_50 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_58,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_38,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

// BindOutputs @ 14b1fc510

void __thiscall
Metasound::TTriggerAnyOperator<8>::BindOutputs
          (TTriggerAnyOperator<8> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAnyVertexNames::OutputTriggerName);
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

// GetInputs @ 14b1fc5a0

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<8>::GetInputs
          (TTriggerAnyOperator<8> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b1fc620

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<8>::GetOutputs
          (TTriggerAnyOperator<8> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0xa6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1fc8d0

void __thiscall
Metasound::TTriggerAnyOperator<7>::BindInputs
          (TTriggerAnyOperator<7> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  FName local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName *local_30;
  
  uVar3 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_58 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_res20);
    local_40 = &local_res18;
    local_30 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res18 = pFVar4;
    local_50 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_58,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_38,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

// BindOutputs @ 14b1fc9c0

void __thiscall
Metasound::TTriggerAnyOperator<7>::BindOutputs
          (TTriggerAnyOperator<7> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAnyVertexNames::OutputTriggerName);
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

// GetInputs @ 14b1fca50

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<7>::GetInputs
          (TTriggerAnyOperator<7> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b1fcad0

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<7>::GetOutputs
          (TTriggerAnyOperator<7> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0xa6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1fcd50

void __thiscall
Metasound::TTriggerAnyOperator<6>::BindInputs
          (TTriggerAnyOperator<6> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  FName local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName *local_30;
  
  uVar3 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_58 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_res20);
    local_40 = &local_res18;
    local_30 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res18 = pFVar4;
    local_50 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_58,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_38,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  return;
}

// BindOutputs @ 14b1fce40

void __thiscall
Metasound::TTriggerAnyOperator<6>::BindOutputs
          (TTriggerAnyOperator<6> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAnyVertexNames::OutputTriggerName);
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

// GetInputs @ 14b1fced0

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<6>::GetInputs
          (TTriggerAnyOperator<6> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b1fcf50

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<6>::GetOutputs
          (TTriggerAnyOperator<6> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0xa6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1fd690

void __thiscall
Metasound::TTriggerAnyOperator<5>::BindInputs
          (TTriggerAnyOperator<5> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  FName local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName *local_30;
  
  uVar3 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_58 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_res20);
    local_40 = &local_res18;
    local_30 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res18 = pFVar4;
    local_50 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_58,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_38,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  return;
}

// BindOutputs @ 14b1fd780

void __thiscall
Metasound::TTriggerAnyOperator<5>::BindOutputs
          (TTriggerAnyOperator<5> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAnyVertexNames::OutputTriggerName);
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

// GetInputs @ 14b1fd890

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<5>::GetInputs
          (TTriggerAnyOperator<5> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b1fd930

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<5>::GetOutputs
          (TTriggerAnyOperator<5> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0xa6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1fe0e0

void __thiscall
Metasound::TTriggerAnyOperator<4>::BindInputs
          (TTriggerAnyOperator<4> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  FName local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName *local_30;
  
  uVar3 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_58 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_res20);
    local_40 = &local_res18;
    local_30 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res18 = pFVar4;
    local_50 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_58,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_38,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}

// BindOutputs @ 14b1fe240

void __thiscall
Metasound::TTriggerAnyOperator<4>::BindOutputs
          (TTriggerAnyOperator<4> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAnyVertexNames::OutputTriggerName);
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

// GetInputs @ 14b1fe2d0

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<4>::GetInputs
          (TTriggerAnyOperator<4> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b1fe350

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<4>::GetOutputs
          (TTriggerAnyOperator<4> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0xa6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1fea80

void __thiscall
Metasound::TTriggerAnyOperator<3>::BindInputs
          (TTriggerAnyOperator<3> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  FName local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName *local_30;
  
  uVar3 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_58 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_res20);
    local_40 = &local_res18;
    local_30 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res18 = pFVar4;
    local_50 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_58,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_38,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

// BindOutputs @ 14b1fec00

void __thiscall
Metasound::TTriggerAnyOperator<3>::BindOutputs
          (TTriggerAnyOperator<3> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAnyVertexNames::OutputTriggerName);
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

// GetInputs @ 14b1fec90

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<3>::GetInputs
          (TTriggerAnyOperator<3> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b1fed10

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<3>::GetOutputs
          (TTriggerAnyOperator<3> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0xa6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1ff240

void __thiscall
Metasound::TTriggerAnyOperator<2>::BindInputs
          (TTriggerAnyOperator<2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  FName local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  FScriptContainerElement **local_40;
  code *local_38;
  FName *local_30;
  
  uVar3 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar3) {
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
    pFVar4 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    local_58 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_res20);
    local_40 = &local_res18;
    local_30 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_res18 = pFVar4;
    local_50 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,(FName *)local_58,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_38,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return;
}

// BindOutputs @ 14b1ff330

void __thiscall
Metasound::TTriggerAnyOperator<2>::BindOutputs
          (TTriggerAnyOperator<2> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAnyVertexNames::OutputTriggerName);
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

// GetInputs @ 14b1ff3c0

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<2>::GetInputs
          (TTriggerAnyOperator<2> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0x9e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b1ff440

FDataReferenceCollection * __thiscall
Metasound::TTriggerAnyOperator<2>::GetOutputs
          (TTriggerAnyOperator<2> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundTriggerAnyNode.cpp"
                     ,0xa6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// ~TTriggerAnyOperator<2> @ 14b235ed0

void __thiscall
Metasound::TTriggerAnyOperator<2>::~TTriggerAnyOperator<2>(TTriggerAnyOperator<2> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAnyOperator<3> @ 14b235f20

void __thiscall
Metasound::TTriggerAnyOperator<3>::~TTriggerAnyOperator<3>(TTriggerAnyOperator<3> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAnyOperator<4> @ 14b235f70

void __thiscall
Metasound::TTriggerAnyOperator<4>::~TTriggerAnyOperator<4>(TTriggerAnyOperator<4> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAnyOperator<5> @ 14b235fc0

void __thiscall
Metasound::TTriggerAnyOperator<5>::~TTriggerAnyOperator<5>(TTriggerAnyOperator<5> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAnyOperator<6> @ 14b236010

void __thiscall
Metasound::TTriggerAnyOperator<6>::~TTriggerAnyOperator<6>(TTriggerAnyOperator<6> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAnyOperator<7> @ 14b236060

void __thiscall
Metasound::TTriggerAnyOperator<7>::~TTriggerAnyOperator<7>(TTriggerAnyOperator<7> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAnyOperator<8> @ 14b2360b0

void __thiscall
Metasound::TTriggerAnyOperator<8>::~TTriggerAnyOperator<8>(TTriggerAnyOperator<8> *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b2586e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAnyOperator<2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  INode *pIVar11;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar12;
  FScriptContainerElement *pFVar13;
  INode *pIVar14;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [8];
  FString local_80;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar14 = (INode *)0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  FVar7 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_88);
  pFVar8 = FInputVertexInterfaceData::Find(this,(FName *)FVar7);
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar7,&local_80);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_58);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_a8,pFVar2,pFVar10);
    bVar1 = local_58.TypeIndex;
    if ((0xc < local_58.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pTVar12 = &local_58;
LAB_14b25887b:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar12);
  }
  else {
    if ((pFVar8->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_70,&(pFVar8->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_a8,pFVar2,
                         (FLiteral *)&local_70);
      bVar1 = local_70.TypeIndex;
      if ((0xc < local_70.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar12 = &local_70;
      goto LAB_14b25887b;
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
              (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_a8);
  }
  if (((local_b8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_a8) &&
      ((FScriptContainerElement *)local_a8 < local_b8.Data + (longlong)local_b0._4_4_ * 0x20)) &&
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
  iVar6 = (int)local_b0;
  if ((int)local_b0 == local_b0._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8,(int *)((longlong)&local_b0 + 4));
  }
  local_b0 = CONCAT44(local_b0._4_4_,iVar6 + 1);
  pFVar13 = local_b8.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar13 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar13 + 8) = local_a8._8_8_;
  *(undefined8 *)(pFVar13 + 0x10) = local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar13 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FVar7 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_88);
  pFVar8 = FInputVertexInterfaceData::Find(this,(FName *)FVar7);
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar7,&local_80);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_58);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_a8,pFVar2,pFVar10);
    if ((0xc < local_58.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pTVar12 = &local_58;
    local_70.TypeIndex = local_58.TypeIndex;
  }
  else {
    if ((pFVar8->Data).bIsSet != false) {
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
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_a8);
      goto LAB_14b258ab7;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_70,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_a8,pFVar2,
                       (FLiteral *)&local_70);
    if ((0xc < local_70.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pTVar12 = &local_70;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_70.TypeIndex])(pTVar12);
LAB_14b258ab7:
  if (((local_b8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_a8) &&
      ((FScriptContainerElement *)local_a8 < local_b8.Data + (longlong)local_b0._4_4_ * 0x20)) &&
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
  iVar6 = (int)local_b0;
  if ((int)local_b0 == local_b0._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_b8,(int *)((longlong)&local_b0 + 4));
  }
  local_b0 = CONCAT44(local_b0._4_4_,iVar6 + 1);
  pFVar13 = local_b8.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar13 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar13 + 8) = local_a8._8_8_;
  *(undefined8 *)(pFVar13 + 0x10) = local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar13 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar11 = ::operator_new(0x38);
  FVar4.Data = local_b8.Data;
  if (pIVar11 != (INode *)0x0) {
    pIVar14 = pIVar11 + 1;
    *(FScriptContainerElement **)&pIVar14->field_0x0 = (FScriptContainerElement *)0x0;
    *pIVar11 = (INode)&___7__TTriggerAnyOperator__01_Metasound__6B_;
    iVar6 = (int)local_b0;
    *(int *)(pIVar11 + 2) = (int)local_b0;
    if ((int)local_b0 == 0) {
      *(undefined4 *)&pIVar11[2].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(int)local_b0,0,(ForAnyElementType *)pIVar14,(int)local_b0,
                 (int *)&pIVar11[2].field_0x4);
      ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
                (*(FScriptContainerElement **)&pIVar14->field_0x0,
                 (TDataReadReference<Metasound::FTrigger> *)FVar4.Data,iVar6);
    }
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar11 + 3),NewObject,pFVar2);
    pIVar11[3] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar14 = pIVar11;
  }
  param_1->Node = pIVar14;
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)local_b8.Data,(int)local_b0);
  if ((TDataReadReference<Metasound::FTrigger> *)local_b8.Data !=
      (TDataReadReference<Metasound::FTrigger> *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b258c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAnyOperator<3>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  INode *pIVar1;
  byte bVar2;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  int iVar8;
  FName this_00;
  FInputBinding *pFVar9;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar10;
  FLiteral *pFVar11;
  INode *pIVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  FBuildOperatorParams *local_98;
  undefined1 local_90 [8];
  FString local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar15 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_98 = param_1;
  do {
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_90);
    pFVar9 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar9 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_88);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,pFVar11);
      bVar2 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b258e16:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar2])(pTVar13);
    }
    else {
      if ((pFVar9->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar9->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,(FLiteral *)&local_78)
        ;
        bVar2 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          TVar10.Ptr = (IOperator *)(*pcVar4)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b258e16;
      }
      if (((pFVar9->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar9->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_b8);
    }
    if (((local_c8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < local_c8.Data + (longlong)local_c0._4_4_ * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    iVar8 = (int)local_c0;
    if ((int)local_c0 == local_c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8,(int *)((longlong)&local_c0 + 4));
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar8 + 1);
    pFVar14 = local_c8.Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar14 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar14 + 8) = local_b8._8_8_;
    *(undefined8 *)(pFVar14 + 0x10) = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar14 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_b8._16_8_);
    uVar15 = uVar15 + 1;
    if (2 < uVar15) {
      pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pIVar12 = ::operator_new(0x38);
      FVar5.Data = local_c8.Data;
      if (pIVar12 == (INode *)0x0) {
        pIVar12 = (INode *)0x0;
      }
      else {
        pIVar1 = pIVar12 + 1;
        *(FScriptContainerElement **)&pIVar1->field_0x0 = (FScriptContainerElement *)0x0;
        *pIVar12 = (INode)&___7__TTriggerAnyOperator__02_Metasound__6B_;
        iVar8 = (int)local_c0;
        *(int *)(pIVar12 + 2) = (int)local_c0;
        if ((int)local_c0 == 0) {
          *(undefined4 *)&pIVar12[2].field_0x4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(int)local_c0,0,(ForAnyElementType *)pIVar1,(int)local_c0,
                     (int *)&pIVar12[2].field_0x4);
          ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
                    (*(FScriptContainerElement **)&pIVar1->field_0x0,
                     (TDataReadReference<Metasound::FTrigger> *)FVar5.Data,iVar8);
        }
        TDataReference<Metasound::FTrigger>::
        TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
                  ((TDataReference<Metasound::FTrigger> *)(pIVar12 + 3),NewObject,pFVar3);
        pIVar12[3] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
      }
      pFVar6 = local_98;
      local_98->Node = pIVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data,(int)local_c0);
      if ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar6;
    }
  } while( true );
}

// CreateOperator @ 14b258fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAnyOperator<4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  INode *pIVar1;
  byte bVar2;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  int iVar8;
  FName this_00;
  FInputBinding *pFVar9;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar10;
  FLiteral *pFVar11;
  INode *pIVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  FBuildOperatorParams *local_98;
  undefined1 local_90 [8];
  FString local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar15 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_98 = param_1;
  do {
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_90);
    pFVar9 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar9 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_88);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,pFVar11);
      bVar2 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b259186:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar2])(pTVar13);
    }
    else {
      if ((pFVar9->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar9->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,(FLiteral *)&local_78)
        ;
        bVar2 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          TVar10.Ptr = (IOperator *)(*pcVar4)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b259186;
      }
      if (((pFVar9->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar9->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_b8);
    }
    if (((local_c8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < local_c8.Data + (longlong)local_c0._4_4_ * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    iVar8 = (int)local_c0;
    if ((int)local_c0 == local_c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8,(int *)((longlong)&local_c0 + 4));
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar8 + 1);
    pFVar14 = local_c8.Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar14 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar14 + 8) = local_b8._8_8_;
    *(undefined8 *)(pFVar14 + 0x10) = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar14 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_b8._16_8_);
    uVar15 = uVar15 + 1;
    if (3 < uVar15) {
      pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pIVar12 = ::operator_new(0x38);
      FVar5.Data = local_c8.Data;
      if (pIVar12 == (INode *)0x0) {
        pIVar12 = (INode *)0x0;
      }
      else {
        pIVar1 = pIVar12 + 1;
        *(FScriptContainerElement **)&pIVar1->field_0x0 = (FScriptContainerElement *)0x0;
        *pIVar12 = (INode)&___7__TTriggerAnyOperator__03_Metasound__6B_;
        iVar8 = (int)local_c0;
        *(int *)(pIVar12 + 2) = (int)local_c0;
        if ((int)local_c0 == 0) {
          *(undefined4 *)&pIVar12[2].field_0x4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(int)local_c0,0,(ForAnyElementType *)pIVar1,(int)local_c0,
                     (int *)&pIVar12[2].field_0x4);
          ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
                    (*(FScriptContainerElement **)&pIVar1->field_0x0,
                     (TDataReadReference<Metasound::FTrigger> *)FVar5.Data,iVar8);
        }
        TDataReference<Metasound::FTrigger>::
        TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
                  ((TDataReference<Metasound::FTrigger> *)(pIVar12 + 3),NewObject,pFVar3);
        pIVar12[3] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
      }
      pFVar6 = local_98;
      local_98->Node = pIVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data,(int)local_c0);
      if ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar6;
    }
  } while( true );
}

// CreateOperator @ 14b259350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAnyOperator<5>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  INode *pIVar1;
  byte bVar2;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  int iVar8;
  FName this_00;
  FInputBinding *pFVar9;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar10;
  FLiteral *pFVar11;
  INode *pIVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  FBuildOperatorParams *local_98;
  undefined1 local_90 [8];
  FString local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar15 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_98 = param_1;
  do {
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_90);
    pFVar9 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar9 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_88);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,pFVar11);
      bVar2 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b2594f6:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar2])(pTVar13);
    }
    else {
      if ((pFVar9->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar9->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,(FLiteral *)&local_78)
        ;
        bVar2 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          TVar10.Ptr = (IOperator *)(*pcVar4)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b2594f6;
      }
      if (((pFVar9->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar9->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_b8);
    }
    if (((local_c8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < local_c8.Data + (longlong)local_c0._4_4_ * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    iVar8 = (int)local_c0;
    if ((int)local_c0 == local_c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8,(int *)((longlong)&local_c0 + 4));
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar8 + 1);
    pFVar14 = local_c8.Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar14 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar14 + 8) = local_b8._8_8_;
    *(undefined8 *)(pFVar14 + 0x10) = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar14 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_b8._16_8_);
    uVar15 = uVar15 + 1;
    if (4 < uVar15) {
      pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pIVar12 = ::operator_new(0x38);
      FVar5.Data = local_c8.Data;
      if (pIVar12 == (INode *)0x0) {
        pIVar12 = (INode *)0x0;
      }
      else {
        pIVar1 = pIVar12 + 1;
        *(FScriptContainerElement **)&pIVar1->field_0x0 = (FScriptContainerElement *)0x0;
        *pIVar12 = (INode)&___7__TTriggerAnyOperator__04_Metasound__6B_;
        iVar8 = (int)local_c0;
        *(int *)(pIVar12 + 2) = (int)local_c0;
        if ((int)local_c0 == 0) {
          *(undefined4 *)&pIVar12[2].field_0x4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(int)local_c0,0,(ForAnyElementType *)pIVar1,(int)local_c0,
                     (int *)&pIVar12[2].field_0x4);
          ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
                    (*(FScriptContainerElement **)&pIVar1->field_0x0,
                     (TDataReadReference<Metasound::FTrigger> *)FVar5.Data,iVar8);
        }
        TDataReference<Metasound::FTrigger>::
        TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
                  ((TDataReference<Metasound::FTrigger> *)(pIVar12 + 3),NewObject,pFVar3);
        pIVar12[3] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
      }
      pFVar6 = local_98;
      local_98->Node = pIVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data,(int)local_c0);
      if ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar6;
    }
  } while( true );
}

// CreateOperator @ 14b2596c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAnyOperator<6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  INode *pIVar1;
  byte bVar2;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  int iVar8;
  FName this_00;
  FInputBinding *pFVar9;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar10;
  FLiteral *pFVar11;
  INode *pIVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  FBuildOperatorParams *local_98;
  undefined1 local_90 [8];
  FString local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar15 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_98 = param_1;
  do {
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_90);
    pFVar9 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar9 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_88);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,pFVar11);
      bVar2 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b259866:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar2])(pTVar13);
    }
    else {
      if ((pFVar9->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar9->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,(FLiteral *)&local_78)
        ;
        bVar2 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          TVar10.Ptr = (IOperator *)(*pcVar4)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b259866;
      }
      if (((pFVar9->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar9->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_b8);
    }
    if (((local_c8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < local_c8.Data + (longlong)local_c0._4_4_ * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    iVar8 = (int)local_c0;
    if ((int)local_c0 == local_c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8,(int *)((longlong)&local_c0 + 4));
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar8 + 1);
    pFVar14 = local_c8.Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar14 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar14 + 8) = local_b8._8_8_;
    *(undefined8 *)(pFVar14 + 0x10) = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar14 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_b8._16_8_);
    uVar15 = uVar15 + 1;
    if (5 < uVar15) {
      pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pIVar12 = ::operator_new(0x38);
      FVar5.Data = local_c8.Data;
      if (pIVar12 == (INode *)0x0) {
        pIVar12 = (INode *)0x0;
      }
      else {
        pIVar1 = pIVar12 + 1;
        *(FScriptContainerElement **)&pIVar1->field_0x0 = (FScriptContainerElement *)0x0;
        *pIVar12 = (INode)&___7__TTriggerAnyOperator__05_Metasound__6B_;
        iVar8 = (int)local_c0;
        *(int *)(pIVar12 + 2) = (int)local_c0;
        if ((int)local_c0 == 0) {
          *(undefined4 *)&pIVar12[2].field_0x4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(int)local_c0,0,(ForAnyElementType *)pIVar1,(int)local_c0,
                     (int *)&pIVar12[2].field_0x4);
          ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
                    (*(FScriptContainerElement **)&pIVar1->field_0x0,
                     (TDataReadReference<Metasound::FTrigger> *)FVar5.Data,iVar8);
        }
        TDataReference<Metasound::FTrigger>::
        TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
                  ((TDataReference<Metasound::FTrigger> *)(pIVar12 + 3),NewObject,pFVar3);
        pIVar12[3] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
      }
      pFVar6 = local_98;
      local_98->Node = pIVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data,(int)local_c0);
      if ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar6;
    }
  } while( true );
}

// CreateOperator @ 14b259a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAnyOperator<7>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  INode *pIVar1;
  byte bVar2;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  int iVar8;
  FName this_00;
  FInputBinding *pFVar9;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar10;
  FLiteral *pFVar11;
  INode *pIVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  FBuildOperatorParams *local_98;
  undefined1 local_90 [8];
  FString local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar15 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_98 = param_1;
  do {
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_90);
    pFVar9 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar9 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_88);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,pFVar11);
      bVar2 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b259bd6:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar2])(pTVar13);
    }
    else {
      if ((pFVar9->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar9->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,(FLiteral *)&local_78)
        ;
        bVar2 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          TVar10.Ptr = (IOperator *)(*pcVar4)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b259bd6;
      }
      if (((pFVar9->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar9->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_b8);
    }
    if (((local_c8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < local_c8.Data + (longlong)local_c0._4_4_ * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    iVar8 = (int)local_c0;
    if ((int)local_c0 == local_c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8,(int *)((longlong)&local_c0 + 4));
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar8 + 1);
    pFVar14 = local_c8.Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar14 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar14 + 8) = local_b8._8_8_;
    *(undefined8 *)(pFVar14 + 0x10) = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar14 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_b8._16_8_);
    uVar15 = uVar15 + 1;
    if (6 < uVar15) {
      pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pIVar12 = ::operator_new(0x38);
      FVar5.Data = local_c8.Data;
      if (pIVar12 == (INode *)0x0) {
        pIVar12 = (INode *)0x0;
      }
      else {
        pIVar1 = pIVar12 + 1;
        *(FScriptContainerElement **)&pIVar1->field_0x0 = (FScriptContainerElement *)0x0;
        *pIVar12 = (INode)&___7__TTriggerAnyOperator__06_Metasound__6B_;
        iVar8 = (int)local_c0;
        *(int *)(pIVar12 + 2) = (int)local_c0;
        if ((int)local_c0 == 0) {
          *(undefined4 *)&pIVar12[2].field_0x4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(int)local_c0,0,(ForAnyElementType *)pIVar1,(int)local_c0,
                     (int *)&pIVar12[2].field_0x4);
          ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
                    (*(FScriptContainerElement **)&pIVar1->field_0x0,
                     (TDataReadReference<Metasound::FTrigger> *)FVar5.Data,iVar8);
        }
        TDataReference<Metasound::FTrigger>::
        TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
                  ((TDataReference<Metasound::FTrigger> *)(pIVar12 + 3),NewObject,pFVar3);
        pIVar12[3] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
      }
      pFVar6 = local_98;
      local_98->Node = pIVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data,(int)local_c0);
      if ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar6;
    }
  } while( true );
}

// CreateOperator @ 14b259da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAnyOperator<8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  INode *pIVar1;
  byte bVar2;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  int iVar8;
  FName this_00;
  FInputBinding *pFVar9;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar10;
  FLiteral *pFVar11;
  INode *pIVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  FBuildOperatorParams *local_98;
  undefined1 local_90 [8];
  FString local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar15 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_98 = param_1;
  do {
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_00 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_90);
    pFVar9 = FInputVertexInterfaceData::Find(this,(FName *)this_00);
    if (pFVar9 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)this_00,&local_88);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,pFVar11);
      bVar2 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b259f46:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar2])(pTVar13);
    }
    else {
      if ((pFVar9->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar9->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_b8,pFVar3,(FLiteral *)&local_78)
        ;
        bVar2 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          TVar10.Ptr = (IOperator *)(*pcVar4)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b259f46;
      }
      if (((pFVar9->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar10.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar9->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_b8);
    }
    if (((local_c8.Data <= (TDataReadReference<Metasound::FTrigger> *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < local_c8.Data + (longlong)local_c0._4_4_ * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar10.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar10.Ptr;
    }
    iVar8 = (int)local_c0;
    if ((int)local_c0 == local_c0._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8,(int *)((longlong)&local_c0 + 4));
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar8 + 1);
    pFVar14 = local_c8.Data + (longlong)iVar8 * 0x20;
    *(undefined ***)pFVar14 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar14 + 8) = local_b8._8_8_;
    *(undefined8 *)(pFVar14 + 0x10) = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar14 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_b8._16_8_);
    uVar15 = uVar15 + 1;
    if (7 < uVar15) {
      pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pIVar12 = ::operator_new(0x38);
      FVar5.Data = local_c8.Data;
      if (pIVar12 == (INode *)0x0) {
        pIVar12 = (INode *)0x0;
      }
      else {
        pIVar1 = pIVar12 + 1;
        *(FScriptContainerElement **)&pIVar1->field_0x0 = (FScriptContainerElement *)0x0;
        *pIVar12 = (INode)&___7__TTriggerAnyOperator__07_Metasound__6B_;
        iVar8 = (int)local_c0;
        *(int *)(pIVar12 + 2) = (int)local_c0;
        if ((int)local_c0 == 0) {
          *(undefined4 *)&pIVar12[2].field_0x4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(int)local_c0,0,(ForAnyElementType *)pIVar1,(int)local_c0,
                     (int *)&pIVar12[2].field_0x4);
          ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
                    (*(FScriptContainerElement **)&pIVar1->field_0x0,
                     (TDataReadReference<Metasound::FTrigger> *)FVar5.Data,iVar8);
        }
        TDataReference<Metasound::FTrigger>::
        TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
                  ((TDataReference<Metasound::FTrigger> *)(pIVar12 + 3),NewObject,pFVar3);
        pIVar12[3] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
      }
      pFVar6 = local_98;
      local_98->Node = pIVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data,(int)local_c0);
      if ((TDataReadReference<Metasound::FTrigger> *)local_c8.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar6;
    }
  } while( true );
}

// GetDefaultInterface @ 14b2778f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerAnyOperator<2>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FInputVertexInterface local_d8;
  FOutputVertexInterface local_b8;
  FDataVertexMetadata local_98;
  undefined1 local_70 [8];
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::FTrigger> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FInputVertexInterface::FInputVertexInterface(&local_d8);
    uVar7 = 0;
    do {
      FText::FText(&local_98.Description);
      FText::FText(&local_98.DisplayName);
      local_98.bIsAdvancedDisplay = false;
      FVar3 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_70);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_48,(FName *)FVar3,&local_98);
      TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_d8,pFVar4);
      uVar8 = (ulonglong)(byte)local_48._48_1_;
      if ((0xc < (byte)local_48._48_1_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48.field_0x20);
      if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    FOutputVertexInterface::FOutputVertexInterface(&local_b8);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_68,&TriggerAnyVertexNames::OutputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_d8,&local_b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
               local_b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_d8._padding_,(int)local_d8._padding_);
    if ((FInputDataVertex *)local_d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TTriggerAnyOperator<2>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b277b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerAnyOperator<3>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FInputVertexInterface local_d8;
  FOutputVertexInterface local_b8;
  FDataVertexMetadata local_98;
  undefined1 local_70 [8];
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::FTrigger> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FInputVertexInterface::FInputVertexInterface(&local_d8);
    uVar7 = 0;
    do {
      FText::FText(&local_98.Description);
      FText::FText(&local_98.DisplayName);
      local_98.bIsAdvancedDisplay = false;
      FVar3 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_70);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_48,(FName *)FVar3,&local_98);
      TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_d8,pFVar4);
      uVar8 = (ulonglong)(byte)local_48._48_1_;
      if ((0xc < (byte)local_48._48_1_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48.field_0x20);
      if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    FOutputVertexInterface::FOutputVertexInterface(&local_b8);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_68,&TriggerAnyVertexNames::OutputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_d8,&local_b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
               local_b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_d8._padding_,(int)local_d8._padding_);
    if ((FInputDataVertex *)local_d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TTriggerAnyOperator<3>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b277d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerAnyOperator<4>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FInputVertexInterface local_d8;
  FOutputVertexInterface local_b8;
  FDataVertexMetadata local_98;
  undefined1 local_70 [8];
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::FTrigger> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FInputVertexInterface::FInputVertexInterface(&local_d8);
    uVar7 = 0;
    do {
      FText::FText(&local_98.Description);
      FText::FText(&local_98.DisplayName);
      local_98.bIsAdvancedDisplay = false;
      FVar3 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_70);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_48,(FName *)FVar3,&local_98);
      TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_d8,pFVar4);
      uVar8 = (ulonglong)(byte)local_48._48_1_;
      if ((0xc < (byte)local_48._48_1_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48.field_0x20);
      if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    FOutputVertexInterface::FOutputVertexInterface(&local_b8);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_68,&TriggerAnyVertexNames::OutputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_d8,&local_b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
               local_b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_d8._padding_,(int)local_d8._padding_);
    if ((FInputDataVertex *)local_d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TTriggerAnyOperator<4>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b277f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerAnyOperator<5>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FInputVertexInterface local_d8;
  FOutputVertexInterface local_b8;
  FDataVertexMetadata local_98;
  undefined1 local_70 [8];
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::FTrigger> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FInputVertexInterface::FInputVertexInterface(&local_d8);
    uVar7 = 0;
    do {
      FText::FText(&local_98.Description);
      FText::FText(&local_98.DisplayName);
      local_98.bIsAdvancedDisplay = false;
      FVar3 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_70);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_48,(FName *)FVar3,&local_98);
      TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_d8,pFVar4);
      uVar8 = (ulonglong)(byte)local_48._48_1_;
      if ((0xc < (byte)local_48._48_1_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48.field_0x20);
      if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    FOutputVertexInterface::FOutputVertexInterface(&local_b8);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_68,&TriggerAnyVertexNames::OutputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_d8,&local_b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
               local_b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_d8._padding_,(int)local_d8._padding_);
    if ((FInputDataVertex *)local_d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TTriggerAnyOperator<5>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b278170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerAnyOperator<6>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FInputVertexInterface local_d8;
  FOutputVertexInterface local_b8;
  FDataVertexMetadata local_98;
  undefined1 local_70 [8];
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::FTrigger> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FInputVertexInterface::FInputVertexInterface(&local_d8);
    uVar7 = 0;
    do {
      FText::FText(&local_98.Description);
      FText::FText(&local_98.DisplayName);
      local_98.bIsAdvancedDisplay = false;
      FVar3 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_70);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_48,(FName *)FVar3,&local_98);
      TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_d8,pFVar4);
      uVar8 = (ulonglong)(byte)local_48._48_1_;
      if ((0xc < (byte)local_48._48_1_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48.field_0x20);
      if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 6);
    FOutputVertexInterface::FOutputVertexInterface(&local_b8);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_68,&TriggerAnyVertexNames::OutputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_d8,&local_b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
               local_b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_d8._padding_,(int)local_d8._padding_);
    if ((FInputDataVertex *)local_d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TTriggerAnyOperator<6>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b278390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerAnyOperator<7>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FInputVertexInterface local_d8;
  FOutputVertexInterface local_b8;
  FDataVertexMetadata local_98;
  undefined1 local_70 [8];
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::FTrigger> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FInputVertexInterface::FInputVertexInterface(&local_d8);
    uVar7 = 0;
    do {
      FText::FText(&local_98.Description);
      FText::FText(&local_98.DisplayName);
      local_98.bIsAdvancedDisplay = false;
      FVar3 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_70);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_48,(FName *)FVar3,&local_98);
      TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_d8,pFVar4);
      uVar8 = (ulonglong)(byte)local_48._48_1_;
      if ((0xc < (byte)local_48._48_1_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48.field_0x20);
      if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    FOutputVertexInterface::FOutputVertexInterface(&local_b8);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_68,&TriggerAnyVertexNames::OutputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_d8,&local_b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
               local_b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_d8._padding_,(int)local_d8._padding_);
    if ((FInputDataVertex *)local_d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TTriggerAnyOperator<7>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b2785b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerAnyOperator<8>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  FInputVertexInterface local_d8;
  FOutputVertexInterface local_b8;
  FDataVertexMetadata local_98;
  undefined1 local_70 [8];
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::FTrigger> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FInputVertexInterface::FInputVertexInterface(&local_d8);
    uVar7 = 0;
    do {
      FText::FText(&local_98.Description);
      FText::FText(&local_98.DisplayName);
      local_98.bIsAdvancedDisplay = false;
      FVar3 = TriggerAnyVertexNames::GetInputTriggerName((uint)local_70);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_48,(FName *)FVar3,&local_98);
      TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_d8,pFVar4);
      uVar8 = (ulonglong)(byte)local_48._48_1_;
      if ((0xc < (byte)local_48._48_1_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48.field_0x20);
      if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
    FOutputVertexInterface::FOutputVertexInterface(&local_b8);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_68,&TriggerAnyVertexNames::OutputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_d8,&local_b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
               local_b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_d8._padding_,(int)local_d8._padding_);
    if ((FInputDataVertex *)local_d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TTriggerAnyOperator<8>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b27c190

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Any (%d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar1);
      MetasoundTriggerAnyNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAnyOperator<2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27c2e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Any (%d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar1);
      MetasoundTriggerAnyNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAnyOperator<3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<3>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27c430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Any (%d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar1);
      MetasoundTriggerAnyNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAnyOperator<4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<4>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27c580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Any (%d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar1);
      MetasoundTriggerAnyNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAnyOperator<5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<5>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27c6d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Any (%d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar1);
      MetasoundTriggerAnyNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAnyOperator<6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<6>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27c820

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Any (%d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar1);
      MetasoundTriggerAnyNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAnyOperator<7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<7>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27c970

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Any (%d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar1);
      MetasoundTriggerAnyNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAnyOperator<8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAnyOperator<8>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b28a630

void __thiscall
Metasound::TTriggerAnyOperator<2>::Reset(TTriggerAnyOperator<2> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  return;
}

// Reset @ 14b28a640

void __thiscall
Metasound::TTriggerAnyOperator<3>::Reset(TTriggerAnyOperator<3> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  return;
}

// Reset @ 14b28a650

void __thiscall
Metasound::TTriggerAnyOperator<4>::Reset(TTriggerAnyOperator<4> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  return;
}

// Reset @ 14b28a660

void __thiscall
Metasound::TTriggerAnyOperator<5>::Reset(TTriggerAnyOperator<5> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  return;
}

// Reset @ 14b28a670

void __thiscall
Metasound::TTriggerAnyOperator<6>::Reset(TTriggerAnyOperator<6> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  return;
}

// Reset @ 14b28a680

void __thiscall
Metasound::TTriggerAnyOperator<7>::Reset(TTriggerAnyOperator<7> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  return;
}

// Reset @ 14b28a690

void __thiscall
Metasound::TTriggerAnyOperator<8>::Reset(TTriggerAnyOperator<8> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  return;
}

