// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FStateTreeReferenceOverrides @ 14d4ebc80

FStateTreeReferenceOverrides * __thiscall
FStateTreeReferenceOverrides::FStateTreeReferenceOverrides
          (FStateTreeReferenceOverrides *this,FStateTreeReferenceOverrides *param_1)

{
  int *piVar1;
  int iVar2;
  FStateTreeReferenceOverrideItem *pFVar3;
  
  (this->OverrideItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OverrideItems).ArrayMax;
  iVar2 = (param_1->OverrideItems).ArrayNum;
  pFVar3 = (FStateTreeReferenceOverrideItem *)(param_1->OverrideItems).AllocatorInstance.Data;
  (this->OverrideItems).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<FStateTreeReferenceOverrideItem,FStateTreeReferenceOverrideItem,int>
            ((this->OverrideItems).AllocatorInstance.Data,pFVar3,iVar2);
  return this;
}

// StaticStruct @ 14d529440

UScriptStruct * __cdecl FStateTreeReferenceOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeReferenceOverrides,(UObject *)pUVar1,
                         L"StateTreeReferenceOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrides.OuterSingleton;
}

