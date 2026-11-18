// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 2

// StaticStruct @ 14d378120

UScriptStruct * __cdecl FPropertyBindingCopyInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingCopyInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingCopyInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingCopyInfo,(UObject *)pUVar1,
                         L"PropertyBindingCopyInfo");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingCopyInfo.OuterSingleton;
}

// FPropertyBindingCopyInfo @ 14d37ce00

FPropertyBindingCopyInfo * __thiscall
FPropertyBindingCopyInfo::FPropertyBindingCopyInfo(FPropertyBindingCopyInfo *this)

{
  (this->SourceIndirection).ArrayIndex = 0xffff;
  (this->SourceIndirection).Offset = 0;
  (this->SourceIndirection).NextIndex.Value = 0xffff;
  (this->SourceIndirection).Type = Offset;
  (this->SourceIndirection).InstanceStruct.field0_0x0.DebugPtr = (UStruct *)0x0;
  (this->SourceIndirection).ArrayProperty = (FArrayProperty *)0x0;
  (this->TargetIndirection).ArrayIndex = 0xffff;
  (this->TargetIndirection).Offset = 0;
  (this->TargetIndirection).NextIndex.Value = 0xffff;
  (this->TargetIndirection).Type = Offset;
  (this->TargetIndirection).InstanceStruct.field0_0x0.DebugPtr = (UStruct *)0x0;
  (this->TargetIndirection).ArrayProperty = (FArrayProperty *)0x0;
  FInstancedStruct::FInstancedStruct(&this->SourceDataHandle);
  this->SourceLeafProperty = (FProperty *)0x0;
  this->TargetLeafProperty = (FProperty *)0x0;
  (this->SourceStructType).field0_0x0.DebugPtr = (UStruct *)0x0;
  this->CopySize = 0;
  this->Type = None;
  this->bCopyFromTargetToSource = false;
  return this;
}

