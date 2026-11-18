// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 21

// BindInputs @ 14b2dc9d0

void __thiscall
Metasound::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> **local_20
  ;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2dca60

void __thiscall
Metasound::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputLastIndexName);
  local_res18[0] = &this->LastIndex;
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

// BindInputs @ 14b2e33b0

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          ,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e34d0

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputLastIndexName);
  local_res18[0] = &this->LastIndex;
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

// BindInputs @ 14b2e8b00

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e8c20

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputLastIndexName);
  local_res18[0] = &this->LastIndex;
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

// TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b3366d0

TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayLastIndexOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->LastIndex,NewObject);
  *(undefined ***)&this->LastIndex = &___7__TDataWriteReference_H_Metasound__6B_;
  **(int **)&(this->LastIndex).field_0x8 = *(int *)(*(longlong *)&(this->Array).field_0x8 + 8) + -1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b336770

TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          ,TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayLastIndexOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->LastIndex,NewObject);
  *(undefined ***)&this->LastIndex = &___7__TDataWriteReference_H_Metasound__6B_;
  **(int **)&(this->LastIndex).field_0x8 = *(int *)(*(longlong *)&(this->Array).field_0x8 + 8) + -1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b336810

TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayLastIndexOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->LastIndex,NewObject);
  *(undefined ***)&this->LastIndex = &___7__TDataWriteReference_H_Metasound__6B_;
  **(int **)&(this->LastIndex).field_0x8 = *(int *)(*(longlong *)&(this->Array).field_0x8 + 8) + -1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d510

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LastIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d550

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          )

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LastIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d590

void __thiscall
Metasound::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LastIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b37c540

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_28,&local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  if (this_00 !=
      (TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                                 *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37c5f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  local_28,&local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
           0x0;
  if (this_00 !=
      (TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                                 *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37c6a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *this_00;
  TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_28,&local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  if (this_00 !=
      (TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                                 *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b3b76b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b7800

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b7950

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"GetLastIndex");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArrayLastIndexInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3d6050

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
Reset(TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  **(int **)&(this->LastIndex).field_0x8 = *(int *)(*(longlong *)&(this->Array).field_0x8 + 8) + -1;
  return;
}

// Reset @ 14b3d6070

void __thiscall
Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
Reset(TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  **(int **)&(this->LastIndex).field_0x8 = *(int *)(*(longlong *)&(this->Array).field_0x8 + 8) + -1;
  return;
}

// Reset @ 14b3d6090

void __thiscall
Metasound::
TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FResetParams *param_1)

{
  **(int **)&(this->LastIndex).field_0x8 = *(int *)(*(longlong *)&(this->Array).field_0x8 + 8) + -1;
  return;
}

