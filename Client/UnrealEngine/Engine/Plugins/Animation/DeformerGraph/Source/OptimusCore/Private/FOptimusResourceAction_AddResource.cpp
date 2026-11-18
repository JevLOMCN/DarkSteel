// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticStruct @ 14e107250

UScriptStruct * __cdecl FOptimusResourceAction_AddResource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusResourceAction_AddResource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusResourceAction_AddResource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource,
                         (UObject *)pUVar1,L"OptimusResourceAction_AddResource");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusResourceAction_AddResource.OuterSingleton;
}

// Do @ 14e107290

bool __thiscall
FOptimusResourceAction_AddResource::Do
          (FOptimusResourceAction_AddResource *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  UOptimusDeformer *this_00;
  UClass *pUVar6;
  UOptimusResourceDescription *pUVar7;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar6 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_14e1072dd;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e1072dd:
  pUVar7 = UOptimusDeformer::CreateResourceDirect(this_00,this->ResourceName);
  if (pUVar7 != (UOptimusResourceDescription *)0x0) {
    if ((FName)pUVar7->_padding_ != this->ResourceName) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource->GetFName() == ResourceName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                         ,0x31,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    uVar3 = *(undefined4 *)((longlong)&pUVar7->_padding_ + 4);
    (pUVar7->ResourceName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar7->_padding_;
    (pUVar7->ResourceName).Number = uVar3;
    (pUVar7->DataType).TypeName = (this->DataType).TypeName;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&(pUVar7->DataType).TypeObject,
               (TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject);
    (pUVar7->DataDomain).Type = (this->DataDomain).Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(pUVar7->DataDomain).DimensionNames,&(this->DataDomain).DimensionNames);
    (pUVar7->DataDomain).Multiplier = (this->DataDomain).Multiplier;
    ::FString::operator=(&(pUVar7->DataDomain).Expression,&(this->DataDomain).Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(pUVar7->DataDomain).LevelNames_DEPRECATED,&(this->DataDomain).LevelNames_DEPRECATED
              );
    bVar4 = UOptimusDeformer::AddResourceDirect(this_00,pUVar7,-1);
    if (bVar4) {
      uVar3 = *(undefined4 *)((longlong)&pUVar7->_padding_ + 4);
      (this->ResourceName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar7->_padding_;
      (this->ResourceName).Number = uVar3;
      return true;
    }
    Optimus::RemoveObject((UObject *)pUVar7);
  }
  return false;
}

// Undo @ 14e1073d0

bool __thiscall
FOptimusResourceAction_AddResource::Undo
          (FOptimusResourceAction_AddResource *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusResourceDescription *pUVar2;
  UOptimusResourceContainer *pUVar3;
  UOptimusDeformer *this_00;
  
  pUVar2 = (UOptimusResourceDescription *)
           (**(code **)((longlong)*param_1 + 0x30))(param_1,this->ResourceName);
  if (pUVar2 != (UOptimusResourceDescription *)0x0) {
    pUVar3 = CastChecked<UOptimusResourceContainer,UObject>((UObject *)pUVar2->_padding_);
    if (pUVar3 != (UOptimusResourceContainer *)0x0) {
      this_00 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar3->_padding_);
      if (this_00 != (UOptimusDeformer *)0x0) {
        bVar1 = UOptimusDeformer::RemoveResourceDirect(this_00,pUVar2);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// FOptimusResourceAction_AddResource @ 14e155ca0

FOptimusResourceAction_AddResource * __thiscall
FOptimusResourceAction_AddResource::FOptimusResourceAction_AddResource
          (FOptimusResourceAction_AddResource *this,FOptimusDataTypeRef *param_1,FName param_2,
          FOptimusDataDomain *param_3)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FString local_58;
  FString local_48;
  
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_AddResource__6B_;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
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
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  this->ResourceName = param_2;
  (this->DataType).TypeName = param_1->TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->TypeObject);
  (this->DataDomain).Type = param_3->Type;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).DimensionNames,&param_3->DimensionNames);
  (this->DataDomain).Multiplier = param_3->Multiplier;
  ::FString::operator=(&(this->DataDomain).Expression,&param_3->Expression);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).LevelNames_DEPRECATED,&param_3->LevelNames_DEPRECATED);
  ::FName::ToString(&this->ResourceName,&local_48);
  ::FString::PrintfImpl(&local_58,L"Add resource \'%s\'");
  if ((FString *)plVar1 != &local_58) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_58.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_58.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pvVar2 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar3 = (param_3->LevelNames_DEPRECATED).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_3->Expression).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_3->DimensionNames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// FOptimusResourceAction_AddResource @ 14e155ea0

FOptimusResourceAction_AddResource * __thiscall
FOptimusResourceAction_AddResource::FOptimusResourceAction_AddResource
          (FOptimusResourceAction_AddResource *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_AddResource__6B_;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
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
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  return this;
}

// ~FOptimusResourceAction_AddResource @ 14e161a60

void __thiscall
FOptimusResourceAction_AddResource::~FOptimusResourceAction_AddResource
          (FOptimusResourceAction_AddResource *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->DataDomain).LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// GetResource @ 14e1dfbe0

UOptimusResourceDescription * __thiscall
FOptimusResourceAction_AddResource::GetResource
          (FOptimusResourceAction_AddResource *this,IOptimusPathResolver *param_1)

{
  UOptimusResourceDescription *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1dfbed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusResourceDescription *)
           (**(code **)((longlong)*param_1 + 0x30))(param_1,this->ResourceName);
  return pUVar1;
}

