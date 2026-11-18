// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 126

// BindInputs @ 14afc48a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::
BindInputs(TVariableAccessorOperator<Metasound::FStereoAudioFormat> *this,
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

// BindOutputs @ 14afc4960

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::
BindOutputs(TVariableAccessorOperator<Metasound::FStereoAudioFormat> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14afcdfb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::BindInputs
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

// BindOutputs @ 14afce070

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14afd7560

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::
BindInputs(TVariableAccessorOperator<Metasound::FMonoAudioFormat> *this,
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

// BindOutputs @ 14afd7680

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::
BindOutputs(TVariableAccessorOperator<Metasound::FMonoAudioFormat> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14afd7d00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindInputs
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

// BindOutputs @ 14afd7dc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14affc2b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14affc2e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FMonoAudioFormat> @ 14affc310

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::
~TVariableAccessorOperator<Metasound::FMonoAudioFormat>
          (TVariableAccessorOperator<Metasound::FMonoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FStereoAudioFormat> @ 14affc340

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::
~TVariableAccessorOperator<Metasound::FStereoAudioFormat>
          (TVariableAccessorOperator<Metasound::FStereoAudioFormat> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b012c00

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b012dd0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b012fa0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FMonoAudioFormat> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FMonoAudioFormat>::InitDelayedDataReference
                ((TVariable<Metasound::FMonoAudioFormat> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FMonoAudioFormat>::GetDelayedDataReference
                         ((TVariable<Metasound::FMonoAudioFormat> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FMonoAudioFormat> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FMonoAudioFormat> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFMonoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b013170

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FStereoAudioFormat> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>::
    Get((TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *)local_48,
        pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FStereoAudioFormat>::InitDelayedDataReference
                ((TVariable<Metasound::FStereoAudioFormat> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FStereoAudioFormat>::GetDelayedDataReference
                         ((TVariable<Metasound::FStereoAudioFormat> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FStereoAudioFormat> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FStereoAudioFormat> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFStereoAudioFormat_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
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

// DeclareVertexInterface @ 14b017530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
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

// DeclareVertexInterface @ 14b017780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
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

// DeclareVertexInterface @ 14b0179d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar3;
  TOutputDataVertex<Metasound::FMonoAudioFormat> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_88;
  TOutputDataVertex<Metasound::FMonoAudioFormat> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FMonoAudioFormat>::
           TOutputDataVertex<Metasound::FMonoAudioFormat><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
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

// DeclareVertexInterface @ 14b017c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar3;
  TOutputDataVertex<Metasound::FStereoAudioFormat> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_88;
  TOutputDataVertex<Metasound::FStereoAudioFormat> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FStereoAudioFormat>::
           TOutputDataVertex<Metasound::FStereoAudioFormat><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
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

// GetNodeInfo @ 14b027f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0280b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b028240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FMonoAudioFormat>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FMonoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0283d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FStereoAudioFormat>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FStereoAudioFormat>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b03ca40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindInputs
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

// BindOutputs @ 14b03cb00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b054820

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b0661c0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
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

// DeclareVertexInterface @ 14b0681c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
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

// GetNodeInfo @ 14b0754d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b07fd70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindInputs
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

// BindOutputs @ 14b07fe30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b08a350

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindInputs
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

// BindOutputs @ 14b08a410

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b08e390

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::BindInputs
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

// BindOutputs @ 14b08e450

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b0967c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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

// BindOutputs @ 14b096880

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b5c90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b5cc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b5cf0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b5d20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b0cafb0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b0cb180

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b0cb350

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *)
          local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28)
      ;
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b0cb520

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
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

// DeclareVertexInterface @ 14b0cf510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
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

// DeclareVertexInterface @ 14b0cf760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
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

// DeclareVertexInterface @ 14b0cf9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
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

// DeclareVertexInterface @ 14b0cfc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
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

// GetNodeInfo @ 14b0d8260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d83f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d8580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EKneeMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d8710

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b0f2900

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::BindInputs
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

// BindOutputs @ 14b0f29c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b0f3a70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindInputs
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

// BindOutputs @ 14b0f3b30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b0f98d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::BindInputs
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

// BindOutputs @ 14b0f9990

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b102190

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::BindInputs
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

// BindOutputs @ 14b102270

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b104730

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::BindInputs
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

// BindOutputs @ 14b1047f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b10e670

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindInputs
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

// BindOutputs @ 14b10e730

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b110db0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindInputs
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

// BindOutputs @ 14b110e80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b1449f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b144a20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b144a50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b144a80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b144ab0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b144ae0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b144b10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b174680

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b174850

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *)
          local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28
                         );
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b174a20

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b174bf0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *
                          )local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b174dc0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b174f90

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b175160

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
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

// DeclareVertexInterface @ 14b17b980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
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

// DeclareVertexInterface @ 14b17bbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
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

// DeclareVertexInterface @ 14b17be20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
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

// DeclareVertexInterface @ 14b17c070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
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

// DeclareVertexInterface @ 14b17c2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
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

// DeclareVertexInterface @ 14b17c510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
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

// DeclareVertexInterface @ 14b17c760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_> *pTVar3
  ;
  TOutputDataVertex<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
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

// GetNodeInfo @ 14b1958c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b195a50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ENoiseType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b195be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b195d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b195f00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b196090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b196220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>()
          ;
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b1b2360

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::BindInputs
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

// BindOutputs @ 14b1b2420

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b1b6b10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindInputs
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

// BindOutputs @ 14b1b6bf0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cfb50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cfb80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b1d8f60

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *
          )local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b1d9130

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// DeclareVertexInterface @ 14b1dbde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
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

// DeclareVertexInterface @ 14b1dc030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_> *pTVar3
  ;
  TOutputDataVertex<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
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

// GetNodeInfo @ 14b1e3110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b1e32a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>()
          ;
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14b1ecd60

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindInputs
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

// BindOutputs @ 14b1ece20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b1ef270

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindInputs
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

// BindOutputs @ 14b1ef330

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14b202b70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::BindInputs
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

// BindOutputs @ 14b202c30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b2374b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b2374e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b237510

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b26a1f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b26a3c0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14b26a590

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *
          )local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
                          local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
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

// DeclareVertexInterface @ 14b26e310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
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

// DeclareVertexInterface @ 14b26e560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
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

// DeclareVertexInterface @ 14b26e7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
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

// GetNodeInfo @ 14b282450

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2825e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b282770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

