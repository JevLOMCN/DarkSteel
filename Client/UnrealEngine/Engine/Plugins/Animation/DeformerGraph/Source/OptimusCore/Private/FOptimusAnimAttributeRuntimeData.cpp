// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// FOptimusAnimAttributeRuntimeData @ 14e14ff80

FOptimusAnimAttributeRuntimeData * __thiscall
FOptimusAnimAttributeRuntimeData::FOptimusAnimAttributeRuntimeData
          (FOptimusAnimAttributeRuntimeData *this,FOptimusAnimAttributeRuntimeData *param_1)

{
  undefined8 uVar1;
  
  this->Name = param_1->Name;
  this->HlslId = param_1->HlslId;
  this->BoneName = param_1->BoneName;
  this->CachedBoneIndex = param_1->CachedBoneIndex;
  this->Offset = param_1->Offset;
  this->Size = param_1->Size;
  this->ArrayIndexStart = param_1->ArrayIndexStart;
  *(undefined8 *)&this->ConvertFunc = *(undefined8 *)&param_1->ConvertFunc;
  *(undefined8 *)&(this->ConvertFunc).field_0x28 = *(undefined8 *)&(param_1->ConvertFunc).field_0x28
  ;
  *(undefined8 *)&(param_1->ConvertFunc).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->ConvertFunc).field_0x18;
  *(undefined8 *)&(this->ConvertFunc).field_0x10 = *(undefined8 *)&(param_1->ConvertFunc).field_0x10
  ;
  *(undefined8 *)&(this->ConvertFunc).field_0x18 = uVar1;
  *(undefined8 *)&(this->ConvertFunc).field_0x20 = *(undefined8 *)&(param_1->ConvertFunc).field_0x20
  ;
  if (*(longlong *)&this->ConvertFunc != 0) {
    *(undefined8 *)&param_1->ConvertFunc = 0;
  }
  (this->ArrayMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayMetadata).AllocatorInstance.Data = (param_1->ArrayMetadata).AllocatorInstance.Data;
  (param_1->ArrayMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayMetadata).ArrayNum = (param_1->ArrayMetadata).ArrayNum;
  (this->ArrayMetadata).ArrayMax = (param_1->ArrayMetadata).ArrayMax;
  (param_1->ArrayMetadata).ArrayNum = 0;
  (param_1->ArrayMetadata).ArrayMax = 0;
  this->AttributeType = param_1->AttributeType;
  (this->CachedDefaultValue).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ShaderValue.AllocatorInstance.Data =
       (param_1->CachedDefaultValue).ShaderValue.AllocatorInstance.Data;
  (param_1->CachedDefaultValue).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ShaderValue.ArrayNum =
       (param_1->CachedDefaultValue).ShaderValue.ArrayNum;
  (this->CachedDefaultValue).ShaderValue.ArrayMax =
       (param_1->CachedDefaultValue).ShaderValue.ArrayMax;
  (param_1->CachedDefaultValue).ShaderValue.ArrayNum = 0;
  (param_1->CachedDefaultValue).ShaderValue.ArrayMax = 0;
  (this->CachedDefaultValue).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ArrayList.AllocatorInstance.Data =
       (param_1->CachedDefaultValue).ArrayList.AllocatorInstance.Data;
  (param_1->CachedDefaultValue).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ArrayList.ArrayNum = (param_1->CachedDefaultValue).ArrayList.ArrayNum;
  (this->CachedDefaultValue).ArrayList.ArrayMax = (param_1->CachedDefaultValue).ArrayList.ArrayMax;
  (param_1->CachedDefaultValue).ArrayList.ArrayNum = 0;
  (param_1->CachedDefaultValue).ArrayList.ArrayMax = 0;
  return this;
}

// FOptimusAnimAttributeRuntimeData @ 14e150080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOptimusAnimAttributeRuntimeData * __thiscall
FOptimusAnimAttributeRuntimeData::FOptimusAnimAttributeRuntimeData
          (FOptimusAnimAttributeRuntimeData *this,FOptimusAnimAttributeDescription *param_1)

