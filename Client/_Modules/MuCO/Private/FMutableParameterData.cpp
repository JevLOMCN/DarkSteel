// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 4

// StaticStruct @ 14ab99410

UScriptStruct * __cdecl FMutableParameterData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableParameterData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableParameterData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableParameterData,(UObject *)pUVar1,
                         L"MutableParameterData");
  }
  return Z_Registration_Info_UScriptStruct_FMutableParameterData.OuterSingleton;
}

// FMutableParameterData @ 14ab9f800

FMutableParameterData * __thiscall
FMutableParameterData::FMutableParameterData(FMutableParameterData *this)

{
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)this);
  (this->ParamUIMetadata).MaximumValue = 1.0;
  (this->ParamUIMetadata).MinimumValue = 0.0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.ArrayNum = 0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.ArrayMax = 0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.ArrayNum = 0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.ArrayMax = 0;
  *(undefined8 *)&this->ArrayIntegerParameterOption = 0;
  *(undefined8 *)&(this->ArrayIntegerParameterOption).field_0x8 = 0;
  *(undefined8 *)&(this->ArrayIntegerParameterOption).field_0x20 = 0;
  this->Type = None;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x28 = 0;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x34 = 0;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ArrayIntegerParameterOption).field_0x40 = 0;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x48 = 0;
  this->IntegerParameterGroupType = COGT_ONE_OR_NONE;
  return this;
}

// ~FMutableParameterData @ 14aba2580

void __thiscall FMutableParameterData::~FMutableParameterData(FMutableParameterData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ArrayIntegerParameterOption).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ArrayIntegerParameterOption);
  pFVar2 = (this->ParamUIMetadata).GameplayTags.ParentTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ParamUIMetadata).GameplayTags.GameplayTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMutableUIMetadata::~FMutableUIMetadata((FMutableUIMetadata *)this);
  return;
}

// FMutableParameterData @ 14abbc9e0

FMutableParameterData * __thiscall
FMutableParameterData::FMutableParameterData
          (FMutableParameterData *this,FMutableParamUIMetadata *param_1,
          EMutableParameterType param_2)

{
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)this);
  (this->ParamUIMetadata).MaximumValue = 1.0;
  (this->ParamUIMetadata).MinimumValue = 0.0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.ArrayNum = 0;
  (this->ParamUIMetadata).GameplayTags.GameplayTags.ArrayMax = 0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.ArrayNum = 0;
  (this->ParamUIMetadata).GameplayTags.ParentTags.ArrayMax = 0;
  this->Type = None;
  *(undefined8 *)&this->ArrayIntegerParameterOption = 0;
  *(undefined8 *)&(this->ArrayIntegerParameterOption).field_0x8 = 0;
  *(undefined8 *)&(this->ArrayIntegerParameterOption).field_0x20 = 0;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x28 = 0;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x34 = 0;
  *(undefined8 *)&(this->ArrayIntegerParameterOption).field_0x40 = 0;
  *(undefined4 *)&(this->ArrayIntegerParameterOption).field_0x48 = 0;
  this->IntegerParameterGroupType = COGT_ONE_OR_NONE;
  FMutableParamUIMetadata::operator=(&this->ParamUIMetadata,param_1);
  this->Type = param_2;
  return this;
}

