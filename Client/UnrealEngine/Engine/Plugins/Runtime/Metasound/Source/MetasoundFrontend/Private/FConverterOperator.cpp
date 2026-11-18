// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 89

// BindInputs @ 14ad6b1c0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             GetInputName();
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

// BindOutputs @ 14ad6b260

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
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

// BindInputs @ 14ad6d120

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::
BindInputs(FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<FString> *local_res8;
  FName *local_38;
  TDataReadReference<FString> *local_30;
  code *local_28;
  TDataReadReference<FString> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14ad6d2a0

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::
BindOutputs(FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::Frontend::FAnalyzerAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14ad7ea40

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14ad7eac0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
             GetOutputName();
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

// FConverterOperator @ 14ad97530

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
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
       ___7__TDataWriteReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
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

// FConverterOperator @ 14ad975f0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
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

// FConverterOperator @ 14ad976b0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<FString> *param_1,
                  TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7FConverterOperator___TAutoConverterNode_VFString__VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->FromData = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_VFString___Metasound__6B_;
  *(undefined ***)&this->ToData =
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14ad9db40

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14ad9db80

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14ad9dbc0

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7FConverterOperator___TAutoConverterNode_VFString__VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14adb6fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::ESharedStateBehaviorType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::ESharedStateBehaviorType,1> *pTVar4;
  undefined1 *this_01;
  ESharedStateBehaviorType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int> local_28;
  
  EVar5 = **(ESharedStateBehaviorType **)((longlong)this + 0x10);
  if (EVar5 != *(ESharedStateBehaviorType *)((longlong)this + 0x4c)) {
    *(ESharedStateBehaviorType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::ESharedStateBehaviorType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14adb702d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = SameNodeInComposition;
      this_01 = local_res10;
LAB_14adb70da:
      pTVar4 = TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
               TEnum<enum_Metasound::ESharedStateBehaviorType,1>(this_01,EVar5);
      **(ESharedStateBehaviorType **)((longlong)this + 0x30) = pTVar4->EnumValue;
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
        goto LAB_14adb70da;
      }
      goto LAB_14adb702d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14adb7100

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::
Execute(FConverterOperator *this)

{
  longlong lVar1;
  undefined8 uVar2;
  FAnalyzerAddress *pFVar3;
  FAnalyzerAddress local_68;
  
  pFVar3 = Frontend::FAnalyzerAddress::FAnalyzerAddress
                     (&local_68,*(FString **)&(this->FromData).field_0x8);
  lVar1 = *(longlong *)&(this->ToData).field_0x8;
  *(ulong64 *)(lVar1 + 8) = pFVar3->InstanceID;
  uVar2 = *(undefined8 *)&(pFVar3->NodeID).C;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)&pFVar3->NodeID;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(FName *)(lVar1 + 0x20) = pFVar3->OutputName;
  *(FName *)(lVar1 + 0x28) = pFVar3->DataType;
  *(FName *)(lVar1 + 0x30) = pFVar3->AnalyzerName;
  uVar2 = *(undefined8 *)&(pFVar3->AnalyzerInstanceID).C;
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)&pFVar3->AnalyzerInstanceID;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(FName *)(lVar1 + 0x48) = pFVar3->AnalyzerMemberName;
  *(bool *)(lVar1 + 0x50) = pFVar3->UseDataTransmissionCenter;
  return;
}

// Reset @ 14adcf3d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14adcf3f0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14adcf410

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FConverterOperator::
Reset(FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// BindInputs @ 14ae9ba80

void __thiscall
Metasound::TAutoConverterNode<int,float>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<int> *local_res8;
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,float>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14ae9bb00

void __thiscall
Metasound::TAutoConverterNode<int,float>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<float> *local_res8;
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,float>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14ae9e1f0

void __thiscall
Metasound::TAutoConverterNode<float,int>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<float> *local_res8;
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,int>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14ae9e270

void __thiscall
Metasound::TAutoConverterNode<float,int>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<int> *local_res8;
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,int>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aea0aa0

void __thiscall
Metasound::TAutoConverterNode<int,int>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<int> *local_res8;
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,int>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aea0b20

void __thiscall
Metasound::TAutoConverterNode<int,int>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<int> *local_res8;
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,int>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aea29b0

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<FString> *local_res8;
  FName *local_38;
  TDataReadReference<FString> *local_30;
  code *local_28;
  TDataReadReference<FString> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<FString,Metasound::FSendAddress>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aea2a70

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::FSendAddress> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::FSendAddress> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FSendAddress> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<FString,Metasound::FSendAddress>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeb1f70

void __thiscall
Metasound::TAutoConverterNode<bool,float>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<bool> *local_res8;
  FName *local_38;
  TDataReadReference<bool> *local_30;
  code *local_28;
  TDataReadReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,float>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeb1ff0

void __thiscall
Metasound::TAutoConverterNode<bool,float>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<float> *local_res8;
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,float>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeb4cc0

void __thiscall
Metasound::TAutoConverterNode<bool,int>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<bool> *local_res8;
  FName *local_38;
  TDataReadReference<bool> *local_30;
  code *local_28;
  TDataReadReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,int>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeb4d60

void __thiscall
Metasound::TAutoConverterNode<bool,int>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<int> *local_res8;
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,int>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeb6600

void __thiscall
Metasound::TAutoConverterNode<float,bool>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<float> *local_res8;
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,bool>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeb6680

void __thiscall
Metasound::TAutoConverterNode<float,bool>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<bool> *local_res8;
  FName *local_38;
  TDataWriteReference<bool> *local_30;
  code *local_28;
  TDataWriteReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,bool>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeb6700

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<Metasound::FTrigger> *local_res8;
  FName *local_38;
  TDataReadReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::FTrigger,float>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeb6780

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<float> *local_res8;
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::FTrigger,float>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeba1f0

void __thiscall
Metasound::TAutoConverterNode<int,bool>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<int> *local_res8;
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,bool>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeba300

void __thiscall
Metasound::TAutoConverterNode<int,bool>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<bool> *local_res8;
  FName *local_38;
  TDataWriteReference<bool> *local_30;
  code *local_28;
  TDataWriteReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,bool>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aeba840

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<Metasound::FTrigger> *local_res8;
  FName *local_38;
  TDataReadReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::FTrigger,int>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeba8d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<int> *local_res8;
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::FTrigger,int>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aebcef0

void __thiscall
Metasound::TAutoConverterNode<bool,bool>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<bool> *local_res8;
  FName *local_38;
  TDataReadReference<bool> *local_30;
  code *local_28;
  TDataReadReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,bool>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aebcf70

void __thiscall
Metasound::TAutoConverterNode<bool,bool>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<bool> *local_res8;
  FName *local_38;
  TDataWriteReference<bool> *local_30;
  code *local_28;
  TDataWriteReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,bool>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aebd520

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<Metasound::FTrigger> *local_res8;
  FName *local_38;
  TDataReadReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::FTrigger,bool>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aebd5a0

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<bool> *local_res8;
  FName *local_38;
  TDataWriteReference<bool> *local_30;
  code *local_28;
  TDataWriteReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::FTrigger,bool>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aed05f0

void __thiscall
Metasound::TAutoConverterNode<FString,FString>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<FString> *local_res8;
  FName *local_38;
  TDataReadReference<FString> *local_30;
  code *local_28;
  TDataReadReference<FString> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<FString,FString>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aed06b0

void __thiscall
Metasound::TAutoConverterNode<FString,FString>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<FString> *local_res8;
  FName *local_38;
  TDataWriteReference<FString> *local_30;
  code *local_28;
  TDataWriteReference<FString> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<FString,FString>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FString>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aee1de0

void __thiscall
Metasound::TAutoConverterNode<float,float>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<float> *local_res8;
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,float>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aee1e60

void __thiscall
Metasound::TAutoConverterNode<float,float>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<float> *local_res8;
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,float>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14af39440

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,int>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<int> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_HH_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_H_Metasound__6B_;
  puVar2 = *(undefined4 **)&(this->FromData).field_0x8;
  puVar3 = *(undefined4 **)&(this->ToData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  *puVar3 = *puVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af394f0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,float>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<int> *param_1,
          TDataWriteReference<float> *param_2)

{
  longlong lVar1;
  int *piVar2;
  TReferenceControllerBase<0> *pTVar3;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_HM_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_M_Metasound__6B_;
  piVar2 = *(int **)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  pTVar3 = *(TReferenceControllerBase<0> **)&param_1->field_0x10;
  **(float **)&(this->ToData).field_0x8 = (float)*piVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af395b0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,bool>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<int> *param_1,
          TDataWriteReference<bool> *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_H_N_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference__N_Metasound__6B_;
  piVar2 = *(int **)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  *(bool *)*(undefined8 *)&(this->ToData).field_0x8 = *piVar2 != 0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39670

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<float,int>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<float> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  float *pfVar2;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_MH_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_H_Metasound__6B_;
  pfVar2 = *(float **)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  **(int **)&(this->ToData).field_0x8 = (int)*pfVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39730

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<float,float>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<float> *param_1,
          TDataWriteReference<float> *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_MM_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_M_Metasound__6B_;
  puVar2 = *(undefined4 **)&(this->FromData).field_0x8;
  puVar3 = *(undefined4 **)&(this->ToData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  *puVar3 = *puVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af397e0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<float,bool>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<float> *param_1,
          TDataWriteReference<bool> *param_2)

{
  longlong lVar1;
  float *pfVar2;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_M_N_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference__N_Metasound__6B_;
  pfVar2 = *(float **)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  *(bool *)*(undefined8 *)&(this->ToData).field_0x8 = *pfVar2 != 0.0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af398a0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<FString,FString>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<FString> *param_1,
          TDataWriteReference<FString> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFString__V1__Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_VFString___Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_VFString___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39960

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<FString> *param_1,
                  TDataWriteReference<Metasound::FSendAddress> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7FConverterOperator___TAutoConverterNode_VFString__VFSendAddress_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->FromData = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_VFString___Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFSendAddress_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39a20

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<Metasound::FTrigger> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFTrigger_Metasound__H_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_H_Metasound__6B_;
  lVar1 = *(longlong *)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  **(uint **)&(this->ToData).field_0x8 = (uint)(0 < *(int *)(lVar1 + 0x1c));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39ae0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<Metasound::FTrigger> *param_1,
          TDataWriteReference<float> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFTrigger_Metasound__M_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_M_Metasound__6B_;
  lVar1 = *(longlong *)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  pTVar2 = *(TReferenceControllerBase<0> **)&param_1->field_0x10;
  **(float **)&(this->ToData).field_0x8 = (float)(0 < *(int *)(lVar1 + 0x1c));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39ba0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<Metasound::FTrigger> *param_1,
          TDataWriteReference<bool> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFTrigger_Metasound___N_Metasound__6B_
  ;
  *(undefined ***)&this->FromData = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference__N_Metasound__6B_;
  lVar1 = *(longlong *)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  *(bool *)*(undefined8 *)&(this->ToData).field_0x8 = 0 < *(int *)(lVar1 + 0x1c);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39c60

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<bool,int>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<bool> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode__NH_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_H_Metasound__6B_;
  pbVar2 = *(byte **)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  **(uint **)&(this->ToData).field_0x8 = (uint)*pbVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39d20

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<bool,float>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<bool> *param_1,
          TDataWriteReference<float> *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  TReferenceControllerBase<0> *pTVar3;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode__NM_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference_M_Metasound__6B_;
  pbVar2 = *(byte **)&(this->FromData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  pTVar3 = *(TReferenceControllerBase<0> **)&param_1->field_0x10;
  **(float **)&(this->ToData).field_0x8 = (float)*pbVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14af39de0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<bool,bool>::FConverterOperator::FConverterOperator
          (FConverterOperator *this,TDataReadReference<bool> *param_1,
          TDataWriteReference<bool> *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode__N_N_Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData = &___7__TDataWriteReference__N_Metasound__6B_;
  puVar2 = *(undefined1 **)&(this->FromData).field_0x8;
  puVar3 = *(undefined1 **)&(this->ToData).field_0x8;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  *puVar3 = *puVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14af42320

void __thiscall
Metasound::TAutoConverterNode<int,int>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_HH_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af42360

void __thiscall
Metasound::TAutoConverterNode<int,float>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_HM_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af423a0

void __thiscall
Metasound::TAutoConverterNode<int,bool>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_H_N_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af423e0

void __thiscall
Metasound::TAutoConverterNode<float,int>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_MH_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af42420

void __thiscall
Metasound::TAutoConverterNode<float,float>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_MM_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af42460

void __thiscall
Metasound::TAutoConverterNode<float,bool>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode_M_N_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af424a0

void __thiscall
Metasound::TAutoConverterNode<FString,FString>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFString__V1__Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af424e0

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7FConverterOperator___TAutoConverterNode_VFString__VFSendAddress_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af42520

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFTrigger_Metasound__H_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af42560

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFTrigger_Metasound__M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af425a0

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ =
       (longlong)&___7FConverterOperator___TAutoConverterNode_VFTrigger_Metasound___N_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af425e0

void __thiscall
Metasound::TAutoConverterNode<bool,int>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode__NH_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af42620

void __thiscall
Metasound::TAutoConverterNode<bool,float>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode__NM_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14af42660

void __thiscall
Metasound::TAutoConverterNode<bool,bool>::FConverterOperator::~FConverterOperator
          (FConverterOperator *this)

{
  this->_padding_ = (longlong)&___7FConverterOperator___TAutoConverterNode__N_N_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14af8b140

void __thiscall
Metasound::TAutoConverterNode<FString,FString>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  puVar2 = *(undefined8 **)&(this->FromData).field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)&(this->ToData).field_0x8;
  if (pFVar3 != &local_18) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_10;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// Execute @ 14af8b230

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  FName local_20 [3];
  
  puVar1 = *(undefined8 **)&(this->FromData).field_0x8;
  if (*(int *)(puVar1 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*puVar1;
  }
  ::FName::FName(local_20,pwVar3);
  lVar2 = *(longlong *)&(this->ToData).field_0x8;
  *(FName *)(lVar2 + 8) = local_20[0];
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
  return;
}

// Reset @ 14afb9300

void __thiscall
Metasound::TAutoConverterNode<int,int>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(undefined4 **)&(this->ToData).field_0x8 = *puVar1;
  return;
}

// Reset @ 14afb9320

void __thiscall
Metasound::TAutoConverterNode<int,float>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(float **)&(this->ToData).field_0x8 = (float)*piVar1;
  return;
}

// Reset @ 14afb9350

void __thiscall
Metasound::TAutoConverterNode<int,bool>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  *(bool *)*(undefined8 *)&(this->ToData).field_0x8 = *piVar1 != 0;
  return;
}

// Reset @ 14afb9380

void __thiscall
Metasound::TAutoConverterNode<float,int>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  float *pfVar1;
  
  pfVar1 = *(float **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(int **)&(this->ToData).field_0x8 = (int)*pfVar1;
  return;
}

// Reset @ 14afb93a0

void __thiscall
Metasound::TAutoConverterNode<float,float>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(undefined4 **)&(this->ToData).field_0x8 = *puVar1;
  return;
}

// Reset @ 14afb93c0

void __thiscall
Metasound::TAutoConverterNode<float,bool>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  float *pfVar1;
  undefined1 *puVar2;
  
  pfVar1 = *(float **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  puVar2 = *(undefined1 **)&(this->ToData).field_0x8;
  if (*pfVar1 != 0.0) {
    *puVar2 = 1;
    return;
  }
  *puVar2 = 0;
  return;
}

// Reset @ 14afb93f0

void __thiscall
Metasound::TAutoConverterNode<FString,FString>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// Reset @ 14afb9410

void __thiscall
Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// Reset @ 14afb9430

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(uint **)&(this->ToData).field_0x8 = (uint)(0 < *(int *)(lVar1 + 0x1c));
  return;
}

// Reset @ 14afb9450

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(float **)&(this->ToData).field_0x8 = (float)(0 < *(int *)(lVar1 + 0x1c));
  return;
}

// Reset @ 14afb9480

void __thiscall
Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  *(bool *)*(undefined8 *)&(this->ToData).field_0x8 = 0 < *(int *)(lVar1 + 0x1c);
  return;
}

// Reset @ 14afb94b0

void __thiscall
Metasound::TAutoConverterNode<bool,int>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(uint **)&(this->ToData).field_0x8 = (uint)*pbVar1;
  return;
}

// Reset @ 14afb94d0

void __thiscall
Metasound::TAutoConverterNode<bool,float>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(float **)&(this->ToData).field_0x8 = (float)*pbVar1;
  return;
}

// Reset @ 14afb9500

void __thiscall
Metasound::TAutoConverterNode<bool,bool>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)&(this->FromData).field_0x8;
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  **(undefined1 **)&(this->ToData).field_0x8 = *puVar1;
  return;
}

