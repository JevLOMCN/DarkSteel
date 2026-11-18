// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 114

// BindInputs @ 14ad723a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::BindInputs(TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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

// BindOutputs @ 14ad72460

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::BindOutputs(TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ad72b80

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::BindInputs
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

// BindOutputs @ 14ad72ce0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = (undefined1 **)&local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ad75f00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::BindInputs
          (TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
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

// BindOutputs @ 14ad75fc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::BindOutputs
          (TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::Frontend::FAnalyzerAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad9d870

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::
~TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad9d8a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
~TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad9d8d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::
~TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>
          (TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14adb0470

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
      InitDelayedDataReference
                ((TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
               ::GetDelayedDataReference
                         ((TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                           *)local_48._8_8_,
                          (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14adb0640

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
      InitDelayedDataReference
                ((void *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
               GetDelayedDataReference
                         ((void *)local_48._8_8_,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                           *)local_28);
      pTVar1 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (local_48._8_8_ + 0x40);
      if (pTVar7 != pTVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)pTVar1 =
             &
             ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14adb0810

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *)
          local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::Frontend::FAnalyzerAddress>::InitDelayedDataReference
                ((TVariable<Metasound::Frontend::FAnalyzerAddress> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::Frontend::FAnalyzerAddress>::GetDelayedDataReference
                         ((TVariable<Metasound::Frontend::FAnalyzerAddress> *)local_48._8_8_,
                          (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFAnalyzerAddress_Frontend_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
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

// DeclareVertexInterface @ 14adb3e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_88;
  TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           ::
           TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14adb40e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
  *pTVar3;
  TOutputDataVertex<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
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
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
                     (local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
           TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
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

// DeclareVertexInterface @ 14adb4330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar3;
  TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_88;
  TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress>::
           TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
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

// GetNodeInfo @ 14adc1190

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14adc1320

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14adc14b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::Frontend::FAnalyzerAddress>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::Frontend::FAnalyzerAddress>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// BindInputs @ 14ae925b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

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

// BindOutputs @ 14ae926d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ae98cc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::
BindInputs(TVariableAccessorOperator<Metasound::FAudioBuffer> *this,
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

// BindOutputs @ 14ae98e20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::
BindOutputs(TVariableAccessorOperator<Metasound::FAudioBuffer> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ae99d40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
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

// BindOutputs @ 14ae99e00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aea56d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::BindInputs
          (TVariableAccessorOperator<int> *this,FInputVertexInterfaceData *param_1)

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

// BindOutputs @ 14aea5800

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::BindOutputs
          (TVariableAccessorOperator<int> *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aea5940

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
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

// BindOutputs @ 14aea5a00

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aea7040

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::BindInputs
          (TVariableAccessorOperator<Metasound::FTrigger> *this,FInputVertexInterfaceData *param_1)

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

// BindOutputs @ 14aea7100

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::
BindOutputs(TVariableAccessorOperator<Metasound::FTrigger> *this,FOutputVertexInterfaceData *param_1
           )

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aeadcd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::
BindInputs(TVariableAccessorOperator<Metasound::FSendAddress> *this,
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

// BindOutputs @ 14aeadd90

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::
BindOutputs(TVariableAccessorOperator<Metasound::FSendAddress> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aeb3a30

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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

// BindOutputs @ 14aeb3b10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aebc730

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
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

// BindOutputs @ 14aebc7f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aec0830

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::BindInputs
          (TVariableAccessorOperator<bool> *this,FInputVertexInterfaceData *param_1)

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

// BindOutputs @ 14aec0a40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::BindOutputs
          (TVariableAccessorOperator<bool> *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aec32e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::BindInputs
          (TVariableAccessorOperator<Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

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

// BindOutputs @ 14aec33a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::BindOutputs
          (TVariableAccessorOperator<Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aec60c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::BindInputs
          (TVariableAccessorOperator<FString> *this,FInputVertexInterfaceData *param_1)

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

// BindOutputs @ 14aec61f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::BindOutputs
          (TVariableAccessorOperator<FString> *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aece160

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
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

// BindOutputs @ 14aece220

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aed1d10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::BindInputs
          (TVariableAccessorOperator<FMetasoundParameterStorageWrapper> *this,
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

// BindOutputs @ 14aed1dd0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::BindOutputs
          (TVariableAccessorOperator<FMetasoundParameterStorageWrapper> *this,
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FMetasoundParameterStorageWrapper>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aedbce0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
BindInputs(TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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

// BindOutputs @ 14aedbda0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14aee5130

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::BindInputs
          (TVariableAccessorOperator<float> *this,FInputVertexInterfaceData *param_1)

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

// BindOutputs @ 14aee51f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::BindOutputs
          (TVariableAccessorOperator<float> *this,FOutputVertexInterfaceData *param_1)

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
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_50 = &local_res18;
  local_28 = &local_50;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// ~TVariableAccessorOperator<int> @ 14af41510

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::
~TVariableAccessorOperator<int>(TVariableAccessorOperator<int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<float> @ 14af41540

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::
~TVariableAccessorOperator<float>(TVariableAccessorOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af41570

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af415a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af415d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af41600

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af41630

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af41660

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af41690

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FAudioBuffer> @ 14af416c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::
~TVariableAccessorOperator<Metasound::FAudioBuffer>
          (TVariableAccessorOperator<Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<FMetasoundParameterStorageWrapper> @ 14af416f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::
~TVariableAccessorOperator<FMetasoundParameterStorageWrapper>
          (TVariableAccessorOperator<FMetasoundParameterStorageWrapper> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FSendAddress> @ 14af41720

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::
~TVariableAccessorOperator<Metasound::FSendAddress>
          (TVariableAccessorOperator<Metasound::FSendAddress> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<FString> @ 14af41750

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::
~TVariableAccessorOperator<FString>(TVariableAccessorOperator<FString> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FTime> @ 14af41780

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::
~TVariableAccessorOperator<Metasound::FTime>(TVariableAccessorOperator<Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<Metasound::FTrigger> @ 14af417b0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::
~TVariableAccessorOperator<Metasound::FTrigger>
          (TVariableAccessorOperator<Metasound::FTrigger> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableAccessorOperator<bool> @ 14af417e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::
~TVariableAccessorOperator<bool>(TVariableAccessorOperator<bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14af71330

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<int> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<int>_> *)local_48,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<int>::InitDelayedDataReference
                ((TVariable<int> *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum
                );
      pTVar7 = TVariable<int>::GetDelayedDataReference
                         ((TVariable<int> *)local_48._8_8_,(TDataReadReference<int> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<int> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_H_Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_H_Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_H_MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&___7__TDataReference_U__TVariable_H_Metasound___Metasound__6B_;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
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

// CreateOperator @ 14af71500

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<float> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<float>_> *)local_48,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<float>::InitDelayedDataReference
                ((TVariable<float> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<float>::GetDelayedDataReference
                         ((TVariable<float> *)local_48._8_8_,(TDataReadReference<float> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<float> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_M_Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_M_Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_M_MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&___7__TDataReference_U__TVariable_M_Metasound___Metasound__6B_;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
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

// CreateOperator @ 14af716d0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *)
          local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
                ((TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
                         ((TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                          (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14af718a0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *)
          local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
                ((TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
                         ((TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                          (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28
                         );
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14af71a70

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar7
  ;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
      InitDelayedDataReference
                ((TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *)local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
               GetDelayedDataReference
                         ((TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                           *)local_48._8_8_,
                          (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14af71c40

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
      InitDelayedDataReference
                ((TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                 local_48._8_8_,*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               GetDelayedDataReference
                         ((TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *
                          )local_48._8_8_,
                          (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                     *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14af71e10

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
                ((TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
                         ((TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                          (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                          local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14af71fe0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *)local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
                ((TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               GetDelayedDataReference
                         ((TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                          local_48._8_8_,
                          (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                    lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
        ;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14af721b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *)
          local_48,pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
                ((TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
                         ((TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_48._8_8_,
                          (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28)
      ;
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &
             ___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
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
                       ___7__TVariableAccessorOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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

// CreateOperator @ 14af72380

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FAudioBuffer>::InitDelayedDataReference
                ((TVariable<Metasound::FAudioBuffer> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FAudioBuffer>::GetDelayedDataReference
                         ((TVariable<Metasound::FAudioBuffer> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FAudioBuffer> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FAudioBuffer> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFAudioBuffer_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14af72550

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<FMetasoundParameterStorageWrapper> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
    ::Get((TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *)local_48,
          pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<FMetasoundParameterStorageWrapper>::InitDelayedDataReference
                ((TVariable<FMetasoundParameterStorageWrapper> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<FMetasoundParameterStorageWrapper>::GetDelayedDataReference
                         ((TVariable<FMetasoundParameterStorageWrapper> *)local_48._8_8_,
                          (TDataReadReference<FMetasoundParameterStorageWrapper> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<FMetasoundParameterStorageWrapper> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 =
             &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 =
             &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFMetasoundParameterStorageWrapper___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
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

// CreateOperator @ 14af72720

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FSendAddress>::InitDelayedDataReference
                ((TVariable<Metasound::FSendAddress> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FSendAddress>::GetDelayedDataReference
                         ((TVariable<Metasound::FSendAddress> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FSendAddress> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FSendAddress> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFSendAddress_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14af728f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<FString> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<FString>_> *)local_48,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<FString>::InitDelayedDataReference
                ((TVariable<FString> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<FString>::GetDelayedDataReference
                         ((TVariable<FString> *)local_48._8_8_,
                          (TDataReadReference<FString> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<FString> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFString___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_VFString___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFString___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&___7__TDataReference_U__TVariable_VFString___Metasound___Metasound__6B_;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFString___Metasound___Metasound__6B_
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

// CreateOperator @ 14af72ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FTime> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FTime>::InitDelayedDataReference
                ((TVariable<Metasound::FTime> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FTime>::GetDelayedDataReference
                         ((TVariable<Metasound::FTime> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FTime> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FTime> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFTime_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14af72c90

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<Metasound::FTrigger> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *)local_48,
               pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<Metasound::FTrigger>::InitDelayedDataReference
                ((TVariable<Metasound::FTrigger> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<Metasound::FTrigger>::GetDelayedDataReference
                         ((TVariable<Metasound::FTrigger> *)local_48._8_8_,
                          (TDataReadReference<Metasound::FTrigger> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<Metasound::FTrigger> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
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
                       ___7__TVariableAccessorOperator_VFTrigger_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&
                         ___7__TDataReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_
      ;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&
                         ___7__TDataWriteReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_
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

// CreateOperator @ 14af72e60

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong lVar1;
  FInputVertexInterfaceData *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TDataReadReference<bool> *pTVar7;
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
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
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
    FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>::Get
              ((TDataWriteReference<Metasound::TVariable<bool>_> *)local_48,pFVar5->AccessType,
               (pFVar5->DataRefPtr).Ptr);
    if (*(char *)(local_48._8_8_ + 0x60) == '\0') {
      TVariable<bool>::InitDelayedDataReference
                ((TVariable<bool> *)local_48._8_8_,
                 *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
      pTVar7 = TVariable<bool>::GetDelayedDataReference
                         ((TVariable<bool> *)local_48._8_8_,(TDataReadReference<bool> *)local_28);
      lVar1 = local_48._8_8_ + 0x40;
      if (pTVar7 != (TDataReadReference<bool> *)lVar1) {
        if (*(char *)(local_48._8_8_ + 0x60) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<0> **)(local_48._8_8_ + 0x50));
        }
        *(undefined ***)lVar1 = &___7__TDataReference__N_Metasound__6B_;
        *(undefined8 *)(local_48._8_8_ + 0x48) = *(undefined8 *)&pTVar7->field_0x8;
        lVar2 = *(longlong *)&pTVar7->field_0x10;
        *(longlong *)(local_48._8_8_ + 0x50) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        *(undefined ***)lVar1 = &___7__TDataReadReference__N_Metasound__6B_;
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
                       ___7__TVariableAccessorOperator__N_MetasoundVariableNodesPrivate_Metasound__6B_
      ;
      pIVar8[1] = (INode)&___7__TDataReference_U__TVariable__N_Metasound___Metasound__6B_;
      pIVar8[2] = (INode)local_48._8_8_;
      pIVar8[3] = local_38;
      if (local_38 != (INode)0x0) {
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
      }
      pIVar8[1] = (INode)&___7__TDataWriteReference_U__TVariable__N_Metasound___Metasound__6B_;
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

// DeclareVertexInterface @ 14af7e980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<int>_> *pTVar3;
  TOutputDataVertex<int> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<int>_> local_88;
  TOutputDataVertex<int> local_68;
  TInputDataVertex<Metasound::TVariable<int>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<int>_>::
           TOutputDataVertex<Metasound::TVariable<int>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<int>::TOutputDataVertex<int><>
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
           TInputDataVertex<Metasound::TVariable<int>_>::
           TInputDataVertex<Metasound::TVariable<int>_><>
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

// DeclareVertexInterface @ 14af7ebd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<float>_> *pTVar3;
  TOutputDataVertex<float> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<float>_> local_88;
  TOutputDataVertex<float> local_68;
  TInputDataVertex<Metasound::TVariable<float>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<float>_>::
           TOutputDataVertex<Metasound::TVariable<float>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<float>::TOutputDataVertex<float><>
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
           TInputDataVertex<Metasound::TVariable<float>_>::
           TInputDataVertex<Metasound::TVariable<float>_><>
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

// DeclareVertexInterface @ 14af7ee20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_88;
  TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af7f070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_88;
  TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af7f2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_88;
  TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> local_68
  ;
  TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           ::
           TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af7f510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_88;
  TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af7f760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_88;
  TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af7f9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar3;
  TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_88;
  TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::
           TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::
           TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af7fc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar3;
  TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_88;
  TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> local_68;
  TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
           TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
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
           TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
           TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
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

// DeclareVertexInterface @ 14af7fe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> local_88;
  TOutputDataVertex<Metasound::FAudioBuffer> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
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

// DeclareVertexInterface @ 14af800a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar3;
  TOutputDataVertex<FMetasoundParameterStorageWrapper> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_88;
  TOutputDataVertex<FMetasoundParameterStorageWrapper> local_68;
  TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
           TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<FMetasoundParameterStorageWrapper>::
           TOutputDataVertex<FMetasoundParameterStorageWrapper><>
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
           TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
           TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
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

// DeclareVertexInterface @ 14af802f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar3;
  TOutputDataVertex<Metasound::FSendAddress> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> local_88;
  TOutputDataVertex<Metasound::FSendAddress> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FSendAddress>::TOutputDataVertex<Metasound::FSendAddress><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
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

// DeclareVertexInterface @ 14af80540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<FString>_> *pTVar3;
  TOutputDataVertex<FString> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<FString>_> local_88;
  TOutputDataVertex<FString> local_68;
  TInputDataVertex<Metasound::TVariable<FString>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<FString>_>::
           TOutputDataVertex<Metasound::TVariable<FString>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<FString>::TOutputDataVertex<FString><>
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
           TInputDataVertex<Metasound::TVariable<FString>_>::
           TInputDataVertex<Metasound::TVariable<FString>_><>
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

// DeclareVertexInterface @ 14af80790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> *pTVar3;
  TOutputDataVertex<Metasound::FTime> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> local_88;
  TOutputDataVertex<Metasound::FTime> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FTime>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
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

// DeclareVertexInterface @ 14af809e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> local_88;
  TOutputDataVertex<Metasound::FTrigger> local_68;
  TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
           TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
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
           TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
           TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
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

// DeclareVertexInterface @ 14af80c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TVariable<bool>_> *pTVar3;
  TOutputDataVertex<bool> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_148 [32];
  FInputVertexInterface local_118;
  FOutputVertexInterface local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b0;
  TOutputDataVertex<Metasound::TVariable<bool>_> local_88;
  TOutputDataVertex<bool> local_68;
  TInputDataVertex<Metasound::TVariable<bool>_> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar3 = TOutputDataVertex<Metasound::TVariable<bool>_>::
           TOutputDataVertex<Metasound::TVariable<bool>_><>
                     (&local_88,&VariableNames::OutputVariableName,
                      &VariableNames::OutputVariableMetadata);
  pTVar4 = TOutputDataVertex<bool>::TOutputDataVertex<bool><>
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
           TInputDataVertex<Metasound::TVariable<bool>_>::
           TInputDataVertex<Metasound::TVariable<bool>_><>
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

// GetNodeInfo @ 14afa12e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<int>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<int>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<float>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<float>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<float,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1920

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                             ();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>()
          ;
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa1f60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa20f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FAudioBuffer>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa2280

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FMetasoundParameterStorageWrapper>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa2410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FSendAddress>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FSendAddress>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa25a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<FString>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<FString>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<FString>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa2730

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FTime>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTime>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa28c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::
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
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<Metasound::FTrigger>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::FTrigger>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::
             TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::FTrigger>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14afa2a50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FName *pFVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  FVertexInterface local_58;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      if (*piVar4 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar3 = GetMetasoundDataTypeName<bool>();
          VariableNames::GetVariableAccessorNodeClassName
                    (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
                      ::__l2::ClassName,pFVar3);
          _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Namespace =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
           ::__l2::ClassName.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Name =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
           ::__l2::ClassName.Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.ClassName.Variant =
           `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<bool>(void)'
           ::__l2::ClassName.Variant;
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
          ::__l2::Metadata.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
        ::__l2::Metadata.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
      ::__l2::Metadata.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = DeclareVertexInterface(&local_58);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata.DefaultInterface,pFVar2);
      FVertexInterface::~FVertexInterface(&local_58);
      atexit(`Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<bool>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

