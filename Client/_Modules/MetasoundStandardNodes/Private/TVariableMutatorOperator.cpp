// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 252

// BindInputs @ 14afc3a30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
BindInputs(TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FStereoAudioFormat> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FStereoAudioFormat> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FStereoAudioFormat> **local_48;
  code *local_40;
  FName **local_38;
  
  pTVar1 = &this->Variable;
  bVar6 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = (IDataReference *)pTVar1;
  local_88 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = &this->Data;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)&(this->Variable).field_0x8;
  uVar3 = *(undefined8 *)&(this->Data).field_0x8;
  pTVar4 = *(TReferenceControllerBase<0> **)&(this->Data).field_0x10;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14afc3ba0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
BindOutputs(TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this,
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

// GetExecuteFunction @ 14afc3c30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14afc3c40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc3c70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
GetResetFunction(TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14afcd760

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14afcd8d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::BindOutputs
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

// GetExecuteFunction @ 14afcd960

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14afcd970

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afcd9a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14afd5a00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
BindInputs(TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FMonoAudioFormat> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FMonoAudioFormat> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FMonoAudioFormat> **local_48;
  code *local_40;
  FName **local_38;
  
  pTVar1 = &this->Variable;
  bVar6 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = (IDataReference *)pTVar1;
  local_88 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = &this->Data;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)&(this->Variable).field_0x8;
  uVar3 = *(undefined8 *)&(this->Data).field_0x8;
  pTVar4 = *(TReferenceControllerBase<0> **)&(this->Data).field_0x10;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14afd5c70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
BindOutputs(TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this,
           FOutputVertexInterfaceData *param_1)

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

// GetExecuteFunction @ 14afd5d00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14afd5d10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd5d40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
GetResetFunction(TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14afd6270

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14afd63f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindOutputs
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

// GetExecuteFunction @ 14afd64a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14afd64b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd6540

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff7820

TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff7940

TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FMonoAudioFormat> @ 14aff7a60

TVariableMutatorOperator<Metasound::FMonoAudioFormat> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
TVariableMutatorOperator<Metasound::FMonoAudioFormat>
          (TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *param_1,
          TDataReadReference<Metasound::FMonoAudioFormat> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFMonoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Data = &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)&(this->Data).field_0x10;
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  uVar3 = *(undefined8 *)&(this->Data).field_0x8;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FStereoAudioFormat> @ 14aff7b80

TVariableMutatorOperator<Metasound::FStereoAudioFormat> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
TVariableMutatorOperator<Metasound::FStereoAudioFormat>
          (TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *param_1,
          TDataReadReference<Metasound::FStereoAudioFormat> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFStereoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Data = &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)&(this->Data).field_0x10;
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  uVar3 = *(undefined8 *)&(this->Data).field_0x8;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14affc470

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14affc4b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FMonoAudioFormat> @ 14affc4f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
~TVariableMutatorOperator<Metasound::FMonoAudioFormat>
          (TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FStereoAudioFormat> @ 14affc530

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
~TVariableMutatorOperator<Metasound::FStereoAudioFormat>
          (TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b013840

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
             0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                           *)local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b013a10

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b013be0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FMonoAudioFormat> *this;
  TVariableMutatorOperator<Metasound::FMonoAudioFormat> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FMonoAudioFormat>
              (pFVar1,(TDataReadReference<Metasound::FMonoAudioFormat> *)local_58,&local_res20,
               pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FMonoAudioFormat> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FMonoAudioFormat> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FMonoAudioFormat>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>
                                *)local_78,
                          (TDataReadReference<Metasound::FMonoAudioFormat> *)local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b013db0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FStereoAudioFormat> *this;
  TVariableMutatorOperator<Metasound::FStereoAudioFormat> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>::
    Get((TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *)local_38,
        pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FStereoAudioFormat>
              (pFVar1,(TDataReadReference<Metasound::FStereoAudioFormat> *)local_58,&local_res20,
               pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FStereoAudioFormat> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FStereoAudioFormat> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FStereoAudioFormat>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>
                                *)local_78,
                          (TDataReadReference<Metasound::FStereoAudioFormat> *)local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b0187b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b018a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b018cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_a8;
  TInputDataVertex<Metasound::FMonoAudioFormat> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
                     (&local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FMonoAudioFormat>::
           TInputDataVertex<Metasound::FMonoAudioFormat><>
                     (&local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < (byte)local_88._48_1_) {
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
              ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
  if (0xc < (byte)local_50._48_1_) {
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
              ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b018f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_a8;
  TInputDataVertex<Metasound::FStereoAudioFormat> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
                     (&local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FStereoAudioFormat>::
           TInputDataVertex<Metasound::FStereoAudioFormat><>
                     (&local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < (byte)local_88._48_1_) {
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
              ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
  if (0xc < (byte)local_50._48_1_) {
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
              ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b028ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo
          (void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b028d30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b028ec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b029050

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14b032cf0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
StaticPostExecute(IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b032dc0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b032e90

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  puVar2 = *(undefined8 **)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = *(undefined8 **)((longlong)IVar1 + 0x20);
  uVar5 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  uVar5 = puVar2[3];
  puVar3[2] = puVar2[2];
  puVar3[3] = uVar5;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar3 + 4),
            (TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar2 + 4));
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar3 + 6),
            (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar2 + 6));
  return;
}

// StaticPostExecute @ 14b032f80

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  puVar2 = *(undefined8 **)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = *(undefined8 **)((longlong)IVar1 + 0x20);
  uVar5 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  uVar5 = puVar2[3];
  puVar3[2] = puVar2[2];
  puVar3[3] = uVar5;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar3 + 4),
            (TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar2 + 4));
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar3 + 6),
            (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
             *)(puVar2 + 6));
  return;
}

// StaticReset @ 14b033070

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::EBandSplitterFilterOrder,1> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b0330d0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Audio::EBiquadFilter::Type,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b033130

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FMonoAudioFormat>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  FMonoAudioFormat *this;
  FMonoAudioFormat *pFVar4;
  undefined1 local_48 [40];
  int local_20;
  TDataReadReference<Metasound::FAudioBuffer> *local_18;
  int local_10;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    this = *(FMonoAudioFormat **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar4 = TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FMonoAudioFormat>_>
             ::CreateExplicitArgs((FMonoAudioFormat *)local_48,pFVar2,(FLiteral *)IVar1);
    FMonoAudioFormat::operator=(this,pFVar4);
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(local_18,local_10);
    if (local_18 != (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
      FMemory::Free(local_18);
    }
    DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
              ((TDataWriteReference<Metasound::FAudioBuffer> *)local_48._32_8_,local_20);
    if ((TDataWriteReference<Metasound::FAudioBuffer> *)local_48._32_8_ !=
        (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
      FMemory::Free((void *)local_48._32_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b0331d0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FStereoAudioFormat>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  FStereoAudioFormat *this;
  FStereoAudioFormat *pFVar4;
  undefined1 local_48 [40];
  int local_20;
  TDataReadReference<Metasound::FAudioBuffer> *local_18;
  int local_10;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    this = *(FStereoAudioFormat **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar4 = TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FStereoAudioFormat>_>
             ::CreateExplicitArgs((FStereoAudioFormat *)local_48,pFVar2,(FLiteral *)IVar1);
    FStereoAudioFormat::operator=(this,pFVar4);
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(local_18,local_10);
    if (local_18 != (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
      FMemory::Free(local_18);
    }
    DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
              ((TDataWriteReference<Metasound::FAudioBuffer> *)local_48._32_8_,local_20);
    if ((TDataWriteReference<Metasound::FAudioBuffer> *)local_48._32_8_ !=
        (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
      FMemory::Free((void *)local_48._32_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// BindInputs @ 14b03b9c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b03bb30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b03bbc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b03bbd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03bc00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0515a0

TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b054890

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b0664d0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_58
               ,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b068660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b0757f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14b07c150

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticReset @ 14b07c220

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Audio::EDynamicFilterType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// BindInputs @ 14b07ea70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b07ebe0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b07ec70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b07ec90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetPostExecuteFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07ecd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b089c30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b089da0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b089e30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b089e40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetPostExecuteFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b089e70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b08d730

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b08d8a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b08d930

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b08d940

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b08d970

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b095c20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b095d90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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

// GetExecuteFunction @ 14b095e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b095e30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b095e60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b1b20

TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b1c40

TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b1d60

TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b1e80

TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b5e50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b5e90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b5ed0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b5f10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b0cbbf0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cbdc0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cbf90

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *)
          local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_98)
      ;
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cc160

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
              *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                           *)local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b0d0790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b0d0a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b0d0c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b0d0f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b0d8ee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d9070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d9200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d9390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14b0e7410

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b0e74e0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b0e75b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b0e7680

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
StaticPostExecute(IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticReset @ 14b0e7750

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Audio::Grain::EEnvelope,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b0e77b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::EEnvelopePeakMode,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b0e7810

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::EKneeMode,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b0e7870

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ELowFrequencyNoiseInterpType,2> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// BindInputs @ 14b0f0930

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b0f0aa0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::BindOutputs
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

// GetExecuteFunction @ 14b0f0b30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0f0b40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0f0b70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b0f2690

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b0f2800

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b0f2890

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0f28a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0f28d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b0f8560

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b0f86d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b0f87e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0f87f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0f8820

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b100200

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b100370

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b100400

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b100410

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b100450

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b101bb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b101d50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b101e40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b101e50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b101e80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b10d5c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b10d730

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b10d7c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b10d7d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetPostExecuteFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10d800

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b10f6d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b10f840

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b10f910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b10f920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10f950

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b13cc60

TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b13cd80

TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b13cea0

TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b13cfc0

TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b13d0e0

TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b13d200

TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b13d320

TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b144d00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b144d40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b144d80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b144dc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b144e00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b144e40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b144e80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b175bf0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b175dc0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *)
          local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_98
                         );
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b175f90

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b176160

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *
                          )local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b176330

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                           *)local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b176500

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *
                      )local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
             0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                           *)local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1766d0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b17d9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17dc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17dee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17e160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17e3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17e660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b17e8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_> *pTVar3
  ;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b196ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b197030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b1971c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b197350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetNodeInfo
          (void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b1974e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetNodeInfo
          (void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b197670

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetNodeInfo
          (void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b197800

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>()
          ;
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14b1aad70

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b1aae40

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b1aaf10

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b1aafe0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
StaticPostExecute(IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b1ab0b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
StaticPostExecute(IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b1ab180

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
StaticPostExecute(IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b1ab250

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticReset @ 14b1ab320

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ELfoWaveshapeType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b1ab380

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ENoiseType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b1ab3e0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ESawGenerationType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b1ab440

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ESineGenerationType,3> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b1ab4a0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ESquareGenerationType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b1ab500

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ETriangleGenerationType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b1ab560

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Audio::EMusicalScale::Scale,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// BindInputs @ 14b1b1c20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b1b1d90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b1b1e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1b1e30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b1e60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b1b6130

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b1b62a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b1b6330

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1b63a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetPostExecuteFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b63d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cce30

TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1ccf50

TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cfc30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cfc70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b1d9580

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *
          )local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1d9750

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b1dc720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b1dc9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_> *pTVar3
  ;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b1e3750

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b1e38e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>()
          ;
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14b1eb620

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b1eb6f0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticReset @ 14b1eb7c0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::EPanningLaw,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b1eb820

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::EStereoDelayMode,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// BindInputs @ 14b1ebde0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b1ebf50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindOutputs
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

// GetExecuteFunction @ 14b1ebfe0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetExecuteFunction
          (void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1ebff0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetPostExecuteFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ec020

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b1ed640

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b1ed7b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b1ed880

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1ed890

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ed8c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b200f90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  longlong local_98;
  FName *local_90;
  IDataReference *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  undefined1 **local_68;
  FName *local_60;
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar6 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0xd3,L"Input variables cannot be bound to new underlying objects");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_78 = &local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pIVar1;
  local_88 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  FLazyName::Resolve(&VariableNames::InputDataName);
  local_98 = (longlong)this + 0x28;
  local_48 = &local_98;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_58 = local_98;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  pTVar4 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar2 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar2 + 0x50));
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b201140

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::BindOutputs
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

// GetExecuteFunction @ 14b2011d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2011e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b201210

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetResetFunction
          (void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b232510

TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b232630

TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b232750

TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)((longlong)this + 0x38);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)(lVar1 + 0x50));
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b237600

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b237640

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b237680

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b26ab20

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b26acf0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0
    ;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                           *)local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b26aec0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar7;
  INode *pIVar8;
  FName local_res10 [2];
  FName local_res20;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(pFVar1,local_res10);
  if (pFVar5 != (FAnyDataReference *)0x0) {
    if ((pFVar5->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *
          )local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
                          local_98);
    }
    param_1->Node = (INode *)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (INode *)0x0) {
    param_1->Node = pIVar8;
    *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b26f0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b26f370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b26f5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
                     (local_a8,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_118);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118,
             &local_118.SubInterfaces);
  if ((local_d0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
               &(local_d0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
                     (local_88,&VariableNames::InputDataName,&VariableNames::InputDataMetadata);
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubInterfaces.ArrayNum = 0;
  local_138.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_f8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138
             ,&local_138.SubInterfaces);
  if ((local_f8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
               &(local_f8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_118);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (0xc < local_58) {
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
              ::__l2::Destructors)[local_58])(local_68);
  if (0xc < local_20) {
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
              ::__l2::Destructors)[local_20])(local_30);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b282db0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b282f40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetNodeInfo
          (void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2830d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14b28ed60

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b28ee30

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
StaticPostExecute(IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticPostExecute @ 14b28ef00

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') || (*(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar2 + 0x60) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uVar1 = **(undefined4 **)((longlong)IVar2 + 0x48);
  if (*(char *)((longlong)IVar2 + 0x38) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(undefined4 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticReset @ 14b28efd0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::EBufferTriggerType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b28f030

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ETriggerComparisonType,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b28f090

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Audio::EWaveShaperType,1> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

