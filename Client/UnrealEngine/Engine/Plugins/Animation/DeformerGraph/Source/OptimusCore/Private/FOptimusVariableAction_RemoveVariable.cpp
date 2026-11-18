// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e10f120

UScriptStruct * __cdecl FOptimusVariableAction_RemoveVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusVariableAction_RemoveVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusVariableAction_RemoveVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable,
                         (UObject *)pUVar1,L"OptimusVariableAction_RemoveVariable");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusVariableAction_RemoveVariable.OuterSingleton;
}

// Do @ 14e10f1b0

bool __thiscall
FOptimusVariableAction_RemoveVariable::Do
          (FOptimusVariableAction_RemoveVariable *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusDeformer *this_00;
  UClass *pUVar3;
  UOptimusVariableDescription *pUVar4;
  FBinaryObjectWriter local_b8;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar3 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_14e10f200;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e10f200:
  pUVar4 = (UOptimusVariableDescription *)
           (**(code **)(this_00->_padding_ + 0x38))(&this_00->_padding_,this->VariableName);
  bVar2 = false;
  if (pUVar4 != (UOptimusVariableDescription *)0x0) {
    Optimus::FBinaryObjectWriter::FBinaryObjectWriter
              (&local_b8,(UObject *)pUVar4,&this->VariableData);
    FArchive::~FArchive((FArchive *)&local_b8);
    bVar2 = UOptimusDeformer::RemoveVariableDirect(this_00,pUVar4);
  }
  return bVar2;
}

// Undo @ 14e10f260

bool __thiscall
FOptimusVariableAction_RemoveVariable::Undo
          (FOptimusVariableAction_RemoveVariable *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UOptimusDeformer *this_00;
  UClass *pUVar5;
  UOptimusVariableDescription *pUVar6;
  FBinaryObjectReader local_a8;
  
  if ((param_1 != (IOptimusPathResolver *)0x0) &&
     (this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1),
     this_00 != (UOptimusDeformer *)0x0)) {
    pUVar5 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e10f2b0;
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e10f2b0:
  pUVar6 = UOptimusDeformer::CreateVariableDirect(this_00,this->VariableName);
  if (pUVar6 != (UOptimusVariableDescription *)0x0) {
    if (((FName)pUVar6->_padding_ != this->VariableName) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Variable->GetFName() == VariableName",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusVariableActions.cpp"
                           ,0x77,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    Optimus::FBinaryObjectReader::FBinaryObjectReader
              (&local_a8,(UObject *)pUVar6,&this->VariableData);
    FArchive::~FArchive((FArchive *)&local_a8);
    bVar3 = UOptimusDeformer::AddVariableDirect(this_00,pUVar6,this->VariableIndex);
    if (bVar3) {
      return true;
    }
    Optimus::RemoveObject((UObject *)pUVar6);
  }
  return false;
}

// FOptimusVariableAction_RemoveVariable @ 14e156dc0

FOptimusVariableAction_RemoveVariable * __thiscall
FOptimusVariableAction_RemoveVariable::FOptimusVariableAction_RemoveVariable
          (FOptimusVariableAction_RemoveVariable *this,UOptimusVariableDescription *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  FOptimusVariableAction_RemoveVariable *pFVar5;
  UOptimusVariableContainer *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FName local_res10;
  FString local_28;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusVariableAction_RemoveVariable__6B_;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->VariableIndex = 0;
  (this->VariableData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableData).ArrayNum = 0;
  (this->VariableData).ArrayMax = 0;
  (this->DefaultValueData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValueData).ArrayNum = 0;
  (this->DefaultValueData).ArrayMax = 0;
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5431583799081172913>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusVariableActions.cpp"
                       ,0x4f,"InVariable");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOptimusVariableAction_RemoveVariable *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->VariableName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->VariableName).Number = uVar3;
    (this->DataType).TypeName = (param_1->DataType).TypeName;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
               (TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject);
    pUVar6 = CastChecked<UOptimusVariableContainer,UObject>((UObject *)param_1->_padding_);
    pFVar1 = (pUVar6->Descriptions).AllocatorInstance.Data;
    for (pFVar8 = pFVar1; pFVar8 != pFVar1 + (longlong)(pUVar6->Descriptions).ArrayNum * 8;
        pFVar8 = pFVar8 + 8) {
      if ((*(UOptimusVariableDescription **)pFVar8 != (UOptimusVariableDescription *)0x0) &&
         (*(UOptimusVariableDescription **)pFVar8 == param_1)) {
        iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 3);
        goto LAB_14e156ef0;
      }
    }
    iVar7 = -1;
LAB_14e156ef0:
    this->VariableIndex = iVar7;
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar9.Data = local_28.Data.AllocatorInstance.Data;
    }
    FOptimusAction::SetTitlef<wchar_t_const_*>
              ((FOptimusAction *)this,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e08ae8,
               (wchar_t *)FVar9.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// FOptimusVariableAction_RemoveVariable @ 14e156f60

FOptimusVariableAction_RemoveVariable * __thiscall
FOptimusVariableAction_RemoveVariable::FOptimusVariableAction_RemoveVariable
          (FOptimusVariableAction_RemoveVariable *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusVariableAction_RemoveVariable__6B_;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->VariableIndex = 0;
  (this->VariableData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableData).ArrayNum = 0;
  (this->VariableData).ArrayMax = 0;
  (this->DefaultValueData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValueData).ArrayNum = 0;
  (this->DefaultValueData).ArrayMax = 0;
  return this;
}

