// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 252

// BindInputs @ 14afcea10

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afceaf0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14afd0970

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd0a50

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14afd65b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::BindInputs
          (TSendOperator<Metasound::FStereoAudioFormat> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd6690

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::BindOutputs
          (TSendOperator<Metasound::FStereoAudioFormat> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14afd9120

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::BindInputs
          (TSendOperator<Metasound::FMonoAudioFormat> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd9200

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::BindOutputs
          (TSendOperator<Metasound::FMonoAudioFormat> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff5ae0

TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
           ((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff5c20

TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::FMonoAudioFormat> @ 14aff5d60

TSendOperator<Metasound::FMonoAudioFormat> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::
TSendOperator<Metasound::FMonoAudioFormat>
          (TSendOperator<Metasound::FMonoAudioFormat> *this,
          TDataReadReference<Metasound::FMonoAudioFormat> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
  *pTVar1;
  longlong lVar2;
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFMonoAudioFormat_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TAudioSender<Metasound::FMonoAudioFormat> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TAudioSender<Metasound::FMonoAudioFormat> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TAudioSender<Metasound::FMonoAudioFormat> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TAudioSender<Metasound::FMonoAudioFormat> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::FStereoAudioFormat> @ 14aff5ea0

TSendOperator<Metasound::FStereoAudioFormat> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::
TSendOperator<Metasound::FStereoAudioFormat>
          (TSendOperator<Metasound::FStereoAudioFormat> *this,
          TDataReadReference<Metasound::FStereoAudioFormat> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
  *pTVar1;
  longlong lVar2;
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFStereoAudioFormat_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TAudioSender<Metasound::FStereoAudioFormat> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TAudioSender<Metasound::FStereoAudioFormat> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TAudioSender<Metasound::FStereoAudioFormat> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TAudioSender<Metasound::FStereoAudioFormat> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14affbf30

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14affbf90

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
~TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FMonoAudioFormat> @ 14affbff0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::
~TSendOperator<Metasound::FMonoAudioFormat>(TSendOperator<Metasound::FMonoAudioFormat> *this)

{
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFMonoAudioFormat_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TAudioSender<Metasound::FMonoAudioFormat> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FStereoAudioFormat> @ 14affc050

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::
~TSendOperator<Metasound::FStereoAudioFormat>(TSendOperator<Metasound::FStereoAudioFormat> *this)

{
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFStereoAudioFormat_Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TAudioSender<Metasound::FStereoAudioFormat> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b001ce0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b001eb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b002080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b002250

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14b008ba0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::CreateNewSender
          (void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)(*pcVar2)()
        ;
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b008dc4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b008dc4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b008dc4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b008e00

TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b009024;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b009024;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b009024:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b009060

TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::CreateNewSender
          (TSendOperator<Metasound::FMonoAudioFormat> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TAudioSender<Metasound::FMonoAudioFormat> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TAudioSender<Metasound::FMonoAudioFormat> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>::
              operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TAudioSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3c4,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TAudioSender<Metasound::FMonoAudioFormat> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TAudioSender<Metasound::FMonoAudioFormat> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b009284;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b009284;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b009284:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b0092c0

TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::CreateNewSender
          (TSendOperator<Metasound::FStereoAudioFormat> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TAudioSender<Metasound::FStereoAudioFormat> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TAudioSender<Metasound::FStereoAudioFormat> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>
              ::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TAudioSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3c4,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TAudioSender<Metasound::FStereoAudioFormat> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TAudioSender<Metasound::FStereoAudioFormat> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b0094e4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b0094e4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b0094e4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
          )in_RDX;
}

// CreateOperator @ 14b012580

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b012720

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0128c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FMonoAudioFormat> *pTVar7;
  TSendOperator<Metasound::FMonoAudioFormat> *this;
  TSendOperator<Metasound::FMonoAudioFormat> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::FMonoAudioFormat>
                       (pFVar1,(TDataReadReference<Metasound::FMonoAudioFormat> *)local_58,pFVar5,
                        pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FMonoAudioFormat> *)0x0;
    if (this != (TSendOperator<Metasound::FMonoAudioFormat> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FMonoAudioFormat>
                         (this,(TDataReadReference<Metasound::FMonoAudioFormat> *)local_78,
                          (TDataReadReference<Metasound::FSendAddress> *)local_98,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b012a60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FStereoAudioFormat> *pTVar7;
  TSendOperator<Metasound::FStereoAudioFormat> *this;
  TSendOperator<Metasound::FStereoAudioFormat> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::FStereoAudioFormat>
                       (pFVar1,(TDataReadReference<Metasound::FStereoAudioFormat> *)local_58,pFVar5,
                        pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FStereoAudioFormat> *)0x0;
    if (this != (TSendOperator<Metasound::FStereoAudioFormat> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FStereoAudioFormat>
                         (this,(TDataReadReference<Metasound::FStereoAudioFormat> *)local_78,
                          (TDataReadReference<Metasound::FSendAddress> *)local_98,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b0168f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b016c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b016f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<Metasound::FMonoAudioFormat> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FMonoAudioFormat>::
           TInputDataVertex<Metasound::FMonoAudioFormat><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b017220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<Metasound::FStereoAudioFormat> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FStereoAudioFormat>::
           TInputDataVertex<Metasound::FStereoAudioFormat><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b027ce0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b027d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b027e00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b027e90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14b029b20

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
      ;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b029b90

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b029c00

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b029c70

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14b0306c0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
           ((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b030770

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b030820

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::Reset
          (TSendOperator<Metasound::FMonoAudioFormat> *this,FResetParams *param_1)

{
  longlong lVar1;
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
  TVar5;
  TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TAudioSender<Metasound::FMonoAudioFormat> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TAudioSender<Metasound::FMonoAudioFormat> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TAudioSender<Metasound::FMonoAudioFormat> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TAudioSender<Metasound::FMonoAudioFormat> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b0308d0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::Reset
          (TSendOperator<Metasound::FStereoAudioFormat> *this,FResetParams *param_1)

{
  longlong lVar1;
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
  TVar5;
  TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TAudioSender<Metasound::FStereoAudioFormat> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TAudioSender<Metasound::FStereoAudioFormat> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TAudioSender<Metasound::FStereoAudioFormat> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TAudioSender<Metasound::FStereoAudioFormat> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetSenderAndCleanupChannel @ 14b032490

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b032530

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b0325d0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::ResetSenderAndCleanupChannel
          (TSendOperator<Metasound::FMonoAudioFormat> *this)

{
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TAudioSender<Metasound::FMonoAudioFormat> *)0x0) {
    (this->Sender).Ptr = (TAudioSender<Metasound::FMonoAudioFormat> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b032670

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::
ResetSenderAndCleanupChannel(TSendOperator<Metasound::FStereoAudioFormat> *this)

{
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TAudioSender<Metasound::FStereoAudioFormat> *)0x0) {
    (this->Sender).Ptr = (TAudioSender<Metasound::FStereoAudioFormat> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// BindInputs @ 14b03ef50

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b03f030

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b051200

TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b054740

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b059a70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14b05ee30

TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::
              __l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b05f054;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b05f054;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b05f054:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
          )in_RDX;
}

// CreateOperator @ 14b066020

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *
                               )local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *
                               )local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b067eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b075440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14b076420

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14b07a810

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetSenderAndCleanupChannel @ 14b07c0b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// BindInputs @ 14b082690

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0827a0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b0861c0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0862a0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b088a40

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b088b20

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b08ca00

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b08cae0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b0ca0

TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b0de0

TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_1
          ,TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b0f20

TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b1060

TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
           ((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b5910

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
~TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b5970

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b59d0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b5a30

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b0bb330

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b0bb500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
  ::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b0bb6d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
           ::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b0bb8a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo'::__l2
::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName
            ();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14b0c4be0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::
              __l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b0c4e04;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b0c4e04;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b0c4e04:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b0c4e40

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b0c5064;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b0c5064;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b0c5064:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b0c50a0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2
              ::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b0c52c4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b0c52c4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b0c52c4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b0c5300

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::CreateNewSender
          (void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                    (*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b0c5524;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b0c5524;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b0c5524:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
          )in_RDX;
}

// CreateOperator @ 14b0ca930

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                               local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0caad0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cac70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)
                               local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cae10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b0ce8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b0cebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b0ceef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::DeclareVertexInterface'
             ::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b0cf200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b0d8020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d80b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d8140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0d81d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo'
      ::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14b0da0c0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b0da130

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b0da1a0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>()
      ;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b0da210

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14b0e4d80

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b0e4e30

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b0e4ee0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b0e4f90

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
           ((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetSenderAndCleanupChannel @ 14b0e7010

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b0e70b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b0e7150

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b0e71f0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// BindInputs @ 14b0e9440

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0e95b0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b0ef850

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0ef930

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b0f6350

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0f6430

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b0fb4b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0fb590

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b102930

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b102a10

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b10b6f0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b10b7e0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b10ffa0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b110080

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b13b300

TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_1
          ,TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b13b440

TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b13b580

TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b13b6c0

TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b13b800

TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)((longlong)this + 0x80)
  ;
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b13b940

TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
           ((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b13ba80

TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b1443d0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b144430

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b144490

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b1444f0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::~TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b144550

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b1445b0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b144610

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
~TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b14c180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
  ::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b14c350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b14c520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
  ::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b14c6f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b14c8c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b14ca90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b14cc60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14b1658d0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b165af4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b165af4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b165af4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b165b30

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2
              ::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b165d54;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b165d54;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b165d54:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b165d90

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>()
        ;
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(local_90 + 0x10))
    {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b165fb4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b165fb4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b165fb4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b165ff0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(local_90 + 0x10))
    {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b166214;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b166214;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b166214:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b166250

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::CreateNewSender
          (void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b166474;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b166474;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b166474:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b1664b0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::CreateNewSender
          (void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b1666d4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b1666d4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b1666d4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b166710

TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b166934;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b166934;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b166934:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
          )in_RDX;
}

// CreateOperator @ 14b173b20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b173cc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)
                               local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b173e60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b174000

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1741a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b174340

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1744e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b17a410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17a720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::DeclareVertexInterface'
             ::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17aa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17b050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17b670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b1954d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b195560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b1955f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b195680

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b195710

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b1957a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b195830

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14b1988e0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b198950

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b1989c0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b198a30

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b198aa0

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b198b10

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b198b80

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14b1a7310

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b1a73c0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b1a7470

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b1a7520

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b1a75d0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)((longlong)this + 0x80)
  ;
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b1a7680

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
           ((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b1a7730

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetSenderAndCleanupChannel @ 14b1aa910

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b1aa9b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b1aaa50

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b1aaaf0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b1aab90

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b1aac30

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b1aacd0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// BindInputs @ 14b1b2270

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b2350

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b1b3970

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b3a50

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cc6f0

TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cc830

TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cf990

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cf9f0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b1d1cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b1d1e90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14b1d68a0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::
              __l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b1d6ac4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b1d6ac4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b1d6ac4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b1d6b00

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b1d6d24;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b1d6d24;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b1d6d24:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
          )in_RDX;
}

// CreateOperator @ 14b1d8c20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                               local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1d8dc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b1db7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b1dbad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b1e2ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b1e3080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14b1e4250

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b1e42c0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14b1e9b20

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b1e9bd0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetSenderAndCleanupChannel @ 14b1eb150

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b1eb1f0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// BindInputs @ 14b1f0e80

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1f0f60

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b1f69a0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1f6aa0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b216340

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b216420

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b22e7c0

TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b22e900

TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
           ((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b22ea40

TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b235ab0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b235b10

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b235b70

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
~TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b23f2a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
  ::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b23f470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b23f640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14b24c860

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>()
        ;
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(local_90 + 0x10))
    {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b24ca84;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b24ca84;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b24ca84:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b24cac0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::CreateNewSender
          (void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>()
    ;
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>()
    ;
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)(*pcVar2)()
          ;
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b24cce4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b24cce4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b24cce4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b24cd20

TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::
              __l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b24cf44;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b24cf44;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b24cf44:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
          )in_RDX;
}

// CreateOperator @ 14b256010

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2561b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b256350

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                         (this,(TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
                               local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b26cf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b26d260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b26d570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
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
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b27b360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b27b3f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b27b480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14b283cb0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b283d20

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b283d90

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14b28a2a0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
Reset(void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b28a350

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
           ((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b28a400

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetSenderAndCleanupChannel @ 14b28e680

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b28e720

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b28e7c0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

