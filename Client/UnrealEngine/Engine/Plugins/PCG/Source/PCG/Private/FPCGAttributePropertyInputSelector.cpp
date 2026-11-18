// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// ~FPCGAttributePropertyInputSelector @ 14973d3d0

void __thiscall
FPCGAttributePropertyInputSelector::~FPCGAttributePropertyInputSelector
          (FPCGAttributePropertyInputSelector *this)

{
  DestructItems<FString,int>(*(FString **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
    return;
  }
  return;
}

// operator= @ 149bea670

FPCGAttributePropertyInputSelector * __thiscall
FPCGAttributePropertyInputSelector::operator=
          (FPCGAttributePropertyInputSelector *this,FPCGAttributePropertyInputSelector *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FString *pFVar4;
  
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  puVar1 = &this->field_0x28;
  *(undefined8 *)&this->field_0xc = *(undefined8 *)&param_1->field_0xc;
  *(undefined8 *)&this->field_0x14 = *(undefined8 *)&param_1->field_0x14;
  *(undefined8 *)&this->field_0x1c = *(undefined8 *)&param_1->field_0x1c;
  if (puVar1 != &param_1->field_0x28) {
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)&this->field_0x30);
    iVar3 = *(int *)&param_1->field_0x30;
    puVar2 = &this->field_0x34;
    pFVar4 = *(FString **)&param_1->field_0x28;
    *(int *)&this->field_0x30 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*(int *)puVar2,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
      ConstructItems<FString,FString,int>(*(void **)puVar1,pFVar4,iVar3);
    }
  }
  this->field_0x38 = param_1->field_0x38;
  return this;
}

// StaticStruct @ 149d76bb0

UScriptStruct * __cdecl FPCGAttributePropertyInputSelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector,
                         (UObject *)pUVar1,L"PCGAttributePropertyInputSelector");
  }
  return Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton;
}

// FPCGAttributePropertyInputSelector @ 149e34f60

FPCGAttributePropertyInputSelector * __thiscall
FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
          (FPCGAttributePropertyInputSelector *this)

{
  uint uVar1;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  this->field_0x38 = 0;
  *(undefined ***)this = &___7FPCGAttributePropertyInputSelector__6B_;
  uVar1 = PCGMetadataAttributeConstants::LastAttributeName.Number;
  *(uint *)&this->field_0x14 =
       PCGMetadataAttributeConstants::LastAttributeName.ComparisonIndex.Value;
  *(uint *)&this->field_0x18 = uVar1;
  return this;
}

// ApplyDeprecation @ 149e4a160

void __thiscall
FPCGAttributePropertyInputSelector::ApplyDeprecation
          (FPCGAttributePropertyInputSelector *this,int param_1)

{
  FName FVar1;
  uint uVar2;
  
  if (((param_1 < 0xc) && (*(int *)&this->field_0x8 == 0)) &&
     (FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x14,
     FVar1.Number = *(uint *)&this->field_0x18,
     FVar1 == PCGMetadataAttributeConstants::LastAttributeName)) {
    uVar2 = PCGMetadataAttributeConstants::LastCreatedAttributeName.Number;
    *(uint *)&this->field_0x14 =
         PCGMetadataAttributeConstants::LastCreatedAttributeName.ComparisonIndex.Value;
    *(uint *)&this->field_0x18 = uVar2;
  }
  return;
}

// CopyAndFixLast @ 149e4def0

