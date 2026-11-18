// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 228

// BindInputs @ 14ad6e770

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
BindInputs(TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ad6e850

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ad74010

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::BindInputs
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ad740f0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ad77120

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::BindInputs
          (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::Frontend::FAnalyzerAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ad77230

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::BindOutputs
          (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad952f0

TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *param_1,TDataReadReference<Metasound::FSendAddress> *param_2,
          FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
  pTVar1->Ptr = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)pTVar1
      != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
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

// TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad95430

TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
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
  pTVar1 = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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

// TSendOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad95570

TSendOperator<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
TSendOperator<Metasound::Frontend::FAnalyzerAddress>
          (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &___7__TSendOperator_VFAnalyzerAddress_Frontend_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
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
  pTVar1->Ptr = (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::Frontend::FAnalyzerAddress> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::Frontend::FAnalyzerAddress> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
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

// ~TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad9ce70

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad9ced0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
~TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>(void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___SendNodePrivate_Metasound__6B_
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

// ~TSendOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad9cf30

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
~TSendOperator<Metasound::Frontend::FAnalyzerAddress>
          (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TSendOperator_VFAnalyzerAddress_Frontend_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14ada1480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
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
  
  Metasound::SendNodePrivate::
  TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
           TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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

// operator() @ 14ada1650

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo'::__l2::
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
  TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
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
           TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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

// operator() @ 14ada1820

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo'::
__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

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
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName
            ();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
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
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
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

// CreateNewSender @ 14adae370

TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
CreateNewSender(TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *in_RDX;
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
    pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
        TVar7.Ptr = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
          TVar7.Ptr = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14adae594;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14adae594;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14adae594:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14adae5d0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::CreateNewSender
          (void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *in_RDX;
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
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
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
        TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)(*pcVar2)()
        ;
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
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
          TVar7.Ptr = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14adae7f4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14adae7f4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14adae7f4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14adae830

TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::CreateNewSender
          (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::Frontend::FAnalyzerAddress> *in_RDX;
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
    pFVar6 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::
              <lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
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
          TVar7.Ptr = (TSender<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::Frontend::FAnalyzerAddress> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14adaea54;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14adaea54;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14adaea54:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
          )in_RDX;
}

// CreateOperator @ 14adaff90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this != (TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
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
                    ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14adb0130

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)0x0;
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
                    ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         (this,(TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
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

// CreateOperator @ 14adb02d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *pTVar7;
  TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this;
  TSendOperator<Metasound::Frontend::FAnalyzerAddress> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<Metasound::Frontend::FAnalyzerAddress>
                       (pFVar1,(TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_58
                        ,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0;
    if (this != (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::Frontend::FAnalyzerAddress>
                         (this,(TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_78
                          ,(TDataReadReference<Metasound::FSendAddress> *)local_98,pFVar2);
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

// DeclareVertexInterface @ 14adb3560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
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
  TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__
            );
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           ::
           TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14adb3870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface
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
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14adb3b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
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
  TInputDataVertex<Metasound::Frontend::FAnalyzerAddress> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
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
           TInputDataVertex<Metasound::Frontend::FAnalyzerAddress>::
           TInputDataVertex<Metasound::Frontend::FAnalyzerAddress><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface(void)'
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

// GetNodeInfo @ 14adc0fe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14adc1070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14adc1100

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14adc2cc0

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14adc2d30

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
      ;
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14adc2da0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14adcf1c0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)pTVar6
      != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr ==
      (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14adcf270

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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

// Reset @ 14adcf320

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::Reset
          (TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>,TDefaultDelete<Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::Frontend::FAnalyzerAddress> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::Frontend::FAnalyzerAddress> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
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

// ResetSenderAndCleanupChannel @ 14adcfd70

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel
          (TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    (this->Sender).Ptr =
         (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14adcfe10

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14adcfeb0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::
ResetSenderAndCleanupChannel(TSendOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  TSender<Metasound::Frontend::FAnalyzerAddress> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::Frontend::FAnalyzerAddress> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// BindInputs @ 14ae94680

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
BindInputs(TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ae94800

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
           FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ae99240

void __thiscall
Metasound::SendNodePrivate::TSendOperator<float>::BindInputs
          (TSendOperator<float> *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ae99340

void __thiscall
Metasound::SendNodePrivate::TSendOperator<float>::BindOutputs
          (TSendOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ae9bd40

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ae9be80

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ae9f450

void __thiscall
Metasound::SendNodePrivate::TSendOperator<int>::BindInputs
          (TSendOperator<int> *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ae9f550

void __thiscall
Metasound::SendNodePrivate::TSendOperator<int>::BindOutputs
          (TSendOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aea75c0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aea7760

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aead220

void __thiscall
Metasound::SendNodePrivate::TSendOperator<bool>::BindInputs
          (TSendOperator<bool> *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aead300

void __thiscall
Metasound::SendNodePrivate::TSendOperator<bool>::BindOutputs
          (TSendOperator<bool> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aeafda0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::BindInputs
          (TSendOperator<Metasound::FAudioBuffer> *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aeafee0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::BindOutputs
          (TSendOperator<Metasound::FAudioBuffer> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aeb7040

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aeb72b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aebb9a0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::BindInputs
          (TSendOperator<FMetasoundParameterStorageWrapper> *this,FInputVertexInterfaceData *param_1
          )

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FMetasoundParameterStorageWrapper>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aebbab0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::BindOutputs
          (TSendOperator<FMetasoundParameterStorageWrapper> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aebcba0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::BindInputs
          (TSendOperator<Metasound::FSendAddress> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  FName *local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_30 = (FName *)&local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  local_28._0_8_ = GetSendInputName();
  local_30 = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_28._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_28._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14aebce20

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::BindOutputs
          (TSendOperator<Metasound::FSendAddress> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aec9ed0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aeca060

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aecbc70

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::BindInputs
          (TSendOperator<Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aecbd90

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::BindOutputs
          (TSendOperator<Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aed7870

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::BindInputs
          (TSendOperator<Metasound::FTrigger> *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aed7a00

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::BindOutputs
          (TSendOperator<Metasound::FTrigger> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aedeb10

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aedec10

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aeded90

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aedee70

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aee4a30

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FString>::BindInputs
          (TSendOperator<FString> *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aee4b10

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FString>::BindOutputs
          (TSendOperator<FString> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<int> @ 14af31390

TSendOperator<int> * __thiscall
Metasound::SendNodePrivate::TSendOperator<int>::TSendOperator<int>
          (TSendOperator<int> *this,TDataReadReference<int> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> *pTVar1;
  longlong lVar2;
  TSender<int> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> TVar7;
  undefined8 *local_res8;
  
  this->_padding_ = (longlong)&___7__TSendOperator_H_SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData = &___7__TDataReadReference_H_Metasound__6B_;
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
  pTVar1->Ptr = (TSender<int> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<int> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<int> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<int> *)0x0) {
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

// TSendOperator<float> @ 14af314d0

TSendOperator<float> * __thiscall
Metasound::SendNodePrivate::TSendOperator<float>::TSendOperator<float>
          (TSendOperator<float> *this,TDataReadReference<float> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> *pTVar1;
  longlong lVar2;
  TSender<float> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> TVar7;
  undefined8 *local_res8;
  
  this->_padding_ = (longlong)&___7__TSendOperator_M_SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData = &___7__TDataReadReference_M_Metasound__6B_;
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
  pTVar1->Ptr = (TSender<float> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<float> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<float> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<float> *)0x0) {
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

// TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af31610

TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
  pTVar1->Ptr = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af31750

TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
  pTVar1->Ptr = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af31890

TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                 *param_1,TDataReadReference<Metasound::FSendAddress> *param_2,
          FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
  pTVar1->Ptr = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
                0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)pTVar1 !=
      TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
                  )(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
                  )0x0) {
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

// TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af319d0

TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
  pTVar1->Ptr = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr)
  {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af31b10

TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
  pTVar1->Ptr = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af31c50

TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
  pTVar1->Ptr = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af31d90

TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
  pTVar1->Ptr = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// TSendOperator<Metasound::FAudioBuffer> @ 14af31ed0

TSendOperator<Metasound::FAudioBuffer> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::
TSendOperator<Metasound::FAudioBuffer>
          (TSendOperator<Metasound::FAudioBuffer> *this,
          TDataReadReference<Metasound::FAudioBuffer> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::FAudioBuffer> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFAudioBuffer_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
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
  pTVar1->Ptr = (TSender<Metasound::FAudioBuffer> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::FAudioBuffer> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FAudioBuffer> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::FAudioBuffer> *)0x0) {
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

// TSendOperator<FMetasoundParameterStorageWrapper> @ 14af32010

TSendOperator<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::
TSendOperator<FMetasoundParameterStorageWrapper>
          (TSendOperator<FMetasoundParameterStorageWrapper> *this,
          TDataReadReference<FMetasoundParameterStorageWrapper> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<FMetasoundParameterStorageWrapper> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &___7__TSendOperator_VFMetasoundParameterStorageWrapper___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
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
  pTVar1->Ptr = (TSender<FMetasoundParameterStorageWrapper> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<FMetasoundParameterStorageWrapper> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<FMetasoundParameterStorageWrapper> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<FMetasoundParameterStorageWrapper> *)0x0) {
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

// TSendOperator<Metasound::FSendAddress> @ 14af32150

TSendOperator<Metasound::FSendAddress> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::
TSendOperator<Metasound::FSendAddress>
          (TSendOperator<Metasound::FSendAddress> *this,
          TDataReadReference<Metasound::FSendAddress> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::FSendAddress> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFSendAddress_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
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
  lVar2 = *(longlong *)&param_2->field_0x8;
  pTVar1 = &this->Sender;
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
  pTVar1->Ptr = (TSender<Metasound::FSendAddress> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::FSendAddress> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FSendAddress> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::FSendAddress> *)0x0) {
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

// TSendOperator<FString> @ 14af32290

TSendOperator<FString> * __thiscall
Metasound::SendNodePrivate::TSendOperator<FString>::TSendOperator<FString>
          (TSendOperator<FString> *this,TDataReadReference<FString> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> *pTVar1;
  longlong lVar2;
  TSender<FString> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> TVar7;
  undefined8 *local_res8;
  
  this->_padding_ = (longlong)&___7__TSendOperator_VFString___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData = &___7__TDataReadReference_VFString___Metasound__6B_;
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
  pTVar1->Ptr = (TSender<FString> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<FString> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<FString> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<FString> *)0x0) {
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

// TSendOperator<Metasound::FTime> @ 14af323d0

TSendOperator<Metasound::FTime> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::TSendOperator<Metasound::FTime>
          (TSendOperator<Metasound::FTime> *this,TDataReadReference<Metasound::FTime> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::FTime> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ = (longlong)&___7__TSendOperator_VFTime_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
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
  pTVar1->Ptr = (TSender<Metasound::FTime> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::FTime> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FTime> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::FTime> *)0x0) {
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

// TSendOperator<Metasound::FTrigger> @ 14af32510

TSendOperator<Metasound::FTrigger> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::TSendOperator<Metasound::FTrigger>
          (TSendOperator<Metasound::FTrigger> *this,TDataReadReference<Metasound::FTrigger> *param_1
          ,TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::FTrigger> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFTrigger_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
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
  pTVar1->Ptr = (TSender<Metasound::FTrigger> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::FTrigger> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FTrigger> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::FTrigger> *)0x0) {
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

// TSendOperator<bool> @ 14af32650

TSendOperator<bool> * __thiscall
Metasound::SendNodePrivate::TSendOperator<bool>::TSendOperator<bool>
          (TSendOperator<bool> *this,TDataReadReference<bool> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> *pTVar1;
  longlong lVar2;
  TSender<bool> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> TVar7;
  undefined8 *local_res8;
  
  this->_padding_ = (longlong)&___7__TSendOperator__N_SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData = &___7__TDataReadReference__N_Metasound__6B_;
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
  pTVar1->Ptr = (TSender<bool> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<bool> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<bool> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<bool> *)0x0) {
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

// ~TSendOperator<int> @ 14af405d0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<int>::~TSendOperator<int>(TSendOperator<int> *this)

{
  TSender<int> *pTVar1;
  
  this->_padding_ = (longlong)&___7__TSendOperator_H_SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<int> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<float> @ 14af40630

void __thiscall
Metasound::SendNodePrivate::TSendOperator<float>::~TSendOperator<float>(TSendOperator<float> *this)

{
  TSender<float> *pTVar1;
  
  this->_padding_ = (longlong)&___7__TSendOperator_M_SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<float> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af40690

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af406f0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af40750

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af407b0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af40810

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af40870

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af408d0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FAudioBuffer> @ 14af40930

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::
~TSendOperator<Metasound::FAudioBuffer>(TSendOperator<Metasound::FAudioBuffer> *this)

{
  TSender<Metasound::FAudioBuffer> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFAudioBuffer_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FAudioBuffer> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<FMetasoundParameterStorageWrapper> @ 14af40990

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::
~TSendOperator<FMetasoundParameterStorageWrapper>
          (TSendOperator<FMetasoundParameterStorageWrapper> *this)

{
  TSender<FMetasoundParameterStorageWrapper> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TSendOperator_VFMetasoundParameterStorageWrapper___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<FMetasoundParameterStorageWrapper> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FSendAddress> @ 14af409f0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::
~TSendOperator<Metasound::FSendAddress>(TSendOperator<Metasound::FSendAddress> *this)

{
  TSender<Metasound::FSendAddress> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFSendAddress_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FSendAddress> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<FString> @ 14af40a50

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FString>::~TSendOperator<FString>
          (TSendOperator<FString> *this)

{
  TSender<FString> *pTVar1;
  
  this->_padding_ = (longlong)&___7__TSendOperator_VFString___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<FString> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FTime> @ 14af40ab0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::~TSendOperator<Metasound::FTime>
          (TSendOperator<Metasound::FTime> *this)

{
  TSender<Metasound::FTime> *pTVar1;
  
  this->_padding_ = (longlong)&___7__TSendOperator_VFTime_Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FTime> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FTrigger> @ 14af40b10

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::~TSendOperator<Metasound::FTrigger>
          (TSendOperator<Metasound::FTrigger> *this)

{
  TSender<Metasound::FTrigger> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFTrigger_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FTrigger> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<bool> @ 14af40b70

void __thiscall
Metasound::SendNodePrivate::TSendOperator<bool>::~TSendOperator<bool>(TSendOperator<bool> *this)

{
  TSender<bool> *pTVar1;
  
  this->_padding_ = (longlong)&___7__TSendOperator__N_SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<bool> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14af483f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<int>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af48620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<float>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af48850

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af48a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af48cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::
           GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::
           TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af48ee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::
           TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af49110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af49340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::
           TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af49570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af497a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>
::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af499d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af49c00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2::<lambda_1>
::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FSendAddress>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af49e30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<FString>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af4a060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af4a290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14af4a4c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  FName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FName local_res10;
  FName local_res18;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"Send");
  pFVar6 = Metasound::GetMetasoundDataTypeName<bool>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,&local_res18,pFVar6,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,&local_res10);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  pTVar2 = &__return_storage_ptr__->CategoryHierarchy;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,*piVar1,&pTVar2->AllocatorInstance,1,piVar1);
  ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)&local_78,1);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  DestructItems<FText,int>
            ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum);
  iVar3 = (__return_storage_ptr__->Keywords).ArrayMax;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  (__return_storage_ptr__->Keywords).ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,iVar3,&pTVar2->AllocatorInstance,0,piVar1);
    ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)0x0,0);
  }
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14af5cf30

TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> __thiscall
Metasound::SendNodePrivate::TSendOperator<int>::CreateNewSender(TSendOperator<int> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<int> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<int>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<int> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_>)
               TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_>)in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<int>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<int>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<int>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<int>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<int> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_>)
                 TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<int> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5d12c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5d12c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5d12c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_>)in_RDX;
}

// CreateNewSender @ 14af5d160

TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> __thiscall
Metasound::SendNodePrivate::TSendOperator<float>::CreateNewSender(TSendOperator<float> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<float> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<float>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<float> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_>)
               TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_>)
             in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<float>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<float>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<float>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<float>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<float> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_>)
                 TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<float> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5d35c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5d35c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5d35c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_>)in_RDX;
}

// CreateNewSender @ 14af5d390

TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateNewSender
          (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5d58c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5d58c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5d58c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5d5c0

TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
CreateNewSender(TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5d7bc;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5d7bc;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5d7bc:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5d7f0

TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
CreateNewSender(TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       ();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       ();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
                  )local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5d9ec;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5d9ec;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5d9ec:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5da20

TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::CreateNewSender
          (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       ();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                    (*pcVar3)();
        return (TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       ();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar3)();
          return (TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)local_50)
    {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5dc1c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5dc1c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5dc1c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5dc50

TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
CreateNewSender(TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5de4c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5de4c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5de4c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5de80

TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateNewSender(TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5e07c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5e07c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5e07c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5e0b0

TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
CreateNewSender(TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5e2ac;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5e2ac;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5e2ac:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5e2e0

TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::CreateNewSender
          (TSendOperator<Metasound::FAudioBuffer> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::FAudioBuffer> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<Metasound::FAudioBuffer> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
                        (&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<Metasound::FAudioBuffer> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::FAudioBuffer> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5e4dc;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5e4dc;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5e4dc:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5e510

TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::CreateNewSender
          (TSendOperator<FMetasoundParameterStorageWrapper> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<FMetasoundParameterStorageWrapper> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<FMetasoundParameterStorageWrapper> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>::
              operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<FMetasoundParameterStorageWrapper> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<FMetasoundParameterStorageWrapper> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5e70c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5e70c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5e70c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5e740

TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::CreateNewSender
          (TSendOperator<Metasound::FSendAddress> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::FSendAddress> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<Metasound::FSendAddress> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::FSendAddress>_>'::__l2::<lambda_1>::operator()
                        (&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<Metasound::FSendAddress> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::FSendAddress> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5e93c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5e93c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5e93c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5e970

TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> __thiscall
Metasound::SendNodePrivate::TSendOperator<FString>::CreateNewSender(TSendOperator<FString> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<FString> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<FString>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<FString> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_>)
             in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<FString>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<FString>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<FString>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<FString>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<FString> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<FString> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5eb6c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5eb6c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5eb6c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_>)
         in_RDX;
}

// CreateNewSender @ 14af5eba0

TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::CreateNewSender
          (TSendOperator<Metasound::FTime> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::FTime> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<Metasound::FTime>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<Metasound::FTime> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTime>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<Metasound::FTime>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::FTime>_>'::
              __l2::<lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<Metasound::FTime>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<Metasound::FTime> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::FTime> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5ed9c;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5ed9c;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5ed9c:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5edd0

TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::CreateNewSender
          (TSendOperator<Metasound::FTrigger> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
  TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::FTrigger> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<Metasound::FTrigger>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<Metasound::FTrigger> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
                )TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
              )in_RDX;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<Metasound::FTrigger>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::FTrigger>_>'::__l2::<lambda_1>::operator()
                        (&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<Metasound::FTrigger>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<Metasound::FTrigger> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
                  )TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::FTrigger> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5efcc;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5efcc;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5efcc:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
          )in_RDX;
}

// CreateNewSender @ 14af5f000

TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> __thiscall
Metasound::SendNodePrivate::TSendOperator<bool>::CreateNewSender(TSendOperator<bool> *this)

{
  longlong lVar1;
  FTransmissionAddress FVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FName *pFVar7;
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> TVar8;
  FDataTransmissionCenter *this_00;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<bool> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_98;
  FTransmissionAddress local_90;
  FName *local_88;
  undefined **local_80 [2];
  FName local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  FString local_38;
  
  plVar5 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  if (*plVar5 != 0) {
    pFVar6 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar7 = GetMetasoundDataTypeName<bool>();
    if (*pFVar7 != *pFVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (TSender<bool> *)(*pcVar3)();
        return (TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_>)
               TVar8.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_>)in_RDX
      ;
    }
  }
  this_00 = FDataTransmissionCenter::Get();
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  pFVar6 = GetMetasoundDataTypeName<bool>();
  local_68 = *(undefined8 *)(lVar1 + 0x18);
  local_80[0] = &___7FSendAddress_Metasound__6B_;
  local_80[1] = *(undefined ***)(lVar1 + 8);
  local_70 = *pFVar6;
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,local_res8,(FSenderInitParams *)local_80);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar6 = GetMetasoundDataTypeName<bool>();
    local_res18 = *pFVar6;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_88 = &local_res18;
      local_90 = FVar10;
      bVar4 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<bool>_>'::__l2::
              <lambda_1>::operator()(&local_90);
      if (!bVar4) {
        pFVar6 = GetMetasoundDataTypeName<bool>();
        local_res20 = *pFVar6;
        ::FName::ToString(&local_res20,&local_38);
        local_98 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_98,(FString *)(local_50 + 8));
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.Ptr = (TSender<bool> *)(*pcVar3)();
          return (TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_>)
                 TVar8.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<bool> *)local_50) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14af5f1fc;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar2 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar2 == (FTransmissionAddress)0x0) goto LAB_14af5f1fc;
      puVar9 = *(undefined8 **)FVar2;
      FVar10 = FVar2;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14af5f1fc:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_>)in_RDX;
}

// CreateOperator @ 14af6f940

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<int> *pTVar7;
  TSendOperator<int> *this;
  TSendOperator<int> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
                       (pFVar1,(TDataReadReference<int> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<int> *)0x0;
    if (this != (TSendOperator<int> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_H_Metasound__6B_;
      pTVar8 = TSendOperator<int>(this,(TDataReadReference<int> *)local_78,
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

// CreateOperator @ 14af6fae0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<float> *pTVar7;
  TSendOperator<float> *this;
  TSendOperator<float> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
                       (pFVar1,(TDataReadReference<float> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<float> *)0x0;
    if (this != (TSendOperator<float> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_M_Metasound__6B_;
      pTVar8 = TSendOperator<float>
                         (this,(TDataReadReference<float> *)local_78,
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

// CreateOperator @ 14af6fc80

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
                    ___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)
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

// CreateOperator @ 14af6fe20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
                    ___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)
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

// CreateOperator @ 14af6ffc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar7
  ;
  TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this != (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
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
                    ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af70160

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0)
    {
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
                    ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af70300

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
                    ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
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

// CreateOperator @ 14af704a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
                    ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af70640

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)
                               local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
                    ___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)
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

// CreateOperator @ 14af707e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar7;
  TSendOperator<Metasound::FAudioBuffer> *this;
  TSendOperator<Metasound::FAudioBuffer> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
                       (pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_58,pFVar5,pFVar3
                       );
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FAudioBuffer> *)0x0;
    if (this != (TSendOperator<Metasound::FAudioBuffer> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FAudioBuffer>
                         (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_78,
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

// CreateOperator @ 14af70980

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<FMetasoundParameterStorageWrapper> *pTVar7;
  TSendOperator<FMetasoundParameterStorageWrapper> *this;
  TSendOperator<FMetasoundParameterStorageWrapper> *pTVar8;
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
             GetOrCreateDefaultDataReadReference<FMetasoundParameterStorageWrapper>
                       (pFVar1,(TDataReadReference<FMetasoundParameterStorageWrapper> *)local_58,
                        pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<FMetasoundParameterStorageWrapper> *)0x0;
    if (this != (TSendOperator<FMetasoundParameterStorageWrapper> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
      pTVar8 = TSendOperator<FMetasoundParameterStorageWrapper>
                         (this,(TDataReadReference<FMetasoundParameterStorageWrapper> *)local_78,
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

// CreateOperator @ 14af70b20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
  TSendOperator<Metasound::FSendAddress> *this;
  TSendOperator<Metasound::FSendAddress> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_58,pFVar5,pFVar3
                       );
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FSendAddress> *)0x0;
    if (this != (TSendOperator<Metasound::FSendAddress> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FSendAddress>
                         (this,(TDataReadReference<Metasound::FSendAddress> *)local_78,
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

// CreateOperator @ 14af70cb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<FString>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<FString> *pTVar7;
  TSendOperator<FString> *this;
  TSendOperator<FString> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
                       (pFVar1,(TDataReadReference<FString> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<FString> *)0x0;
    if (this != (TSendOperator<FString> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_VFString___Metasound__6B_;
      pTVar8 = TSendOperator<FString>
                         (this,(TDataReadReference<FString> *)local_78,
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

// CreateOperator @ 14af70e50

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FTime> *pTVar7;
  TSendOperator<Metasound::FTime> *this;
  TSendOperator<Metasound::FTime> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
                       (pFVar1,(TDataReadReference<Metasound::FTime> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FTime> *)0x0;
    if (this != (TSendOperator<Metasound::FTime> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FTime>
                         (this,(TDataReadReference<Metasound::FTime> *)local_78,
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

// CreateOperator @ 14af70ff0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FTrigger> *pTVar7;
  TSendOperator<Metasound::FTrigger> *this;
  TSendOperator<Metasound::FTrigger> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
                       (pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FTrigger> *)0x0;
    if (this != (TSendOperator<Metasound::FTrigger> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FTrigger>
                         (this,(TDataReadReference<Metasound::FTrigger> *)local_78,
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

// CreateOperator @ 14af71190

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<bool>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<bool> *pTVar7;
  TSendOperator<bool> *this;
  TSendOperator<bool> *pTVar8;
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
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
                       (pFVar1,(TDataReadReference<bool> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<bool> *)0x0;
    if (this != (TSendOperator<bool> *)0x0) {
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
      local_78[0] = &___7__TDataReadReference__N_Metasound__6B_;
      pTVar8 = TSendOperator<bool>(this,(TDataReadReference<bool> *)local_78,
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

// DeclareVertexInterface @ 14af7b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface
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
  TInputDataVertex<int> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
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
           TInputDataVertex<int>::TInputDataVertex<int><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7bb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface
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
  TInputDataVertex<float> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
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
           TInputDataVertex<float>::TInputDataVertex<float><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7bea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
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
  TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>(&local_58,pFVar5,&local_100)
  ;
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7c1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
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
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__
            );
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
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
  TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           ::
           TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7c7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
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
  TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
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
  TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface'::
             __l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7cdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
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
  TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7d100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
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
  TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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
           TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7d410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface
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
  TInputDataVertex<Metasound::FAudioBuffer> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
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
           TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7d720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface
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
  TInputDataVertex<FMetasoundParameterStorageWrapper> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
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
           TInputDataVertex<FMetasoundParameterStorageWrapper>::
           TInputDataVertex<FMetasoundParameterStorageWrapper><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7da30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface
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
  TInputDataVertex<Metasound::FSendAddress> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
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
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7dd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface
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
  TInputDataVertex<FString> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
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
           TInputDataVertex<FString>::TInputDataVertex<FString><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7e050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface
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
  TInputDataVertex<Metasound::FTime> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface'::
             __l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
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
           TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7e360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface
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
  TInputDataVertex<Metasound::FTrigger> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
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
           TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::DeclareVertexInterface(void)'
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

// DeclareVertexInterface @ 14af7e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface
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
  TInputDataVertex<bool> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
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
           TInputDataVertex<bool>::TInputDataVertex<bool><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::DeclareVertexInterface(void)'
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

// GetNodeInfo @ 14afa09e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0a70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0b90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0c20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0d40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0ef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa0f80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa1010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa10a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa1130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa11c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14afa1250

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14afa7b00

FName * __cdecl Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<int>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<int>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7b70

FName * __cdecl Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<float>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<float>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7be0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7c50

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7cc0

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7d30

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7da0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7e10

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7e80

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7ef0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7f60

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa7fd0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa8040

FName * __cdecl Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<FString>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<FString>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa80b0

FName * __cdecl Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FTime>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa8120

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FTrigger>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14afa8190

FName * __cdecl Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<bool>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<bool>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14afb8800

void __thiscall
Metasound::SendNodePrivate::TSendOperator<int>::Reset
          (TSendOperator<int> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> TVar5;
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<int> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<int> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<int> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<int> *)0x0) {
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

// Reset @ 14afb88b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<float>::Reset
          (TSendOperator<float> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> TVar5;
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<float> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<float> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<float> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<float> *)0x0) {
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

// Reset @ 14afb8960

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14afb8a10

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14afb8ac0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)pTVar6 !=
      TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
                  )(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
                  )0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr ==
      (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14afb8b70

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr)
  {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                  (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14afb8c20

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14afb8cd0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
Reset(TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                  (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14afb8d80

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// Reset @ 14afb8e30

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::Reset
          (TSendOperator<Metasound::FAudioBuffer> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::FAudioBuffer> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::FAudioBuffer> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::FAudioBuffer> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::FAudioBuffer> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::FAudioBuffer> *)0x0) {
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

// Reset @ 14afb8ee0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::Reset
          (TSendOperator<FMetasoundParameterStorageWrapper> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<FMetasoundParameterStorageWrapper> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TSender<FMetasoundParameterStorageWrapper>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<FMetasoundParameterStorageWrapper> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<FMetasoundParameterStorageWrapper> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<FMetasoundParameterStorageWrapper> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<FMetasoundParameterStorageWrapper> *)0x0) {
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

// Reset @ 14afb8f90

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::Reset
          (TSendOperator<Metasound::FSendAddress> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::FSendAddress> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::FSendAddress>,TDefaultDelete<Metasound::TSender<Metasound::FSendAddress>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::FSendAddress> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::FSendAddress> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::FSendAddress> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::FSendAddress> *)0x0) {
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

// Reset @ 14afb9040

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FString>::Reset
          (TSendOperator<FString> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<FString> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> TVar5;
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<FString> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<FString> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<FString> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<FString> *)0x0) {
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

// Reset @ 14afb90f0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::Reset
          (TSendOperator<Metasound::FTime> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::FTime> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::FTime> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::FTime> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::FTime> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::FTime> *)0x0) {
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

// Reset @ 14afb91a0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::Reset
          (TSendOperator<Metasound::FTrigger> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::FTrigger> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::FTrigger>,TDefaultDelete<Metasound::TSender<Metasound::FTrigger>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::FTrigger> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::FTrigger> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::FTrigger> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::FTrigger> *)0x0) {
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

// Reset @ 14afb9250

void __thiscall
Metasound::SendNodePrivate::TSendOperator<bool>::Reset
          (TSendOperator<bool> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<bool> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> TVar5;
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<bool> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<bool> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<bool> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<bool> *)0x0) {
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

// ResetSenderAndCleanupChannel @ 14afbce30

void __thiscall
Metasound::SendNodePrivate::TSendOperator<int>::ResetSenderAndCleanupChannel
          (TSendOperator<int> *this)

{
  TSender<int> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<int> *)0x0) {
    (this->Sender).Ptr = (TSender<int> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<int>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbceb0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<float>::ResetSenderAndCleanupChannel
          (TSendOperator<float> *this)

{
  TSender<float> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<float> *)0x0) {
    (this->Sender).Ptr = (TSender<float> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<float>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbcf30

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel(TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr = (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbcfb0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel(TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr = (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd030

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel
          (TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    (this->Sender).Ptr =
         (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd0b0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel
          (TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr =
         (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd130

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel(TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr = (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd1b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel
          (TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr = (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd230

void __thiscall
Metasound::SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel(TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr = (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd2b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::ResetSenderAndCleanupChannel
          (TSendOperator<Metasound::FAudioBuffer> *this)

{
  TSender<Metasound::FAudioBuffer> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FAudioBuffer> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FAudioBuffer> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd330

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::
ResetSenderAndCleanupChannel(TSendOperator<FMetasoundParameterStorageWrapper> *this)

{
  TSender<FMetasoundParameterStorageWrapper> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<FMetasoundParameterStorageWrapper> *)0x0) {
    (this->Sender).Ptr = (TSender<FMetasoundParameterStorageWrapper> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd3b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FSendAddress>::ResetSenderAndCleanupChannel
          (TSendOperator<Metasound::FSendAddress> *this)

{
  TSender<Metasound::FSendAddress> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FSendAddress> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FSendAddress> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd430

void __thiscall
Metasound::SendNodePrivate::TSendOperator<FString>::ResetSenderAndCleanupChannel
          (TSendOperator<FString> *this)

{
  TSender<FString> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<FString> *)0x0) {
    (this->Sender).Ptr = (TSender<FString> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<FString>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd4b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTime>::ResetSenderAndCleanupChannel
          (TSendOperator<Metasound::FTime> *this)

{
  TSender<Metasound::FTime> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FTime> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FTime> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTime>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd530

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FTrigger>::ResetSenderAndCleanupChannel
          (TSendOperator<Metasound::FTrigger> *this)

{
  TSender<Metasound::FTrigger> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FTrigger> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FTrigger> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14afbd5b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<bool>::ResetSenderAndCleanupChannel
          (TSendOperator<bool> *this)

{
  TSender<bool> *pTVar1;
  FAddressRouter *this_00;
  FName *pFVar2;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  ulong64 local_10;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<bool> *)0x0) {
    (this->Sender).Ptr = (TSender<bool> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = &FDataTransmissionCenter::Get()->GlobalRouter;
  pFVar2 = GetMetasoundDataTypeName<bool>();
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = (this->CachedSendAddress).ChannelName;
  local_18 = *pFVar2;
  local_10 = (this->CachedSendAddress).InstanceID;
  FAddressRouter::UnregisterDataChannelIfUnconnected(this_00,&local_28);
  return;
}

