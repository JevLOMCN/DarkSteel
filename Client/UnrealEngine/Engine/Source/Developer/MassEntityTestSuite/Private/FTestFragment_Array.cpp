// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// StaticStruct @ 1470b2200

UScriptStruct * __cdecl FTestFragment_Array::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar1,
                         L"TestFragment_Array");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton;
}

// FTestFragment_Array @ 1470f5680

FTestFragment_Array * __thiscall
FTestFragment_Array::FTestFragment_Array(FTestFragment_Array *this,FTestFragment_Array *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Value).ArrayMax;
  iVar2 = (param_1->Value).ArrayNum;
  _Src = (param_1->Value).AllocatorInstance.Data;
  (this->Value).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// FTestFragment_Array @ 1470f5710

FTestFragment_Array * __thiscall
FTestFragment_Array::FTestFragment_Array(FTestFragment_Array *this,uchar param_1)

{
  int *piVar1;
  
  piVar1 = &(this->Value).ArrayMax;
  *piVar1 = 0;
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).ArrayNum = 0;
  if (param_1 != '\0') {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)param_1,(ForAnyElementType *)this,0,piVar1);
  }
  return this;
}

// ~FTestFragment_Array @ 1470f8aa0

void __thiscall FTestFragment_Array::~FTestFragment_Array(FTestFragment_Array *this)

{
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&this->Value);
  return;
}

