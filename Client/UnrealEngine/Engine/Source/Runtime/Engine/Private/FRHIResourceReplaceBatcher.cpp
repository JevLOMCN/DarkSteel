// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// EnqueueReplace<TRefCountPtr<FRHIBuffer>_&,TRefCountPtr<FRHIBuffer>_&> @ 148439400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIResourceReplaceBatcher::EnqueueReplace<TRefCountPtr<FRHIBuffer>_&,TRefCountPtr<FRHIBuffer>_&>
          (FRHIResourceReplaceBatcher *this,TRefCountPtr<FRHIBuffer> *param_1,
          TRefCountPtr<FRHIBuffer> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FRHIBuffer *pFVar3;
  int iVar4;
  
  iVar4 = (this->Infos).ArrayNum;
  piVar1 = &(this->Infos).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Infos).AllocatorInstance,piVar1);
  }
  (this->Infos).ArrayNum = iVar4 + 1;
  pFVar2 = (this->Infos).AllocatorInstance.Data + (longlong)iVar4 * 0x18;
  pFVar3 = param_2->Reference;
  *(FRHIBuffer **)pFVar2 = param_1->Reference;
  *(FRHIBuffer **)(pFVar2 + 8) = pFVar3;
  pFVar2[0x10] = (FScriptContainerElement)0x0;
  return;
}

