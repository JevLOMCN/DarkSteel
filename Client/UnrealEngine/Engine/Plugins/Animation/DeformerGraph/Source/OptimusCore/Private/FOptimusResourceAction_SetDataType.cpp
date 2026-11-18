// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e107a90

UScriptStruct * __cdecl FOptimusResourceAction_SetDataType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusResourceAction_SetDataType.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusResourceAction_SetDataType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType,
                         (UObject *)pUVar1,L"OptimusResourceAction_SetDataType");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusResourceAction_SetDataType.OuterSingleton;
}

// Do @ 14e107ad0

bool __thiscall
FOptimusResourceAction_SetDataType::Do
          (FOptimusResourceAction_SetDataType *this,IOptimusPathResolver *param_1)

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

// Undo @ 14e107b60

bool __thiscall
FOptimusResourceAction_SetDataType::Undo
          (FOptimusResourceAction_SetDataType *this,IOptimusPathResolver *param_1)

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

// FOptimusResourceAction_SetDataType @ 14e156390

FOptimusResourceAction_SetDataType * __thiscall
FOptimusResourceAction_SetDataType::FOptimusResourceAction_SetDataType
          (FOptimusResourceAction_SetDataType *this,UOptimusResourceDescription *param_1,
          FOptimusDataTypeRef *param_2)

{
  FOptimusDataType *pFVar1;
  void *pvVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  FOptimusResourceAction_SetDataType *pFVar7;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_SetDataType__6B_;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
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
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3523978412479742147>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                       ,0xc3,"InResource");
    if (bVar5) {
code_r0x00014e1564f0:
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOptimusResourceAction_SetDataType *)(*pcVar3)();
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
                        (&bGEnsureHasExecuted<3523978412479742147>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                         ,0xc3,"InDataType.IsValid()");
      if (bVar5) goto code_r0x00014e1564f0;
    }
    else {
      uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      (this->ResourceName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
      (this->ResourceName).Number = uVar4;
      (this->NewDataType).TypeName = param_2->TypeName;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->NewDataType).TypeObject,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&param_2->TypeObject);
      (this->OldDataType).TypeName = (param_1->DataType).TypeName;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->OldDataType).TypeObject,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject);
      FOptimusAction::SetTitlef<>
                ((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)0x152e08040);
    }
  }
  pvVar2 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return this;
}

// FOptimusResourceAction_SetDataType @ 14e156570

FOptimusResourceAction_SetDataType * __thiscall
FOptimusResourceAction_SetDataType::FOptimusResourceAction_SetDataType
          (FOptimusResourceAction_SetDataType *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_SetDataType__6B_;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
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

// SetDataType @ 14e21d890

bool __thiscall
FOptimusResourceAction_SetDataType::SetDataType
          (FOptimusResourceAction_SetDataType *this,IOptimusPathResolver *param_1,
          FOptimusDataTypeRef *param_2)

{
  void *pvVar1;
  FName FVar2;
  TObjectPtr<UOptimusResourceContainer>_u_0 TVar3;
  longlong *plVar4;
  FName FVar5;
  bool bVar6;
  UObject *pUVar7;
  UOptimusResourceContainer *pUVar8;
  UOptimusDeformer *this_00;
  longlong *plVar9;
  TPersistentObjectPtr<FSoftObjectPath> local_30;
  
  pUVar7 = (UObject *)(**(code **)((longlong)*param_1 + 0x30))(param_1,this->ResourceName);
  if (pUVar7 == (UObject *)0x0) {
    pvVar1 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    return false;
  }
  pUVar8 = CastChecked<UOptimusResourceContainer,UObject>(*(UObject **)&pUVar7->field_0x20);
  if (pUVar8 == (UOptimusResourceContainer *)0x0) {
    this_00 = (UOptimusDeformer *)0x0;
  }
  else {
    this_00 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar8->_padding_);
  }
  if (this_00 != (UOptimusDeformer *)0x0) {
    FVar2 = param_2->TypeName;
    local_30.WeakPtr.ObjectIndex = *(int *)&(param_2->TypeObject).SoftObjectPtr.field_0x0;
    local_30.WeakPtr.ObjectSerialNumber = *(int *)&(param_2->TypeObject).SoftObjectPtr.field_0x4;
    FSoftObjectPath::FSoftObjectPath
              (&local_30.ObjectID,(FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8)
    ;
    TVar3 = (this_00->Resources).field0_0x0;
    plVar4 = *(longlong **)((longlong)TVar3 + 0x28);
    for (plVar9 = plVar4; plVar9 != plVar4 + ((TVar3.DebugPtr)->Descriptions).ArrayNum;
        plVar9 = plVar9 + 1) {
      if (((UObject *)*plVar9 != (UObject *)0x0) && ((UObject *)*plVar9 == pUVar7)) {
        if ((int)((longlong)plVar9 - (longlong)plVar4 >> 3) != -1) {
          FVar5.ComparisonIndex.Value = *(uint *)&pUVar7[1].field_0x8;
          FVar5.Number = *(uint *)&pUVar7[1].field_0xc;
          if ((FVar5 != FVar2) ||
             (bVar6 = FSoftObjectPath::operator==
                                ((FSoftObjectPath *)&pUVar7[1].field_0x18,&local_30.ObjectID),
             !bVar6)) {
            *(uint *)&pUVar7[1].field_0x8 = FVar2.ComparisonIndex.Value;
            *(uint *)&pUVar7[1].field_0xc = FVar2.Number;
            TPersistentObjectPtr<FSoftObjectPath>::operator=
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar7[1].field_0x10,&local_30);
            UOptimusDeformer::Notify(this_00,ResourceTypeChanged,pUVar7);
            UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
          }
          if (local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
          goto LAB_14e21d95e;
        }
        break;
      }
    }
    if (local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = false;
LAB_14e21d95e:
  pvVar1 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return bVar6;
}

