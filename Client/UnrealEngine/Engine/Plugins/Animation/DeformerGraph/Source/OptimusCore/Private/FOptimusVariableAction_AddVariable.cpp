// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10eee0

UScriptStruct * __cdecl FOptimusVariableAction_AddVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusVariableAction_AddVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusVariableAction_AddVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable,
                         (UObject *)pUVar1,L"OptimusVariableAction_AddVariable");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusVariableAction_AddVariable.OuterSingleton;
}

// Do @ 14e10ef20

bool __thiscall
FOptimusVariableAction_AddVariable::Do
          (FOptimusVariableAction_AddVariable *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  UOptimusDeformer *this_00;
  UClass *pUVar6;
  UOptimusVariableDescription *this_01;
  undefined1 local_38 [48];
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar6 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_14e10ef6d;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e10ef6d:
  this_01 = UOptimusDeformer::CreateVariableDirect(this_00,this->VariableName);
  if (this_01 != (UOptimusVariableDescription *)0x0) {
    if ((FName)this_01->_padding_ != this->VariableName) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Variable->GetFName() == VariableName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusVariableActions.cpp"
                         ,0x2d,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    uVar3 = *(undefined4 *)((longlong)&this_01->_padding_ + 4);
    (this_01->VariableName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this_01->_padding_;
    (this_01->VariableName).Number = uVar3;
    local_38._0_8_ = (this->DataType).TypeName;
    local_38._8_8_ = *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_38 + 0x10),
               (FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8);
    UOptimusVariableDescription::SetDataType(this_01,(FOptimusDataTypeRef *)local_38);
    bVar4 = UOptimusDeformer::AddVariableDirect(this_00,this_01,-1);
    if (bVar4) {
      uVar3 = *(undefined4 *)((longlong)&this_01->_padding_ + 4);
      (this->VariableName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this_01->_padding_;
      (this->VariableName).Number = uVar3;
      return true;
    }
    Optimus::RemoveObject((UObject *)this_01);
  }
  return false;
}

// Undo @ 14e10f040

bool __thiscall
FOptimusVariableAction_AddVariable::Undo
          (FOptimusVariableAction_AddVariable *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusVariableDescription *pUVar3;
  UOptimusDeformer *this_00;
  UClass *pUVar4;
  
  pUVar3 = (UOptimusVariableDescription *)
           (**(code **)((longlong)*param_1 + 0x38))(param_1,this->VariableName);
  if (pUVar3 == (UOptimusVariableDescription *)0x0) {
    return false;
  }
  this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
  if (this_00 != (UOptimusDeformer *)0x0) {
    pUVar4 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14e10f0a3;
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e10f0a3:
  bVar2 = UOptimusDeformer::RemoveVariableDirect(this_00,pUVar3);
  return bVar2;
}

// FOptimusVariableAction_AddVariable @ 14e156ba0

FOptimusVariableAction_AddVariable * __thiscall
FOptimusVariableAction_AddVariable::FOptimusVariableAction_AddVariable
          (FOptimusVariableAction_AddVariable *this,FOptimusDataTypeRef *param_1,FName param_2)

{
  longlong *plVar1;
  void *pvVar2;
  FString local_48;
  FString local_38;
  
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusVariableAction_AddVariable__6B_;
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
  this->VariableName = param_2;
  (this->DataType).TypeName = param_1->TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->TypeObject);
  ::FName::ToString(&this->VariableName,&local_38);
  ::FString::PrintfImpl(&local_48,L"Add variable \'%s\'");
  if ((FString *)plVar1 != &local_48) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_48.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_48.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pvVar2 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return this;
}

// FOptimusVariableAction_AddVariable @ 14e156d20

FOptimusVariableAction_AddVariable * __thiscall
FOptimusVariableAction_AddVariable::FOptimusVariableAction_AddVariable
          (FOptimusVariableAction_AddVariable *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusVariableAction_AddVariable__6B_;
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
  return this;
}

// GetVariable @ 14e1e9930

UOptimusVariableDescription * __thiscall
FOptimusVariableAction_AddVariable::GetVariable
          (FOptimusVariableAction_AddVariable *this,IOptimusPathResolver *param_1)

{
  UOptimusVariableDescription *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1e993d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusVariableDescription *)
           (**(code **)((longlong)*param_1 + 0x38))(param_1,this->VariableName);
  return pUVar1;
}

