// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 133

// BindInputs @ 14ad72900

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::BindInputs(TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ad729c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::BindOutputs(TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ad72fc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ad73080

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = (undefined1 **)&local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ad761b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::BindInputs
          (TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ad76270

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::BindOutputs
          (TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::Frontend::FAnalyzerAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad95fa0

TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
* __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                 *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
  GetDelayedDataReference
            (*(TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
               **)&(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad96020

TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7__TVariableDeferredAccessorOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetDelayedDataReference
            (*(void **)((longlong)this + 0x10),
             (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
             ((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad960a0

TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>
          (TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *param_1
          )

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFAnalyzerAddress_Frontend_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  TVariable<Metasound::Frontend::FAnalyzerAddress>::GetDelayedDataReference
            (*(TVariable<Metasound::Frontend::FAnalyzerAddress> **)&(this->Variable).field_0x8,
             &this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad9d900

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::
~TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad9d940

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
~TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad9d980

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::
~TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>
          (TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14adb09e0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    InitDelayedDataReference
              ((TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14adb0b20

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  void *this_00;
  TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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
                 ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         (this_00,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
                                   *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14adb0c60

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<Metasound::Frontend::FAnalyzerAddress> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *)
          local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::Frontend::FAnalyzerAddress>::InitDelayedDataReference
              ((TVariable<Metasound::Frontend::FAnalyzerAddress> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<Metasound::Frontend::FAnalyzerAddress> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14adb4580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  local_88;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           ::
           TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14adb47d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
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
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
                     (local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
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

// DeclareVertexInterface @ 14adb4a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress> local_88;
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress>::
           TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
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

// GetNodeInfo @ 14adc1640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14adc17d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14adc1960

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14ae92f50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ae93070

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ae99760

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
::BindInputs(TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> *this,
            FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ae998c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
::BindOutputs(TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> *this,
             FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ae9a1f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ae9a2c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aea60e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::BindInputs
          (TVariableDeferredAccessorOperator<int> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<int>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<int>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<int>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aea61a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::BindOutputs
          (TVariableDeferredAccessorOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<int>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<int>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<int>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<int>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aea6300

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aea64b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *local_res20
  ;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aea7890

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::
BindInputs(TVariableDeferredAccessorOperator<Metasound::FTrigger> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTrigger>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aea79b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::
BindOutputs(TVariableDeferredAccessorOperator<Metasound::FTrigger> *this,
           FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTrigger>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aeaec50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
::BindInputs(TVariableDeferredAccessorOperator<Metasound::FSendAddress> *this,
            FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FSendAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aeaed30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
::BindOutputs(TVariableDeferredAccessorOperator<Metasound::FSendAddress> *this,
             FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FSendAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aeb4ac0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aeb4b80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aebd320

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *local_30
  ;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aebd3e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *local_78
  ;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aec13e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::BindInputs
          (TVariableDeferredAccessorOperator<bool> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<bool>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<bool>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aec1520

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::BindOutputs
          (TVariableDeferredAccessorOperator<bool> *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<bool>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<bool>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aec3a60

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::
BindInputs(TVariableDeferredAccessorOperator<Metasound::FTime> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTime>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aec3b20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::
BindOutputs(TVariableDeferredAccessorOperator<Metasound::FTime> *this,
           FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTime>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aec6a10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::BindInputs
          (TVariableDeferredAccessorOperator<FString> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<FString>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FString>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aec6b30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::BindOutputs
          (TVariableDeferredAccessorOperator<FString> *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<FString>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FString>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FString>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aece890

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aece950

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aed30b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::BindInputs
          (TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aed3170

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::BindOutputs
          (TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> *this,
          FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FMetasoundParameterStorageWrapper>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aedc470

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::BindInputs(TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aedc530

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::BindOutputs(TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aee5610

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::BindInputs
          (TVariableDeferredAccessorOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  IDataReference *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<float>_> *local_30;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<float>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14aee56d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::BindOutputs
          (TVariableDeferredAccessorOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  TDataWriteReference<Metasound::TVariable<float>_> *local_res20;
  longlong local_88;
  FName *local_80;
  TDataWriteReference<Metasound::TVariable<float>_> *local_78;
  code *local_70;
  TDataWriteReference<Metasound::TVariable<float>_> **local_68;
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<float>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58 = &local_80;
  local_80 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// TVariableDeferredAccessorOperator<int> @ 14af34850

TVariableDeferredAccessorOperator<int> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::
TVariableDeferredAccessorOperator<int>
          (TVariableDeferredAccessorOperator<int> *this,
          TDataWriteReference<Metasound::TVariable<int>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableDeferredAccessorOperator_H_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable_H_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
  TVariable<int>::GetDelayedDataReference
            (*(TVariable<int> **)&(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<float> @ 14af348d0

TVariableDeferredAccessorOperator<float> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::
TVariableDeferredAccessorOperator<float>
          (TVariableDeferredAccessorOperator<float> *this,
          TDataWriteReference<Metasound::TVariable<float>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableDeferredAccessorOperator_M_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable_M_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
  TVariable<float>::GetDelayedDataReference
            (*(TVariable<float> **)&(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af34950

TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
            (*(TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> **)&(this->Variable).field_0x8,
             &this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af349d0

TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
            (*(TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> **)&(this->Variable).field_0x8,
             &this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af34a50

TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
* __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                 *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
  GetDelayedDataReference
            (*(TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> **)
              &(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af34ad0

TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                 *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
            (*(TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> **)
              &(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af34b50

TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
            (*(TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> **)
              &(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af34bd0

TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                 *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
            (*(TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> **)
              &(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af34c50

TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
            (*(TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> **)&(this->Variable).field_0x8,
             &this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> @ 14af34cd0

TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
          (TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFAudioBuffer_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  TVariable<Metasound::FAudioBuffer>::GetDelayedDataReference
            (*(TVariable<Metasound::FAudioBuffer> **)&(this->Variable).field_0x8,&this->DelayedData)
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> @ 14af34d50

TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>
          (TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> *this,
          TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFMetasoundParameterStorageWrapper___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  TVariable<FMetasoundParameterStorageWrapper>::GetDelayedDataReference
            (*(TVariable<FMetasoundParameterStorageWrapper> **)&(this->Variable).field_0x8,
             &this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::FSendAddress> @ 14af34dd0

TVariableDeferredAccessorOperator<Metasound::FSendAddress> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
          (TVariableDeferredAccessorOperator<Metasound::FSendAddress> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFSendAddress_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  TVariable<Metasound::FSendAddress>::GetDelayedDataReference
            (*(TVariable<Metasound::FSendAddress> **)&(this->Variable).field_0x8,&this->DelayedData)
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<FString> @ 14af34e50

TVariableDeferredAccessorOperator<FString> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::
TVariableDeferredAccessorOperator<FString>
          (TVariableDeferredAccessorOperator<FString> *this,
          TDataWriteReference<Metasound::TVariable<FString>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFString___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFString___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFString___Metasound___Metasound__6B_;
  TVariable<FString>::GetDelayedDataReference
            (*(TVariable<FString> **)&(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::FTime> @ 14af34ed0

TVariableDeferredAccessorOperator<Metasound::FTime> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::
TVariableDeferredAccessorOperator<Metasound::FTime>
          (TVariableDeferredAccessorOperator<Metasound::FTime> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFTime_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  TVariable<Metasound::FTime>::GetDelayedDataReference
            (*(TVariable<Metasound::FTime> **)&(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<Metasound::FTrigger> @ 14af34f50

TVariableDeferredAccessorOperator<Metasound::FTrigger> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::
TVariableDeferredAccessorOperator<Metasound::FTrigger>
          (TVariableDeferredAccessorOperator<Metasound::FTrigger> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableDeferredAccessorOperator_VFTrigger_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  TVariable<Metasound::FTrigger>::GetDelayedDataReference
            (*(TVariable<Metasound::FTrigger> **)&(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TVariableDeferredAccessorOperator<bool> @ 14af34fd0

TVariableDeferredAccessorOperator<bool> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::
TVariableDeferredAccessorOperator<bool>
          (TVariableDeferredAccessorOperator<bool> *this,
          TDataWriteReference<Metasound::TVariable<bool>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableDeferredAccessorOperator__N_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable__N_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable__N_Metasound___Metasound__6B_;
  TVariable<bool>::GetDelayedDataReference
            (*(TVariable<bool> **)&(this->Variable).field_0x8,&this->DelayedData);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TVariableDeferredAccessorOperator<int> @ 14af41810

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::
~TVariableDeferredAccessorOperator<int>(TVariableDeferredAccessorOperator<int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<float> @ 14af41850

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::
~TVariableDeferredAccessorOperator<float>(TVariableDeferredAccessorOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af41890

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af418d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af41910

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::
~TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af41950

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af41990

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af419d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af41a10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> @ 14af41a50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
::~TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
          (TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> @ 14af41a90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::
~TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>
          (TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::FSendAddress> @ 14af41ad0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
::~TVariableDeferredAccessorOperator<Metasound::FSendAddress>
          (TVariableDeferredAccessorOperator<Metasound::FSendAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<FString> @ 14af41b10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::
~TVariableDeferredAccessorOperator<FString>(TVariableDeferredAccessorOperator<FString> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::FTime> @ 14af41b50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::
~TVariableDeferredAccessorOperator<Metasound::FTime>
          (TVariableDeferredAccessorOperator<Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<Metasound::FTrigger> @ 14af41b90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::
~TVariableDeferredAccessorOperator<Metasound::FTrigger>
          (TVariableDeferredAccessorOperator<Metasound::FTrigger> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableDeferredAccessorOperator<bool> @ 14af41bd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::
~TVariableDeferredAccessorOperator<bool>(TVariableDeferredAccessorOperator<bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayedData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14af73030

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<int> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<int> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<int>_> *)local_28,pFVar3->AccessType,
               (pFVar3->DataRefPtr).Ptr);
    TVariable<int>::InitDelayedDataReference
              ((TVariable<int> *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<int> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<int> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
      pTVar5 = TVariableDeferredAccessorOperator<int>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<int>_> *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73170

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<float> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<float> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<float>_> *)local_28,pFVar3->AccessType,
               (pFVar3->DataRefPtr).Ptr);
    TVariable<float>::InitDelayedDataReference
              ((TVariable<float> *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum
              );
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<float> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<float> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
      pTVar5 = TVariableDeferredAccessorOperator<float>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<float>_> *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af732b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *)
          local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
              ((TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0
       ) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af733f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *)
          local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
              ((TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73530

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    InitDelayedDataReference
              ((TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
               local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73670

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    InitDelayedDataReference
              ((TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                 local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af737b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
              ((TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *
                  )0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af738f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *)local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
              ((TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73a30

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *)
          local_28,pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
              ((TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73b70

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<Metasound::FAudioBuffer> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *)local_28,
               pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::FAudioBuffer>::InitDelayedDataReference
              ((TVariable<Metasound::FAudioBuffer> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<Metasound::FAudioBuffer> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<Metasound::FAudioBuffer> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73cb0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<FMetasoundParameterStorageWrapper> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *)local_28,
          pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<FMetasoundParameterStorageWrapper>::InitDelayedDataReference
              ((TVariable<FMetasoundParameterStorageWrapper> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<FMetasoundParameterStorageWrapper> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73df0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<Metasound::FSendAddress> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<Metasound::FSendAddress> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *)local_28,
               pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::FSendAddress>::InitDelayedDataReference
              ((TVariable<Metasound::FSendAddress> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<Metasound::FSendAddress> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<Metasound::FSendAddress> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::FSendAddress>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>
                                  *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af73f30

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<FString> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<FString> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<FString>_> *)local_28,pFVar3->AccessType,
               (pFVar3->DataRefPtr).Ptr);
    TVariable<FString>::InitDelayedDataReference
              ((TVariable<FString> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<FString> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<FString> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &___7__TDataWriteReference_U__TVariable_VFString___Metasound___Metasound__6B_;
      pTVar5 = TVariableDeferredAccessorOperator<FString>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<FString>_> *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af74070

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<Metasound::FTime> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<Metasound::FTime> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *)local_28,
               pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::FTime>::InitDelayedDataReference
              ((TVariable<Metasound::FTime> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<Metasound::FTime> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<Metasound::FTime> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::FTime>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *)
                                 &local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af741b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<Metasound::FTrigger> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<Metasound::FTrigger> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *)local_28,
               pFVar3->AccessType,(pFVar3->DataRefPtr).Ptr);
    TVariable<Metasound::FTrigger>::InitDelayedDataReference
              ((TVariable<Metasound::FTrigger> *)local_28._8_8_,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<Metasound::FTrigger> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<Metasound::FTrigger> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &
                 ___7__TDataWriteReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_
      ;
      pTVar5 = TVariableDeferredAccessorOperator<Metasound::FTrigger>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *)
                                 &local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af742f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  TVariableDeferredAccessorOperator<bool> *pTVar5;
  INode *pIVar6;
  FName local_res10;
  undefined **local_48;
  TVariable<bool> *local_40;
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar3 = FInputVertexInterfaceData::FindDataReference(this,&local_res10);
  if (pFVar3 == (FAnyDataReference *)0x0) {
    if (5 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<bool>_> *)local_28,pFVar3->AccessType,
               (pFVar3->DataRefPtr).Ptr);
    TVariable<bool>::InitDelayedDataReference
              ((TVariable<bool> *)local_28._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum)
    ;
    pTVar5 = ::operator_new(0x48);
    if (pTVar5 == (TVariableDeferredAccessorOperator<bool> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      local_40 = (TVariable<bool> *)local_28._8_8_;
      local_38 = local_18;
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_48 = &___7__TDataWriteReference_U__TVariable__N_Metasound___Metasound__6B_;
      pTVar5 = TVariableDeferredAccessorOperator<bool>
                         (pTVar5,(TDataWriteReference<Metasound::TVariable<bool>_> *)&local_48);
      param_1->Node = (INode *)pTVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14af80e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<int>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<int> local_88;
  TOutputDataVertex<Metasound::TVariable<int>_> local_68;
  TInputDataVertex<Metasound::TVariable<int>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<int>_>::
           TOutputDataVertex<Metasound::TVariable<int>_><>
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
           TInputDataVertex<Metasound::TVariable<int>_>::
           TInputDataVertex<Metasound::TVariable<int>_><>
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

// DeclareVertexInterface @ 14af810d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<float>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<float> local_88;
  TOutputDataVertex<Metasound::TVariable<float>_> local_68;
  TInputDataVertex<Metasound::TVariable<float>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<float>_>::
           TOutputDataVertex<Metasound::TVariable<float>_><>
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
           TInputDataVertex<Metasound::TVariable<float>_>::
           TInputDataVertex<Metasound::TVariable<float>_><>
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

// DeclareVertexInterface @ 14af81320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> local_88;
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af81570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_88;
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af817c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> local_88
  ;
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_68;
  TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           ::
           TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af81a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> local_88;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af81c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> local_88;
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af81eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> local_88;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af82100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> local_88;
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af82350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_88;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
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

// DeclareVertexInterface @ 14af825a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<FMetasoundParameterStorageWrapper> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<FMetasoundParameterStorageWrapper> local_88;
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_68;
  TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<FMetasoundParameterStorageWrapper>::
           TOutputDataVertex<FMetasoundParameterStorageWrapper><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
           TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
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
           TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
           TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
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

// DeclareVertexInterface @ 14af827f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FSendAddress> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::FSendAddress> local_88;
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::FSendAddress>::TOutputDataVertex<Metasound::FSendAddress><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
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

// DeclareVertexInterface @ 14af82a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<FString> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<FString>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<FString> local_88;
  TOutputDataVertex<Metasound::TVariable<FString>_> local_68;
  TInputDataVertex<Metasound::TVariable<FString>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<FString>::TOutputDataVertex<FString><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<FString>_>::
           TOutputDataVertex<Metasound::TVariable<FString>_><>
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
           TInputDataVertex<Metasound::TVariable<FString>_>::
           TInputDataVertex<Metasound::TVariable<FString>_><>
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

// DeclareVertexInterface @ 14af82c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTime> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::FTime> local_88;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FTime>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
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

// DeclareVertexInterface @ 14af82ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::FTrigger> local_88;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
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

// DeclareVertexInterface @ 14af83130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<bool> *pTVar3;
  TOutputDataVertex<Metasound::TVariable<bool>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<bool> local_88;
  TOutputDataVertex<Metasound::TVariable<bool>_> local_68;
  TInputDataVertex<Metasound::TVariable<bool>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<bool>::TOutputDataVertex<bool><>
                     (&local_88,&VariableNames::OutputDataName,&VariableNames::OutputDataMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TVariable<bool>_>::
           TOutputDataVertex<Metasound::TVariable<bool>_><>
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
           TInputDataVertex<Metasound::TVariable<bool>_>::
           TInputDataVertex<Metasound::TVariable<bool>_><>
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

// GetNodeInfo @ 14afa2be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<int>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<int>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa2d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<float>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<float>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa2f00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa3090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa3220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa33b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa3540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa36d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>()
          ;
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa3860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa39f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa3b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa3d10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa3ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<FString>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<FString>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<FString>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FTime>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa41c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FTrigger>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<bool>();
          VariableNames::GetVariableDeferredAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<bool>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<bool>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

