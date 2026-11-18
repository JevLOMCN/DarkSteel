// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 108

// BindInputs @ 14b2c4a00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2c4b70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2c4c10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetExecuteFunction(TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2c4c20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c4c50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetResetFunction(TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2c7d50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
BindInputs(TVariableMutatorOperator<Metasound::FWaveAsset> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FWaveAsset> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FWaveAsset> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FWaveAsset> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2c7ec0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
BindOutputs(TVariableMutatorOperator<Metasound::FWaveAsset> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2c7f50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FWaveAsset> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2c7f60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FWaveAsset> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c7f90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
GetResetFunction(TVariableMutatorOperator<Metasound::FWaveAsset> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2cb410

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
BindInputs(TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FWaveTableBankAsset> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FWaveTableBankAsset> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FWaveTableBankAsset> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2cb580

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
BindOutputs(TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2cb790

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2cb830

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2cb860

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
GetResetFunction(TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2d6510

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
BindInputs(TVariableMutatorOperator<Metasound::FAudioBusAsset> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FAudioBusAsset> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FAudioBusAsset> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FAudioBusAsset> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2d6680

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
BindOutputs(TVariableMutatorOperator<Metasound::FAudioBusAsset> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2d6710

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FAudioBusAsset> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2d6720

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FAudioBusAsset> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d6750

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
GetResetFunction(TVariableMutatorOperator<Metasound::FAudioBusAsset> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2d6a20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2d6c30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2d6d50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2d6d70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d6da0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2dd800

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2dd990

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2ddac0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetExecuteFunction(TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2ddad0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ddb00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetResetFunction(TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                 *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2ecea0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2ed010

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2ed0f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2ed110

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ed150

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2f98d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
BindInputs(TVariableMutatorOperator<WaveTable::FWaveTable> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<WaveTable::FWaveTable> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<WaveTable::FWaveTable> *local_58;
  code *local_50;
  TDataReadReference<WaveTable::FWaveTable> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2f9a40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
BindOutputs(TVariableMutatorOperator<WaveTable::FWaveTable> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2f9c50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
GetExecuteFunction(TVariableMutatorOperator<WaveTable::FWaveTable> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2f9c60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
GetPostExecuteFunction(TVariableMutatorOperator<WaveTable::FWaveTable> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2f9e40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
GetResetFunction(TVariableMutatorOperator<WaveTable::FWaveTable> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14b2fd2c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> **local_48
  ;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14b2fd430

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14b2fd4d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetExecuteFunction(TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2fd4e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2fd510

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetResetFunction(TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<WaveTable::FWaveTable> @ 14b3427e0

TVariableMutatorOperator<WaveTable::FWaveTable> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
TVariableMutatorOperator<WaveTable::FWaveTable>
          (TVariableMutatorOperator<WaveTable::FWaveTable> *this,
          TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *param_1,
          TDataReadReference<WaveTable::FWaveTable> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  *(undefined ***)&this->Data = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b342900

TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                 *param_1,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Data =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b342a20

TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                 *param_1,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Data =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b342b40

TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                 *param_1,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Data =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
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
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b342c60

TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
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
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
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
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b342d80

TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
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
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
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
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FAudioBusAsset> @ 14b342ea0

TVariableMutatorOperator<Metasound::FAudioBusAsset> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
TVariableMutatorOperator<Metasound::FAudioBusAsset>
          (TVariableMutatorOperator<Metasound::FAudioBusAsset> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Data = &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_
  ;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FWaveAsset> @ 14b342fc0

TVariableMutatorOperator<Metasound::FWaveAsset> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
TVariableMutatorOperator<Metasound::FWaveAsset>
          (TVariableMutatorOperator<Metasound::FWaveAsset> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *param_1,
          TDataReadReference<Metasound::FWaveAsset> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  *(undefined ***)&this->Data = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FWaveTableBankAsset> @ 14b3430e0

TVariableMutatorOperator<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
TVariableMutatorOperator<Metasound::FWaveTableBankAsset>
          (TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *param_1,
          TDataReadReference<Metasound::FWaveTableBankAsset> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Data =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
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
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<WaveTable::FWaveTable> @ 14b3501a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
~TVariableMutatorOperator<WaveTable::FWaveTable>
          (TVariableMutatorOperator<WaveTable::FWaveTable> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b3501e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b350220

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b350260

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b3502a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::
~TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b3502e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::
~TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FAudioBusAsset> @ 14b350320

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
~TVariableMutatorOperator<Metasound::FAudioBusAsset>
          (TVariableMutatorOperator<Metasound::FAudioBusAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FWaveAsset> @ 14b350360

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
~TVariableMutatorOperator<Metasound::FWaveAsset>
          (TVariableMutatorOperator<Metasound::FWaveAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FWaveTableBankAsset> @ 14b3503a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
~TVariableMutatorOperator<Metasound::FWaveTableBankAsset>
          (TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b386a70

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<WaveTable::FWaveTable> *this;
  TVariableMutatorOperator<WaveTable::FWaveTable> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable>
              (pFVar1,(TDataReadReference<WaveTable::FWaveTable> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<WaveTable::FWaveTable> *)0x0;
    if (this != (TVariableMutatorOperator<WaveTable::FWaveTable> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<WaveTable::FWaveTable>
                         (this,(TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *)
                               local_78,(TDataReadReference<WaveTable::FWaveTable> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b386c40

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this != (TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b386e10

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *
             )0x0;
    if (this != (TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b386fe0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *this;
  TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this != (TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b3871b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
  *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b387380

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
  *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b387550

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FAudioBusAsset> *this;
  TVariableMutatorOperator<Metasound::FAudioBusAsset> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
              (pFVar1,(TDataReadReference<Metasound::FAudioBusAsset> *)local_58,&local_res20,pFVar2)
    ;
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FAudioBusAsset> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FAudioBusAsset> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FAudioBusAsset>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>
                                *)local_78,(TDataReadReference<Metasound::FAudioBusAsset> *)local_98
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b387720

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FWaveAsset> *this;
  TVariableMutatorOperator<Metasound::FWaveAsset> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset>
              (pFVar1,(TDataReadReference<Metasound::FWaveAsset> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FWaveAsset> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FWaveAsset> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FWaveAsset>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *)
                               local_78,(TDataReadReference<Metasound::FWaveAsset> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14b3878f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *this;
  TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>::
    Get((TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *)local_38,
        pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>
              (pFVar1,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_58,&local_res20,
               pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FWaveTableBankAsset> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FWaveTableBankAsset>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>
                                *)local_78,
                          (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// DeclareVertexInterface @ 14b395860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> local_a8;
  TInputDataVertex<WaveTable::FWaveTable> local_88;
  TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_>::
           TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><>
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
           TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_>::
           TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
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

// DeclareVertexInterface @ 14b395ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  local_a8;
  TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14b395d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  local_a8;
  TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14b395fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  local_a8;
  TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14b396260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
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

// DeclareVertexInterface @ 14b3964e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
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

// DeclareVertexInterface @ 14b396760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> local_a8;
  TInputDataVertex<Metasound::FAudioBusAsset> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
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

// DeclareVertexInterface @ 14b3969e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> local_a8;
  TInputDataVertex<Metasound::FWaveAsset> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FWaveAsset>::TInputDataVertex<Metasound::FWaveAsset><>
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

// DeclareVertexInterface @ 14b396c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> local_a8;
  TInputDataVertex<Metasound::FWaveTableBankAsset> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FWaveTableBankAsset>::
           TInputDataVertex<Metasound::FWaveTableBankAsset><>
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

// GetNodeInfo @ 14b3bcc60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<WaveTable::FWaveTable>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bcdf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bcf80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bd110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bd2a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bd430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bd5c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBusAsset>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bd750

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveAsset>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bd8e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14b3e0c00

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  code *pcVar3;
  bool bVar4;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
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
  pTVar2 = *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
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
  this = *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(this,pTVar2);
  *(undefined4 *)&this[1].AllocatorInstance.Data = *(undefined4 *)&pTVar2[1].AllocatorInstance.Data;
  return;
}

// StaticPostExecute @ 14b3e0cd0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
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
  pTVar2 = *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
            ((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
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
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14b3e0da0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
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
  pTVar2 = *(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
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
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20)
             ,pTVar2);
  return;
}

// StaticPostExecute @ 14b3e0e70

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
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
  pTVar2 = *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
            ((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
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
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14b3e0f40

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::StaticPostExecute(IOperator *param_1)

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

// StaticPostExecute @ 14b3e1010

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::StaticPostExecute(IOperator *param_1)

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

// StaticPostExecute @ 14b3e10e0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  puVar2 = *(undefined8 **)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = puVar2[1];
  puVar4 = *(undefined8 **)((longlong)IVar1 + 0x20);
  uVar5 = *puVar2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)puVar4[1];
  *puVar4 = uVar5;
  puVar4[1] = lVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// StaticPostExecute @ 14b3e11d0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  puVar2 = *(undefined8 **)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = puVar2[1];
  puVar4 = *(undefined8 **)((longlong)IVar1 + 0x20);
  uVar5 = *puVar2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)puVar4[1];
  *puVar4 = uVar5;
  puVar4[1] = lVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// StaticPostExecute @ 14b3e12c0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  puVar2 = *(undefined8 **)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = puVar2[1];
  puVar4 = *(undefined8 **)((longlong)IVar1 + 0x20);
  uVar5 = *puVar2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)puVar4[1];
  *puVar4 = uVar5;
  puVar4[1] = lVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// StaticReset @ 14b3e16b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<WaveTable::FWaveTable>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  FWaveTable *pFVar4;
  FScriptContainerElement *pFVar5;
  FWaveTable *pFVar6;
  FWaveTable local_28;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pFVar4 = *(FWaveTable **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar6 = TDataLiteralFactory<WaveTable::FWaveTable,Metasound::DataFactoryPrivate::TDataTypeCreator<WaveTable::FWaveTable>_>
             ::CreateExplicitArgs(&local_28,pFVar2,(FLiteral *)IVar1);
    if (pFVar4 != pFVar6) {
      pFVar5 = (pFVar4->Samples).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar4->Samples).AllocatorInstance.Data = (pFVar6->Samples).AllocatorInstance.Data;
      (pFVar6->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Samples).ArrayNum = (pFVar6->Samples).ArrayNum;
      (pFVar4->Samples).ArrayMax = (pFVar6->Samples).ArrayMax;
      (pFVar6->Samples).ArrayNum = 0;
      (pFVar6->Samples).ArrayMax = 0;
    }
    pFVar4->FinalValue = pFVar6->FinalValue;
    if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Samples.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b3e1760

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<0> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20);
    pTVar4 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar3 != pTVar6) {
      DestructItems<Metasound::FAudioBusAsset,int>
                ((FAudioBusAsset *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar3->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar3->ArrayNum = pTVar6->ArrayNum;
      pTVar3->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// StaticReset @ 14b3e1820

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<0> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20)
    ;
    pTVar4 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar3 != pTVar6) {
      DestructItems<Metasound::FWaveAsset,int>
                ((FWaveAsset *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar3->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar3->ArrayNum = pTVar6->ArrayNum;
      pTVar3->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// StaticReset @ 14b3e18e0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<0> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20);
    pTVar4 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar3 != pTVar6) {
      DestructItems<Metasound::FWaveTableBankAsset,int>
                ((FWaveTableBankAsset *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar3->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar3->ArrayNum = pTVar6->ArrayNum;
      pTVar3->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// StaticReset @ 14b3e19a0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b3e1a00

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b3e1a60

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBusAsset>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined8 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  FAudioBusProxy *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FAudioBusAsset *pFVar8;
  FAudioBusAsset local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined8 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar8 = TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBusAsset>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    pTVar5 = (pFVar8->AudioBusProxy).SharedReferenceCount.ReferenceController;
    pFVar6 = (pFVar8->AudioBusProxy).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)puVar4[1];
    *puVar4 = pFVar6;
    puVar4[1] = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.AudioBusProxy.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b3e1af0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveAsset>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined8 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSoundWaveProxy *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FWaveAsset *pFVar8;
  FWaveAsset local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined8 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar8 = TDataLiteralFactory<Metasound::FWaveAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveAsset>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    pTVar5 = (pFVar8->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    pFVar6 = (pFVar8->SoundWaveProxy).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)puVar4[1];
    *puVar4 = pFVar6;
    puVar4[1] = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SoundWaveProxy.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14b3e1b80

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FWaveTableBankAsset>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  FWaveTableBankAsset *pFVar4;
  FWaveTableBankAsset *pFVar5;
  FWaveTableBankAsset local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pFVar4 = *(FWaveTableBankAsset **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar5 = TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveTableBankAsset>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pFVar4 != pFVar5) {
      (pFVar4->Proxy).Object = (pFVar5->Proxy).Object;
      (pFVar5->Proxy).Object = (FWaveTableBankAssetProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar4->Proxy).SharedReferenceCount,&(pFVar5->Proxy).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.Proxy.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

