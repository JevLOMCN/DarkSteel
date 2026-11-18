// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149d76d60

UScriptStruct * __cdecl FPCGAttributePropertyOutputSelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputSelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputSelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector,
                         (UObject *)pUVar1,L"PCGAttributePropertyOutputSelector");
  }
  return Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputSelector.OuterSingleton;
}

// FPCGAttributePropertyOutputSelector @ 149e34fa0

FPCGAttributePropertyOutputSelector * __thiscall
FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
          (FPCGAttributePropertyOutputSelector *this)

{
  uint uVar1;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  this->field_0x38 = 0;
  *(undefined ***)this = &___7FPCGAttributePropertyOutputSelector__6B_;
  uVar1 = PCGMetadataAttributeConstants::SourceAttributeName.Number;
  *(uint *)&this->field_0x14 =
       PCGMetadataAttributeConstants::SourceAttributeName.ComparisonIndex.Value;
  *(uint *)&this->field_0x18 = uVar1;
  return this;
}

// CopyAndFixSource @ 149e4e180

FPCGAttributePropertyOutputSelector * __thiscall
FPCGAttributePropertyOutputSelector::CopyAndFixSource
          (FPCGAttributePropertyOutputSelector *this,
          FPCGAttributePropertyOutputSelector *__return_storage_ptr__,
          FPCGAttributePropertyInputSelector *param_1,UPCGData *param_2)

