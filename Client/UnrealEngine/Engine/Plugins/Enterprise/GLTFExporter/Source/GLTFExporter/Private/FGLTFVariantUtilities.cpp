// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// AddUniqueMaterial @ 14e5e1700

FGLTFJsonMaterial * __cdecl
FGLTFVariantUtilities::AddUniqueMaterial
          (FGLTFConvertBuilder *param_1,UMaterialInterface *param_2,UMeshComponent *param_3,
          int param_4)

{
  FGLTFJsonMaterial *pFVar1;
  UMaterialInterface *local_res8;
  UMaterialInterface *local_18;
  undefined8 local_10;
  
  if ((*(char *)(param_1->_padding_ + 0xb2) == '\x02') &&
     (*(char *)(param_1->_padding_ + 0x37) == '\x02')) {
    pFVar1 = FGLTFConvertBuilder::AddUniqueMaterial(param_1,param_2,param_3,-1,param_4);
    return pFVar1;
  }
  if (param_2 == (UMaterialInterface *)0x0) {
    return (FGLTFJsonMaterial *)0x0;
  }
  local_18 = param_2;
  TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
  ::Emplace<UMaterialInterface_const_*_const_&>
            ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
              *)&param_1->_padding_,&local_res8,(bool *)&local_18);
  local_18 = (UMaterialInterface *)0x0;
  local_10 = 0;
  pFVar1 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
           ::GetOrAdd((param_1->MaterialConverter).Ptr,param_2,(FGLTFMeshData *)0x0,
                      (FMeshAttributesArray<int> *)&local_18);
  return pFVar1;
}

// GetLogContext @ 14e5f6d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
FGLTFVariantUtilities::GetLogContext(FString *__return_storage_ptr__,ULevelVariantSets *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLogContext @ 14e5f6d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
FGLTFVariantUtilities::GetLogContext(FString *__return_storage_ptr__,UPropertyValue *param_1)

{
  UVariantObjectBinding *this;
  FString *pFVar1;
  UVariant *this_00;
  FText *pFVar2;
  FString *pFVar3;
  UVariantSet *this_01;
  FString *pFVar4;
  ULevelVariantSets *pUVar5;
  FString *pFVar6;
  FName local_res8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  this = UPropertyValue::GetParent(param_1);
  pFVar1 = UPropertyValue::GetFullDisplayString(param_1);
  this_00 = UVariantObjectBinding::GetParent(this);
  pFVar2 = UVariantObjectBinding::GetDisplayText(this,&local_38);
  pFVar3 = FText::ToString(pFVar2);
  this_01 = UVariant::GetParent(this_00);
  pFVar2 = UVariant::GetDisplayText(this_00,&local_48);
  pFVar4 = FText::ToString(pFVar2);
  pUVar5 = UVariantSet::GetParent(this_01);
  pFVar2 = UVariantSet::GetDisplayText(this_01,&local_58);
  pFVar6 = FText::ToString(pFVar2);
  local_res8 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_res8,&local_c8);
  ::FString::ConcatFC(&local_d8,&local_c8,L"/");
  ::FString::ConcatFF(&local_a8,&local_d8,pFVar6);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  ::FString::ConcatFC(&local_b8,&local_a8,L"/");
  ::FString::ConcatFF(&local_88,&local_b8,pFVar4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  ::FString::ConcatFC(&local_98,&local_88,L"/");
  ::FString::ConcatFF(&local_68,&local_98,pFVar3);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  ::FString::ConcatFC(&local_78,&local_68,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_78,pFVar1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLogContext @ 14e5f6f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
FGLTFVariantUtilities::GetLogContext(FString *__return_storage_ptr__,UVariant *param_1)

{
  UVariantSet *this;
  FText *pFVar1;
  FString *pFVar2;
  ULevelVariantSets *pUVar3;
  FString *pFVar4;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  this = UVariant::GetParent(param_1);
  pFVar1 = UVariant::GetDisplayText(param_1,&local_18);
  pFVar2 = FText::ToString(pFVar1);
  pUVar3 = UVariantSet::GetParent(this);
  pFVar1 = UVariantSet::GetDisplayText(this,&local_28);
  pFVar4 = FText::ToString(pFVar1);
  local_res8 = (FName)pUVar3->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::ConcatFC(&local_68,&local_58,L"/");
  ::FString::ConcatFF(&local_38,&local_68,pFVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  ::FString::ConcatFC(&local_48,&local_38,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_48,pFVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetLogContext @ 14e5f70e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
FGLTFVariantUtilities::GetLogContext(FString *__return_storage_ptr__,UVariantObjectBinding *param_1)

{
  UVariant *this;
  FText *pFVar1;
  FString *pFVar2;
  UVariantSet *this_00;
  FString *pFVar3;
  ULevelVariantSets *pUVar4;
  FString *pFVar5;
  FName local_res8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  this = UVariantObjectBinding::GetParent(param_1);
  pFVar1 = UVariantObjectBinding::GetDisplayText(param_1,&local_38);
  pFVar2 = FText::ToString(pFVar1);
  this_00 = UVariant::GetParent(this);
  pFVar1 = UVariant::GetDisplayText(this,&local_48);
  pFVar3 = FText::ToString(pFVar1);
  pUVar4 = UVariantSet::GetParent(this_00);
  pFVar1 = UVariantSet::GetDisplayText(this_00,&local_58);
  pFVar5 = FText::ToString(pFVar1);
  local_res8 = (FName)pUVar4->_padding_;
  ::FName::ToString(&local_res8,&local_a8);
  ::FString::ConcatFC(&local_b8,&local_a8,L"/");
  ::FString::ConcatFF(&local_88,&local_b8,pFVar5);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  ::FString::ConcatFC(&local_98,&local_88,L"/");
  ::FString::ConcatFF(&local_68,&local_98,pFVar3);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  ::FString::ConcatFC(&local_78,&local_68,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_78,pFVar2);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetLogContext @ 14e5f7290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
FGLTFVariantUtilities::GetLogContext(FString *__return_storage_ptr__,UVariantSet *param_1)

{
  ULevelVariantSets *pUVar1;
  FText *this;
  FString *pFVar2;
  FName local_res8;
  FString local_38;
  FString local_28;
  FText local_18;
  
  pUVar1 = UVariantSet::GetParent(param_1);
  this = UVariantSet::GetDisplayText(param_1,&local_18);
  pFVar2 = FText::ToString(this);
  local_res8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  ::FString::ConcatFC(&local_38,&local_28,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_38,pFVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetPropertyValue @ 14e615190

bool __cdecl
FGLTFVariantUtilities::TryGetPropertyValue(UPropertyValue *param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_1 != (UPropertyValue *)0x0) {
    bVar2 = UPropertyValue::HasRecordedData(param_1);
    if (bVar2) {
      pTVar4 = UPropertyValue::GetRecordedData(param_1);
      if (param_3 != pTVar4->ArrayNum) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutSize == RecordedData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFVariantUtilities.cpp"
                           ,0x13,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      memcpy(param_2,(pTVar4->AllocatorInstance).Data,(ulonglong)param_3);
      return true;
    }
  }
  return false;
}

