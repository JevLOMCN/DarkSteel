// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// GetFragmentData<FTestFragment_Array> @ 1470def40

FTestFragment_Array * __thiscall
FMassEntityView::GetFragmentData<FTestFragment_Array>(FMassEntityView *this)

{
  UPackage *pUVar1;
  FTestFragment_Array *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar1,
                         L"TestFragment_Array");
  }
  pFVar2 = GetFragmentPtrChecked
                     (this,Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton);
  return pFVar2;
}

// GetFragmentData<FTestFragment_Float> @ 1470def90

FTestFragment_Float * __thiscall
FMassEntityView::GetFragmentData<FTestFragment_Float>(FMassEntityView *this)

{
  UPackage *pUVar1;
  FTestFragment_Float *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  pFVar2 = GetFragmentPtrChecked
                     (this,Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
  return pFVar2;
}

// GetFragmentData<FTestFragment_Int> @ 1470defe0

FTestFragment_Int * __thiscall
FMassEntityView::GetFragmentData<FTestFragment_Int>(FMassEntityView *this)

{
  UPackage *pUVar1;
  FTestFragment_Int *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                         L"TestFragment_Int");
  }
  pFVar2 = GetFragmentPtrChecked
                     (this,Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton);
  return pFVar2;
}

// IsValid @ 1471929e0

bool __thiscall FMassEntityView::IsValid(FMassEntityView *this)

{
  bool bVar1;
  
  bVar1 = FMassEntityInChunkDataHandle::IsValid(&this->EntityDataHandle,this->Archetype);
  return bVar1;
}

