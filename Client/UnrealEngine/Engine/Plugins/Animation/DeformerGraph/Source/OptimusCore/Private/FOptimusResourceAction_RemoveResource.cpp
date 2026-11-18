// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e1074b0

UScriptStruct * __cdecl FOptimusResourceAction_RemoveResource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusResourceAction_RemoveResource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusResourceAction_RemoveResource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource,
                         (UObject *)pUVar1,L"OptimusResourceAction_RemoveResource");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusResourceAction_RemoveResource.OuterSingleton;
}

// Do @ 14e1074f0

bool __thiscall
FOptimusResourceAction_RemoveResource::Do
          (FOptimusResourceAction_RemoveResource *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusResourceDescription *pUVar2;
  UOptimusResourceContainer *pUVar3;
  UOptimusDeformer *this_00;
  FBinaryObjectWriter local_b8;
  
  pUVar2 = (UOptimusResourceDescription *)
           (**(code **)((longlong)*param_1 + 0x30))(param_1,this->ResourceName);
  if (pUVar2 != (UOptimusResourceDescription *)0x0) {
    Optimus::FBinaryObjectWriter::FBinaryObjectWriter
              (&local_b8,(UObject *)pUVar2,&this->ResourceData);
    FArchive::~FArchive((FArchive *)&local_b8);
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

// Undo @ 14e107590

bool __thiscall
FOptimusResourceAction_RemoveResource::Undo
          (FOptimusResourceAction_RemoveResource *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UOptimusDeformer *this_00;
  UClass *pUVar5;
  UOptimusResourceDescription *pUVar6;
  FBinaryObjectReader local_a8;
  
  if ((param_1 != (IOptimusPathResolver *)0x0) &&
     (this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1),
     this_00 != (UOptimusDeformer *)0x0)) {
    pUVar5 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e1075e0;
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e1075e0:
  pUVar6 = UOptimusDeformer::CreateResourceDirect(this_00,this->ResourceName);
  if (pUVar6 != (UOptimusResourceDescription *)0x0) {
    if (((FName)pUVar6->_padding_ != this->ResourceName) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource->GetFName() == ResourceName",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                           ,0x80,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    Optimus::FBinaryObjectReader::FBinaryObjectReader
              (&local_a8,(UObject *)pUVar6,&this->ResourceData);
    FArchive::~FArchive((FArchive *)&local_a8);
    bVar3 = UOptimusDeformer::AddResourceDirect(this_00,pUVar6,this->ResourceIndex);
    if (bVar3) {
      return true;
    }
    Optimus::RemoveObject((UObject *)pUVar6);
  }
  return false;
}

// FOptimusResourceAction_RemoveResource @ 14e155f40

FOptimusResourceAction_RemoveResource * __thiscall
FOptimusResourceAction_RemoveResource::FOptimusResourceAction_RemoveResource
          (FOptimusResourceAction_RemoveResource *this,UOptimusResourceDescription *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  FOptimusResourceAction_RemoveResource *pFVar5;
  UOptimusResourceContainer *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FName local_res10;
  FString local_28;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_RemoveResource__6B_;
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
  this->ResourceIndex = 0;
  (this->ResourceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceData).ArrayNum = 0;
  (this->ResourceData).ArrayMax = 0;
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3523978412479742037>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                       ,0x55,"InResource");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOptimusResourceAction_RemoveResource *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->ResourceName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->ResourceName).Number = uVar3;
    (this->DataType).TypeName = (param_1->DataType).TypeName;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
               (TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject);
    pUVar6 = CastChecked<UOptimusResourceContainer,UObject>((UObject *)param_1->_padding_);
    pFVar1 = (pUVar6->Descriptions).AllocatorInstance.Data;
    for (pFVar8 = pFVar1; pFVar8 != pFVar1 + (longlong)(pUVar6->Descriptions).ArrayNum * 8;
        pFVar8 = pFVar8 + 8) {
      if ((*(UOptimusResourceDescription **)pFVar8 != (UOptimusResourceDescription *)0x0) &&
         (*(UOptimusResourceDescription **)pFVar8 == param_1)) {
        iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 3);
        goto LAB_14e156063;
      }
    }
    iVar7 = -1;
LAB_14e156063:
    this->ResourceIndex = iVar7;
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar9.Data = local_28.Data.AllocatorInstance.Data;
    }
    FOptimusAction::SetTitlef<wchar_t_const_*>
              ((FOptimusAction *)this,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e07fc8,
               (wchar_t *)FVar9.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// FOptimusResourceAction_RemoveResource @ 14e1560e0

FOptimusResourceAction_RemoveResource * __thiscall
FOptimusResourceAction_RemoveResource::FOptimusResourceAction_RemoveResource
          (FOptimusResourceAction_RemoveResource *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_RemoveResource__6B_;
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
  this->ResourceIndex = 0;
  (this->ResourceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceData).ArrayNum = 0;
  (this->ResourceData).ArrayMax = 0;
  return this;
}

