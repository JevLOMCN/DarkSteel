// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// StaticStruct @ 14e4ccd80

UScriptStruct * __cdecl FInterchangeContentImportSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeContentImportSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UScriptStruct_FInterchangeContentImportSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeContentImportSettings,
                         (UObject *)pUVar1,L"InterchangeContentImportSettings");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeContentImportSettings.OuterSingleton;
}

// FInterchangeContentImportSettings @ 14e4d7570

FInterchangeContentImportSettings * __thiscall
FInterchangeContentImportSettings::FInterchangeContentImportSettings
          (FInterchangeContentImportSettings *this)

{
  FInterchangeImportSettings::FInterchangeImportSettings((FInterchangeImportSettings *)this);
  *(undefined8 *)&this->DefaultPipelineStackOverride = 0;
  *(undefined8 *)&(this->DefaultPipelineStackOverride).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultPipelineStackOverride).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultPipelineStackOverride).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x48 = 0;
  *(undefined8 *)&this->ShowImportDialogOverride = 0;
  *(undefined8 *)&(this->ShowImportDialogOverride).field_0x8 = 0;
  *(undefined8 *)&(this->ShowImportDialogOverride).field_0x20 = 0;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x28 = 0;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x34 = 0;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ShowImportDialogOverride).field_0x40 = 0;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x48 = 0;
  return this;
}

// ~FInterchangeContentImportSettings @ 14e4da4b0

void __thiscall
FInterchangeContentImportSettings::~FInterchangeContentImportSettings
          (FInterchangeContentImportSettings *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ShowImportDialogOverride).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ShowImportDialogOverride);
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultPipelineStackOverride).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DefaultPipelineStackOverride);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

