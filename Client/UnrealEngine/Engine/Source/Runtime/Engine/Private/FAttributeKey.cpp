// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147338600

UScriptStruct * __cdecl FAttributeKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAttributeKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAttributeKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAttributeKey,(UObject *)pUVar1,L"AttributeKey");
  }
  return Z_Registration_Info_UScriptStruct_FAttributeKey.OuterSingleton;
}

// FAttributeKey @ 14733f6b0

FAttributeKey * __thiscall FAttributeKey::FAttributeKey(FAttributeKey *this,FAttributeKey *param_1)

{
  TWrappedAttribute<TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Value;
  this->Time = param_1->Time;
  piVar2 = &(this->Value).StructMemory.ArrayMax;
  (pTVar1->StructMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Value).StructMemory.ArrayNum;
  _Src = (param_1->Value).StructMemory.AllocatorInstance.Data;
  (this->Value).StructMemory.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)pTVar1,iVar3,piVar2);
    memcpy((pTVar1->StructMemory).AllocatorInstance.Data,_Src,(longlong)iVar3);
  }
  return this;
}

