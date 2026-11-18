// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// StaticStruct @ 14a90cd80

UScriptStruct * __cdecl FPoseSearchRoledSkeleton::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchRoledSkeleton.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchRoledSkeleton.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchRoledSkeleton,(UObject *)pUVar1,
                         L"PoseSearchRoledSkeleton");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchRoledSkeleton.OuterSingleton;
}

// FPoseSearchRoledSkeleton @ 14a919500

FPoseSearchRoledSkeleton * __thiscall
FPoseSearchRoledSkeleton::FPoseSearchRoledSkeleton
          (FPoseSearchRoledSkeleton *this,FPoseSearchRoledSkeleton *param_1)

{
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  USkeleton *pUVar6;
  UMirrorDataTable *pUVar7;
  FScriptContainerElement *pFVar8;
  
  pUVar6 = (param_1->Skeleton).field0_0x0.DebugPtr;
  (this->Skeleton).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = (param_1->MirrorDataTable).field0_0x0.DebugPtr;
  (this->MirrorDataTable).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pTVar1 = &this->BoneReferences;
  this->Role = param_1->Role;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->BoneReferences).ArrayMax;
  iVar5 = (param_1->BoneReferences).ArrayNum;
  pFVar8 = (param_1->BoneReferences).AllocatorInstance.Data;
  (this->BoneReferences).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar8,(longlong)iVar5 << 4);
  }
  pTVar3 = &this->BoneIndicesWithParents_DEPRECATED;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->BoneIndicesWithParents_DEPRECATED).ArrayMax;
  iVar5 = (param_1->BoneIndicesWithParents_DEPRECATED).ArrayNum;
  pFVar8 = (param_1->BoneIndicesWithParents_DEPRECATED).AllocatorInstance.Data;
  (this->BoneIndicesWithParents_DEPRECATED).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar5 * 2);
  }
  pTVar4 = &this->RequiredCurves;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RequiredCurves).ArrayMax;
  iVar5 = (param_1->RequiredCurves).ArrayNum;
  pFVar8 = (param_1->RequiredCurves).AllocatorInstance.Data;
  (this->RequiredCurves).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar5 << 3);
  }
  return this;
}

// operator= @ 14a91b190

FPoseSearchRoledSkeleton * __thiscall
FPoseSearchRoledSkeleton::operator=
          (FPoseSearchRoledSkeleton *this,FPoseSearchRoledSkeleton *param_1)

{
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  USkeleton *pUVar5;
  UMirrorDataTable *pUVar6;
  FScriptContainerElement *pFVar7;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar5 = (param_1->Skeleton).field0_0x0.DebugPtr, pUVar5 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Skeleton).field0_0x0 = (param_1->Skeleton).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->MirrorDataTable).field0_0x0.DebugPtr, pUVar6 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MirrorDataTable).field0_0x0 = (param_1->MirrorDataTable).field0_0x0;
  pTVar1 = &this->BoneReferences;
  this->Role = param_1->Role;
  if (pTVar1 != &param_1->BoneReferences) {
    iVar4 = (param_1->BoneReferences).ArrayNum;
    piVar2 = &(this->BoneReferences).ArrayMax;
    pFVar7 = (param_1->BoneReferences).AllocatorInstance.Data;
    (this->BoneReferences).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar4 << 4);
      }
    }
  }
  pTVar3 = &this->BoneIndicesWithParents_DEPRECATED;
  if (pTVar3 != &param_1->BoneIndicesWithParents_DEPRECATED) {
    iVar4 = (param_1->BoneIndicesWithParents_DEPRECATED).ArrayNum;
    piVar2 = &(this->BoneIndicesWithParents_DEPRECATED).ArrayMax;
    pFVar7 = (param_1->BoneIndicesWithParents_DEPRECATED).AllocatorInstance.Data;
    (this->BoneIndicesWithParents_DEPRECATED).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar4 * 2);
      }
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->RequiredCurves,&param_1->RequiredCurves);
  return this;
}

