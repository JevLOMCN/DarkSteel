// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149fc4c80

UScriptStruct * __cdecl FPCGDummyGetPropertyLevel2Struct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDummyGetPropertyLevel2Struct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDummyGetPropertyLevel2Struct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDummyGetPropertyLevel2Struct,
                         (UObject *)pUVar1,L"PCGDummyGetPropertyLevel2Struct");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDummyGetPropertyLevel2Struct.OuterSingleton;
}

// operator= @ 149ff1220

FPCGDummyGetPropertyLevel2Struct * __thiscall
FPCGDummyGetPropertyLevel2Struct::operator=
          (FPCGDummyGetPropertyLevel2Struct *this,FPCGDummyGetPropertyLevel2Struct *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->DoubleArrayProperty).ArrayMax;
    piVar1 = &(this->DoubleArrayProperty).ArrayMax;
    _Src = (param_1->DoubleArrayProperty).AllocatorInstance.Data;
    iVar3 = (param_1->DoubleArrayProperty).ArrayNum;
    (this->DoubleArrayProperty).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->DoubleArrayProperty).AllocatorInstance.Data,_Src,(longlong)iVar3 << 3);
    }
  }
  return this;
}

