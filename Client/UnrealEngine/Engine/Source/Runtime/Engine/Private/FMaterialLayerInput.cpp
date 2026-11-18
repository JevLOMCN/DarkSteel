// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147eea3c0

UScriptStruct * __cdecl FMaterialLayerInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialLayerInput.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialLayerInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayerInput,(UObject *)pUVar1,
                         L"MaterialLayerInput");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialLayerInput.OuterSingleton;
}

// FMaterialLayerInput @ 147ef0230

FMaterialLayerInput * __thiscall
FMaterialLayerInput::FMaterialLayerInput
          (FMaterialLayerInput *this,FName param_1,EFunctionInputType param_2)

{
  *(FName *)((longlong)&this->_padding_ + 4) = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  (this->InputType).Value = (uchar)param_2;
  return this;
}

// GetInputName @ 147efb2d0

FString * __thiscall
FMaterialLayerInput::GetInputName(FMaterialLayerInput *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar1 = (this->InputType).Value;
  if ((bVar1 != 8) && (bVar1 != 0xd)) {
    UMaterialExpressionFunctionInput::GetInputTypeDisplayName(&local_18,(uint)bVar1);
    bVar2 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)&this->_padding_ + 4));
    if ((bVar2) && (1 < local_18.Data.ArrayNum)) {
      ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),&local_28);
      ::FString::AppendfImpl(&local_28,L" (%s)");
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AssignRange
                (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

