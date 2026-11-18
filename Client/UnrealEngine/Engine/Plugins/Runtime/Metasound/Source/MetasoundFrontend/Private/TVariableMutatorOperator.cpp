// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 228

// BindInputs @ 14ad71330

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::BindInputs(TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *local_58;
  code *local_50;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14ad714a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::BindOutputs(TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14ad71530

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::GetExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14ad71540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad71570

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::GetResetFunction(TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14ad71840

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::BindInputs
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = (undefined1 **)&local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = (undefined1 **)&local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14ad719b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::BindOutputs
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14ad71a80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14ad71a90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetPostExecuteFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad71ac0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetResetFunction(void *this)

{
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14ad756a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::BindInputs
          (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *local_58;
  code *local_50;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::Frontend::FAnalyzerAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14ad75810

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::BindOutputs
          (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_res18 [2]
  ;
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14ad758a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetExecuteFunction
          (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14ad758b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetPostExecuteFunction
          (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ad758e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetResetFunction
          (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad96120

TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
* __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                 *param_1,
          TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad96240

TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,
          TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
          *param_1,TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  *(undefined ***)this =
       &
       ___7__TVariableMutatorOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
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
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad96360

TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>
          (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *param_1
          ,TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFAnalyzerAddress_Frontend_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
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
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad9d9c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::
~TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad9da00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
~TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad9da40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::
~TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>
          (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14adb0da0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *this;
  TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this != (TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14adb0f70

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *this;
  TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
              (pFVar1,(TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
             0x0;
    if (this != (void *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
                                *)local_78,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14adb1140

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *this;
  TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *)
          local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<Metasound::Frontend::FAnalyzerAddress>
              (pFVar1,(TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>
                                *)local_78,
                          (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// DeclareVertexInterface @ 14adb4c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_a8;
  TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  local_88;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           ::
           TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14adb4ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
                     (local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
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

// DeclareVertexInterface @ 14adb5170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_a8;
  TInputDataVertex<Metasound::Frontend::FAnalyzerAddress> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::Frontend::FAnalyzerAddress>::
           TInputDataVertex<Metasound::Frontend::FAnalyzerAddress><>
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

// GetNodeInfo @ 14adc1af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14adc1c80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14adc1e10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14add11b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar2;
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
  pTVar2 = *(TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> **)
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
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14add1280

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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

// StaticPostExecute @ 14add1350

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::StaticPostExecute
          (IOperator *param_1)

{
  IOperator IVar1;
  longlong lVar2;
  longlong lVar3;
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
  lVar2 = *(longlong *)((longlong)IVar1 + 0x48);
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
  lVar3 = *(longlong *)((longlong)IVar1 + 0x20);
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
  *(undefined1 *)(lVar3 + 0x50) = *(undefined1 *)(lVar2 + 0x50);
  return;
}

// StaticReset @ 14add1470

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pTVar4 = *(TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar4 != pTVar6) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar4->ArrayNum = pTVar6->ArrayNum;
      pTVar4->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14add1510

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined4 *puVar4;
  TEnum<Metasound::ESharedStateBehaviorType,1> TVar5;
  undefined4 extraout_var;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined4 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    TVar5 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,TVar5.EnumValue);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14add1570

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::Frontend::FAnalyzerAddress>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  longlong lVar4;
  undefined8 uVar5;
  FAnalyzerAddress *pFVar6;
  FAnalyzerAddress local_68;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    lVar4 = *(longlong *)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar6 = TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::Frontend::FAnalyzerAddress>_>
             ::CreateExplicitArgs(&local_68,pFVar2,(FLiteral *)IVar1);
    *(ulong64 *)(lVar4 + 8) = pFVar6->InstanceID;
    uVar5 = *(undefined8 *)&(pFVar6->NodeID).C;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)&pFVar6->NodeID;
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    *(FName *)(lVar4 + 0x20) = pFVar6->OutputName;
    *(FName *)(lVar4 + 0x28) = pFVar6->DataType;
    *(FName *)(lVar4 + 0x30) = pFVar6->AnalyzerName;
    uVar5 = *(undefined8 *)&(pFVar6->AnalyzerInstanceID).C;
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)&pFVar6->AnalyzerInstanceID;
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
    *(FName *)(lVar4 + 0x48) = pFVar6->AnalyzerMemberName;
    *(bool *)(lVar4 + 0x50) = pFVar6->UseDataTransmissionCenter;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// BindInputs @ 14ae963a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
BindInputs(TVariableMutatorOperator<Metasound::FAudioBuffer> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FAudioBuffer> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FAudioBuffer> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FAudioBuffer> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14ae96510

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
BindOutputs(TVariableMutatorOperator<Metasound::FAudioBuffer> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14ae96730

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FAudioBuffer> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14ae96740

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FAudioBuffer> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae96770

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
GetResetFunction(TVariableMutatorOperator<Metasound::FAudioBuffer> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14ae96dd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14ae96f40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14ae96ff0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetExecuteFunction
          (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14ae97030

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14ae97060

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetResetFunction
          (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aea3510

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::BindInputs
          (TVariableMutatorOperator<int> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<int>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<int> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<int>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<int> *local_58;
  code *local_50;
  TDataReadReference<int> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<int>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aea3680

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::BindOutputs
          (TVariableMutatorOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<int>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<int>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<int>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<int>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aea3750

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aea38d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aea3980

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetExecuteFunction
          (TVariableMutatorOperator<int> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aea3b50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetPostExecuteFunction
          (TVariableMutatorOperator<int> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea3b80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetResetFunction
          (TVariableMutatorOperator<int> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// GetExecuteFunction @ 14aea3bb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetExecuteFunction
          (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aea3d30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea3d70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetResetFunction
          (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aea4970

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::BindInputs
          (TVariableMutatorOperator<Metasound::FTrigger> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FTrigger> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FTrigger> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FTrigger> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTrigger>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aea4ae0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::BindOutputs
          (TVariableMutatorOperator<Metasound::FTrigger> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTrigger>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aea4b70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FTrigger> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aea4b80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FTrigger> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea4bb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
GetResetFunction(TVariableMutatorOperator<Metasound::FTrigger> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aeaaab0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
BindInputs(TVariableMutatorOperator<Metasound::FSendAddress> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FSendAddress> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FSendAddress> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FSendAddress> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FSendAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aeaae30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
BindOutputs(TVariableMutatorOperator<Metasound::FSendAddress> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FSendAddress>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aeab070

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FSendAddress> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aeab080

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FSendAddress> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeab0b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
GetResetFunction(TVariableMutatorOperator<Metasound::FSendAddress> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aeb0eb0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aeb1030

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aeb10e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetExecuteFunction(TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aeb1230

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb1260

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetResetFunction(TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                 *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aeb8e60

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *local_88
  ;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aeb9000

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *local_30
  ;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aeb90f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetExecuteFunction
          (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aeb93d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aeb9420

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetResetFunction
          (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aebdf80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::BindInputs
          (TVariableMutatorOperator<bool> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<bool>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<bool> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<bool> *local_58;
  code *local_50;
  TDataReadReference<bool> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<bool>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aebe0f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::BindOutputs
          (TVariableMutatorOperator<bool> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<bool>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<bool>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<bool>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aebe180

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetExecuteFunction
          (TVariableMutatorOperator<bool> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aebe190

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetPostExecuteFunction
          (TVariableMutatorOperator<bool> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aebe290

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetResetFunction
          (TVariableMutatorOperator<bool> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aec0410

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::BindInputs
          (TVariableMutatorOperator<Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<Metasound::FTime> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<Metasound::FTime> *local_58;
  code *local_50;
  TDataReadReference<Metasound::FTime> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTime>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aec0600

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::BindOutputs
          (TVariableMutatorOperator<Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FTime>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aec0690

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
GetExecuteFunction(TVariableMutatorOperator<Metasound::FTime> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aec06a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
GetPostExecuteFunction(TVariableMutatorOperator<Metasound::FTime> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec06d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
GetResetFunction(TVariableMutatorOperator<Metasound::FTime> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aec24b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::BindInputs
          (TVariableMutatorOperator<FString> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<FString>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<FString> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<FString> *local_58;
  code *local_50;
  TDataReadReference<FString> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FString>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference_VFString___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aec2660

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::BindOutputs
          (TVariableMutatorOperator<FString> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<FString>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<FString>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FString>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aec26f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetExecuteFunction
          (TVariableMutatorOperator<FString> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aec2700

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetPostExecuteFunction
          (TVariableMutatorOperator<FString> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aec2730

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetResetFunction
          (TVariableMutatorOperator<FString> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aecba70

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aecbbe0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aecbda0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetExecuteFunction
          (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aecbdb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aecbe80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetResetFunction
          (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aece4c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::BindInputs
          (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<FMetasoundParameterStorageWrapper> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<FMetasoundParameterStorageWrapper> *local_58;
  code *local_50;
  TDataReadReference<FMetasoundParameterStorageWrapper> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FMetasoundParameterStorageWrapper>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aece630

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::BindOutputs
          (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aece6c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetExecuteFunction
          (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aece6d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetPostExecuteFunction
          (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aece700

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetResetFunction
          (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aed9200

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *local_58;
  code *local_50;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aed9370

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aed95b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetExecuteFunction(TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                   *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aed9620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aed9660

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetResetFunction(TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                 *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aee18a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::BindInputs
          (TVariableMutatorOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<float>_> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<float> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<float>_> *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<float> *local_58;
  code *local_50;
  TDataReadReference<float> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<float>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
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
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aee1a10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::BindOutputs
          (TVariableMutatorOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<float>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<float>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<float>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<float>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aee1aa0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetExecuteFunction
          (TVariableMutatorOperator<float> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aee1ab0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetPostExecuteFunction
          (TVariableMutatorOperator<float> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aee1ae0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetResetFunction
          (TVariableMutatorOperator<float> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// BindInputs @ 14aee6c30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<0> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8 [2];
  FName local_res18;
  IDataReference *local_res20;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *local_98;
  FName *local_90;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *local_88;
  code *local_80;
  IDataReference **local_78;
  code *local_70;
  FName **local_68;
  FName *local_60;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *local_58;
  code *local_50;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> **local_48;
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = local_res8;
  local_68 = &local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = &local_res18;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar2 + 0x50) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
    pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar2 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BindOutputs @ 14aee6ec0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14aee6f50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aee6f60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
GetPostExecuteFunction
          (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticPostExecute;
  }
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aee7020

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetResetFunction
          (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->Variable).field_0x8;
  if ((*(char *)(lVar1 + 0x38) != '\0') && (*(char *)(lVar1 + 0x60) != '\0')) {
    return StaticReset;
  }
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// TVariableMutatorOperator<int> @ 14af35050

TVariableMutatorOperator<int> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::
TVariableMutatorOperator<int>
          (TVariableMutatorOperator<int> *this,
          TDataWriteReference<Metasound::TVariable<int>_> *param_1,TDataReadReference<int> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)&___7__TVariableMutatorOperator_H_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable_H_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
  *(undefined ***)&this->Data = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_H_Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<float> @ 14af35170

TVariableMutatorOperator<float> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::
TVariableMutatorOperator<float>
          (TVariableMutatorOperator<float> *this,
          TDataWriteReference<Metasound::TVariable<float>_> *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)&___7__TVariableMutatorOperator_M_MetasoundVariableNodesPrivate_Metasound__6B_;
  *(undefined ***)&this->Variable = &___7__TDataReference_U__TVariable_M_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Variable).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Variable).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
  *(undefined ***)&this->Data = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_M_Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af35290

TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          *param_1,TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af353b0

TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          *param_1,TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af354d0

TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                 *param_1,
          TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af355f0

TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this,TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                 *param_1,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af35710

TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          *param_1,TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af35830

TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          *param_1,TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                   *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af35950

TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          *param_1,TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FAudioBuffer> @ 14af35a70

TVariableMutatorOperator<Metasound::FAudioBuffer> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
TVariableMutatorOperator<Metasound::FAudioBuffer>
          (TVariableMutatorOperator<Metasound::FAudioBuffer> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFAudioBuffer_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<FMetasoundParameterStorageWrapper> @ 14af35b90

TVariableMutatorOperator<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>
          (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this,
          TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *param_1,
          TDataReadReference<FMetasoundParameterStorageWrapper> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFMetasoundParameterStorageWrapper___MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data =
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data =
       &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
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
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FSendAddress> @ 14af35cb0

TVariableMutatorOperator<Metasound::FSendAddress> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
TVariableMutatorOperator<Metasound::FSendAddress>
          (TVariableMutatorOperator<Metasound::FSendAddress> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFSendAddress_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<FString> @ 14af35dd0

TVariableMutatorOperator<FString> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::
TVariableMutatorOperator<FString>
          (TVariableMutatorOperator<FString> *this,
          TDataWriteReference<Metasound::TVariable<FString>_> *param_1,
          TDataReadReference<FString> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableMutatorOperator_VFString___MetasoundVariableNodesPrivate_Metasound__6B_;
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
  *(undefined ***)&this->Data = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_VFString___Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference_VFString___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FTime> @ 14af35ef0

TVariableMutatorOperator<Metasound::FTime> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
TVariableMutatorOperator<Metasound::FTime>
          (TVariableMutatorOperator<Metasound::FTime> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *param_1,
          TDataReadReference<Metasound::FTime> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFTime_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<Metasound::FTrigger> @ 14af36010

TVariableMutatorOperator<Metasound::FTrigger> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
TVariableMutatorOperator<Metasound::FTrigger>
          (TVariableMutatorOperator<Metasound::FTrigger> *this,
          TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableMutatorOperator_VFTrigger_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
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
  *(undefined ***)&this->Data = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TVariableMutatorOperator<bool> @ 14af36130

TVariableMutatorOperator<bool> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::
TVariableMutatorOperator<bool>
          (TVariableMutatorOperator<bool> *this,
          TDataWriteReference<Metasound::TVariable<bool>_> *param_1,
          TDataReadReference<bool> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  undefined8 uVar3;
  
  this->_padding_ =
       (longlong)&___7__TVariableMutatorOperator__N_MetasoundVariableNodesPrivate_Metasound__6B_;
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
  *(undefined ***)&this->Data = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Data).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Data).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Data = &___7__TDataReadReference__N_Metasound__6B_;
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
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(TReferenceControllerBase<0> **)(lVar1 + 0x50) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<0> *)0x0) {
    pTVar2->SharedReferenceCount = pTVar2->SharedReferenceCount + 1;
  }
  *(undefined ***)(lVar1 + 0x40) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TVariableMutatorOperator<int> @ 14af41c10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::
~TVariableMutatorOperator<int>(TVariableMutatorOperator<int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<float> @ 14af41c50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::
~TVariableMutatorOperator<float>(TVariableMutatorOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af41c90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af41cd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af41d10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af41d50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af41d90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af41dd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af41e10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FAudioBuffer> @ 14af41e50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
~TVariableMutatorOperator<Metasound::FAudioBuffer>
          (TVariableMutatorOperator<Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<FMetasoundParameterStorageWrapper> @ 14af41e90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::
~TVariableMutatorOperator<FMetasoundParameterStorageWrapper>
          (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FSendAddress> @ 14af41ed0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
~TVariableMutatorOperator<Metasound::FSendAddress>
          (TVariableMutatorOperator<Metasound::FSendAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<FString> @ 14af41f10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::
~TVariableMutatorOperator<FString>(TVariableMutatorOperator<FString> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FTime> @ 14af41f50

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
~TVariableMutatorOperator<Metasound::FTime>(TVariableMutatorOperator<Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<Metasound::FTrigger> @ 14af41f90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
~TVariableMutatorOperator<Metasound::FTrigger>(TVariableMutatorOperator<Metasound::FTrigger> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableMutatorOperator<bool> @ 14af41fd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::
~TVariableMutatorOperator<bool>(TVariableMutatorOperator<bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Data).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14af74430

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<int> *this;
  TVariableMutatorOperator<int> *pTVar7;
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<int>_> *)local_38,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
              (pFVar1,(TDataReadReference<int> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<int> *)0x0;
    if (this != (TVariableMutatorOperator<int> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_H_Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
      pTVar7 = TVariableMutatorOperator<int>
                         (this,(TDataWriteReference<Metasound::TVariable<int>_> *)local_78,
                          (TDataReadReference<int> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af74600

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<float> *this;
  TVariableMutatorOperator<float> *pTVar7;
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<float>_> *)local_38,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
              (pFVar1,(TDataReadReference<float> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<float> *)0x0;
    if (this != (TVariableMutatorOperator<float> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_M_Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
      pTVar7 = TVariableMutatorOperator<float>
                         (this,(TDataWriteReference<Metasound::TVariable<float>_> *)local_78,
                          (TDataReadReference<float> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af747d0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *)
          local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af749a0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *)
          local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_98
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af74b70

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *this;
  TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this != (TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af74d40

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this != (TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af74f10

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af750e0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *)local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                      local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af752b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this;
  TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *)
          local_38,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
              (pFVar1,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_58,
               &local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &
                    ___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                                *)local_78,
                          (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_98)
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af75480

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FAudioBuffer> *this;
  TVariableMutatorOperator<Metasound::FAudioBuffer> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
              (pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FAudioBuffer> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FAudioBuffer> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FAudioBuffer>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>
                                *)local_78,(TDataReadReference<Metasound::FAudioBuffer> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af75650

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *this;
  TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *)local_38,
          pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::
    GetOrCreateDefaultDataReadReference<FMetasoundParameterStorageWrapper>
              (pFVar1,(TDataReadReference<FMetasoundParameterStorageWrapper> *)local_58,&local_res20
               ,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *)0x0;
    if (this != (TVariableMutatorOperator<FMetasoundParameterStorageWrapper> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<FMetasoundParameterStorageWrapper>
                         (this,(TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>
                                *)local_78,
                          (TDataReadReference<FMetasoundParameterStorageWrapper> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af75820

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FSendAddress> *this;
  TVariableMutatorOperator<Metasound::FSendAddress> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
              (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FSendAddress> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FSendAddress> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FSendAddress>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af759f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<FString> *this;
  TVariableMutatorOperator<FString> *pTVar7;
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<FString>_> *)local_38,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
              (pFVar1,(TDataReadReference<FString> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<FString> *)0x0;
    if (this != (TVariableMutatorOperator<FString> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFString___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &___7__TDataWriteReference_U__TVariable_VFString___Metasound___Metasound__6B_;
      pTVar7 = TVariableMutatorOperator<FString>
                         (this,(TDataWriteReference<Metasound::TVariable<FString>_> *)local_78,
                          (TDataReadReference<FString> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af75bc0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FTime> *this;
  TVariableMutatorOperator<Metasound::FTime> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
              (pFVar1,(TDataReadReference<Metasound::FTime> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FTime> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FTime> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FTime>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *)
                               local_78,(TDataReadReference<Metasound::FTime> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af75d90

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<Metasound::FTrigger> *this;
  TVariableMutatorOperator<Metasound::FTrigger> *pTVar7;
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *)local_38,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
              (pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<Metasound::FTrigger> *)0x0;
    if (this != (TVariableMutatorOperator<Metasound::FTrigger> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataWriteReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_
      ;
      pTVar7 = TVariableMutatorOperator<Metasound::FTrigger>
                         (this,(TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *)
                               local_78,(TDataReadReference<Metasound::FTrigger> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// CreateOperator @ 14af75f60

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TVariableMutatorOperator<bool> *this;
  TVariableMutatorOperator<bool> *pTVar7;
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<bool>_> *)local_38,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&VariableNames::InputDataName);
    FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
              (pFVar1,(TDataReadReference<bool> *)local_58,&local_res20,pFVar2);
    this = ::operator_new(0x48);
    pTVar7 = (TVariableMutatorOperator<bool> *)0x0;
    if (this != (TVariableMutatorOperator<bool> *)0x0) {
      local_98[1] = (undefined **)local_58._8_8_;
      local_88 = (TReferenceControllerBase<0> *)local_58._16_8_;
      if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
      }
      local_68 = (TReferenceControllerBase<0> *)local_38._16_8_;
      local_98[0] = &___7__TDataReadReference__N_Metasound__6B_;
      local_78[1] = (undefined **)local_38._8_8_;
      if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
      }
      local_78[0] = &___7__TDataWriteReference_U__TVariable__N_Metasound___Metasound__6B_;
      pTVar7 = TVariableMutatorOperator<bool>
                         (this,(TDataWriteReference<Metasound::TVariable<bool>_> *)local_78,
                          (TDataReadReference<bool> *)local_98);
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
              (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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

// DeclareVertexInterface @ 14af83380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<int>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<int>_> local_a8;
  TInputDataVertex<int> local_88;
  TInputDataVertex<Metasound::TVariable<int>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<int>_>::
           TOutputDataVertex<Metasound::TVariable<int>_><>
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
           TInputDataVertex<Metasound::TVariable<int>_>::
           TInputDataVertex<Metasound::TVariable<int>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<int>::TInputDataVertex<int><>
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

// DeclareVertexInterface @ 14af83600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<float>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<float>_> local_a8;
  TInputDataVertex<float> local_88;
  TInputDataVertex<Metasound::TVariable<float>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<float>_>::
           TOutputDataVertex<Metasound::TVariable<float>_><>
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
           TInputDataVertex<Metasound::TVariable<float>_>::
           TInputDataVertex<Metasound::TVariable<float>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<float>::TInputDataVertex<float><>
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

// DeclareVertexInterface @ 14af83880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_a8;
  TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14af83b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_a8;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14af83d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_a8;
  TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           ::
           TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14af84000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_a8;
  TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14af84280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_a8;
  TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14af84500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_a8;
  TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14af84780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_a8;
  TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> local_88;
  TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
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

// DeclareVertexInterface @ 14af84a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> local_a8;
  TInputDataVertex<Metasound::FAudioBuffer> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
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

// DeclareVertexInterface @ 14af84c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_a8;
  TInputDataVertex<FMetasoundParameterStorageWrapper> local_88;
  TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
           TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
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
           TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
           TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<FMetasoundParameterStorageWrapper>::
           TInputDataVertex<FMetasoundParameterStorageWrapper><>
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

// DeclareVertexInterface @ 14af84f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> local_a8;
  TInputDataVertex<Metasound::FSendAddress> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
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

// DeclareVertexInterface @ 14af85180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<FString>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<FString>_> local_a8;
  TInputDataVertex<FString> local_88;
  TInputDataVertex<Metasound::TVariable<FString>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<FString>_>::
           TOutputDataVertex<Metasound::TVariable<FString>_><>
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
           TInputDataVertex<Metasound::TVariable<FString>_>::
           TInputDataVertex<Metasound::TVariable<FString>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<FString>::TInputDataVertex<FString><>
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

// DeclareVertexInterface @ 14af85400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> local_a8;
  TInputDataVertex<Metasound::FTime> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FTime>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><>
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

// DeclareVertexInterface @ 14af85680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> local_a8;
  TInputDataVertex<Metasound::FTrigger> local_88;
  TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
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

// DeclareVertexInterface @ 14af85900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<bool>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_168 [32];
  FInputVertexInterface local_138;
  FOutputVertexInterface local_118;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::TVariable<bool>_> local_a8;
  TInputDataVertex<bool> local_88;
  TInputDataVertex<Metasound::TVariable<bool>_> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<bool>_>::
           TOutputDataVertex<Metasound::TVariable<bool>_><>
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
           TInputDataVertex<Metasound::TVariable<bool>_>::
           TInputDataVertex<Metasound::TVariable<bool>_><>
                     (&local_50,&VariableNames::InputVariableName,
                      &VariableNames::InputVariableMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<bool>::TInputDataVertex<bool><>
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

// GetNodeInfo @ 14afa44e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<int>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<int>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4670

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<float>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<float>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4800

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4b20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4e40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa4fd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>()
          ;
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa5160

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa52f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa5480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa5610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa57a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<FString>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<FString>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa5930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FTime>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa5ac0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FTrigger>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa5c50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<bool>();
          VariableNames::GetVariableMutatorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<bool>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// StaticPostExecute @ 14afbe510

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::StaticPostExecute
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

// StaticPostExecute @ 14afbe5e0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::StaticPostExecute
          (IOperator *param_1)

{
  undefined4 uVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  IVar2 = param_1[2];
  if ((*(char *)((longlong)IVar2 + 0x38) == '\0') ||
     (bVar4 = false, *(char *)((longlong)IVar2 + 0x60) == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = *(char *)((longlong)IVar2 + 0x60) == '\0';
  }
  if (bVar4) {
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

// StaticPostExecute @ 14afbe6b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::StaticPostExecute
          (IOperator *param_1)

{
  IOperator IVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
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
  pTVar2 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48);
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
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14afbe780

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::StaticPostExecute
          (IOperator *param_1)

{
  IOperator IVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
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
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14afbe850

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar2;
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
  pTVar2 = *(TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> **)
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
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14afbe920

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar2;
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
  pTVar2 = *(TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48)
  ;
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
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14afbe9f0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::StaticPostExecute
          (IOperator *param_1)

{
  IOperator IVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
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
  pTVar2 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48);
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
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14afbeac0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::StaticPostExecute
          (IOperator *param_1)

{
  IOperator IVar1;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar2;
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
  pTVar2 = *(TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48);
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
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20),
             pTVar2);
  return;
}

// StaticPostExecute @ 14afbeb90

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::StaticPostExecute
          (IOperator *param_1)

{
  IOperator IVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
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
  pTVar2 = *(TArray<bool,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48);
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
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<bool,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20),pTVar2);
  return;
}

// StaticPostExecute @ 14afbec60

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  FAudioBuffer *pFVar2;
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
  pFVar2 = *(FAudioBuffer **)((longlong)IVar1 + 0x48);
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
  FAudioBuffer::operator=(*(FAudioBuffer **)((longlong)IVar1 + 0x20),pFVar2);
  return;
}

// StaticPostExecute @ 14afbed30

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::StaticPostExecute(IOperator *param_1)

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

// StaticPostExecute @ 14afbee20

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  IVar1 = param_1[2];
  if ((*(char *)((longlong)IVar1 + 0x38) == '\0') || (*(char *)((longlong)IVar1 + 0x60) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequiresDelayedDataCopy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,0x34,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)IVar1 + 0x60) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lVar2 = *(longlong *)((longlong)IVar1 + 0x48);
  if (*(char *)((longlong)IVar1 + 0x38) == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)((longlong)IVar1 + 0x20);
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  return;
}

// StaticPostExecute @ 14afbef00

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::StaticPostExecute
          (IOperator *param_1)

{
  IOperator IVar1;
  FString *pFVar2;
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
  pFVar2 = *(FString **)((longlong)IVar1 + 0x48);
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
  ::FString::operator=(*(FString **)((longlong)IVar1 + 0x20),pFVar2);
  return;
}

// StaticPostExecute @ 14afbefd0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  undefined8 *puVar2;
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
  puVar2 = *(undefined8 **)((longlong)IVar1 + 0x48);
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
  **(undefined8 **)((longlong)IVar1 + 0x20) = *puVar2;
  return;
}

// StaticPostExecute @ 14afbf0a0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::
StaticPostExecute(IOperator *param_1)

{
  IOperator IVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
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
  pTVar2 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x48);
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
  this = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(this,pTVar2);
  *(undefined1 *)&this[1].AllocatorInstance.Data = *(undefined1 *)&pTVar2[1].AllocatorInstance.Data;
  *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 1) =
       *(undefined1 *)((longlong)&pTVar2[1].AllocatorInstance.Data + 1);
  *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 2) =
       *(undefined1 *)((longlong)&pTVar2[1].AllocatorInstance.Data + 2);
  *(undefined4 *)((longlong)&this[1].AllocatorInstance.Data + 4) =
       *(undefined4 *)((longlong)&pTVar2[1].AllocatorInstance.Data + 4);
  this[1].ArrayNum = pTVar2[1].ArrayNum;
  this[1].ArrayMax = pTVar2[1].ArrayMax;
  return;
}

// StaticPostExecute @ 14afbf190

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::StaticPostExecute
          (IOperator *param_1)

{
  undefined1 uVar1;
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
  uVar1 = **(undefined1 **)((longlong)IVar2 + 0x48);
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
  **(undefined1 **)((longlong)IVar2 + 0x20) = uVar1;
  return;
}

// StaticReset @ 14afbf2a0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<int>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  int *piVar4;
  int iVar5;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    piVar4 = *(int **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    iVar5 = TDataLiteralFactory<int,Metasound::DataFactoryPrivate::TDataTypeCreator<int>_>::
            CreateExplicitArgs(pFVar2,(FLiteral *)IVar1);
    *piVar4 = iVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf300

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<float>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  float *pfVar4;
  float fVar5;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pfVar4 = *(float **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    fVar5 = TDataLiteralFactory<float,Metasound::DataFactoryPrivate::TDataTypeCreator<float>_>::
            CreateExplicitArgs(pFVar2,(FLiteral *)IVar1);
    *pfVar4 = fVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf360

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pTVar4 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar4 != pTVar6) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar4->ArrayNum = pTVar6->ArrayNum;
      pTVar4->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf400

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pTVar4 = *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar4 != pTVar6) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar4->ArrayNum = pTVar6->ArrayNum;
      pTVar4->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf4a0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<0> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20);
    pTVar4 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar3 != pTVar6) {
      DestructItems<FMetasoundParameterStorageWrapper,int>
                ((FMetasoundParameterStorageWrapper *)(pTVar3->AllocatorInstance).Data,
                 pTVar3->ArrayNum);
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
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_18.AllocatorInstance.Data,
               local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// StaticReset @ 14afbf560

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pTVar4 = *(TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> **)
              ((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar4 != pTVar6) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar4->ArrayNum = pTVar6->ArrayNum;
      pTVar4->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf600

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<0> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20);
    pTVar4 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar3 != pTVar6) {
      DestructItems<FString,int>((FString *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
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
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// StaticReset @ 14afbf6c0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pTVar4 = *(TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar4 != pTVar6) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar4->ArrayNum = pTVar6->ArrayNum;
      pTVar4->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf760

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pTVar4 = *(TArray<bool,TSizedDefaultAllocator<32>_> **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pTVar6 = TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pTVar4 != pTVar6) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar4->ArrayNum = pTVar6->ArrayNum;
      pTVar4->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf800

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FAudioBuffer>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  FAudioBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  FAudioBuffer *pFVar6;
  FAudioBuffer local_28;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pFVar4 = *(FAudioBuffer **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar6 = TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBuffer>_>
             ::CreateExplicitArgs(&local_28,pFVar2,(FLiteral *)IVar1);
    if (pFVar4 != pFVar6) {
      pFVar5 = (pFVar4->Buffer).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar4->Buffer).AllocatorInstance.Data = (pFVar6->Buffer).AllocatorInstance.Data;
      (pFVar6->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Buffer).ArrayNum = (pFVar6->Buffer).ArrayNum;
      (pFVar4->Buffer).ArrayMax = (pFVar6->Buffer).ArrayMax;
      (pFVar6->Buffer).ArrayNum = 0;
      (pFVar6->Buffer).ArrayMax = 0;
    }
    pFVar4->InitialNum = pFVar6->InitialNum;
    if (local_28.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Buffer.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf8b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<FMetasoundParameterStorageWrapper>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined8 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMetasoundParameterPackStorage *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMetasoundParameterStorageWrapper *pFVar8;
  FMetasoundParameterStorageWrapper local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined8 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar8 = TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::DataFactoryPrivate::TDataTypeCreator<FMetasoundParameterStorageWrapper>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    pTVar5 = (pFVar8->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
    pFVar6 = (pFVar8->ParameterStoragePtr).Object;
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
              (local_18.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf940

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FSendAddress>::
StaticReset(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  longlong lVar4;
  FSendAddress *pFVar5;
  FSendAddress local_28;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    lVar4 = *(longlong *)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar5 = TDataLiteralFactory<Metasound::FSendAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FSendAddress>_>
             ::CreateExplicitArgs(&local_28,pFVar2,(FLiteral *)IVar1);
    *(FName *)(lVar4 + 8) = pFVar5->ChannelName;
    *(FName *)(lVar4 + 0x10) = pFVar5->DataType;
    *(ulong64 *)(lVar4 + 0x18) = pFVar5->InstanceID;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbf9b0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<FString>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FString *pFVar6;
  FString local_18;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    pFVar4 = *(FString **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar6 = TDataLiteralFactory<FString,Metasound::DataFactoryPrivate::TDataTypeCreator<FString>_>
             ::CreateExplicitArgs(&local_18,pFVar2,(FLiteral *)IVar1);
    if (pFVar4 != pFVar6) {
      pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar4->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (pFVar4->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbfa50

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTime>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined8 *puVar4;
  FTime FVar5;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    puVar4 = *(undefined8 **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    FVar5 = TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
            ::CreateExplicitArgs((FOperatorSettings *)&stack0x00000008,(FLiteral *)pFVar2);
    *puVar4 = *(undefined8 *)FVar5.Time;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbfab0

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::FTrigger>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  FTrigger *this;
  FTrigger *pFVar4;
  FTrigger local_28;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    this = *(FTrigger **)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    pFVar4 = TDataLiteralFactory<Metasound::FTrigger,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTrigger>_>
             ::CreateExplicitArgs(&local_28,pFVar2,(FLiteral *)IVar1);
    FTrigger::operator=(this,pFVar4);
    if (local_28.TriggeredFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.TriggeredFrames.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// StaticReset @ 14afbfb20

void __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<bool>::StaticReset
          (IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  FOperatorSettings *pFVar2;
  TReferenceControllerBase<0> *pTVar3;
  longlong lVar4;
  bool bVar5;
  
  IVar1 = param_1[2];
  pFVar2 = param_2->OperatorSettings;
  if (*(char *)((longlong)IVar1 + 0x38) != '\0') {
    pTVar3 = *(TReferenceControllerBase<0> **)((longlong)IVar1 + 0x28);
    lVar4 = *(longlong *)((longlong)IVar1 + 0x20);
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    bVar5 = TDataLiteralFactory<bool,Metasound::DataFactoryPrivate::TDataTypeCreator<bool>_>::
            CreateExplicitArgs(pFVar2,(FLiteral *)IVar1);
    *(bool *)lVar4 = bVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

