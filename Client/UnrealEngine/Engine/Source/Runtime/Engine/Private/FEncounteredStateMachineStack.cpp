// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 1473c9c10

UScriptStruct * __cdecl FEncounteredStateMachineStack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEncounteredStateMachineStack.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEncounteredStateMachineStack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEncounteredStateMachineStack,(UObject *)pUVar1,
                         L"EncounteredStateMachineStack");
  }
  return Z_Registration_Info_UScriptStruct_FEncounteredStateMachineStack.OuterSingleton;
}

// FEncounteredStateMachineStack @ 1473d56e0

FEncounteredStateMachineStack * __thiscall
FEncounteredStateMachineStack::FEncounteredStateMachineStack
          (FEncounteredStateMachineStack *this,FEncounteredStateMachineStack *param_1,int param_2,
          int param_3)

{
  int *piVar1;
  FStateMachineEntry *pFVar2;
  int iVar3;
  FStateMachineEntry *pFVar4;
  
  (this->StateStack).AllocatorInstance.SecondaryData.Data = (FStateMachineEntry *)0x0;
  piVar1 = &(this->StateStack).ArrayMax;
  pFVar2 = (param_1->StateStack).AllocatorInstance.SecondaryData.Data;
  iVar3 = (param_1->StateStack).ArrayNum;
  (this->StateStack).ArrayNum = iVar3;
  if (pFVar2 != (FStateMachineEntry *)0x0) {
    param_1 = (FEncounteredStateMachineStack *)pFVar2;
  }
  if (iVar3 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>_>
              (8,4,iVar3,0,(ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *)this
               ,iVar3,piVar1);
    pFVar2 = (this->StateStack).AllocatorInstance.SecondaryData.Data;
    pFVar4 = (FStateMachineEntry *)this;
    if (pFVar2 != (FStateMachineEntry *)0x0) {
      pFVar4 = pFVar2;
    }
    memcpy(pFVar4,param_1,(longlong)iVar3 << 3);
  }
  iVar3 = (this->StateStack).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>_>
                      (0x408,(ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *)
                             this,piVar1);
  }
  (this->StateStack).ArrayNum = iVar3 + 1;
  pFVar2 = (this->StateStack).AllocatorInstance.SecondaryData.Data;
  pFVar4 = (FStateMachineEntry *)this;
  if (pFVar2 != (FStateMachineEntry *)0x0) {
    pFVar4 = pFVar2;
  }
  pFVar4[iVar3].StateMachineIndex = param_2;
  pFVar4[iVar3].StateIndex = param_3;
  return this;
}

// FEncounteredStateMachineStack @ 1473d57d0

FEncounteredStateMachineStack * __thiscall
FEncounteredStateMachineStack::FEncounteredStateMachineStack
          (FEncounteredStateMachineStack *this,int param_1,int param_2)

{
  (this->StateStack).AllocatorInstance.SecondaryData.Data = (FStateMachineEntry *)0x0;
  (this->StateStack).ArrayMax = 4;
  (this->StateStack).ArrayNum = 1;
  *(int *)(this->StateStack).AllocatorInstance.InlineData = param_1;
  *(int *)((this->StateStack).AllocatorInstance.InlineData + 4) = param_2;
  return this;
}

// InitStack @ 147406910

FEncounteredStateMachineStack * __cdecl
FEncounteredStateMachineStack::InitStack
          (FEncounteredStateMachineStack *__return_storage_ptr__,
          FEncounteredStateMachineStack *param_1,int param_2,int param_3)

{
  int *piVar1;
  FStateMachineEntry *pFVar2;
  int iVar3;
  FStateMachineEntry *pFVar4;
  
  (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data =
       (FStateMachineEntry *)0x0;
  piVar1 = &(__return_storage_ptr__->StateStack).ArrayMax;
  pFVar2 = (param_1->StateStack).AllocatorInstance.SecondaryData.Data;
  iVar3 = (param_1->StateStack).ArrayNum;
  (__return_storage_ptr__->StateStack).ArrayNum = iVar3;
  if (pFVar2 != (FStateMachineEntry *)0x0) {
    param_1 = (FEncounteredStateMachineStack *)pFVar2;
  }
  if (iVar3 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>_>
              (8,4,iVar3,0,
               (ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *)
               __return_storage_ptr__,iVar3,piVar1);
    pFVar2 = (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data;
    pFVar4 = (FStateMachineEntry *)__return_storage_ptr__;
    if (pFVar2 != (FStateMachineEntry *)0x0) {
      pFVar4 = pFVar2;
    }
    memcpy(pFVar4,param_1,(longlong)iVar3 << 3);
  }
  iVar3 = (__return_storage_ptr__->StateStack).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>_>
                      (0x408,(ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *)
                             __return_storage_ptr__,piVar1);
  }
  (__return_storage_ptr__->StateStack).ArrayNum = iVar3 + 1;
  pFVar2 = (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data;
  pFVar4 = (FStateMachineEntry *)__return_storage_ptr__;
  if (pFVar2 != (FStateMachineEntry *)0x0) {
    pFVar4 = pFVar2;
  }
  pFVar4[iVar3].StateMachineIndex = param_2;
  pFVar4[iVar3].StateIndex = param_3;
  return __return_storage_ptr__;
}

// InitStack @ 147406a00

FEncounteredStateMachineStack * __cdecl
FEncounteredStateMachineStack::InitStack
          (FEncounteredStateMachineStack *__return_storage_ptr__,int param_1,int param_2)

{
  (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data =
       (FStateMachineEntry *)0x0;
  (__return_storage_ptr__->StateStack).ArrayMax = 4;
  (__return_storage_ptr__->StateStack).ArrayNum = 1;
  *(int *)(__return_storage_ptr__->StateStack).AllocatorInstance.InlineData = param_1;
  *(int *)((__return_storage_ptr__->StateStack).AllocatorInstance.InlineData + 4) = param_2;
  return __return_storage_ptr__;
}

