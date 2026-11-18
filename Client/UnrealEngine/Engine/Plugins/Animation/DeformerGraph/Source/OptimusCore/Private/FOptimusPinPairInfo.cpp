// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e11b8c0

UScriptStruct * __cdecl FOptimusPinPairInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusPinPairInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusPinPairInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusPinPairInfo,(UObject *)pUVar1,
                         L"OptimusPinPairInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusPinPairInfo.OuterSingleton;
}

// FOptimusPinPairInfo @ 14e155a80

FOptimusPinPairInfo * __thiscall
FOptimusPinPairInfo::FOptimusPinPairInfo(FOptimusPinPairInfo *this,FOptimusPinPairInfo *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->InputPinPath).ArrayMax;
  (this->InputPinPath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->InputPinPath).ArrayNum;
  pFVar4 = (param_1->InputPinPath).AllocatorInstance.Data;
  (this->InputPinPath).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->InputPinPath).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar2 = &this->OutputPinPath;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OutputPinPath).ArrayMax;
  iVar3 = (param_1->OutputPinPath).ArrayNum;
  pFVar4 = (param_1->OutputPinPath).AllocatorInstance.Data;
  (this->OutputPinPath).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  return this;
}

