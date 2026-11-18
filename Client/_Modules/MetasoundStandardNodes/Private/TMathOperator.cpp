// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 125

// BindInputs @ 14b07c600

void __thiscall
Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
::BindInputs(TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<int> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<int> *local_88;
  code *local_80;
  TDataReadReference<int> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07c720

void __thiscall
Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
::BindOutputs(TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b07cb10

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::
BindInputs(TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<float> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<float> *local_88;
  code *local_80;
  TDataReadReference<float> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07cc30

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::
BindOutputs(TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b07ced0

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::BindInputs(TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FTime> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<Metasound::FTime> *local_88;
  code *local_80;
  TDataReadReference<Metasound::FTime> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07d070

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::BindOutputs(TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b07d820

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::BindInputs(TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FAudioBuffer> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<Metasound::FAudioBuffer> *local_88;
  code *local_80;
  TDataReadReference<Metasound::FAudioBuffer> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07d940

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::BindOutputs(TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b07dab0

void __thiscall
Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
::BindInputs(TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<int> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<int> *local_88;
  code *local_80;
  TDataReadReference<int> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07dbd0

void __thiscall
Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
::BindOutputs(TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b07e020

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::
BindInputs(TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<float> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<float> *local_88;
  code *local_80;
  TDataReadReference<float> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07e140

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::
BindOutputs(TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b07e490

void __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::BindInputs(TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FAudioBuffer> *local_res20;
  FScriptContainerElement *local_88;
  FName *local_80;
  TDataReadReference<Metasound::FAudioBuffer> *local_78;
  code *local_70;
  TDataReadReference<Metasound::FAudioBuffer> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  FScriptContainerElement *local_48;
  code *local_40;
  FScriptContainerElement **local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_78 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_70)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = pFVar1;
  local_48 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_40)
  ;
  return;
}

// BindOutputs @ 14b07e5b0

void __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::BindOutputs(TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b07e7f0

void __thiscall
Metasound::
TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::BindInputs(TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FTime> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<Metasound::FTime> *local_88;
  code *local_80;
  TDataReadReference<Metasound::FTime> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07e910

void __thiscall
Metasound::
TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::BindOutputs(TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b07eea0

void __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::BindInputs(TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FAudioBuffer> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<Metasound::FAudioBuffer> *local_88;
  code *local_80;
  TDataReadReference<Metasound::FAudioBuffer> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07f050

void __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::BindOutputs(TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b07f5b0

void __thiscall
Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
BindInputs(TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int> *this,
          FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<int> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<int> *local_88;
  code *local_80;
  TDataReadReference<int> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07f6d0

void __thiscall
Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
BindOutputs(TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b07fbc0

void __thiscall
Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::
BindInputs(TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<float> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<float> *local_88;
  code *local_80;
  TDataReadReference<float> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b07fce0

void __thiscall
Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::
BindOutputs(TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b094dc0

void __thiscall
Metasound::
TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::
BindInputs(TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<float> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<float> *local_88;
  code *local_80;
  TDataReadReference<float> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b094ee0

void __thiscall
Metasound::
TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::
BindOutputs(TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b095200

void __thiscall
Metasound::
TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::
BindInputs(TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<float> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<float> *local_88;
  code *local_80;
  TDataReadReference<float> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b095320

void __thiscall
Metasound::
TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::
BindOutputs(TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b097bf0

void __thiscall
Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
BindInputs(TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<int> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<int> *local_88;
  code *local_80;
  TDataReadReference<int> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b097d10

void __thiscall
Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
BindOutputs(TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b097fc0

void __thiscall
Metasound::
TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
::BindInputs(TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FTime> *local_res20;
  FScriptContainerElement *local_88;
  FName *local_80;
  TDataReadReference<Metasound::FTime> *local_78;
  code *local_70;
  TDataReadReference<Metasound::FTime> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  FScriptContainerElement *local_48;
  code *local_40;
  FScriptContainerElement **local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_78 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_70)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = pFVar1;
  local_48 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_40)
  ;
  return;
}

// BindOutputs @ 14b0980e0

void __thiscall
Metasound::
TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
::BindOutputs(TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b098250

void __thiscall
Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
BindInputs(TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<int> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<int> *local_88;
  code *local_80;
  TDataReadReference<int> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b098370

void __thiscall
Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
BindOutputs(TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b098840

void __thiscall
Metasound::
TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::
BindInputs(TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>
           *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<float> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<float> *local_88;
  code *local_80;
  TDataReadReference<float> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b098960

void __thiscall
Metasound::
TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::
BindOutputs(TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b098b30

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
::BindInputs(TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FTime> *local_res20;
  FScriptContainerElement *local_88;
  FName *local_80;
  TDataReadReference<Metasound::FTime> *local_78;
  code *local_70;
  TDataReadReference<Metasound::FTime> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  FScriptContainerElement *local_48;
  code *local_40;
  FScriptContainerElement **local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_78 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_70)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = pFVar1;
  local_48 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_40)
  ;
  return;
}

// BindOutputs @ 14b098c50

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
::BindOutputs(TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b098f30

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::BindInputs(TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FAudioBuffer> *local_res20;
  FScriptContainerElement *local_88;
  FName *local_80;
  TDataReadReference<Metasound::FAudioBuffer> *local_78;
  code *local_70;
  TDataReadReference<Metasound::FAudioBuffer> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  FScriptContainerElement *local_48;
  code *local_40;
  FScriptContainerElement **local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_78 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_70)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = pFVar1;
  local_48 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_40)
  ;
  return;
}

// BindOutputs @ 14b099050

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::BindOutputs(TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// BindInputs @ 14b0993f0

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::BindInputs(TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
             *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataReadReference<Metasound::FAudioBuffer> *local_res20;
  FScriptContainerElement *local_98;
  FName *local_90;
  TDataReadReference<Metasound::FAudioBuffer> *local_88;
  code *local_80;
  TDataReadReference<Metasound::FAudioBuffer> **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FName **local_38;
  
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  local_res20 = &this->PrimaryOperandRef;
  local_78 = &local_res20;
  local_90 = local_res8;
  local_68 = &local_90;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->AdditionalOperandRefs).ArrayNum < 1) {
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
  pFVar1 = (this->AdditionalOperandRefs).AllocatorInstance.Data;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  local_48 = &local_98;
  local_60 = &local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14b099510

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::BindOutputs(TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MathOpNames::OutMathName);
  local_res18[0] = &this->ValueRef;
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

// TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float> @ 14b0b0150

TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
* __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
          (TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
           *this,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<float> *pTVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TMathOperator_VFAddAudioFloatNode_Metasound__V__TMathOpAdd_VFAudioBuffer_Metasound__M_2_VFAudioBuffer_2_M_Metasound__6B_
  ;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PrimaryOperandRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->PrimaryOperandRef).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->AdditionalOperandRefs;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AdditionalOperandRefs).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->AdditionalOperandRefs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->ValueRef,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->ValueRef =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TMathOpAdd<Metasound::FAudioBuffer,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,pTVar1,&this->ValueRef);
  return this;
}

// TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer> @ 14b0b0250

TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
* __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
          (TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
           *this,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TMathOperator_VFAddAudioNode_Metasound__V__TMathOpAdd_VFAudioBuffer_Metasound__V12__2_VFAudioBuffer_2_V42__Metasound__6B_
  ;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PrimaryOperandRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->PrimaryOperandRef).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->AdditionalOperandRefs;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AdditionalOperandRefs).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data;
  (this->AdditionalOperandRefs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->ValueRef,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->ValueRef =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,pTVar1,&this->ValueRef);
  return this;
}

// TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float> @ 14b0b0350

TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
* __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
          (TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
           *this,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<float> *pTVar5;
  undefined8 *puVar6;
  
  (this->InstanceData).bInit = false;
  this->_padding_ =
       (longlong)
       &
       ___7__TMathOperator_VFMultiplyAudioFloatNode_Metasound__V__TMathOpMultiply_VFAudioBuffer_Metasound__M_2_VFAudioBuffer_2_M_Metasound__6B_
  ;
  (this->InstanceData).LastGain = 0.0;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PrimaryOperandRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->PrimaryOperandRef).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->AdditionalOperandRefs;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar2 = &(this->AdditionalOperandRefs).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->AdditionalOperandRefs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->ValueRef,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->ValueRef =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  puVar6 = *(undefined8 **)&(this->ValueRef).field_0x8;
  (this->InstanceData).bInit = false;
  iVar3 = *(int *)(puVar6 + 1);
  if (0 < iVar3) {
    memset((void *)*puVar6,0,(longlong)iVar3 << 2);
  }
  return this;
}

// TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer> @ 14b0b0460

TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
* __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
          (TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
           *this,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TMathOperator_VFMultiplyAudioNode_Metasound__V__TMathOpMultiply_VFAudioBuffer_Metasound__V12__2_VFAudioBuffer_2_V42__Metasound__6B_
  ;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PrimaryOperandRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->PrimaryOperandRef).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->AdditionalOperandRefs;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AdditionalOperandRefs).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data;
  (this->AdditionalOperandRefs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->ValueRef,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->ValueRef =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,pTVar1,&this->ValueRef);
  return this;
}

// TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer> @ 14b0b0560

TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
* __thiscall
Metasound::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
          (TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
           *this,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TMathOperator_VFSubtractAudioNode_Metasound__V__TMathOpSubtract_VFAudioBuffer_Metasound__V12__2_VFAudioBuffer_2_V42__Metasound__6B_
  ;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PrimaryOperandRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->PrimaryOperandRef).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->AdditionalOperandRefs;
  *(undefined ***)&this->PrimaryOperandRef =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AdditionalOperandRefs).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data;
  (this->AdditionalOperandRefs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->ValueRef,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->ValueRef =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,pTVar1,&this->ValueRef);
  return this;
}

// operator() @ 14b0b7670

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Add");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Add");
  ::FName::FName(&local_res10,L"Audio by Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer,float>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::AddKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::AddKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::AddKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b7980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Add");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Add");
  ::FName::FName(&local_res10,L"Audio");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FAudioBuffer>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::AddKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::AddKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::AddKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b7c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Add");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Add");
  ::FName::FName(&local_res10,L"Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetAddDisplayName<float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'::
              __l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'::
               __l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<float>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpAdd<float,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::AddKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::AddKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::AddKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b7fa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Add");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Add");
  ::FName::FName(&local_res10,L"Int32");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetAddDisplayName<int>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'::__l2
              ::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'::
                  __l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'::
               __l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<int>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpAdd<int,int>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::AddKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::AddKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::AddKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b82b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Add");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Add");
  ::FName::FName(&local_res10,L"Time");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetAddDisplayName<Metasound::FTime>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetAddDisplayName<Metasound::FTime>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::AddKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::AddKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::AddKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b85c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Divide");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Divide");
  ::FName::FName(&local_res10,L"Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetDivideDisplayName<float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<float>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpDivide<float,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::DivideKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::DivideKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::DivideKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b88d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Divide");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Divide");
  ::FName::FName(&local_res10,L"Int32");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetDivideDisplayName<int>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'::
              __l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'::
               __l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<int>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpDivide<int,int>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::DivideKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::DivideKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::DivideKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b8be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Divide");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Divide");
  ::FName::FName(&local_res10,L"Time by Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetDivideDisplayName<Metasound::FTime,float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetDivideDisplayName<Metasound::FTime,float>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::DivideKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::DivideKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::DivideKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b8ef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  void *pvVar7;
  FVertexInterface *pFVar8;
  ulonglong uVar9;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_38;
  undefined8 local_20 [3];
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Logarithm");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,L"Logarithm");
  ::FName::FName(&local_res10,L"Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  pvVar7 = ThreadLocalStoragePointer;
  uVar9 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar7 + uVar9 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetLogarithmDisplayName<float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'::__l2
      ::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetLogarithmDisplayName<float>(void)'::
       __l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::TMathOpLogarithm<float,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)local_20) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Keywords).ArrayNum = 0;
    (__return_storage_ptr__->Keywords).ArrayMax = 0;
  }
  DestructItems<FText,int>((FText *)0x0,0);
  return __return_storage_ptr__;
}

// operator() @ 14b0b9180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Modulo");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Modulo");
  ::FName::FName(&local_res10,L"Int32");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetModuloDisplayName<int>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'::
              __l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'::
               __l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetModuloDisplayName<int>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpModulo<int,int>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::ModuloKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::ModuloKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::ModuloKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b9490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Multiply");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Multiply");
  ::FName::FName(&local_res10,L"Audio by Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer,float>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::MultiplyAudioFloatKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::MultiplyAudioFloatKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::MultiplyAudioFloatKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b97a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Multiply");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Multiply");
  ::FName::FName(&local_res10,L"Audio");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FAudioBuffer>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::MultiplyKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::MultiplyKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::MultiplyKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b9ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Multiply");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Multiply");
  ::FName::FName(&local_res10,L"Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetMultiplyDisplayName<float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'::__l2
      ::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<float>(void)'::__l2
       ::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpMultiply<float,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::MultiplyKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::MultiplyKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::MultiplyKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b9dc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Multiply");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Multiply");
  ::FName::FName(&local_res10,L"Int32");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetMultiplyDisplayName<int>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<int>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpMultiply<int,int>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::MultiplyKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::MultiplyKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::MultiplyKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0ba0d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Multiply");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Multiply");
  ::FName::FName(&local_res10,L"Time by Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetMultiplyDisplayName<Metasound::FTime,float>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpMultiply<Metasound::FTime,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::MultiplyKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::MultiplyKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::MultiplyKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0ba3e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Power");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Power");
  ::FName::FName(&local_res10,L"Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetPowerDisplayName<float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'::
              __l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetPowerDisplayName<float>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpPower<float,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::PowerKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::PowerKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::PowerKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0ba6f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Subtract");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Subtract");
  ::FName::FName(&local_res10,L"Audio");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FAudioBuffer>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::
           GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::SubtractKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::SubtractKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::SubtractKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0baa00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Subtract");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Subtract");
  ::FName::FName(&local_res10,L"Float");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetSubtractDisplayName<float>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'::__l2
      ::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<float>(void)'::__l2
       ::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpSubtract<float,float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::SubtractKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::SubtractKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::SubtractKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0bad10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Subtract");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Subtract");
  ::FName::FName(&local_res10,L"Int32");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetSubtractDisplayName<int>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'::__l2::
      DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<int>(void)'::__l2::
       DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpSubtract<int,int>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::SubtractKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::SubtractKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::SubtractKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0bb020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType FVar7;
  void *pvVar8;
  FVertexInterface *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNodeClassName local_38;
  
  ::FName::FName(&local_res10,"MetasoundEditor.Graph.Node.Math.Subtract");
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Subtract");
  ::FName::FName(&local_res10,L"Time");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  pvVar8 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  FVar5.Number = local_38.Name.Number;
  FVar5.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
  __return_storage_ptr__->MajorVersion = 1;
  lVar2 = *(longlong *)((longlong)pvVar8 + uVar10 * 8);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar5;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  if (*(int *)(lVar2 + 0x9d4c) <
      `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FText::FText(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
                    ::__l2::DisplayName);
      atexit(MathOpNames::GetSubtractDisplayName<Metasound::FTime>'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_38.Namespace =
       (FName)`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
              ::__l2::DisplayName.TextData.Reference;
  if (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
      ::__l2::DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
                  ::__l2::DisplayName.TextData.Reference + 8))
              (`class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
               ::__l2::DisplayName.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value =
       `class_FText_const___cdecl_Metasound::MathOpNames::GetSubtractDisplayName<Metasound::FTime>(void)'
       ::__l2::DisplayName.Flags;
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,(FText *)&local_38);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  local_38.Namespace = (FName)Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,&local_res10);
  }
  local_38.Name.ComparisonIndex.Value = Metasound::NodeCategories::Math.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_38,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38.Namespace + 0x10))();
  }
  FVar7.Data = Metasound::MathOpNames::SubtractKeywords.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar11 = Metasound::MathOpNames::SubtractKeywords.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar11);
  if (iVar11 == 0) {
    local_40 = Metasound::MathOpNames::SubtractKeywords._8_8_ & 0xffffffff;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,(int *)((longlong)&local_40 + 4));
    ConstructItems<FText,FText,int>(local_48.Data,(FText *)FVar7.Data,iVar11);
    iVar11 = (int)local_40;
  }
  pTVar1 = &__return_storage_ptr__->Keywords;
  if (pTVar1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FText,int>
              ((FText *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    iVar11 = 0;
    (__return_storage_ptr__->Keywords).ArrayNum = (int)local_40;
    (__return_storage_ptr__->Keywords).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FText,int>((FText *)local_48.Data,iVar11);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0c74c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
  *this_00;
  TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
  *pTVar2;
  FName local_res8;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  local_78[1] = (undefined **)local_58._8_8_;
  local_68 = (TReferenceControllerBase<0> *)local_58._16_8_;
  if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
  }
  local_88.ArrayNum = 1;
  local_78[0] = &___7__TDataReadReference_M_Metasound__6B_;
  pTVar2 = (TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
            *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            (local_88.AllocatorInstance.Data,(TDataReadReference<float> *)local_78,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_68);
  this_00 = ::operator_new(0x60);
  if (this_00 !=
      (TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
       *)0x0) {
    pTVar2 = TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_88);
  }
  param_1->Node = (INode *)pTVar2;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((TDataReadReference<float> *)local_88.AllocatorInstance.Data !=
      (TDataReadReference<float> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c7630

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
  *this_00;
  TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
  *pTVar2;
  FName local_res8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_58,&local_res8,pFVar1);
  local_78[1] = (undefined **)local_58._8_8_;
  local_68 = (TReferenceControllerBase<0> *)local_58._16_8_;
  if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
  }
  local_88.ArrayNum = 1;
  local_78[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar2 = (TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
            *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            (local_88.AllocatorInstance.Data,(TDataReadReference<Metasound::FAudioBuffer> *)local_78
             ,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_68);
  this_00 = ::operator_new(0x60);
  if (this_00 !=
      (TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
       *)0x0) {
    pTVar2 = TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_88);
  }
  param_1->Node = (INode *)pTVar2;
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_88.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c77a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFAddFloatNode_Metasound__V__TMathOpAdd_MM_2_MM_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<float>::TDataReference<float><>((TDataReference<float> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    TMathOpAdd<float,float>::Calculate
              ((TMathOpAdd<float,float> *)(pIVar4 + 1),(TDataReadReference<float> *)(pIVar4 + 2),
               pTVar1,(TDataWriteReference<float> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c79d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_H_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
            ((void *)local_98,(TDataReadReference<int> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFAddInt32Node_Metasound__V__TMathOpAdd_HH_2_HH_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<int> *)local_res8,iVar3);
    }
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_H_Metasound__6B_;
    TMathOpAdd<int,int>::Calculate
              ((TMathOpAdd<int,int> *)(pIVar4 + 1),(TDataReadReference<int> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<int> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<int>,int>
            ((TDataReadReference<int> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c7c00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<Metasound::FTime>,Metasound::TDataReadReference<Metasound::FTime>,int>
            ((void *)local_98,(TDataReadReference<Metasound::FTime> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFAddTimeNode_Metasound__V__TMathOpAdd_VFTime_Metasound__V12__2_VFTime_2_V42__Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<Metasound::FTime>,Metasound::TDataReadReference<Metasound::FTime>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<Metasound::FTime> *)local_res8
                 ,iVar3);
    }
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    TMathOpAdd<Metasound::FTime,Metasound::FTime>::Calculate
              ((TMathOpAdd<Metasound::FTime,Metasound::FTime> *)(pIVar4 + 1),
               (TDataReadReference<Metasound::FTime> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<Metasound::FTime> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<Metasound::FTime>,int>
            ((TDataReadReference<Metasound::FTime> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c7e30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFDivideFloatNode_Metasound__V__TMathOpDivide_MM_2_MM_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<float>::TDataReference<float><>((TDataReference<float> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    TMathOpDivide<float,float>::Calculate
              ((TMathOpDivide<float,float> *)(pIVar4 + 1),(TDataReadReference<float> *)(pIVar4 + 2),
               pTVar1,(TDataWriteReference<float> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c8060

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_H_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
            ((void *)local_98,(TDataReadReference<int> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFDivideInt32Node_Metasound__V__TMathOpDivide_HH_2_HH_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<int> *)local_res8,iVar3);
    }
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_H_Metasound__6B_;
    TMathOpDivide<int,int>::Calculate
              ((TMathOpDivide<int,int> *)(pIVar4 + 1),(TDataReadReference<int> *)(pIVar4 + 2),pTVar1
               ,(TDataWriteReference<int> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<int>,int>
            ((TDataReadReference<int> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c8290

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  pIVar5 = (INode *)0x0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFDivideTimeFloatNode_Metasound__V__TMathOpDivide_VFTime_Metasound__M_2_VFTime_2_M_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    pIVar4[2] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    TMathOpDivide<Metasound::FTime,float>::Calculate
              ((TMathOpDivide<Metasound::FTime,float> *)(pIVar4 + 1),
               (TDataReadReference<Metasound::FTime> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<Metasound::FTime> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c84d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFLogarithmFloatNode_Metasound__V__TMathOpLogarithm_MM_2_MM_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<float>::TDataReference<float><>((TDataReference<float> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    TMathOpLogarithm<float,float>::Calculate
              ((TMathOpLogarithm<float,float> *)(pIVar4 + 1),
               (TDataReadReference<float> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<float> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c8700

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_H_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
            ((void *)local_98,(TDataReadReference<int> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFModuloInt32Node_Metasound__V__TMathOpModulo_HH_2_HH_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<int> *)local_res8,iVar3);
    }
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_H_Metasound__6B_;
    TMathOpModulo<int,int>::Calculate
              ((TMathOpModulo<int,int> *)(pIVar4 + 1),(TDataReadReference<int> *)(pIVar4 + 2),pTVar1
               ,(TDataWriteReference<int> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<int>,int>
            ((TDataReadReference<int> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c8930

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
  *this_00;
  TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
  *pTVar2;
  FName local_res8;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  local_78[1] = (undefined **)local_58._8_8_;
  local_68 = (TReferenceControllerBase<0> *)local_58._16_8_;
  if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
  }
  local_88.ArrayNum = 1;
  local_78[0] = &___7__TDataReadReference_M_Metasound__6B_;
  pTVar2 = (TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
            *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            (local_88.AllocatorInstance.Data,(TDataReadReference<float> *)local_78,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_68);
  this_00 = ::operator_new(0x60);
  if (this_00 !=
      (TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
       *)0x0) {
    pTVar2 = TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_88);
  }
  param_1->Node = (INode *)pTVar2;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((TDataReadReference<float> *)local_88.AllocatorInstance.Data !=
      (TDataReadReference<float> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c8aa0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
  *this_00;
  TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
  *pTVar2;
  FName local_res8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_58,&local_res8,pFVar1);
  local_78[1] = (undefined **)local_58._8_8_;
  local_68 = (TReferenceControllerBase<0> *)local_58._16_8_;
  if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
  }
  local_88.ArrayNum = 1;
  local_78[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar2 = (TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
            *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            (local_88.AllocatorInstance.Data,(TDataReadReference<Metasound::FAudioBuffer> *)local_78
             ,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_68);
  this_00 = ::operator_new(0x60);
  if (this_00 !=
      (TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
       *)0x0) {
    pTVar2 = TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_88);
  }
  param_1->Node = (INode *)pTVar2;
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_88.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c8c10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFMultiplyFloatNode_Metasound__V__TMathOpMultiply_MM_2_MM_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<float>::TDataReference<float><>((TDataReference<float> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    TMathOpMultiply<float,float>::Calculate
              ((TMathOpMultiply<float,float> *)(pIVar4 + 1),
               (TDataReadReference<float> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<float> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c8e40

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_H_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
            ((void *)local_98,(TDataReadReference<int> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFMultiplyInt32Node_Metasound__V__TMathOpMultiply_HH_2_HH_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<int> *)local_res8,iVar3);
    }
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_H_Metasound__6B_;
    TMathOpMultiply<int,int>::Calculate
              ((TMathOpMultiply<int,int> *)(pIVar4 + 1),(TDataReadReference<int> *)(pIVar4 + 2),
               pTVar1,(TDataWriteReference<int> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<int>,int>
            ((TDataReadReference<int> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c9070

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  pIVar5 = (INode *)0x0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFMultiplyTimeFloatNode_Metasound__V__TMathOpMultiply_VFTime_Metasound__M_2_VFTime_2_M_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    pIVar4[2] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    TMathOpMultiply<Metasound::FTime,float>::Calculate
              ((TMathOpMultiply<Metasound::FTime,float> *)(pIVar4 + 1),
               (TDataReadReference<Metasound::FTime> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<Metasound::FTime> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c92b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFPowerFloatNode_Metasound__V__TMathOpPower_MM_2_MM_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<float>::TDataReference<float><>((TDataReference<float> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    TMathOpPower<float,float>::Calculate
              ((TMathOpPower<float,float> *)(pIVar4 + 1),(TDataReadReference<float> *)(pIVar4 + 2),
               pTVar1,(TDataWriteReference<float> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c94e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
  *this_00;
  TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
  *pTVar2;
  FName local_res8;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_58,&local_res8,pFVar1);
  local_78[1] = (undefined **)local_58._8_8_;
  local_68 = (TReferenceControllerBase<0> *)local_58._16_8_;
  if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
  }
  local_88.ArrayNum = 1;
  local_78[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar2 = (TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
            *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            (local_88.AllocatorInstance.Data,(TDataReadReference<Metasound::FAudioBuffer> *)local_78
             ,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_68);
  this_00 = ::operator_new(0x60);
  if (this_00 !=
      (TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
       *)0x0) {
    pTVar2 = TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_88);
  }
  param_1->Node = (INode *)pTVar2;
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_88.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c9650

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
            ((void *)local_98,(TDataReadReference<float> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFSubtractFloatNode_Metasound__V__TMathOpSubtract_MM_2_MM_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<float> *)local_res8,iVar3);
    }
    TDataReference<float>::TDataReference<float><>((TDataReference<float> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    TMathOpSubtract<float,float>::Calculate
              ((TMathOpSubtract<float,float> *)(pIVar4 + 1),
               (TDataReadReference<float> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<float> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c9880

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_H_Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
            ((void *)local_98,(TDataReadReference<int> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFSubtractInt32Node_Metasound__V__TMathOpSubtract_HH_2_HH_Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<int>,Metasound::TDataReadReference<int>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<int> *)local_res8,iVar3);
    }
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_H_Metasound__6B_;
    TMathOpSubtract<int,int>::Calculate
              ((TMathOpSubtract<int,int> *)(pIVar4 + 1),(TDataReadReference<int> *)(pIVar4 + 2),
               pTVar1,(TDataWriteReference<int> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<int>,int>
            ((TDataReadReference<int> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c9ab0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *pTVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int iVar3;
  INode *pIVar4;
  INode *pIVar5;
  FName local_res8;
  FName local_98;
  int local_90;
  int local_8c;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::PrimaryOperandName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MathOpNames::AdditionalOperandsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_68,&local_res8,pFVar2);
  local_88[1] = (undefined **)local_68._8_8_;
  local_78 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_90 = 1;
  pIVar5 = (INode *)0x0;
  local_88[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)&local_98,1,&local_8c);
  ConstructItems<Metasound::TDataReadReference<Metasound::FTime>,Metasound::TDataReadReference<Metasound::FTime>,int>
            ((void *)local_98,(TDataReadReference<Metasound::FTime> *)local_88,1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_78);
  pIVar4 = ::operator_new(0x60);
  iVar3 = local_90;
  if (pIVar4 != (INode *)0x0) {
    *pIVar4 = (INode)&
                     ___7__TMathOperator_VFSubtractTimeNode_Metasound__V__TMathOpSubtract_VFTime_Metasound__V12__2_VFTime_2_V42__Metasound__6B_
    ;
    pIVar4[2] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar4[3] = (INode)local_48._8_8_;
    pIVar4[4] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar4[2] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pTVar1 = (TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *)
             (pIVar4 + 6);
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res8 = local_98;
    *(int *)(pIVar4 + 7) = local_90;
    if (local_90 == 0) {
      *(undefined4 *)&pIVar4[7].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_90,0,(ForAnyElementType *)pTVar1,local_90,(int *)&pIVar4[7].field_0x4)
      ;
      ConstructItems<Metasound::TDataReadReference<Metasound::FTime>,Metasound::TDataReadReference<Metasound::FTime>,int>
                ((pTVar1->AllocatorInstance).Data,(TDataReadReference<Metasound::FTime> *)local_res8
                 ,iVar3);
    }
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)(pIVar4 + 8),NewObject);
    pIVar4[8] = (INode)&___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    TMathOpSubtract<Metasound::FTime,Metasound::FTime>::Calculate
              ((TMathOpSubtract<Metasound::FTime,Metasound::FTime> *)(pIVar4 + 1),
               (TDataReadReference<Metasound::FTime> *)(pIVar4 + 2),pTVar1,
               (TDataWriteReference<Metasound::FTime> *)(pIVar4 + 8));
    pIVar5 = pIVar4;
  }
  param_1->Node = pIVar5;
  DestructItems<Metasound::TDataReadReference<Metasound::FTime>,int>
            ((TDataReadReference<Metasound::FTime> *)local_98,local_90);
  if (local_98 != (FName)0x0) {
    FMemory::Free((void *)local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b0d6c20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d6cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d6d40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d6dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d6e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d6ef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d6f80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d70a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d71c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7250

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d72e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7370

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7400

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d75b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d7640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d76d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Info;
}

// Reset @ 14b0e4a70

void __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::Reset(TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
        *this,FResetParams *param_1)

{
  TMathOpAdd<Metasound::FAudioBuffer,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4a90

void __thiscall
Metasound::
TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::Reset(TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
        *this,FResetParams *param_1)

{
  TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4ab0

void __thiscall
Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>::
Reset(TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float> *this,
     FResetParams *param_1)

{
  TMathOpAdd<float,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4ad0

void __thiscall
Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::Reset
          (TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int> *this,
          FResetParams *param_1)

{
  TMathOpAdd<int,int>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4af0

void __thiscall
Metasound::
TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::Reset(TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
        *this,FResetParams *param_1)

{
  TMathOpAdd<Metasound::FTime,Metasound::FTime>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4b10

void __thiscall
Metasound::
TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>::Reset
          (TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>
           *this,FResetParams *param_1)

{
  TMathOpDivide<float,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4b30

void __thiscall
Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>::
Reset(TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int> *this,
     FResetParams *param_1)

{
  TMathOpDivide<int,int>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4b50

void __thiscall
Metasound::
TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
::Reset(TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
        *this,FResetParams *param_1)

{
  TMathOpDivide<Metasound::FTime,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4b70

void __thiscall
Metasound::
TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>::
Reset(TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>
      *this,FResetParams *param_1)

{
  TMathOpLogarithm<float,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4b90

void __thiscall
Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>::
Reset(TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int> *this,
     FResetParams *param_1)

{
  TMathOpModulo<int,int>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4bb0

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
::Reset(TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
        *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  (this->InstanceData).bInit = false;
  puVar2 = *(undefined8 **)&(this->ValueRef).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b0e4be0

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::Reset(TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
        *this,FResetParams *param_1)

{
  TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4c00

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>::
Reset(TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>
      *this,FResetParams *param_1)

{
  TMathOpMultiply<float,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4c20

void __thiscall
Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
::Reset(TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
        *this,FResetParams *param_1)

{
  TMathOpMultiply<int,int>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4c40

void __thiscall
Metasound::
TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
::Reset(TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
        *this,FResetParams *param_1)

{
  TMathOpMultiply<Metasound::FTime,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4c60

void __thiscall
Metasound::
TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>::Reset
          (TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>
           *this,FResetParams *param_1)

{
  TMathOpPower<float,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4c80

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
::Reset(TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
        *this,FResetParams *param_1)

{
  TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4ca0

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>::
Reset(TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>
      *this,FResetParams *param_1)

{
  TMathOpSubtract<float,float>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4cc0

void __thiscall
Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
::Reset(TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
        *this,FResetParams *param_1)

{
  TMathOpSubtract<int,int>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

// Reset @ 14b0e4ce0

void __thiscall
Metasound::
TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
::Reset(TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
        *this,FResetParams *param_1)

{
  TMathOpSubtract<Metasound::FTime,Metasound::FTime>::Calculate
            (&this->InstanceData,&this->PrimaryOperandRef,&this->AdditionalOperandRefs,
             &this->ValueRef);
  return;
}

