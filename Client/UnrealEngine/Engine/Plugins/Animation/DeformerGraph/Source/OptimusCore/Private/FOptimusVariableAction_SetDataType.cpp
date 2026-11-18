// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10f9c0

UScriptStruct * __cdecl FOptimusVariableAction_SetDataType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusVariableAction_SetDataType.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusVariableAction_SetDataType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType,
                         (UObject *)pUVar1,L"OptimusVariableAction_SetDataType");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusVariableAction_SetDataType.OuterSingleton;
}

// Do @ 14e10fa40

bool __thiscall
FOptimusVariableAction_SetDataType::Do
          (FOptimusVariableAction_SetDataType *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  undefined1 local_38 [48];
  
  local_38._0_8_ = (this->NewDataType).TypeName;
  local_38._8_8_ = *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 0x10),
             (FSoftObjectPath *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x8);
  bVar1 = SetDataType(this,param_1,(FOptimusDataTypeRef *)local_38);
  return bVar1;
}

// Undo @ 14e10faa0

bool __thiscall
FOptimusVariableAction_SetDataType::Undo
          (FOptimusVariableAction_SetDataType *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  undefined1 local_38 [48];
  
  local_38._0_8_ = (this->OldDataType).TypeName;
  local_38._8_8_ = *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 0x10),
             (FSoftObjectPath *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x8);
  bVar1 = SetDataType(this,param_1,(FOptimusDataTypeRef *)local_38);
  return bVar1;
}

// FOptimusVariableAction_SetDataType @ 14e1570d0

FOptimusVariableAction_SetDataType * __thiscall
FOptimusVariableAction_SetDataType::FOptimusVariableAction_SetDataType
          (FOptimusVariableAction_SetDataType *this,UOptimusVariableDescription *param_1,
          FOptimusDataTypeRef *param_2)

{
  FOptimusDataType *pFVar1;
  void *pvVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  FOptimusVariableAction_SetDataType *pFVar7;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusVariableAction_SetDataType__6B_;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
  (this->NewDataType).TypeName.ComparisonIndex = 0;
  (this->NewDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->NewDataType).TypeName.ComparisonIndex = 0;
  (this->NewDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (this->OldDataType).TypeName.ComparisonIndex = 0;
  (this->OldDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->OldDataType).TypeName.ComparisonIndex = 0;
  (this->OldDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5431583799081172813>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusVariableActions.cpp"
                       ,0xb3,"InVariable");
    if (bVar5) {
code_r0x00014e157230:
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOptimusVariableAction_SetDataType *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    pTVar6 = FOptimusDataTypeRef::Resolve(param_2,&local_38);
    pFVar1 = pTVar6->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (pFVar1 == (FOptimusDataType *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5431583799081172813>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusVariableActions.cpp"
                         ,0xb3,"InDataType.IsValid()");
      if (bVar5) goto code_r0x00014e157230;
    }
    else {
      uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      (this->VariableName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
      (this->VariableName).Number = uVar4;
      (this->NewDataType).TypeName = param_2->TypeName;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->NewDataType).TypeObject,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&param_2->TypeObject);
      (this->OldDataType).TypeName = (param_1->DataType).TypeName;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->OldDataType).TypeObject,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject);
      FOptimusAction::SetTitlef<>
                ((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)0x152e08b48);
    }
  }
  pvVar2 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return this;
}

// FOptimusVariableAction_SetDataType @ 14e1572b0

FOptimusVariableAction_SetDataType * __thiscall
FOptimusVariableAction_SetDataType::FOptimusVariableAction_SetDataType
          (FOptimusVariableAction_SetDataType *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusVariableAction_SetDataType__6B_;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
  (this->NewDataType).TypeName.ComparisonIndex = 0;
  (this->NewDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->NewDataType).TypeName.ComparisonIndex = 0;
  (this->NewDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->NewDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (this->OldDataType).TypeName.ComparisonIndex = 0;
  (this->OldDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->OldDataType).TypeName.ComparisonIndex = 0;
  (this->OldDataType).TypeName.Number = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->OldDataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return this;
}

// SetDataType @ 14e21da00

bool __thiscall
FOptimusVariableAction_SetDataType::SetDataType
          (FOptimusVariableAction_SetDataType *this,IOptimusPathResolver *param_1,
          FOptimusDataTypeRef *param_2)

{
  void *pvVar1;
  FName FVar2;
  undefined8 uVar3;
  TObjectPtr<UOptimusVariableContainer>_u_0 TVar4;
  longlong *plVar5;
  bool bVar6;
  UOptimusVariableDescription *this_00;
  UOptimusVariableContainer *pUVar7;
  UOptimusDeformer *this_01;
  longlong *plVar8;
  FSoftObjectPath local_58;
  undefined1 local_38 [48];
  
  this_00 = (UOptimusVariableDescription *)
            (**(code **)((longlong)*param_1 + 0x38))(param_1,this->VariableName);
  if (this_00 == (UOptimusVariableDescription *)0x0) {
    pvVar1 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    return false;
  }
  pUVar7 = CastChecked<UOptimusVariableContainer,UObject>((UObject *)this_00->_padding_);
  if (pUVar7 == (UOptimusVariableContainer *)0x0) {
    this_01 = (UOptimusDeformer *)0x0;
  }
  else {
    this_01 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar7->_padding_);
  }
  if (this_01 != (UOptimusDeformer *)0x0) {
    FVar2 = param_2->TypeName;
    uVar3 = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              (&local_58,(FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
    TVar4 = (this_01->Variables).field0_0x0;
    plVar5 = *(longlong **)((longlong)TVar4 + 0x28);
    for (plVar8 = plVar5; plVar8 != plVar5 + ((TVar4.DebugPtr)->Descriptions).ArrayNum;
        plVar8 = plVar8 + 1) {
      if (((UOptimusVariableDescription *)*plVar8 != (UOptimusVariableDescription *)0x0) &&
         ((UOptimusVariableDescription *)*plVar8 == this_00)) {
        if ((int)((longlong)plVar8 - (longlong)plVar5 >> 3) != -1) {
          if (((this_00->DataType).TypeName != FVar2) ||
             (bVar6 = FSoftObjectPath::operator==
                                ((FSoftObjectPath *)
                                 &(this_00->DataType).TypeObject.SoftObjectPtr.field_0x8,&local_58),
             !bVar6)) {
            local_38._0_8_ = FVar2;
            local_38._8_8_ = uVar3;
            FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_38 + 0x10),&local_58);
            UOptimusVariableDescription::SetDataType(this_00,(FOptimusDataTypeRef *)local_38);
            UOptimusDeformer::Notify(this_01,VariableTypeChanged,(UObject *)this_00);
            UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_01);
          }
          if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
          goto LAB_14e21dadc;
        }
        break;
      }
    }
    if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = false;
LAB_14e21dadc:
  pvVar1 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return bVar6;
}

