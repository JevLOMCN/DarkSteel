// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 21

// BindInputs @ 14b2e19d0

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  local_res18 = &this->Trigger;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Array;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Index;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e1b60

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FWaveTableBankAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputValueName);
  local_res18[0] = &this->Value;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2e6380

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  local_res18 = &this->Trigger;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Array;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Index;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e6650

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FWaveAsset> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FWaveAsset> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FWaveAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputValueName);
  local_res18[0] = &this->Value;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2ecbc0

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  local_res18 = &this->Trigger;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Array;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Index;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2ecd10

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBusAsset> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBusAsset> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBusAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputValueName);
  local_res18[0] = &this->Value;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b336280

TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayGetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&(param_2->Trigger).field_0x8;
  lVar2 = *(longlong *)&(param_2->Trigger).field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar2 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar2 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<Metasound::FAudioBusAsset>::TDataReference<Metasound::FAudioBusAsset><>
            ((TDataReference<Metasound::FAudioBusAsset> *)&this->Value,NewObject);
  *(undefined ***)&this->Value =
       &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  iVar1 = **(int **)&(this->Index).field_0x8;
  if (-1 < iVar1) {
    plVar3 = *(longlong **)&(this->Array).field_0x8;
    if (iVar1 < (int)plVar3[1]) {
      if (iVar1 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar7)();
          return pTVar10;
        }
      }
      lVar2 = *plVar3;
      puVar4 = *(undefined8 **)&(this->Value).field_0x8;
      lVar5 = *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10);
      uVar6 = *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar6;
      puVar4[1] = lVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  return this;
}

// TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b3363f0

TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayGetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&(param_2->Trigger).field_0x8;
  lVar2 = *(longlong *)&(param_2->Trigger).field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar2 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar2 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<Metasound::FWaveAsset>::TDataReference<Metasound::FWaveAsset><>
            ((TDataReference<Metasound::FWaveAsset> *)&this->Value,NewObject);
  *(undefined ***)&this->Value = &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  iVar1 = **(int **)&(this->Index).field_0x8;
  if (-1 < iVar1) {
    plVar3 = *(longlong **)&(this->Array).field_0x8;
    if (iVar1 < (int)plVar3[1]) {
      if (iVar1 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *
                    )(*pcVar7)();
          return pTVar10;
        }
      }
      lVar2 = *plVar3;
      puVar4 = *(undefined8 **)&(this->Value).field_0x8;
      lVar5 = *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10);
      uVar6 = *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar6;
      puVar4[1] = lVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  return this;
}

// TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b336560

TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FOperatorSettings *param_1,FInitParams *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayGetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&(param_2->Trigger).field_0x8;
  lVar2 = *(longlong *)&(param_2->Trigger).field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar2 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar2 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<Metasound::FWaveTableBankAsset>::TDataReference<Metasound::FWaveTableBankAsset><>
            ((TDataReference<Metasound::FWaveTableBankAsset> *)&this->Value,NewObject);
  *(undefined ***)&this->Value =
       &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  iVar1 = **(int **)&(this->Index).field_0x8;
  if (-1 < iVar1) {
    plVar3 = *(longlong **)&(this->Array).field_0x8;
    if (iVar1 < (int)plVar3[1]) {
      if (iVar1 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar7)();
          return pTVar10;
        }
      }
      lVar2 = *plVar3;
      puVar4 = *(undefined8 **)&(this->Value).field_0x8;
      lVar5 = *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10);
      uVar6 = *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar6;
      puVar4[1] = lVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  return this;
}

