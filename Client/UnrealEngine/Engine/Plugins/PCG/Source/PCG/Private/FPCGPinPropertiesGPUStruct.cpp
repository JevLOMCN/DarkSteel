// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 1497895a0

UScriptStruct * __cdecl FPCGPinPropertiesGPUStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPinPropertiesGPUStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPinPropertiesGPUStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPinPropertiesGPUStruct,(UObject *)pUVar1,
                         L"PCGPinPropertiesGPUStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPinPropertiesGPUStruct.OuterSingleton;
}

// operator= @ 1497e37a0

FPCGPinPropertiesGPUStruct * __thiscall
FPCGPinPropertiesGPUStruct::operator=
          (FPCGPinPropertiesGPUStruct *this,FPCGPinPropertiesGPUStruct *param_1)

{
  this->InitializationMode = param_1->InitializationMode;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->PinsToInititalizeFrom,&param_1->PinsToInititalizeFrom);
  this->DataCountMode = param_1->DataCountMode;
  this->DataMultiplicity = param_1->DataMultiplicity;
  this->DataCount = param_1->DataCount;
  this->ElementCountMode = param_1->ElementCountMode;
  this->ElementMultiplicity = param_1->ElementMultiplicity;
  this->ElementCount = param_1->ElementCount;
  (this->NumElements2D).field0_0x0 = (param_1->NumElements2D).field0_0x0;
  this->ElementCountMultiplier = param_1->ElementCountMultiplier;
  this->AttributeInheritanceMode = param_1->AttributeInheritanceMode;
  TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::operator=
            (&this->CreatedKernelAttributeKeys,&param_1->CreatedKernelAttributeKeys);
  return this;
}

