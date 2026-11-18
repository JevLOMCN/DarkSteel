// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 22

// BindInputs @ 14b2e8f30

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
             ::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e8ff0

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
             ::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2eaf70

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2eaff0

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2ee790

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
             ::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2ee810

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
             ::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2efc70

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2efcf0

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14b3451f0

FConverterOperator * __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b3452b0

FConverterOperator * __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b345370

FConverterOperator * __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_1,TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b345430

FConverterOperator * __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_1,TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14b350970

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b3509b0

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b3509f0

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b350a30

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b39f0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *pTVar4;
  undefined1 *this_01;
  EInterpolationMode EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode>_const_,int>
  local_28;
  
  EVar5 = **(EInterpolationMode **)((longlong)this + 0x10);
  if (EVar5 != *(EInterpolationMode *)((longlong)this + 0x4c)) {
    *(EInterpolationMode *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::EInterpolationMode>::GetAllEntries(&local_28)
  ;
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b39f11d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Linear;
      this_01 = local_res10;
LAB_14b39f1ca:
      pTVar4 = TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
               TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(this_01,EVar5);
      **(EInterpolationMode **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b39f1ca;
      }
      goto LAB_14b39f11d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b39f1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *pTVar4;
  undefined1 *this_01;
  ESingleSampleMode EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode>_const_,int>
  local_28;
  
  EVar5 = **(ESingleSampleMode **)((longlong)this + 0x10);
  if (EVar5 != *(ESingleSampleMode *)((longlong)this + 0x4c)) {
    *(ESingleSampleMode *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::ESingleSampleMode>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b39f23d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Zero;
      this_01 = local_res10;
LAB_14b39f2e7:
      pTVar4 = TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
               TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(this_01,EVar5);
      **(ESingleSampleMode **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b39f2e7;
      }
      goto LAB_14b39f23d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Reset @ 14b3daa50

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b3daa70

void __thiscall
Metasound::
TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b3daa90

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b3daab0

void __thiscall
Metasound::
TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

