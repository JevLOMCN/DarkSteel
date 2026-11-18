// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator= @ 14834eae0

FWeightedBlendables * __thiscall
FWeightedBlendables::operator=(FWeightedBlendables *this,FWeightedBlendables *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FWeightedBlendable *pFVar4;
  
  if (this != param_1) {
    iVar2 = (this->Array).ArrayMax;
    piVar1 = &(this->Array).ArrayMax;
    pFVar4 = (FWeightedBlendable *)(param_1->Array).AllocatorInstance.Data;
    iVar3 = (param_1->Array).ArrayNum;
    (this->Array).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FWeightedBlendable,FWeightedBlendable,int>
              ((this->Array).AllocatorInstance.Data,pFVar4,iVar3);
  }
  return this;
}

// StaticStruct @ 1484a5700

UScriptStruct * __cdecl FWeightedBlendables::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWeightedBlendables.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWeightedBlendables.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendables,(UObject *)pUVar1,
                         L"WeightedBlendables");
  }
  return Z_Registration_Info_UScriptStruct_FWeightedBlendables.OuterSingleton;
}

