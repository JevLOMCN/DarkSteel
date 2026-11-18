// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 2

// StaticStruct @ 148c0a1b0

UScriptStruct * __cdecl FPointWeightMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointWeightMap.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UScriptStruct_FPointWeightMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointWeightMap,(UObject *)pUVar1,
                         L"PointWeightMap");
  }
  return Z_Registration_Info_UScriptStruct_FPointWeightMap.OuterSingleton;
}

// FPointWeightMap @ 148c19fc0

FPointWeightMap * __thiscall
FPointWeightMap::FPointWeightMap(FPointWeightMap *this,FPointWeightMap *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Values).ArrayMax;
  iVar2 = (param_1->Values).ArrayNum;
  _Src = (param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Values).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}

