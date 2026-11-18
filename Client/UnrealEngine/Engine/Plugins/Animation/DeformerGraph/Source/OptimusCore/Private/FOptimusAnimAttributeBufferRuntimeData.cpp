// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// FOptimusAnimAttributeBufferRuntimeData @ 14e14fb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOptimusAnimAttributeBufferRuntimeData * __thiscall
FOptimusAnimAttributeBufferRuntimeData::FOptimusAnimAttributeBufferRuntimeData
          (FOptimusAnimAttributeBufferRuntimeData *this,
          FOptimusAnimAttributeBufferDescription *param_1)

{
  FShaderValueContainer *pFVar1;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FOptimusDataType *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  FName FVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar13;
  FOptimusDataTypeRegistry *this_00;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar14;
  UScriptStruct *pUVar15;
  FShaderValueContainer *pFVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [16];
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar1 = &this->CachedDefaultValue;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  pTVar2 = &(this->CachedDefaultValue).ArrayList;
  (this->HlslId).ComparisonIndex = 0;
  (this->HlslId).Number = 0;
  pwVar21 = L"";
  this->Offset = -1;
  this->Size = 0;
  *(undefined8 *)&this->ConvertFunc = 0;
  *(undefined8 *)&(this->ConvertFunc).field_0x28 = 0;
  this->AttributeType = (UScriptStruct *)0x0;
  (pFVar1->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ShaderValue.ArrayNum = 0;
  (this->CachedDefaultValue).ShaderValue.ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultValue).ArrayList.ArrayNum = 0;
  (this->CachedDefaultValue).ArrayList.ArrayMax = 0;
  if ((param_1->Name).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)local_78,pwVar20);
  (this->Name).ComparisonIndex = (FNameEntryId)local_78._0_4_;
  (this->Name).Number = local_78._4_4_;
  if ((param_1->HlslId).Data.ArrayNum != 0) {
    pwVar21 = (wchar_t *)(param_1->HlslId).Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)local_78,pwVar21);
  (this->HlslId).ComparisonIndex = (FNameEntryId)local_78._0_4_;
  (this->HlslId).Number = local_78._4_4_;
  this->Offset = 0;
  pTVar13 = FOptimusDataTypeRef::Resolve
                      (&param_1->DataType,(TSharedPtr<FOptimusDataType_const_,1> *)local_78);
  pFVar3 = pTVar13->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78._8_8_);
  this->Size = pFVar3->ShaderValueSize;
  this_00 = FOptimusDataTypeRegistry::Get();
  pTVar14 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                    *)&this_00->RegisteredTypes,(param_1->DataType).TypeName);
  puVar17 = &pTVar14->field_0x10;
  if (pTVar14 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar17 = (undefined1 *)0x0;
  }
  if (puVar17 == (undefined1 *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_50 = (longlong *)0x0;
  }
  else {
    local_78._0_8_ = *(FName *)(puVar17 + 0x40);
    uStack_50 = (longlong *)0x0;
    if ((FName)local_78._0_8_ != (FName)0x0) {
      puVar18 = (undefined8 *)(puVar17 + 0x50);
      if (*(undefined8 **)(puVar17 + 0x68) != (undefined8 *)0x0) {
        puVar18 = *(undefined8 **)(puVar17 + 0x68);
      }
      (**(code **)*puVar18)(puVar18,&local_68);
    }
  }
  FVar11.ComparisonIndex.Value = *(uint *)&(this->ConvertFunc).field_0x0;
  FVar11.Number = *(uint *)&(this->ConvertFunc).field_0x4;
  pTVar12 = *(TReferenceControllerBase<1> **)&(this->ConvertFunc).field_0x8;
  uVar5 = *(undefined4 *)&(this->ConvertFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->ConvertFunc).field_0x14;
  iVar7 = *(int *)&(this->ConvertFunc).field_0x18;
  iVar8 = *(int *)&(this->ConvertFunc).field_0x1c;
  uVar9 = *(undefined8 *)&(this->ConvertFunc).field_0x20;
  plVar10 = *(longlong **)&(this->ConvertFunc).field_0x28;
  *(undefined8 *)&this->ConvertFunc = local_78._0_8_;
  *(undefined8 *)&(this->ConvertFunc).field_0x8 = local_78._8_8_;
  *(undefined4 *)&(this->ConvertFunc).field_0x10 = (undefined4)local_68;
  *(undefined4 *)&(this->ConvertFunc).field_0x14 = local_68._4_4_;
  *(int *)&(this->ConvertFunc).field_0x18 = iStack_60;
  *(int *)&(this->ConvertFunc).field_0x1c = iStack_5c;
  *(undefined4 *)&(this->ConvertFunc).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(this->ConvertFunc).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(this->ConvertFunc).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(this->ConvertFunc).field_0x2c = uStack_50._4_4_;
  local_68._0_4_ = uVar5;
  local_68._4_4_ = uVar6;
  iStack_60 = iVar7;
  iStack_5c = iVar8;
  local_58 = uVar9;
  uStack_50 = plVar10;
  local_78._0_8_ = FVar11;
  local_78._8_8_ = pTVar12;
  if (FVar11 != (FName)0x0) {
    plVar19 = &local_68;
    if (plVar10 != (longlong *)0x0) {
      plVar19 = plVar10;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  pUVar15 = FOptimusDataTypeRegistry::FindAttributeType(this_00,(param_1->DataType).TypeName);
  this->AttributeType = pUVar15;
  local_a8._0_8_ = (param_1->DataType).TypeName;
  local_a8._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_a8 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  pFVar16 = FOptimusValueContainerStruct::GetShaderValue
                      (&param_1->DefaultValueStruct,(FShaderValueContainer *)local_78,
                       (FOptimusDataTypeRef *)local_a8);
  if (pFVar1 != pFVar16) {
    pFVar4 = (pFVar1->ShaderValue).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->ShaderValue).AllocatorInstance.Data = (pFVar16->ShaderValue).AllocatorInstance.Data;
    (pFVar16->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedDefaultValue).ShaderValue.ArrayNum = (pFVar16->ShaderValue).ArrayNum;
    (this->CachedDefaultValue).ShaderValue.ArrayMax = (pFVar16->ShaderValue).ArrayMax;
    (pFVar16->ShaderValue).ArrayNum = 0;
    (pFVar16->ShaderValue).ArrayMax = 0;
  }
  pTVar22 = &pFVar16->ArrayList;
  if (pTVar2 != pTVar22) {
    DestructItems<FArrayShaderValue,int>
              ((FArrayShaderValue *)(pTVar2->AllocatorInstance).Data,
               (this->CachedDefaultValue).ArrayList.ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar22->AllocatorInstance).Data;
    (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CachedDefaultValue).ArrayList.ArrayNum = (pFVar16->ArrayList).ArrayNum;
    (this->CachedDefaultValue).ArrayList.ArrayMax = (pFVar16->ArrayList).ArrayMax;
    (pFVar16->ArrayList).ArrayNum = 0;
    (pFVar16->ArrayList).ArrayMax = 0;
  }
  DestructItems<FArrayShaderValue,int>
            ((FArrayShaderValue *)CONCAT44(local_68._4_4_,(undefined4)local_68),iStack_60);
  if ((void *)CONCAT44(local_68._4_4_,(undefined4)local_68) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_68._4_4_,(undefined4)local_68));
  }
  if ((FName)local_78._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return this;
}

