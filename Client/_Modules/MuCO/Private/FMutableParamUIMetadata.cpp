// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 4

// FMutableParamUIMetadata @ 14abbc920

FMutableParamUIMetadata * __thiscall
FMutableParamUIMetadata::FMutableParamUIMetadata
          (FMutableParamUIMetadata *this,FMutableParamUIMetadata *param_1)

{
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)this,(FMutableUIMetadata *)param_1);
  this->MinimumValue = param_1->MinimumValue;
  this->MaximumValue = param_1->MaximumValue;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  FGameplayTagContainer::operator=(&this->GameplayTags,&param_1->GameplayTags);
  return this;
}

// FMutableParamUIMetadata @ 14abbc990

FMutableParamUIMetadata * __thiscall
FMutableParamUIMetadata::FMutableParamUIMetadata(FMutableParamUIMetadata *this)

{
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)this);
  this->MaximumValue = 1.0;
  this->MinimumValue = 0.0;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  return this;
}

// operator= @ 14abc0dc0

FMutableParamUIMetadata * __thiscall
FMutableParamUIMetadata::operator=(FMutableParamUIMetadata *this,FMutableParamUIMetadata *param_1)

{
  ::FString::operator=((FString *)this,(FString *)param_1);
  ::FString::operator=((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->_padding_,(FSoftObjectPath *)&param_1->_padding_);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->_padding_,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->_padding_);
  if (&this->_padding_ != &param_1->_padding_) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->_padding_,(int *)&this->_padding_,
               (ForElementType<FSetElementId> *)&param_1->_padding_,(int)param_1->_padding_);
    TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->_padding_,
                (TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->_padding_);
  }
  this->MinimumValue = param_1->MinimumValue;
  this->MaximumValue = param_1->MaximumValue;
  FGameplayTagContainer::operator=(&this->GameplayTags,&param_1->GameplayTags);
  return this;
}

// StaticStruct @ 14ac03670

UScriptStruct * __cdecl FMutableParamUIMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableParamUIMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableParamUIMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableParamUIMetadata,(UObject *)pUVar1,
                         L"MutableParamUIMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FMutableParamUIMetadata.OuterSingleton;
}

