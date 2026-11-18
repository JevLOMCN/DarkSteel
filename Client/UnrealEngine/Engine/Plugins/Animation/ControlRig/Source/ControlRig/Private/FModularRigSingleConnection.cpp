// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2049a0

UScriptStruct * __cdecl FModularRigSingleConnection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModularRigSingleConnection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModularRigSingleConnection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularRigSingleConnection,(UObject *)pUVar1,
                         L"ModularRigSingleConnection");
  }
  return Z_Registration_Info_UScriptStruct_FModularRigSingleConnection.OuterSingleton;
}

// GetTargetArray @ 14a26bae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FModularRigSingleConnection::GetTargetArray
          (FModularRigSingleConnection *this,
          TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FRigElementKey>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 1;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  Append<FRigElementKey,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&this->Targets);
  return __return_storage_ptr__;
}