FPCGAttributePropertyInputSelector * __thiscall
FPCGAttributePropertyInputSelector::CopyAndFixLast
          (FPCGAttributePropertyInputSelector *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,UPCGData *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  char cVar4;
  UPCGMetadata *this_00;
  FName FVar5;
  int iVar6;
  FPCGAttributePropertySelector local_68;
  
  if (*(int *)&this->field_0x8 != 0) {
LAB_149e4e120:
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,
               (FPCGAttributePropertySelector *)this);
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
    return __return_storage_ptr__;
  }
  FVar5.ComparisonIndex.Value = *(uint *)&this->field_0x14;
  FVar5.Number = *(uint *)&this->field_0x18;
  if (((FVar5 == PCGMetadataAttributeConstants::LastAttributeName) && (param_1 != (UPCGData *)0x0))
     && (cVar4 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1), cVar4 != '\0')) {
    (**(code **)(param_1->_padding_ + 0x300))(param_1,&local_68);
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&local_68.ExtraNames,(TArray<FString,TSizedDefaultAllocator<32>_> *)&this->field_0x28
              );
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,&local_68);
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
    DestructItems<FString,int>
              ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum);
  }
  else {
    FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x14;
    FVar2.Number = *(uint *)&this->field_0x18;
    if (((FVar2 != PCGMetadataAttributeConstants::LastCreatedAttributeName) ||
        (param_1 == (UPCGData *)0x0)) ||
       (this_00 = PCGMetadataHelpers::GetConstMetadata(param_1), this_00 == (UPCGMetadata *)0x0))
    goto LAB_149e4e120;
    local_68.Selection = Attribute;
    local_68.DomainName.ComparisonIndex.Value = 0;
    local_68.DomainName.Number = 0;
    local_68.PropertyName.ComparisonIndex.Value = 0;
    local_68.PropertyName.Number = 0;
    local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ExtraNames.ArrayNum = 0;
    local_68.ExtraNames.ArrayMax = 0;
    local_68.ExtraProperty = Index;
    local_68._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
    local_68.AttributeName = PCGMetadataAttributeConstants::LastAttributeName;
    FVar5 = UPCGMetadata::GetLatestAttributeNameOrNone(this_00);
    FVar5 = *(FName *)FVar5;
    if (local_68.ExtraNames.ArrayNum != 0) {
      DestructItems<FString,int>
                ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum)
      ;
      if (local_68.ExtraNames.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_68.ExtraNames.AllocatorInstance,0,&local_68.ExtraNames.ArrayMax);
      }
    }
    if ((local_68.Selection != Attribute) || (local_68.AttributeName != FVar5)) {
      local_68.Selection = Attribute;
      local_68.AttributeName = FVar5;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&local_68.ExtraNames,(TArray<FString,TSizedDefaultAllocator<32>_> *)&this->field_0x28
              );
    FVar3.Data = local_68.ExtraNames.AllocatorInstance.Data;
    iVar6 = local_68.ExtraNames.ArrayNum;
    puVar1 = &__return_storage_ptr__->field_0x28;
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertySelector__6B_;
    *(EPCGAttributePropertySelection *)&__return_storage_ptr__->field_0x8 = local_68.Selection;
    *(ulonglong *)&__return_storage_ptr__->field_0xc =
         CONCAT44(local_68.DomainName.Number,local_68.DomainName.ComparisonIndex.Value);
    *(uint *)&__return_storage_ptr__->field_0x14 = local_68.AttributeName.ComparisonIndex.Value;
    *(uint *)&__return_storage_ptr__->field_0x18 = local_68.AttributeName.Number;
    *(uint *)&__return_storage_ptr__->field_0x1c = local_68.PropertyName.ComparisonIndex.Value;
    *(uint *)&__return_storage_ptr__->field_0x20 = local_68.PropertyName.Number;
    *(undefined8 *)puVar1 = 0;
    *(int *)&__return_storage_ptr__->field_0x30 = local_68.ExtraNames.ArrayNum;
    if (local_68.ExtraNames.ArrayNum == 0) {
      *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
      iVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_68.ExtraNames.ArrayNum,0,(ForAnyElementType *)puVar1,
                 local_68.ExtraNames.ArrayNum,(int *)&__return_storage_ptr__->field_0x34);
      ConstructItems<FString,FString,int>(*(void **)puVar1,(FString *)FVar3.Data,iVar6);
      iVar6 = local_68.ExtraNames.ArrayNum;
    }
    __return_storage_ptr__->field_0x38 = local_68.ExtraProperty;
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
    DestructItems<FString,int>((FString *)local_68.ExtraNames.AllocatorInstance.Data,iVar6);
  }
  if (local_68.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 149e8d890

bool __thiscall
FPCGAttributePropertyInputSelector::SerializeFromMismatchedTag
          (FPCGAttributePropertyInputSelector *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  FNameEntryId FVar5;
  UPackage *pUVar6;
  FName FVar7;
  undefined4 extraout_var;
  longlong local_res10;
  undefined1 local_res20 [8];
  
  iVar1 = (param_1->TypeName).Index;
  local_res10._0_4_ = iVar1;
  if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertySelector,(UObject *)pUVar6,
                         L"PCGAttributePropertySelector");
  }
  bVar4 = UE::FPropertyTypeName::IsStruct
                    ((FPropertyTypeName *)&local_res10,
                     (FName)(Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.
                            OuterSingleton)->_padding_);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector,
                           (UObject *)pUVar6,L"PCGAttributePropertyInputSelector");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton,
               param_2,this,(void *)0x0);
    return true;
  }
  local_res10 = CONCAT44(local_res10._4_4_,(param_1->TypeName).Index);
  FVar7 = UE::FPropertyTypeName::GetName((FPropertyTypeName *)&local_res10);
  uVar2 = *(ulonglong *)FVar7;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
  if (uVar2 == *(uint *)CONCAT44(extraout_var,FVar5.Value)) {
    local_res10 = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res10);
    lVar3 = local_res10;
    FPCGAttributePropertySelector::ResetExtraNames((FPCGAttributePropertySelector *)this);
    if ((*(int *)&this->field_0x8 != 0) || (*(longlong *)&this->field_0x14 != lVar3)) {
      *(undefined4 *)&this->field_0x8 = 0;
      *(longlong *)&this->field_0x14 = lVar3;
    }
    return true;
  }
  return false;
}

