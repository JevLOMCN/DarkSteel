// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FPropertyAccessLibrary @ 147533260

void __thiscall FPropertyAccessLibrary::~FPropertyAccessLibrary(FPropertyAccessLibrary *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPropertyAccessIndirection,int>
            ((FPropertyAccessIndirection *)(this->Indirections).AllocatorInstance.Data,
             (this->Indirections).ArrayNum);
  pFVar1 = (this->Indirections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPropertyAccessIndirectionChain,int>
            ((FPropertyAccessIndirectionChain *)(this->DestAccesses).AllocatorInstance.Data,
             (this->DestAccesses).ArrayNum);
  pFVar1 = (this->DestAccesses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPropertyAccessIndirectionChain,int>
            ((FPropertyAccessIndirectionChain *)(this->SrcAccesses).AllocatorInstance.Data,
             (this->SrcAccesses).ArrayNum);
  pFVar1 = (this->SrcAccesses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPropertyAccessCopyBatch,int>
            ((FPropertyAccessCopyBatch *)(this->CopyBatchArray).AllocatorInstance.Data,
             (this->CopyBatchArray).ArrayNum);
  pFVar1 = (this->CopyBatchArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SrcPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPropertyAccessSegment,int>
            ((FPropertyAccessSegment *)(this->PathSegments).AllocatorInstance.Data,
             (this->PathSegments).ArrayNum);
  pFVar1 = (this->PathSegments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 1483cf040

UScriptStruct * __cdecl FPropertyAccessLibrary::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyAccessLibrary.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPropertyAccessLibrary.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessLibrary,(UObject *)pUVar1,
                         L"PropertyAccessLibrary");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyAccessLibrary.OuterSingleton;
}

// FPropertyAccessLibrary @ 1483e4410

FPropertyAccessLibrary * __thiscall
FPropertyAccessLibrary::FPropertyAccessLibrary
          (FPropertyAccessLibrary *this,FPropertyAccessLibrary *param_1)

{
  int *piVar1;
  TArray<FPropertyAccessPath,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPropertyAccessCopyBatch,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FPropertyAccessIndirection,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FPropertyAccessSegment *pFVar7;
  FScriptContainerElement *pFVar8;
  FPropertyAccessIndirectionChain *pFVar9;
  FPropertyAccessIndirection *pFVar10;
  
  piVar1 = &(this->PathSegments).ArrayMax;
  (this->PathSegments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->PathSegments).ArrayNum;
  pFVar7 = (FPropertyAccessSegment *)(param_1->PathSegments).AllocatorInstance.Data;
  (this->PathSegments).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    ConstructItems<FPropertyAccessSegment,FPropertyAccessSegment,int>
              ((this->PathSegments).AllocatorInstance.Data,pFVar7,iVar6);
  }
  pTVar2 = &this->SrcPaths;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SrcPaths).ArrayMax;
  iVar6 = (param_1->SrcPaths).ArrayNum;
  pFVar8 = (param_1->SrcPaths).AllocatorInstance.Data;
  (this->SrcPaths).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 3);
  }
  pTVar2 = &this->DestPaths;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DestPaths).ArrayMax;
  iVar6 = (param_1->DestPaths).ArrayNum;
  pFVar8 = (param_1->DestPaths).AllocatorInstance.Data;
  (this->DestPaths).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 3);
  }
  pTVar3 = &this->CopyBatchArray;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CopyBatchArray).ArrayMax;
  iVar6 = (param_1->CopyBatchArray).ArrayNum;
  pFVar8 = (param_1->CopyBatchArray).AllocatorInstance.Data;
  (this->CopyBatchArray).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FPropertyAccessCopyBatch,FPropertyAccessCopyBatch,int>
              ((pTVar3->AllocatorInstance).Data,(FPropertyAccessCopyBatch *)pFVar8,iVar6);
  }
  pTVar4 = &this->SrcAccesses;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SrcAccesses).ArrayMax;
  iVar6 = (param_1->SrcAccesses).ArrayNum;
  pFVar9 = (FPropertyAccessIndirectionChain *)(param_1->SrcAccesses).AllocatorInstance.Data;
  (this->SrcAccesses).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FPropertyAccessIndirectionChain,FPropertyAccessIndirectionChain,int>
              ((pTVar4->AllocatorInstance).Data,pFVar9,iVar6);
  }
  pTVar4 = &this->DestAccesses;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DestAccesses).ArrayMax;
  iVar6 = (param_1->DestAccesses).ArrayNum;
  pFVar9 = (FPropertyAccessIndirectionChain *)(param_1->DestAccesses).AllocatorInstance.Data;
  (this->DestAccesses).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FPropertyAccessIndirectionChain,FPropertyAccessIndirectionChain,int>
              ((pTVar4->AllocatorInstance).Data,pFVar9,iVar6);
  }
  pTVar5 = &this->Indirections;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Indirections).ArrayMax;
  iVar6 = (param_1->Indirections).ArrayNum;
  pFVar10 = (FPropertyAccessIndirection *)(param_1->Indirections).AllocatorInstance.Data;
  (this->Indirections).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FPropertyAccessIndirection,FPropertyAccessIndirection,int>
              ((pTVar5->AllocatorInstance).Data,pFVar10,iVar6);
  }
  this->bHasBeenPostLoaded = param_1->bHasBeenPostLoaded;
  return this;
}

