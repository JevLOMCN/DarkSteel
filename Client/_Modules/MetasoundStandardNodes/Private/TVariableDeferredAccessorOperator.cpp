// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 147

// BindInputs @ 14afc4b80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::BindInputs
          (TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *local_30;
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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14afc4c40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::BindOutputs
          (TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14afce350

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14afce410

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14afd7f00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::BindInputs
          (TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *local_30;
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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14afd8010

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::BindOutputs
          (TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14afd82d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14afd83a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff7620

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff76a0

TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> @ 14aff7720

TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>
          (TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFMonoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::FMonoAudioFormat>::GetDelayedDataReference
            (*(TVariable<Metasound::FMonoAudioFormat> **)&(this->Variable).field_0x8,
             &this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> @ 14aff77a0

TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>
          (TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFStereoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::FStereoAudioFormat>::GetDelayedDataReference
            (*(TVariable<Metasound::FStereoAudioFormat> **)&(this->Variable).field_0x8,
             &this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14affc370

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14affc3b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> @ 14affc3f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::
~TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>
          (TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> @ 14affc430

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::
~TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>
          (TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b013340

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
  *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b013480

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0135c0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<Metasound::FMonoAudioFormat> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *)local_28,
               pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::FMonoAudioFormat>::InitDelayedDataReference
              ((TVariable<Metasound::FMonoAudioFormat> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<Metasound::FMonoAudioFormat> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b013700

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<Metasound::FStereoAudioFormat> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>::
    Get((TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *)local_28,
        pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::FStereoAudioFormat>::InitDelayedDataReference
              ((TVariable<Metasound::FStereoAudioFormat> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<Metasound::FStereoAudioFormat> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b017e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b0180c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b018310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FMonoAudioFormat> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::FMonoAudioFormat> local_88;
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::FMonoAudioFormat>::
           TOutputDataVertex<Metasound::FMonoAudioFormat><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
                     (&local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
                     (&local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b018560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FStereoAudioFormat> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::FStereoAudioFormat> local_88;
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::FStereoAudioFormat>::
           TOutputDataVertex<Metasound::FStereoAudioFormat><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
                     (&local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
                     (&local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// GetNodeInfo @ 14b028560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0286f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b028880

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b028a10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b03ced0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b03cf90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b051520

TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b054850

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b066390

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b068410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// GetNodeInfo @ 14b075660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b080410

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b080550

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b08a7c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b08a890

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b08e770

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b08e830

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b096d50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b096e10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b1920

TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b19a0

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b1a20

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b1aa0

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
  GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b5d50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b5d90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b5dd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b5e10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b0cb6f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cb830

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cb970

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *)
          local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0cbab0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
  *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b0cfe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b0d00a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b0d02f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b0d0540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// GetNodeInfo @ 14b0d88a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d8a30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d8bc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d8d50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b0f2bf0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b0f2cb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b0f3eb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b0f3fe0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b0f9de0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b0f9f90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b102c50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b102d10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b1052f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b1053b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b10ea40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b10eb00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b111480

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b111540

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b13c8e0

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b13c960

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b13c9e0

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b13ca60

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b13cae0

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b13cb60

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b13cbe0

TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b144b40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b144b80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b144bc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b144c00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b144c40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b144c80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b144cc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b175330

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b175470

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *)
          local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1755b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1756f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b175830

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b175970

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar5
  ;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b175ab0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b17c9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b17cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b17ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b17d0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b17d2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b17d540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b17d790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_> *pTVar4
  ;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// GetNodeInfo @ 14b1963b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b196540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b1966d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b196860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b1969f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b196b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b196d10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>()
          ;
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b1b2800

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b1b28c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b1b70f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b1b7210

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1ccd30

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1ccdb0

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cfbb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cfbf0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b1d9300

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *
          )local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1d9440

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b1dc280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b1dc4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_> *pTVar4
  ;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// GetNodeInfo @ 14b1e3430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b1e35c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>()
          ;
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b1ed090

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b1ed150

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindOutputs
          (void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b1efa70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b1efb30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// BindInputs @ 14b203340

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

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
                       ,0x16e,L"Input variables cannot be bound to new underlying objects");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b203400

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_78 = local_res20;
  FOutputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  lVar1 = *(longlong *)((longlong)this + 0x10);
  FLazyName::Resolve(&VariableNames::OutputDataName);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x55,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_88 = lVar1 + 0x18;
  local_48 = lVar1 + 0x18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_30,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_40
            );
  return;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b232390

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b232410

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b232490

TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b237540

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b237580

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b2375c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b26a760

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b26a8a0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b26a9e0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  void *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pIVar6 = ::operator_new(8);
    if (pIVar6 != (INode *)0x0) {
      *pIVar6 = (INode)&___7FNoOpOperator_Metasound__6B_;
    }
    param_1->Node = pIVar6;
  }
  else {
    if ((pFVar3->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
    FAnyDataReference::
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *
          )local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::InitDelayedDataReference
              ((void *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    this_00 = ::operator_new(0x48);
    if (this_00 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (void *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b26ea00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b26ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// DeclareVertexInterface @ 14b26eea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
                     (local_68,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
                     (local_48,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
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

// GetNodeInfo @ 14b282900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b282a90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b282c20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

