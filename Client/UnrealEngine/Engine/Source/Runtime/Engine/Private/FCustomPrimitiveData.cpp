// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14731f580

UScriptStruct * __cdecl FCustomPrimitiveData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomPrimitiveData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCustomPrimitiveData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomPrimitiveData,(UObject *)pUVar1,
                         L"CustomPrimitiveData");
  }
  return Z_Registration_Info_UScriptStruct_FCustomPrimitiveData.OuterSingleton;
}

// FCustomPrimitiveData @ 1483e11d0

FCustomPrimitiveData * __thiscall
FCustomPrimitiveData::FCustomPrimitiveData(FCustomPrimitiveData *this,FCustomPrimitiveData *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Data).ArrayMax;
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}

