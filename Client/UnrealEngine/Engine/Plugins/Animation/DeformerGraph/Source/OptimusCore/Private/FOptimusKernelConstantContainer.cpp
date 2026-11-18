// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e118d50

UScriptStruct * __cdecl FOptimusKernelConstantContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusKernelConstantContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusKernelConstantContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusKernelConstantContainer,(UObject *)pUVar1
                         ,L"OptimusKernelConstantContainer");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusKernelConstantContainer.OuterSingleton;
}

// ~FOptimusKernelConstantContainer @ 14e161450

void __thiscall
FOptimusKernelConstantContainer::~FOptimusKernelConstantContainer
          (FOptimusKernelConstantContainer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->GroupNameToBindingIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GroupNameToBindingIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupNameToBindingIndex);
  DestructItems<FOptimusConstant,int>
            ((FOptimusConstant *)(this->OutputConstants).AllocatorInstance.Data,
             (this->OutputConstants).ArrayNum);
  pFVar2 = (this->OutputConstants).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FOptimusConstant,int>
            ((FOptimusConstant *)(this->InputConstants).AllocatorInstance.Data,
             (this->InputConstants).ArrayNum);
  pFVar2 = (this->InputConstants).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddToKernelContainer @ 14e1794e0

void __thiscall
FOptimusKernelConstantContainer::AddToKernelContainer
          (FOptimusKernelConstantContainer *this,FOptimusConstant *param_1)

{
  FOptimusConstant *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  FOptimusKernelConstantContainer *pFVar10;
  
  pFVar10 = this;
  if (param_1->Type != Input) {
    pFVar10 = (FOptimusKernelConstantContainer *)&this->OutputConstants;
  }
  pFVar1 = (FOptimusConstant *)(pFVar10->InputConstants).AllocatorInstance.Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (pFVar10->InputConstants).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar10->InputConstants).ArrayNum;
  piVar9 = &(pFVar10->InputConstants).ArrayMax;
  if (iVar6 == *piVar9) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)pFVar10,piVar9);
  }
  lVar8 = (longlong)iVar6;
  (pFVar10->InputConstants).ArrayNum = iVar6 + 1;
  FVar3 = (param_1->Identifier).GroupName;
  pFVar2 = (pFVar10->InputConstants).AllocatorInstance.Data;
  *(FName *)(pFVar2 + lVar8 * 0x48) = (param_1->Identifier).NodePath;
  ((FName *)(pFVar2 + lVar8 * 0x48))[1] = FVar3;
  *(FName *)(pFVar2 + lVar8 * 0x48 + 0x10) = (param_1->Identifier).ConstantName;
  FVar3 = (param_1->Definition).ReferencedConstant.GroupName;
  *(FName *)(pFVar2 + lVar8 * 0x48 + 0x18) = (param_1->Definition).ReferencedConstant.NodePath;
  *(FName *)(pFVar2 + lVar8 * 0x48 + 0x20) = FVar3;
  *(FName *)(pFVar2 + lVar8 * 0x48 + 0x28) = (param_1->Definition).ReferencedConstant.ConstantName;
  ::FString::FString((FString *)(pFVar2 + lVar8 * 0x48 + 0x30),&(param_1->Definition).Expression);
  *(int *)(pFVar2 + lVar8 * 0x48 + 0x40) = param_1->ComponentBindingIndex;
  *(EOptimusConstantType *)(pFVar2 + lVar8 * 0x48 + 0x44) = param_1->Type;
  FVar3 = (param_1->Identifier).GroupName;
  iVar6 = param_1->ComponentBindingIndex;
  uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
           FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->GroupNameToBindingIndex,uVar7 + FVar3.Number,
                      &(param_1->Identifier).GroupName);
  *piVar9 = iVar6;
  return;
}

