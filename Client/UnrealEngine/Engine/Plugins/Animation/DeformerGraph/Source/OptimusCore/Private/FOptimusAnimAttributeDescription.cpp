// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e1099a0

UScriptStruct * __cdecl FOptimusAnimAttributeDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription,
                         (UObject *)pUVar1,L"OptimusAnimAttributeDescription");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeDescription.OuterSingleton;
}

// FOptimusAnimAttributeDescription @ 14e14fed0

FOptimusAnimAttributeDescription * __thiscall
FOptimusAnimAttributeDescription::FOptimusAnimAttributeDescription
          (FOptimusAnimAttributeDescription *this)

{
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
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
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->DefaultValueStruct);
  (this->HlslId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HlslId).Data.ArrayNum = 0;
  (this->HlslId).Data.ArrayMax = 0;
  (this->PinName).ComparisonIndex = 0;
  (this->PinName).Number = 0;
  (this->DefaultValue_DEPRECATED).field0_0x0.DebugPtr = (UOptimusValueContainer *)0x0;
  return this;
}

// GetFormattedId @ 14e1c52d0

FString * __thiscall
FOptimusAnimAttributeDescription::GetFormattedId
          (FOptimusAnimAttributeDescription *this,FString *__return_storage_ptr__,FString *param_1,
          bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FString local_28;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((param_2) && (this->BoneName != (FName)0x0)) {
    pFVar3 = ::FName::ToString(&this->BoneName,&local_28);
    iVar6 = (pFVar3->Data).ArrayNum;
    iVar5 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar6 = (param_1->Data).ArrayNum;
    iVar5 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar5);
  }
  iVar6 = 0;
  if (param_3) {
    pTVar4 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_18);
    if (pTVar4->Object == (FOptimusDataType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar3 = FText::ToString(&pTVar4->Object->DisplayName);
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    iVar5 = (param_1->Data).ArrayNum;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
  }
  iVar5 = (this->Name).Data.ArrayNum;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = iVar6;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(this->Name).Data.AllocatorInstance.Data,iVar7);
  return __return_storage_ptr__;
}

// Init @ 14e1ea7a0

FOptimusAnimAttributeDescription * __thiscall
FOptimusAnimAttributeDescription::Init
          (FOptimusAnimAttributeDescription *this,FString *param_1,FName param_2,
          FOptimusDataTypeRef *param_3)

{
  TSharedPtr<FOptimusDataType_const_,1> *pTVar1;
  FOptimusDataTypeRef *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  FOptimusDataTypeRef local_38;
  
  ::FString::operator=(&this->Name,param_1);
  this->BoneName = param_2;
  (this->DataType).TypeName = param_3->TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_3->TypeObject);
  pTVar1 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_48);
  pFVar2 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_38,pTVar1);
  FOptimusValueContainerStruct::SetType(&this->DefaultValueStruct,pFVar2);
  ::FString::operator=(&this->HlslId,param_1);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar3);
  this->PinName = local_res8;
  return this;
}

// UpdatePinNameAndHlslId @ 14e22c710

void __thiscall
FOptimusAnimAttributeDescription::UpdatePinNameAndHlslId
          (FOptimusAnimAttributeDescription *this,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  FName local_res8;
  FString local_18;
  
  pFVar2 = GetFormattedId(this,&local_18,&PinNameDelimiter,param_1,param_2);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar3);
  this->PinName = local_res8;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = GetFormattedId(this,&local_18,&HlslIdDelimiter,param_1,param_2);
  pFVar4 = &this->HlslId;
  if (pFVar4 != pFVar2) {
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->HlslId).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (this->HlslId).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