{
  ForAnyElementType FVar1;
  FName FVar2;
  UPCGMetadata *this_00;
  int iVar3;
  FPCGAttributePropertySelector local_68;
  
  if (*(int *)&this->field_0x8 != 0) {
LAB_149e4e454:
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,
               (FPCGAttributePropertySelector *)this);
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyOutputSelector__6B_;
    return __return_storage_ptr__;
  }
  FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x14;
  FVar2.Number = *(uint *)&this->field_0x18;
  if ((FVar2 == PCGMetadataAttributeConstants::SourceAttributeName) &&
     (param_1 != (FPCGAttributePropertyInputSelector *)0x0)) {
    FPCGAttributePropertySelector::CreateFromOtherSelector<FPCGAttributePropertyOutputSelector>
              ((FPCGAttributePropertyOutputSelector *)&local_68,
               (FPCGAttributePropertySelector *)param_1);
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&local_68.ExtraNames,(TArray<FString,TSizedDefaultAllocator<32>_> *)&this->field_0x28
              );
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,&local_68);
    iVar3 = local_68.ExtraNames.ArrayNum;
    goto LAB_149e4e43c;
  }
  if ((FVar2 == PCGMetadataAttributeConstants::SourceNameAttributeName) &&
     (param_1 != (FPCGAttributePropertyInputSelector *)0x0)) {
    local_68.AttributeName = PCGMetadataAttributeConstants::SourceAttributeName;
    local_68.Selection = Attribute;
    local_68.DomainName.ComparisonIndex.Value = 0;
    local_68.DomainName.Number = 0;
    local_68.PropertyName.ComparisonIndex.Value = 0;
    local_68.PropertyName.Number = 0;
    local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ExtraNames.ArrayNum = 0;
    local_68.ExtraNames.ArrayMax = 0;
    local_68.ExtraProperty = Index;
    local_68._padding_ = (longlong)&___7FPCGAttributePropertyOutputSelector__6B_;
    FVar2 = FPCGAttributePropertySelector::GetName((FPCGAttributePropertySelector *)param_1);
    FVar2 = *(FName *)FVar2;
    if (local_68.ExtraNames.ArrayNum != 0) {
      DestructItems<FString,int>
                ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum)
      ;
      if (local_68.ExtraNames.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_68.ExtraNames.AllocatorInstance,0,&local_68.ExtraNames.ArrayMax);
      }
    }
    if ((local_68.Selection != Attribute) || (local_68.AttributeName != FVar2)) {
      local_68.Selection = Attribute;
      local_68.AttributeName = FVar2;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&local_68.ExtraNames,(TArray<FString,TSizedDefaultAllocator<32>_> *)&this->field_0x28
              );
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertySelector__6B_;
    *(EPCGAttributePropertySelection *)&__return_storage_ptr__->field_0x8 = local_68.Selection;
    *(ulonglong *)&__return_storage_ptr__->field_0xc =
         CONCAT44(local_68.DomainName.Number,local_68.DomainName.ComparisonIndex.Value);
    *(uint *)&__return_storage_ptr__->field_0x14 = local_68.AttributeName.ComparisonIndex.Value;
    *(uint *)&__return_storage_ptr__->field_0x18 = local_68.AttributeName.Number;
    *(uint *)&__return_storage_ptr__->field_0x1c = local_68.PropertyName.ComparisonIndex.Value;
    *(uint *)&__return_storage_ptr__->field_0x20 = local_68.PropertyName.Number;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(int *)&__return_storage_ptr__->field_0x30 = local_68.ExtraNames.ArrayNum;
    iVar3 = local_68.ExtraNames.ArrayNum;
    if (local_68.ExtraNames.ArrayNum == 0) {
      *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
      iVar3 = 0;
    }
    else {
LAB_149e4e3f4:
      FVar1.Data = local_68.ExtraNames.AllocatorInstance.Data;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,0,(ForAnyElementType *)&__return_storage_ptr__->field_0x28,iVar3,
                 (int *)&__return_storage_ptr__->field_0x34);
      ConstructItems<FString,FString,int>
                (*(void **)&__return_storage_ptr__->field_0x28,(FString *)FVar1.Data,iVar3);
      iVar3 = local_68.ExtraNames.ArrayNum;
    }
  }
  else {
    if (((FVar2 != PCGMetadataAttributeConstants::LastCreatedAttributeName) ||
        (param_2 == (UPCGData *)0x0)) ||
       (this_00 = PCGMetadataHelpers::GetConstMetadata(param_2), this_00 == (UPCGMetadata *)0x0))
    goto LAB_149e4e454;
    local_68._padding_ = (longlong)&___7FPCGAttributePropertyOutputSelector__6B_;
    local_68.Selection = Attribute;
    local_68.DomainName.ComparisonIndex.Value = 0;
    local_68.DomainName.Number = 0;
    local_68.PropertyName.ComparisonIndex.Value = 0;
    local_68.PropertyName.Number = 0;
    local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ExtraNames.ArrayNum = 0;
    local_68.ExtraNames.ArrayMax = 0;
    local_68.ExtraProperty = Index;
    local_68.AttributeName = PCGMetadataAttributeConstants::SourceAttributeName;
    FVar2 = UPCGMetadata::GetLatestAttributeNameOrNone(this_00);
    FVar2 = *(FName *)FVar2;
    if (local_68.ExtraNames.ArrayNum != 0) {
      DestructItems<FString,int>
                ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum)
      ;
      if (local_68.ExtraNames.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_68.ExtraNames.AllocatorInstance,0,&local_68.ExtraNames.ArrayMax);
      }
    }
    if ((local_68.Selection != Attribute) || (local_68.AttributeName != FVar2)) {
      local_68.Selection = Attribute;
      local_68.AttributeName = FVar2;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&local_68.ExtraNames,(TArray<FString,TSizedDefaultAllocator<32>_> *)&this->field_0x28
              );
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertySelector__6B_;
    *(EPCGAttributePropertySelection *)&__return_storage_ptr__->field_0x8 = local_68.Selection;
    *(ulonglong *)&__return_storage_ptr__->field_0xc =
         CONCAT44(local_68.DomainName.Number,local_68.DomainName.ComparisonIndex.Value);
    *(uint *)&__return_storage_ptr__->field_0x14 = local_68.AttributeName.ComparisonIndex.Value;
    *(uint *)&__return_storage_ptr__->field_0x18 = local_68.AttributeName.Number;
    *(uint *)&__return_storage_ptr__->field_0x1c = local_68.PropertyName.ComparisonIndex.Value;
    *(uint *)&__return_storage_ptr__->field_0x20 = local_68.PropertyName.Number;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(int *)&__return_storage_ptr__->field_0x30 = local_68.ExtraNames.ArrayNum;
    iVar3 = local_68.ExtraNames.ArrayNum;
    if (local_68.ExtraNames.ArrayNum != 0) goto LAB_149e4e3f4;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
    iVar3 = 0;
  }
  __return_storage_ptr__->field_0x38 = local_68.ExtraProperty;
LAB_149e4e43c:
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyOutputSelector__6B_;
  DestructItems<FString,int>((FString *)local_68.ExtraNames.AllocatorInstance.Data,iVar3);
  if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

