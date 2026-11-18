// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147b27e70

UScriptStruct * __cdecl FEdGraphTerminalType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEdGraphTerminalType.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEdGraphTerminalType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphTerminalType,(UObject *)pUVar1,
                         L"EdGraphTerminalType");
  }
  return Z_Registration_Info_UScriptStruct_FEdGraphTerminalType.OuterSingleton;
}

// FromPinType @ 147b62990

FEdGraphTerminalType * __cdecl
FEdGraphTerminalType::FromPinType
          (FEdGraphTerminalType *__return_storage_ptr__,FEdGraphPinType *param_1)

{
  undefined8 local_res8;
  
  (__return_storage_ptr__->TerminalCategory).ComparisonIndex = 0;
  (__return_storage_ptr__->TerminalCategory).Number = 0;
  (__return_storage_ptr__->TerminalSubCategory).ComparisonIndex = 0;
  (__return_storage_ptr__->TerminalSubCategory).Number = 0;
  (__return_storage_ptr__->TerminalSubCategoryObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            (&(__return_storage_ptr__->TerminalSubCategoryObject).WeakPtr,(FObjectPtr)&local_res8);
  __return_storage_ptr__->bTerminalIsConst = false;
  __return_storage_ptr__->bTerminalIsWeakPointer = false;
  __return_storage_ptr__->bTerminalIsUObjectWrapper = false;
  __return_storage_ptr__->TerminalCategory = param_1->PinCategory;
  __return_storage_ptr__->TerminalSubCategory = param_1->PinSubCategory;
  (__return_storage_ptr__->TerminalSubCategoryObject).WeakPtr =
       (param_1->PinSubCategoryObject).WeakPtr;
  __return_storage_ptr__->bTerminalIsConst = param_1->bIsConst;
  __return_storage_ptr__->bTerminalIsWeakPointer = param_1->bIsWeakPointer;
  __return_storage_ptr__->bTerminalIsUObjectWrapper = param_1->bIsUObjectWrapper;
  return __return_storage_ptr__;
}

