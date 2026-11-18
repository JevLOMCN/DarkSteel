// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 76

// BindInputs @ 14ad6d7a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14ad6d7b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = (longlong)this + 8;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14ad71610

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::Frontend::FAnalyzerAddress>::
BindInputs(TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14ad71620

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::Frontend::FAnalyzerAddress>::
BindOutputs(TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_res18 [2]
  ;
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14ad78800

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14ad78810

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad96ae0

TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad96bc0

TVariableOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x10) = 0x10;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)((longlong)this + 0x10) = puVar3 + 2;
    *(undefined8 **)((longlong)this + 0x18) = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad96ca0

TVariableOperator<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::Frontend::FAnalyzerAddress>::
TVariableOperator<Metasound::Frontend::FAnalyzerAddress>
          (TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *this,FOperatorSettings *param_1
          ,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFAnalyzerAddress_Frontend_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad9da80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad9dab0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad9dae0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::Frontend::FAnalyzerAddress>::
~TVariableOperator<Metasound::Frontend::FAnalyzerAddress>
          (TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14ae92ab0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<float>::BindInputs
          (TVariableOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14ae92b50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<float>::BindOutputs
          (TVariableOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<float>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<float>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<float>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<float>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14ae973a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBuffer>::BindInputs
          (TVariableOperator<Metasound::FAudioBuffer> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14ae973e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBuffer>::BindOutputs
          (TVariableOperator<Metasound::FAudioBuffer> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14ae97880

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14ae97890

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14ae9fb40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14ae9fb90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aea1940

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<int>::BindInputs
          (TVariableOperator<int> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aea19e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<int>::BindOutputs
          (TVariableOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<int>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<int>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<int>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<int>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aea5630

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FSendAddress>::BindInputs
          (TVariableOperator<Metasound::FSendAddress> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aea5640

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FSendAddress>::BindOutputs
          (TVariableOperator<Metasound::FSendAddress> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FSendAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aea8870

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aea88e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeb2130

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aeb2230

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeb22c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<bool>::BindInputs
          (TVariableOperator<bool> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aeb22d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<bool>::BindOutputs
          (TVariableOperator<bool> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<bool>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<bool>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeb6980

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTime>::BindInputs
          (TVariableOperator<Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aeb6990

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTime>::BindOutputs
          (TVariableOperator<Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTime>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aebeaf0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aebeb00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *local_30
  ;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aec2c00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FMetasoundParameterStorageWrapper>::
BindInputs(TVariableOperator<FMetasoundParameterStorageWrapper> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aec2c10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FMetasoundParameterStorageWrapper>::
BindOutputs(TVariableOperator<FMetasoundParameterStorageWrapper> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeca2a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTrigger>::BindInputs
          (TVariableOperator<Metasound::FTrigger> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aeca2b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTrigger>::BindOutputs
          (TVariableOperator<Metasound::FTrigger> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTrigger>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aed4b50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aed4bc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aedc3d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FString>::BindInputs
          (TVariableOperator<FString> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aedc3e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FString>::BindOutputs
          (TVariableOperator<FString> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<FString>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FString>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aee5bc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14aee5cc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<int> @ 14af38450

TVariableOperator<int> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<int>::TVariableOperator<int>
          (TVariableOperator<int> *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<int> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TVariableOperator_H_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable_H_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_H_Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<float> @ 14af38530

TVariableOperator<float> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<float>::TVariableOperator<float>
          (TVariableOperator<float> *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<float> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TVariableOperator_M_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable_M_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_M_Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af38610

TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af386f0

TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af387d0

TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af388b0

TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af38990

TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af38a70

TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af38b50

TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::FAudioBuffer> @ 14af38c30

TVariableOperator<Metasound::FAudioBuffer> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBuffer>::
TVariableOperator<Metasound::FAudioBuffer>
          (TVariableOperator<Metasound::FAudioBuffer> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FAudioBuffer> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFAudioBuffer_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFAudioBuffer_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::FAudioBuffer> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<FMetasoundParameterStorageWrapper> @ 14af38d10

TVariableOperator<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FMetasoundParameterStorageWrapper>::
TVariableOperator<FMetasoundParameterStorageWrapper>
          (TVariableOperator<FMetasoundParameterStorageWrapper> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<FMetasoundParameterStorageWrapper> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFMetasoundParameterStorageWrapper___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::FSendAddress> @ 14af38df0

TVariableOperator<Metasound::FSendAddress> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FSendAddress>::
TVariableOperator<Metasound::FSendAddress>
          (TVariableOperator<Metasound::FSendAddress> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FSendAddress> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFSendAddress_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFSendAddress_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::FSendAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<FString> @ 14af38ed0

TVariableOperator<FString> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FString>::TVariableOperator<FString>
          (TVariableOperator<FString> *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<FString> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TVariableOperator_VFString___MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFString___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFString___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFString___Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<Metasound::FTime> @ 14af38fb0

TVariableOperator<Metasound::FTime> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTime>::
TVariableOperator<Metasound::FTime>
          (TVariableOperator<Metasound::FTime> *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FTime> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableOperator_VFTime_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFTime_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::FTime> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<Metasound::FTrigger> @ 14af39090

TVariableOperator<Metasound::FTrigger> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTrigger>::
TVariableOperator<Metasound::FTrigger>
          (TVariableOperator<Metasound::FTrigger> *this,FOperatorSettings *param_1,FLiteral *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FTrigger> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableOperator_VFTrigger_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFTrigger_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::FTrigger> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<bool> @ 14af39170

TVariableOperator<bool> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<bool>::TVariableOperator<bool>
          (TVariableOperator<bool> *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<bool> *pTVar4;
  
  this->_padding_ =
       (longlong)&___7__TVariableOperator__N_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable__N_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable__N_Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable__N_Metasound___Metasound__6B_;
  return this;
}

// ~TVariableOperator<int> @ 14af42010

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<int>::~TVariableOperator<int>
          (TVariableOperator<int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<float> @ 14af42040

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<float>::~TVariableOperator<float>
          (TVariableOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af42070

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af420a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af420d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af42100

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af42130

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af42160

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af42190

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FAudioBuffer> @ 14af421c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBuffer>::
~TVariableOperator<Metasound::FAudioBuffer>(TVariableOperator<Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<FMetasoundParameterStorageWrapper> @ 14af421f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FMetasoundParameterStorageWrapper>::
~TVariableOperator<FMetasoundParameterStorageWrapper>
          (TVariableOperator<FMetasoundParameterStorageWrapper> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FSendAddress> @ 14af42220

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FSendAddress>::
~TVariableOperator<Metasound::FSendAddress>(TVariableOperator<Metasound::FSendAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<FString> @ 14af42250

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<FString>::~TVariableOperator<FString>
          (TVariableOperator<FString> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FTime> @ 14af42280

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTime>::
~TVariableOperator<Metasound::FTime>(TVariableOperator<Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FTrigger> @ 14af422b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTrigger>::
~TVariableOperator<Metasound::FTrigger>(TVariableOperator<Metasound::FTrigger> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<bool> @ 14af422e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<bool>::~TVariableOperator<bool>
          (TVariableOperator<bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

