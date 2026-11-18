// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e11a8d0

UScriptStruct * __cdecl FOptimusConstantContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusConstantContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusConstantContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantContainer,(UObject *)pUVar1,
                         L"OptimusConstantContainer");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusConstantContainer.OuterSingleton;
}

// AddContainerForKernel @ 14e174710

FOptimusKernelConstantContainer * __thiscall
FOptimusConstantContainer::AddContainerForKernel(FOptimusConstantContainer *this)

{
  int *piVar1;
  int iVar2;
  FOptimusKernelConstantContainer *pFVar3;
  
  iVar2 = (this->KernelContainers).ArrayNum;
  piVar1 = &(this->KernelContainers).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->KernelContainers).ArrayNum = iVar2 + 1;
  pFVar3 = (FOptimusKernelConstantContainer *)
           ((this->KernelContainers).AllocatorInstance.Data + (longlong)iVar2 * 0x70);
  DefaultConstructItems<FOptimusKernelConstantContainer,int>(pFVar3,1);
  return pFVar3;
}

// Reset @ 14e2194c0

void __thiscall FOptimusConstantContainer::Reset(FOptimusConstantContainer *this)

{
  int *piVar1;
  int iVar2;
  FOptimusKernelConstantContainer *pFVar3;
  
  piVar1 = &(this->KernelContainers).ArrayMax;
  pFVar3 = (FOptimusKernelConstantContainer *)(this->KernelContainers).AllocatorInstance.Data;
  iVar2 = (this->KernelContainers).ArrayNum;
  if (-1 < (this->KernelContainers).ArrayMax) {
    DestructItems<FOptimusKernelConstantContainer,int>(pFVar3,iVar2);
    (this->KernelContainers).ArrayNum = 0;
    return;
  }
  DestructItems<FOptimusKernelConstantContainer,int>(pFVar3,iVar2);
  (this->KernelContainers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