// operator= @ 1483e9770

FPropertyAccessLibrary * __thiscall
FPropertyAccessLibrary::operator=(FPropertyAccessLibrary *this,FPropertyAccessLibrary *param_1)

{
  int *piVar1;
  TArray<FPropertyAccessCopyBatch,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPropertyAccessIndirection,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FPropertyAccessSegment *pFVar5;
  FScriptContainerElement *pFVar6;
  FPropertyAccessIndirection *pFVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&PropertyAccess::CriticalSection);
  if (this != param_1) {
    DestructItems<FPropertyAccessSegment,int>
              ((FPropertyAccessSegment *)(this->PathSegments).AllocatorInstance.Data,
               (this->PathSegments).ArrayNum);
    iVar4 = (param_1->PathSegments).ArrayNum;
    piVar1 = &(this->PathSegments).ArrayMax;
    pFVar5 = (FPropertyAccessSegment *)(param_1->PathSegments).AllocatorInstance.Data;
    (this->PathSegments).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar4,*piVar1,(ForAnyElementType *)this,iVar4,piVar1);
      ConstructItems<FPropertyAccessSegment,FPropertyAccessSegment,int>
                ((this->PathSegments).AllocatorInstance.Data,pFVar5,iVar4);
    }
  }
  TArray<FPropertyAccessPath,TSizedDefaultAllocator<32>_>::operator=
            (&this->SrcPaths,&param_1->SrcPaths);
  TArray<FPropertyAccessPath,TSizedDefaultAllocator<32>_>::operator=
            (&this->DestPaths,&param_1->DestPaths);
  pTVar2 = &this->CopyBatchArray;
  if (pTVar2 != &param_1->CopyBatchArray) {
    DestructItems<FPropertyAccessCopyBatch,int>
              ((FPropertyAccessCopyBatch *)(pTVar2->AllocatorInstance).Data,
               (this->CopyBatchArray).ArrayNum);
    iVar4 = (param_1->CopyBatchArray).ArrayNum;
    piVar1 = &(this->CopyBatchArray).ArrayMax;
    pFVar6 = (param_1->CopyBatchArray).AllocatorInstance.Data;
    (this->CopyBatchArray).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FPropertyAccessCopyBatch,FPropertyAccessCopyBatch,int>
                ((pTVar2->AllocatorInstance).Data,(FPropertyAccessCopyBatch *)pFVar6,iVar4);
    }
  }
  TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_>::operator=
            (&this->SrcAccesses,&param_1->SrcAccesses);
  TArray<FPropertyAccessIndirectionChain,TSizedDefaultAllocator<32>_>::operator=
            (&this->DestAccesses,&param_1->DestAccesses);
  pTVar3 = &this->Indirections;
  if (pTVar3 != &param_1->Indirections) {
    DestructItems<FPropertyAccessIndirection,int>
              ((FPropertyAccessIndirection *)(pTVar3->AllocatorInstance).Data,
               (this->Indirections).ArrayNum);
    iVar4 = (param_1->Indirections).ArrayNum;
    piVar1 = &(this->Indirections).ArrayMax;
    pFVar7 = (FPropertyAccessIndirection *)(param_1->Indirections).AllocatorInstance.Data;
    (this->Indirections).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FPropertyAccessIndirection,FPropertyAccessIndirection,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar4);
    }
  }
  this->bHasBeenPostLoaded = param_1->bHasBeenPostLoaded;
  LeaveCriticalSection((LPCRITICAL_SECTION)&PropertyAccess::CriticalSection);
  return this;
}