// ~TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d3f0

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Value).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Index).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d450

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Value).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Index).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d4b0

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Value).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Index).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b37bd00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  void *pvVar8;
  FString *pFVar9;
  TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *_Src;
  int iVar11;
  FName local_res10;
  FName local_res20;
  FName local_138 [2];
  undefined **local_128 [2];
  TReferenceControllerBase<0> *local_118;
  undefined **local_108;
  undefined8 local_100;
  TReferenceControllerBase<0> *local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  TReferenceControllerBase<0> *local_d8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  FString local_48;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_88,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,local_138,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0
  ;
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
  _Src = pTVar10;
  iVar11 = 0;
  if (pTVar5 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
    if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    pIVar2 = pTVar5->Ptr;
    pvVar7 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar8 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    _Src = (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    iVar11 = 0;
    if (pvVar7 == pvVar8) {
      pFVar9 = FMetasoundEnvironment::GetValue<FString>
                         (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                          &local_b8,&Frontend::SourceInterface::Environment::GraphName);
      _Src = pTVar10;
      iVar11 = 0;
      if (&local_48 != pFVar9) {
        _Src = (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar9->Data).ArrayNum;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  local_128[1] = (undefined **)local_a8._8_8_;
  local_118 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_128[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  local_100 = local_88._8_8_;
  local_f8 = (TReferenceControllerBase<0> *)local_88._16_8_;
  if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
  }
  local_108 = &
              ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_e0 = local_68._8_8_;
  local_d8 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_e8 = &___7__TDataReadReference_H_Metasound__6B_;
  local_c0 = iVar11;
  if (iVar11 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar11,0,&local_c8,iVar11,&local_bc);
    memcpy(local_c8.Data,_Src,(longlong)iVar11 * 2);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_01 = ::operator_new(0x98);
  if (this_01 !=
      (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                        (this_01,pFVar1,(FInitParams *)local_128);
  }
  param_1->Node = (INode *)pTVar10;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_f8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_118);
  if (_Src != (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
              0x0) {
    FMemory::Free(_Src);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37bfc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  void *pvVar8;
  FString *pFVar9;
  TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *_Src;
  int iVar11;
  FName local_res10;
  FName local_res20;
  FName local_138 [2];
  undefined **local_128 [2];
  TReferenceControllerBase<0> *local_118;
  undefined **local_108;
  undefined8 local_100;
  TReferenceControllerBase<0> *local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  TReferenceControllerBase<0> *local_d8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  FString local_48;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  local_88,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,local_138,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
  _Src = pTVar10;
  iVar11 = 0;
  if (pTVar5 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
    if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    pIVar2 = pTVar5->Ptr;
    pvVar7 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar8 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    _Src = (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    iVar11 = 0;
    if (pvVar7 == pvVar8) {
      pFVar9 = FMetasoundEnvironment::GetValue<FString>
                         (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                          &local_b8,&Frontend::SourceInterface::Environment::GraphName);
      _Src = pTVar10;
      iVar11 = 0;
      if (&local_48 != pFVar9) {
        _Src = (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar9->Data).ArrayNum;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  local_128[1] = (undefined **)local_a8._8_8_;
  local_118 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_128[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  local_100 = local_88._8_8_;
  local_f8 = (TReferenceControllerBase<0> *)local_88._16_8_;
  if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
  }
  local_108 = &
              ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_e0 = local_68._8_8_;
  local_d8 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_e8 = &___7__TDataReadReference_H_Metasound__6B_;
  local_c0 = iVar11;
  if (iVar11 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar11,0,&local_c8,iVar11,&local_bc);
    memcpy(local_c8.Data,_Src,(longlong)iVar11 * 2);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_01 = ::operator_new(0x98);
  if (this_01 !=
      (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                        (this_01,pFVar1,(FInitParams *)local_128);
  }
  param_1->Node = (INode *)pTVar10;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_f8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_118);
  if (_Src != (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    FMemory::Free(_Src);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37c280

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  void *pvVar8;
  FString *pFVar9;
  TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *_Src;
  int iVar11;
  FName local_res10;
  FName local_res20;
  FName local_138 [2];
  undefined **local_128 [2];
  TReferenceControllerBase<0> *local_118;
  undefined **local_108;
  undefined8 local_100;
  TReferenceControllerBase<0> *local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  TReferenceControllerBase<0> *local_d8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  FString local_48;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_88,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,local_138,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             *)0x0;
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
  _Src = pTVar10;
  iVar11 = 0;
  if (pTVar5 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
    if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    pIVar2 = pTVar5->Ptr;
    pvVar7 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar8 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    _Src = (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
           )0x0;
    iVar11 = 0;
    if (pvVar7 == pvVar8) {
      pFVar9 = FMetasoundEnvironment::GetValue<FString>
                         (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                          &local_b8,&Frontend::SourceInterface::Environment::GraphName);
      _Src = pTVar10;
      iVar11 = 0;
      if (&local_48 != pFVar9) {
        _Src = (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar9->Data).ArrayNum;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  local_128[1] = (undefined **)local_a8._8_8_;
  local_118 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_128[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  local_100 = local_88._8_8_;
  local_f8 = (TReferenceControllerBase<0> *)local_88._16_8_;
  if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
  }
  local_108 = &
              ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_e0 = local_68._8_8_;
  local_d8 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_e8 = &___7__TDataReadReference_H_Metasound__6B_;
  local_c0 = iVar11;
  if (iVar11 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar11,0,&local_c8,iVar11,&local_bc);
    memcpy(local_c8.Data,_Src,(longlong)iVar11 * 2);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_01 = ::operator_new(0x98);
  if (this_01 !=
      (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    pTVar10 = TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                        (this_01,pFVar1,(FInitParams *)local_128);
  }
  param_1->Node = (INode *)pTVar10;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_f8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_118);
  if (_Src != (TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
    FMemory::Free(_Src);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b3b72c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b7410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b7560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
      MetasoundArrayNodesPrivate::CreateArrayGetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3d5da0

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  iVar1 = **(int **)&(this->Index).field_0x8;
  if (-1 < iVar1) {
    plVar2 = *(longlong **)&(this->Array).field_0x8;
    if (iVar1 < (int)plVar2[1]) {
      if (iVar1 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar3 = *plVar2;
      puVar4 = *(undefined8 **)&(this->Value).field_0x8;
      lVar5 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      uVar6 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar9 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar6;
      puVar4[1] = lVar5;
      goto LAB_14b3d5e58;
    }
  }
  puVar4 = *(undefined8 **)&(this->Value).field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_14b3d5e58:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// Reset @ 14b3d5e80

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  iVar1 = **(int **)&(this->Index).field_0x8;
  if (-1 < iVar1) {
    plVar2 = *(longlong **)&(this->Array).field_0x8;
    if (iVar1 < (int)plVar2[1]) {
      if (iVar1 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar3 = *plVar2;
      puVar4 = *(undefined8 **)&(this->Value).field_0x8;
      lVar5 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      uVar6 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar9 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar6;
      puVar4[1] = lVar5;
      goto LAB_14b3d5f38;
    }
  }
  puVar4 = *(undefined8 **)&(this->Value).field_0x8;
  pTVar9 = (TReferenceControllerBase<1> *)puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_14b3d5f38:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// Reset @ 14b3d5f60

void __thiscall
Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
Reset(TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  FSharedReferencer<1> FVar9;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  iVar1 = **(int **)&(this->Index).field_0x8;
  if ((iVar1 < 0) || (plVar2 = *(longlong **)&(this->Array).field_0x8, (int)plVar2[1] <= iVar1)) {
    puVar4 = *(undefined8 **)&(this->Value).field_0x8;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar9.ReferenceController = FStack_20.ReferenceController;
    if (puVar4 != &local_28) {
      *puVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(puVar4 + 1),&FStack_20);
      FVar9.ReferenceController = FStack_20.ReferenceController;
    }
  }
  else {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar3 = *plVar2;
    puVar4 = *(undefined8 **)&(this->Value).field_0x8;
    lVar5 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
    uVar6 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    local_18 = *puVar4;
    pTStack_10 = (TReferenceControllerBase<1> *)puVar4[1];
    *puVar4 = uVar6;
    puVar4[1] = lVar5;
    FVar9.ReferenceController = pTStack_10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return;
}