{
  FShaderValueContainer *pFVar1;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar3;
  FOptimusDataType *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar12;
  FOptimusDataTypeRegistry *this_00;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar13;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> *pTVar14;
  UScriptStruct *pUVar15;
  FShaderValueContainer *pFVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStack_d8 [32];
  TSharedPtr<FOptimusDataType_const_,1> local_b8;
  undefined1 local_a8 [48];
  FShaderValueContainer local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->ArrayIndexStart = -1;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  pFVar1 = &this->CachedDefaultValue;
  (this->HlslId).ComparisonIndex = 0;
  (this->HlslId).Number = 0;
  pTVar2 = &this->ArrayMetadata;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  pTVar3 = &(this->CachedDefaultValue).ArrayList;
  this->CachedBoneIndex = 0;
  pwVar21 = L"";
  this->Offset = -1;
  this->Size = 0;
  *(undefined8 *)&this->ConvertFunc = 0;
  *(undefined8 *)&(this->ConvertFunc).field_0x28 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ArrayMetadata).ArrayNum = 0;
  (this->ArrayMetadata).ArrayMax = 0;
  this->AttributeType = (UScriptStruct *)0x0;
  (pFVar1->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ShaderValue.ArrayNum = 0;
  (this->CachedDefaultValue).ShaderValue.ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ArrayList.ArrayNum = 0;
  (this->CachedDefaultValue).ArrayList.ArrayMax = 0;
  if ((param_1->Name).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_b8,pwVar20);
  this->Name = (FName)local_b8.Object;
  if ((param_1->HlslId).Data.ArrayNum != 0) {
    pwVar21 = (wchar_t *)(param_1->HlslId).Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_b8,pwVar21);
  this->HlslId = (FName)local_b8.Object;
  this->BoneName = param_1->BoneName;
  this->CachedBoneIndex = 0;
  this->Offset = 0;
  pTVar12 = FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_b8);
  pFVar4 = pTVar12->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  this->Size = pFVar4->ShaderValueSize;
  this_00 = FOptimusDataTypeRegistry::Get();
  local_b8.Object = (FOptimusDataType *)this_00;
  pTVar13 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                    *)&this_00->RegisteredTypes,(param_1->DataType).TypeName);
  puVar17 = &pTVar13->field_0x10;
  if (pTVar13 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar17 = (undefined1 *)0x0;
  }
  if (puVar17 == (undefined1 *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    local_78.ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_50 = (TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *)0x0;
  }
  else {
    local_78.ShaderValue.AllocatorInstance.Data = *(FScriptContainerElement **)(puVar17 + 0x40);
    uStack_50 = (TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *)0x0;
    if (local_78.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      puVar18 = (undefined8 *)(puVar17 + 0x50);
      if (*(undefined8 **)(puVar17 + 0x68) != (undefined8 *)0x0) {
        puVar18 = *(undefined8 **)(puVar17 + 0x68);
      }
      (**(code **)*puVar18)(puVar18,&local_78.ArrayList);
    }
  }
  pFVar5 = *(FScriptContainerElement **)&this->ConvertFunc;
  uVar11._0_4_ = *(int *)&(this->ConvertFunc).field_0x8;
  uVar11._4_4_ = *(int *)&(this->ConvertFunc).field_0xc;
  uVar6 = *(undefined4 *)&(this->ConvertFunc).field_0x10;
  uVar7 = *(undefined4 *)&(this->ConvertFunc).field_0x14;
  iVar8 = *(int *)&(this->ConvertFunc).field_0x18;
  iVar9 = *(int *)&(this->ConvertFunc).field_0x1c;
  uVar10 = *(undefined8 *)&(this->ConvertFunc).field_0x20;
  pTVar22 = *(TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> **)
             &(this->ConvertFunc).field_0x28;
  *(FScriptContainerElement **)&this->ConvertFunc = local_78.ShaderValue.AllocatorInstance.Data;
  *(int *)&(this->ConvertFunc).field_0x8 = local_78.ShaderValue.ArrayNum;
  *(int *)&(this->ConvertFunc).field_0xc = local_78.ShaderValue.ArrayMax;
  *(undefined4 *)&(this->ConvertFunc).field_0x10 = local_78.ArrayList.AllocatorInstance.Data._0_4_;
  *(undefined4 *)&(this->ConvertFunc).field_0x14 = local_78.ArrayList.AllocatorInstance.Data._4_4_;
  *(int *)&(this->ConvertFunc).field_0x18 = local_78.ArrayList.ArrayNum;
  *(int *)&(this->ConvertFunc).field_0x1c = local_78.ArrayList.ArrayMax;
  *(undefined4 *)&(this->ConvertFunc).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(this->ConvertFunc).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(this->ConvertFunc).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(this->ConvertFunc).field_0x2c = uStack_50._4_4_;
  local_78.ArrayList.AllocatorInstance.Data._0_4_ = uVar6;
  local_78.ArrayList.AllocatorInstance.Data._4_4_ = uVar7;
  local_78.ArrayList.ArrayNum = iVar8;
  local_78.ArrayList.ArrayMax = iVar9;
  local_58 = uVar10;
  uStack_50 = pTVar22;
  local_78.ShaderValue.AllocatorInstance.Data = pFVar5;
  local_78.ShaderValue._8_8_ = uVar11;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    pTVar19 = &local_78.ArrayList;
    if (pTVar22 != (TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar19 = pTVar22;
    }
    (**(code **)((pTVar19->AllocatorInstance).Data + 0x10))();
  }
  pTVar14 = FOptimusDataTypeRegistry::FindArrayMetadata
                      (this_00,(TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_>
                                *)&local_78,(param_1->DataType).TypeName);
  if (pTVar2 != pTVar14) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArrayMetadata).ArrayNum = pTVar14->ArrayNum;
    (this->ArrayMetadata).ArrayMax = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (local_78.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ShaderValue.AllocatorInstance.Data);
  }
  pUVar15 = FOptimusDataTypeRegistry::FindAttributeType
                      ((FOptimusDataTypeRegistry *)local_b8.Object,(param_1->DataType).TypeName);
  this->AttributeType = pUVar15;
  local_a8._0_8_ = (param_1->DataType).TypeName;
  local_a8._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_a8 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  pFVar16 = FOptimusValueContainerStruct::GetShaderValue
                      (&param_1->DefaultValueStruct,&local_78,(FOptimusDataTypeRef *)local_a8);
  if (pFVar1 != pFVar16) {
    pFVar5 = (pFVar1->ShaderValue).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->ShaderValue).AllocatorInstance.Data = (pFVar16->ShaderValue).AllocatorInstance.Data;
    (pFVar16->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedDefaultValue).ShaderValue.ArrayNum = (pFVar16->ShaderValue).ArrayNum;
    (this->CachedDefaultValue).ShaderValue.ArrayMax = (pFVar16->ShaderValue).ArrayMax;
    (pFVar16->ShaderValue).ArrayNum = 0;
    (pFVar16->ShaderValue).ArrayMax = 0;
  }
  pTVar22 = &pFVar16->ArrayList;
  if (pTVar3 != pTVar22) {
    DestructItems<FArrayShaderValue,int>
              ((FArrayShaderValue *)(pTVar3->AllocatorInstance).Data,
               (this->CachedDefaultValue).ArrayList.ArrayNum);
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar22->AllocatorInstance).Data;
    (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CachedDefaultValue).ArrayList.ArrayNum = (pFVar16->ArrayList).ArrayNum;
    (this->CachedDefaultValue).ArrayList.ArrayMax = (pFVar16->ArrayList).ArrayMax;
    (pFVar16->ArrayList).ArrayNum = 0;
    (pFVar16->ArrayList).ArrayMax = 0;
  }
  DestructItems<FArrayShaderValue,int>
            ((FArrayShaderValue *)
             CONCAT44(local_78.ArrayList.AllocatorInstance.Data._4_4_,
                      local_78.ArrayList.AllocatorInstance.Data._0_4_),local_78.ArrayList.ArrayNum);
  if ((void *)CONCAT44(local_78.ArrayList.AllocatorInstance.Data._4_4_,
                       local_78.ArrayList.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_78.ArrayList.AllocatorInstance.Data._4_4_,
                                   local_78.ArrayList.AllocatorInstance.Data._0_4_));
  }
  if (local_78.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ShaderValue.AllocatorInstance.Data);
  }
  return this;
}

