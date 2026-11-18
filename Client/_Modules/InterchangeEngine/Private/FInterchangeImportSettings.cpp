// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// StaticStruct @ 14e4cc570

UScriptStruct * __cdecl FInterchangeImportSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeImportSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UScriptStruct_FInterchangeImportSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeImportSettings,(UObject *)pUVar1,
                         L"InterchangeImportSettings");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeImportSettings.OuterSingleton;
}

// FInterchangeImportSettings @ 14e4d76c0

FInterchangeImportSettings * __thiscall
FInterchangeImportSettings::FInterchangeImportSettings(FInterchangeImportSettings *this)

{
  undefined1 *this_00;
  
  *(undefined8 *)&this->PipelineStacks = 0;
  *(undefined8 *)&(this->PipelineStacks).field_0x8 = 0;
  *(undefined8 *)&(this->PipelineStacks).field_0x20 = 0;
  *(undefined4 *)&(this->PipelineStacks).field_0x28 = 0;
  *(undefined4 *)&(this->PipelineStacks).field_0x2c = 0x80;
  *(undefined4 *)&(this->PipelineStacks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PipelineStacks).field_0x34 = 0;
  *(undefined8 *)&(this->PipelineStacks).field_0x40 = 0;
  *(undefined4 *)&(this->PipelineStacks).field_0x48 = 0;
  (this->DefaultPipelineStack).ComparisonIndex = 0;
  (this->DefaultPipelineStack).Number = 0;
  this_00 = &(this->ImportDialogClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->ImportDialogClass).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ImportDialogClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ImportDialogClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ImportDialogClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bShowImportDialog = true;
  this->bShowReimportDialog = false;
  return this;
}

// operator= @ 14e4dba40

FInterchangeImportSettings * __thiscall
FInterchangeImportSettings::operator=
          (FInterchangeImportSettings *this,FInterchangeImportSettings *param_1)

{
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->PipelineStacks).field_0x38,
               (int *)&(this->PipelineStacks).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->PipelineStacks).field_0x38,
               *(int *)&(param_1->PipelineStacks).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  this->DefaultPipelineStack = param_1->DefaultPipelineStack;
  *(undefined8 *)&(this->ImportDialogClass).SoftObjectPtr =
       *(undefined8 *)&(param_1->ImportDialogClass).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->ImportDialogClass).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->ImportDialogClass).SoftObjectPtr.field_0x8);
  this->bShowImportDialog = param_1->bShowImportDialog;
  this->bShowReimportDialog = param_1->bShowReimportDialog;
  return this;
}

