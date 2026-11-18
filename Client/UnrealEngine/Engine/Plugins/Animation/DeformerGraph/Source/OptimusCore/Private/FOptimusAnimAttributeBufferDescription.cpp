// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e103ca0

UScriptStruct * __cdecl FOptimusAnimAttributeBufferDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeBufferDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeBufferDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription,
                         (UObject *)pUVar1,L"OptimusAnimAttributeBufferDescription");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeBufferDescription.OuterSingleton;
}

// FOptimusAnimAttributeBufferDescription @ 14e14fa80

FOptimusAnimAttributeBufferDescription * __thiscall
FOptimusAnimAttributeBufferDescription::FOptimusAnimAttributeBufferDescription
          (FOptimusAnimAttributeBufferDescription *this)

{
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
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
  return this;
}

// GetFormattedId @ 14e1c51d0

FString * __thiscall
FOptimusAnimAttributeBufferDescription::GetFormattedId
          (FOptimusAnimAttributeBufferDescription *this,FString *__return_storage_ptr__,
          FString *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar6 = 0;
  if (param_2) {
    pTVar4 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_18);
    if (pTVar4->Object == (FOptimusDataType *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = FText::ToString(&pTVar4->Object->DisplayName);
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
  }
  iVar1 = (this->Name).Data.ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar6;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(this->Name).Data.AllocatorInstance.Data,iVar7);
  return __return_storage_ptr__;
}

// Init @ 14e1ea6f0

FOptimusAnimAttributeBufferDescription * __thiscall
FOptimusAnimAttributeBufferDescription::Init
          (FOptimusAnimAttributeBufferDescription *this,FString *param_1,
          FOptimusDataTypeRef *param_2)

{
  TSharedPtr<FOptimusDataType_const_,1> *pTVar1;
  FOptimusDataTypeRef *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  FOptimusDataTypeRef local_38;
  
  ::FString::operator=(&this->Name,param_1);
  (this->DataType).TypeName = param_2->TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_2->TypeObject);
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

// UpdatePinNameAndHlslId @ 14e22c4a0

void __thiscall
FOptimusAnimAttributeBufferDescription::UpdatePinNameAndHlslId
          (FOptimusAnimAttributeBufferDescription *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FName local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  
  ::FString::FString(&local_58,PinNameDelimiter);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar7 = 0;
  if (param_1) {
    pTVar4 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_38);
    if ((pTVar4->Object == (FOptimusDataType *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = FText::ToString(&pTVar4->Object->DisplayName);
    iVar9 = (pFVar5->Data).ArrayNum;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    iVar9 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar9);
  }
  iVar9 = (this->Name).Data.ArrayNum;
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)(this->Name).Data.AllocatorInstance.Data,iVar8);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  this->PinName = local_res8;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,HlslIdDelimiter);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (param_1) {
    pTVar4 = FOptimusDataTypeRef::Resolve(&this->DataType,&local_28);
    if ((pTVar4->Object == (FOptimusDataType *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = FText::ToString(&pTVar4->Object->DisplayName);
    iVar9 = (pFVar5->Data).ArrayNum;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = iVar7;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    iVar9 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar9 = iVar7;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar9);
  }
  iVar9 = (this->Name).Data.ArrayNum;
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)(this->Name).Data.AllocatorInstance.Data,iVar8);
  pFVar5 = &this->HlslId;
  if (pFVar5 != &local_78) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (this->HlslId).Data.ArrayNum = local_78.Data.ArrayNum;
    (this->HlslId).Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

