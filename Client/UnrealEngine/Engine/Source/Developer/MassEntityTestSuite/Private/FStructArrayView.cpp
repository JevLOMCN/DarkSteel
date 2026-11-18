// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// FStructArrayView<FTestFragment_Bool> @ 1470cfb60

FStructArrayView * __thiscall
FStructArrayView::FStructArrayView<FTestFragment_Bool>
          (FStructArrayView *this,TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> *param_1)

{
  UPackage *pUVar1;
  
  this->DataPtr = (param_1->AllocatorInstance).Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar1,
                         L"TestFragment_Bool");
  }
  this->ScriptStruct = Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton;
  this->ElementSize = 1;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// FStructArrayView<FTestFragment_Float> @ 1470cfbd0

FStructArrayView * __thiscall
FStructArrayView::FStructArrayView<FTestFragment_Float>
          (FStructArrayView *this,TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> *param_1)

{
  UPackage *pUVar1;
  
  this->DataPtr = (param_1->AllocatorInstance).Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  this->ScriptStruct = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  this->ElementSize = 4;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// FStructArrayView<FTestFragment_Int> @ 1470cfc40

FStructArrayView * __thiscall
FStructArrayView::FStructArrayView<FTestFragment_Int>
          (FStructArrayView *this,TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_> *param_1)

{
  UPackage *pUVar1;
  
  this->DataPtr = (param_1->AllocatorInstance).Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                         L"TestFragment_Int");
  }
  this->ScriptStruct = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  this->ElementSize = 4;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// GetAt<FTestFragment_Bool_const_> @ 1470de8b0

FTestFragment_Bool * __thiscall
FStructArrayView::GetAt<FTestFragment_Bool_const_>(FStructArrayView *this,int param_1)

{
  void *pvVar1;
  FTestFragment_Bool *pFVar2;
  
  pvVar1 = GetDataAt(this,param_1);
  pFVar2 = UE::StructUtils::GetStructRef<FTestFragment_Bool_const_>(this->ScriptStruct,pvVar1);
  return pFVar2;
}

// GetAt<FTestFragment_Float_const_> @ 1470de8e0

FTestFragment_Float * __thiscall
FStructArrayView::GetAt<FTestFragment_Float_const_>(FStructArrayView *this,int param_1)

{
  void *pvVar1;
  FTestFragment_Float *pFVar2;
  
  pvVar1 = GetDataAt(this,param_1);
  pFVar2 = UE::StructUtils::GetStructRef<FTestFragment_Float_const_>(this->ScriptStruct,pvVar1);
  return pFVar2;
}

// GetAt<FTestFragment_Int> @ 1470de910

FTestFragment_Int * __thiscall
FStructArrayView::GetAt<FTestFragment_Int>(FStructArrayView *this,int param_1)

{
  void *pvVar1;
  FTestFragment_Int *pFVar2;
  
  pvVar1 = GetDataAt(this,param_1);
  pFVar2 = UE::StructUtils::GetStructRef<FTestFragment_Int>(this->ScriptStruct,pvVar1);
  return pFVar2;
}

// GetDataAt @ 147120100

void * __thiscall FStructArrayView::GetDataAt(FStructArrayView *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                       ,0x55,L"Array index out of bounds: %d from an array of size %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (void *)((ulonglong)this->ElementSize * (longlong)param_1 + (longlong)this->DataPtr);
}

