// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab9a160

UScriptStruct * __cdecl FReferencedSkeletons::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FReferencedSkeletons.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FReferencedSkeletons.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FReferencedSkeletons,(UObject *)pUVar1,
                         L"ReferencedSkeletons");
  }
  return Z_Registration_Info_UScriptStruct_FReferencedSkeletons.OuterSingleton;
}

// operator= @ 14aba3bb0

FReferencedSkeletons * __thiscall
FReferencedSkeletons::operator=(FReferencedSkeletons *this,FReferencedSkeletons *param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  USkeleton *pUVar5;
  FScriptContainerElement *pFVar6;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar5 = (param_1->Skeleton).field0_0x0.DebugPtr, pUVar5 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->SkeletonIds;
  (this->Skeleton).field0_0x0 = (param_1->Skeleton).field0_0x0;
  if (pTVar1 != &param_1->SkeletonIds) {
    iVar4 = (param_1->SkeletonIds).ArrayNum;
    piVar2 = &(this->SkeletonIds).ArrayMax;
    pFVar6 = (param_1->SkeletonIds).AllocatorInstance.Data;
    (this->SkeletonIds).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 2);
      }
    }
  }
  pTVar3 = &this->SkeletonsToMerge;
  if (pTVar3 != &param_1->SkeletonsToMerge) {
    iVar4 = (param_1->SkeletonsToMerge).ArrayNum;
    piVar2 = &(this->SkeletonsToMerge).ArrayMax;
    pFVar6 = (param_1->SkeletonsToMerge).AllocatorInstance.Data;
    (this->SkeletonsToMerge).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
                ((pTVar3->AllocatorInstance).Data,(TObjectPtr<USkeleton> *)pFVar6,iVar4);
    }
  }
  return this;
}

