// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 84

// BindInputs @ 14afc5d80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14afc5d90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afcbf40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14afcbf50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afceb00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FStereoAudioFormat>::
BindInputs(TVariableOperator<Metasound::FStereoAudioFormat> *this,FInputVertexInterfaceData *param_1
          )

{
  return;
}

// BindOutputs @ 14afceb10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FStereoAudioFormat>::
BindOutputs(TVariableOperator<Metasound::FStereoAudioFormat> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd1c40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FMonoAudioFormat>::BindInputs
          (TVariableOperator<Metasound::FMonoAudioFormat> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14afd1c50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FMonoAudioFormat>::
BindOutputs(TVariableOperator<Metasound::FMonoAudioFormat> *this,FOutputVertexInterfaceData *param_1
           )

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff8520

TVariableOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff8600

TVariableOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::FMonoAudioFormat> @ 14aff86e0

TVariableOperator<Metasound::FMonoAudioFormat> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FMonoAudioFormat>::
TVariableOperator<Metasound::FMonoAudioFormat>
          (TVariableOperator<Metasound::FMonoAudioFormat> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FMonoAudioFormat> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFMonoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::FMonoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::FStereoAudioFormat> @ 14aff87c0

TVariableOperator<Metasound::FStereoAudioFormat> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FStereoAudioFormat>::
TVariableOperator<Metasound::FStereoAudioFormat>
          (TVariableOperator<Metasound::FStereoAudioFormat> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FStereoAudioFormat> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFStereoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::FStereoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14affc570

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14affc5a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FMonoAudioFormat> @ 14affc5d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FMonoAudioFormat>::
~TVariableOperator<Metasound::FMonoAudioFormat>
          (TVariableOperator<Metasound::FMonoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FStereoAudioFormat> @ 14affc600

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FStereoAudioFormat>::
~TVariableOperator<Metasound::FStereoAudioFormat>
          (TVariableOperator<Metasound::FStereoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14b034850

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b034860

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b051950

TVariableOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0548d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14b07c7b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b07c7c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b082410

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b082420

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b086d30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b086d40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b08aff0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b08b000

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b2820

TVariableOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b2900

TVariableOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)()
        ;
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b29e0

TVariableOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b2ac0

TVariableOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b5f50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b5f80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b5fb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b5fe0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14b0ec180

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b0ec280

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0ef940

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b0ef950

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0f8ce0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b0f8d30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b100440

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b100480

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b10aad0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b10aae0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b110e70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b110fc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b113ce0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b113cf0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b13e320

TVariableOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)()
        ;
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b13e400

TVariableOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b13e4e0

TVariableOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b13e5c0

TVariableOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b13e6a0

TVariableOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b13e780

TVariableOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b13e860

TVariableOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b144ec0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b144ef0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b144f20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b144f50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b144f80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b144fb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b144fe0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14b1ac690

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b1ac6a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1b9600

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b1b9610

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cd4b0

TVariableOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cd590

TVariableOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cfcb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cfce0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14b1f2a90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b1f2aa0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b20ed20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b20ed30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b215eb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b215ec0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b232ed0

TVariableOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b232fb0

TVariableOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b233090

TVariableOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
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
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___0A__SharedPointerInternals__6B_
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
        pTVar4 = (TVariableOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b2376c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b2376f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
~TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b237720

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
~TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

