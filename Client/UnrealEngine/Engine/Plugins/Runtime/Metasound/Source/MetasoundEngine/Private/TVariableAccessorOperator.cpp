// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 54

// BindInputs @ 14b2c5c60

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pTVar1 = &this->Variable;
  bVar3 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = (IDataReference *)pTVar1;
  local_30 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2c5d60

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = &this->Variable;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2c9cc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::
BindInputs(TVariableAccessorOperator<Metasound::FWaveAsset> *this,FInputVertexInterfaceData *param_1
          )

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pTVar1 = &this->Variable;
  bVar3 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = (IDataReference *)pTVar1;
  local_30 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2c9e00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::
BindOutputs(TVariableAccessorOperator<Metasound::FWaveAsset> *this,
           FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = &this->Variable;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2cd3c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>
::BindInputs(TVariableAccessorOperator<Metasound::FWaveTableBankAsset> *this,
            FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pTVar1 = &this->Variable;
  bVar3 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = (IDataReference *)pTVar1;
  local_30 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2cd560

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>
::BindOutputs(TVariableAccessorOperator<Metasound::FWaveTableBankAsset> *this,
             FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = &this->Variable;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2d7fe0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::
BindInputs(TVariableAccessorOperator<Metasound::FAudioBusAsset> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pTVar1 = &this->Variable;
  bVar3 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = (IDataReference *)pTVar1;
  local_30 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d80a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::
BindOutputs(TVariableAccessorOperator<Metasound::FAudioBusAsset> *this,
           FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = &this->Variable;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2d84f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  IDataReference *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar3 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = pIVar1;
  local_30 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d8640

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  longlong local_res20;
  longlong local_88;
  FName *local_80;
  longlong local_78;
  code *local_70;
  longlong *local_68;
  code *local_60;
  undefined1 **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  undefined1 **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = (longlong)this + 8;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2e0b40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pTVar1 = &this->Variable;
  bVar3 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = (IDataReference *)pTVar1;
  local_30 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e0c30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = &this->Variable;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2ee300

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  IDataReference *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pIVar1 = (IDataReference *)((longlong)this + 8);
  bVar3 = IsSupportedVertexData(pIVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = pIVar1;
  local_30 = pIVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2ee3c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  longlong local_res20;
  longlong local_88;
  FName *local_80;
  longlong local_78;
  code *local_70;
  longlong *local_68;
  code *local_60;
  undefined1 **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  undefined1 **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = (longlong)this + 8;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2fb920

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::
BindInputs(TVariableAccessorOperator<WaveTable::FWaveTable> *this,FInputVertexInterfaceData *param_1
          )

{
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pTVar1 = &this->Variable;
  bVar3 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = (IDataReference *)pTVar1;
  local_30 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2fba40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::
BindOutputs(TVariableAccessorOperator<WaveTable::FWaveTable> *this,
           FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = &this->Variable;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b2fe690

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  IDataReference **local_20;
  code *local_18;
  undefined1 **local_10;
  
  pTVar1 = &this->Variable;
  bVar3 = IsSupportedVertexData((IDataReference *)pTVar1,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSupportedVertexData(Variable, InVertexData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariableNodes.h"
                       ,0x1d0,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::InputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res18[0] = (IDataReference *)pTVar1;
  local_30 = pTVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2fe750

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_68;
  code *local_60;
  FName **local_58;
  FName *local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  FName **local_28;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res20 = &this->Variable;
  local_68 = &local_res20;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x4f,L"InitDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x60) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = &local_88;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x40;
  local_48 = lVar1 + 0x40;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// ~TVariableAccessorOperator<WaveTable::FWaveTable> @ 14b34fdb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::
~TVariableAccessorOperator<WaveTable::FWaveTable>
          (TVariableAccessorOperator<WaveTable::FWaveTable> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34fde0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34fe10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34fe40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b34fe70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::
~TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b34fea0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::
~TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FAudioBusAsset> @ 14b34fed0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::
~TVariableAccessorOperator<Metasound::FAudioBusAsset>
          (TVariableAccessorOperator<Metasound::FAudioBusAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FWaveAsset> @ 14b34ff00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::
~TVariableAccessorOperator<Metasound::FWaveAsset>
          (TVariableAccessorOperator<Metasound::FWaveAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FWaveTableBankAsset> @ 14b34ff30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>
::~TVariableAccessorOperator<Metasound::FWaveTableBankAsset>
          (TVariableAccessorOperator<Metasound::FWaveTableBankAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b384ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<WaveTable::FWaveTable> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
              ((TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<WaveTable::FWaveTable>::InitDelayedDataReference
                ((TVariable<WaveTable::FWaveTable> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<WaveTable::FWaveTable>::GetDelayedDataReference
                         ((TVariable<WaveTable::FWaveTable> *)local_48._8_8_,
                          (TDataReadReference<WaveTable::FWaveTable> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<WaveTable::FWaveTable> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b3850b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
      InitDelayedDataReference
                ((TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                 local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               GetDelayedDataReference
                         ((TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_48._8_8_,
                          (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b385280

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
      InitDelayedDataReference
                ((TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                 local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               GetDelayedDataReference
                         ((TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                          local_48._8_8_,
                          (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                     *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b385450

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
      InitDelayedDataReference
                ((TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                 local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
               GetDelayedDataReference
                         ((TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_48._8_8_,
                          (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b385620

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
        ;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b3857f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
        ;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b3859c0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
              ((TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FAudioBusAsset>::InitDelayedDataReference
                ((TVariable<Metasound::FAudioBusAsset> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FAudioBusAsset>::GetDelayedDataReference
                         ((TVariable<Metasound::FAudioBusAsset> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FAudioBusAsset> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FAudioBusAsset> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_
        ;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b385b90

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FWaveAsset> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
              ((TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FWaveAsset>::InitDelayedDataReference
                ((TVariable<Metasound::FWaveAsset> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FWaveAsset>::GetDelayedDataReference
                         ((TVariable<Metasound::FWaveAsset> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FWaveAsset> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FWaveAsset> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b385d60

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar7;
  INode *pIVar8;
  FName local_res10;
  undefined1 local_48 [16];
  INode local_38;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar5 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar8 = ::operator_new(8);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      *pIVar8 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar8;
  }
  else {
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
    Get((TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *)local_48,
        pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FWaveTableBankAsset>::InitDelayedDataReference
                ((TVariable<Metasound::FWaveTableBankAsset> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FWaveTableBankAsset>::GetDelayedDataReference
                         ((TVariable<Metasound::FWaveTableBankAsset> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FWaveTableBankAsset> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
        *(undefined1 *)(local_48._8_8_ + 0x60) = 1;
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    pIVar8 = ::operator_new(0x28);
    if (pIVar8 == (INode *)0x0) {
      pIVar8 = (INode *)0x0;
    }
    else {
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      *pIVar8 = (INode)&
                       ___7__TVariableAccessorOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_38);
    }
    param_1->Node = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b392ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar3;
  TOutputDataVertex<WaveTable::FWaveTable> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> local_88;
  TOutputDataVertex<WaveTable::FWaveTable> local_68;
  TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_>::
           TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<WaveTable::FWaveTable>::TOutputDataVertex<WaveTable::FWaveTable><>
                     (&local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_>::
           TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><>
                     (&local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata)
  ;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b393110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  local_88;
  TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata)
  ;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b393360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  local_88;
  TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata)
  ;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b3935b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  local_88;
  TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata)
  ;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b393800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::
           TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
                     (local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><>
                     (local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata);
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < local_18) {
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
              ::__l2::Destructors)[local_18])(local_28);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b393a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::
           TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
                     (local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata);
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < local_18) {
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
              ::__l2::Destructors)[local_18])(local_28);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b393ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBusAsset> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> local_88;
  TOutputDataVertex<Metasound::FAudioBusAsset> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FAudioBusAsset>::
           TOutputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><>
                     (&local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata)
  ;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b393ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar3;
  TOutputDataVertex<Metasound::FWaveAsset> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> local_88;
  TOutputDataVertex<Metasound::FWaveAsset> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FWaveAsset>::TOutputDataVertex<Metasound::FWaveAsset><>
                     (&local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><>
                     (&local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata)
  ;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b394140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar3;
  TOutputDataVertex<Metasound::FWaveTableBankAsset> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> local_88;
  TOutputDataVertex<Metasound::FWaveTableBankAsset> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FWaveTableBankAsset>::
           TOutputDataVertex<Metasound::FWaveTableBankAsset><>
                     (&local_68,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_d8,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8
             ,&local_f8.SubInterfaces);
  if ((local_d8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_d8.Vertices)->AllocatorInstance,(local_d8.Vertices)->ArrayNum,
               &(local_d8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_d8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_d8);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><>
                     (&local_48,&VariableNames::InputVariableName,&VariableNames::InputDataMetadata)
  ;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubInterfaces.ArrayNum = 0;
  local_118.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_118
             ,&local_118.SubInterfaces);
  if ((local_b0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_b0.Vertices)->AllocatorInstance,(local_b0.Vertices)->ArrayNum,
               &(local_b0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b0,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b3bb040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<WaveTable::FWaveTable>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bb1d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bb360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bb4f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bb680

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bb810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bb9a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBusAsset>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bbb30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveAsset>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3bbcc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FWaveTableBankAsset>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

