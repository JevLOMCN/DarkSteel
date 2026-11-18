// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// StaticStruct @ 1470b3a60

UScriptStruct * __cdecl FTestSharedFragment_Array::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Array,(UObject *)pUVar1,
                         L"TestSharedFragment_Array");
  }
  return Z_Registration_Info_UScriptStruct_FTestSharedFragment_Array.OuterSingleton;
}

// FTestSharedFragment_Array @ 1470f5790

FTestSharedFragment_Array * __thiscall
FTestSharedFragment_Array::FTestSharedFragment_Array(FTestSharedFragment_Array *this)

{
  int iVar1;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType((ForAnyElementType *)this);
  (this->Value).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    ((ForAnyElementType *)this);
  (this->Value).ArrayMax = iVar1;
  return this;
}

// ~FTestSharedFragment_Array @ 1470f8ad0

void __thiscall
FTestSharedFragment_Array::~FTestSharedFragment_Array(FTestSharedFragment_Array *this)

{
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&this->Value);
  return;
}

