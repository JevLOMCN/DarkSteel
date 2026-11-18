// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 35

// TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_><TObjectPtr<UMassProcessor>_const_,int> @ 1471b9560

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_><TObjectPtr<UMassProcessor>_const_,int>
          (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TObjectPtr<UMassProcessor>_const_,int> *param_1)

{
  int iVar1;
  TObjectPtr<UMassProcessor> *pTVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pTVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<TObjectPtr<UMassProcessor>,TObjectPtr<UMassProcessor>,int>
            ((this->AllocatorInstance).Data,pTVar2,iVar1);
  return this;
}

// TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_><FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> @ 1471b95f0

TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_><FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
          (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
           *this,TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                 *param_1)

{
  int iVar1;
  FArchetypeEntityRange *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
  return this;
}

// TArray<FInstancedStruct,TSizedDefaultAllocator<32>_><FInstancedStruct_const_,int> @ 1471b9680

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_><FInstancedStruct_const_,int>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FInstancedStruct_const_,int> *param_1)

{
  int iVar1;
  FInstancedStruct *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<FInstancedStruct,FInstancedStruct,int>((this->AllocatorInstance).Data,pFVar2,iVar1)
  ;
  return this;
}

// TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_><FMassEntityHandle_const_,int> @ 1471b9710

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_><FMassEntityHandle_const_,int>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int iVar1;
  FMassEntityHandle *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_><TObjectPtr<UMassProcessor>,int> @ 1471b9880

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_><TObjectPtr<UMassProcessor>,int>
          (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TObjectPtr<UMassProcessor>,int> *param_1)

{
  int iVar1;
  TObjectPtr<UMassProcessor> *pTVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pTVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<TObjectPtr<UMassProcessor>,TObjectPtr<UMassProcessor>,int>
            ((this->AllocatorInstance).Data,pTVar2,iVar1);
  return this;
}

// operator=<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> @ 1471b9c60

TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
operator=<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
          (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
           *this,TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  FArchetypeEntityRange *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  }
  return this;
}

// operator=<FConstSharedStruct_const_,int> @ 1471b9d00

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=<FConstSharedStruct_const_,int>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FConstSharedStruct_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FConstSharedStruct *pFVar3;
  
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FInstancedStruct,FConstSharedStruct,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator=<FInstancedStruct_const_,int> @ 1471b9da0

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=<FInstancedStruct_const_,int>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FInstancedStruct_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FInstancedStruct *pFVar3;
  
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FInstancedStruct,FInstancedStruct,int>((this->AllocatorInstance).Data,pFVar3,iVar2)
  ;
  return this;
}

// operator=<FMassProcessingPhaseConfig_const_,int> @ 1471b9e40

TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_>::
operator=<FMassProcessingPhaseConfig_const_,int>
          (TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMassProcessingPhaseConfig_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FMassProcessingPhaseConfig *pFVar3;
  
  DestructItems<FMassProcessingPhaseConfig,int>
            ((FMassProcessingPhaseConfig *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FMassProcessingPhaseConfig,FMassProcessingPhaseConfig,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator=<FSharedStruct_const_,int> @ 1471b9ee0

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=<FSharedStruct_const_,int>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FSharedStruct_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FSharedStruct *pFVar3;
  
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FInstancedStruct,FSharedStruct,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator=<UMassProcessor_*,int> @ 1471b9f80

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::operator=<UMassProcessor_*,int>
          (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UMassProcessor_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  UMassProcessor **ppUVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  ppUVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
            ((this->AllocatorInstance).Data,ppUVar3,iVar2);
  return this;
}

// operator=<UMassProcessor_*_const,int> @ 1471ba010

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
operator=<UMassProcessor_*_const,int>
          (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UMassProcessor_*_const,int> *param_1)

{
  int *piVar1;
  int iVar2;
  UMassProcessor **ppUVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  ppUVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
            ((this->AllocatorInstance).Data,ppUVar3,iVar2);
  return this;
}

// AddUniqueImpl<UMassProcessor_const_*_const_&> @ 1471be500

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

int __thiscall
TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UMassProcessor_const_*_const_&>
          (TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *this,UMassProcessor **param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UMassProcessor **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UMassProcessor **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FMassArchetypeHandle_const_&> @ 1471be600

int __thiscall
TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FMassArchetypeHandle_const_&>
          (TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *this,
          FMassArchetypeHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar6 = (this->AllocatorInstance).Data;
  if (pFVar6 != pFVar6 + (longlong)this->ArrayNum * 0x10) {
    pFVar5 = pFVar6;
    do {
      if (*(FMassArchetypeData **)&pFVar5->field_0x0 == (param_1->DataPtr).Object) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar6 >> 4);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 0x10;
    } while (pFVar5 != pFVar6 + (longlong)this->ArrayNum * 0x10);
  }
  if (((pFVar6 <= param_1) && (param_1 < pFVar6 + (longlong)this->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(FMassArchetypeData **)pFVar6 = (param_1->DataPtr).Object;
  pTVar1 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar4;
}

// AddUniqueImpl<FMassEntityQuery_*> @ 1471be730

int __thiscall
TArray<FMassEntityQuery_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMassEntityQuery_*>
          (TArray<FMassEntityQuery_*,TSizedDefaultAllocator<32>_> *this,FMassEntityQuery **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FMassEntityQuery **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FMassEntityQuery **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TObjectPtr<UMassProcessor>_> @ 1471be830

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UMassProcessor>_>
          (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMassProcessor> *param_1)

{
  FScriptContainerElement *pFVar1;
  UMassProcessor *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UMassProcessor **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UMassProcessor **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMassProcessor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<FSoftClassPath> @ 1471be940

int __thiscall
TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftClassPath>
          (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this,FSoftClassPath *param_1)

{
  FSoftClassPath *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    pFVar1 = (FSoftClassPath *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    pFVar2 = (this->AllocatorInstance).Data;
    uVar4 = *(undefined8 *)&param_1->field_0x8;
    lVar7 = (longlong)iVar6 * 0x20;
    *(undefined8 *)(pFVar2 + lVar7) = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar2 + lVar7 + 8) = uVar4;
    *(undefined8 *)(pFVar2 + lVar7 + 0x10) = 0;
    *(undefined8 *)(pFVar2 + lVar7 + 0x10) = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&param_1->field_0x10 = 0;
    *(undefined4 *)(pFVar2 + lVar7 + 0x18) = *(undefined4 *)&param_1->field_0x18;
    *(undefined4 *)(pFVar2 + lVar7 + 0x1c) = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)&param_1->field_0x18 = 0;
  }
  return iVar6;
}

// Append<TArrayView<FMassEntityHandle_const_,int>_&> @ 1471bec70

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
Append<TArrayView<FMassEntityHandle_const_,int>_&>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1->DataPtr,(longlong)iVar1 << 3)
  ;
  return;
}

// Append<FMassEntityHandle,TSizedDefaultAllocator<32>_> @ 1471bee50

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// Append<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_> @ 1471bef00

void __thiscall
TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
::
Append<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
          (TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
           *this,TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_> @ 1471d50b0

TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
          (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
           *this,initializer_list<FMassArchetypeEntityCollection::FArchetypeEntityRange> *param_1)

{
  FArchetypeEntityRange *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 1) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  return this;
}

// TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> @ 1471d5160

TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_>::
TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_>
          (TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> *this,
          TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = param_1->ArrayNum;
  this->ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  return this;
}

// TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> @ 1471d5190

TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_>::
TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_>
          (TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> @ 1471de390

void __thiscall
TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_>::
~TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_>
          (TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 1471e13c0

TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::operator=(TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *this,TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *param_1)

{
  int iVar1;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar2;
  int *piVar3;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
      param_1 = (TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 4;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
              (0x20,8,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)this;
    if (FVar2 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 5);
    }
  }
  return this;
}

// operator= @ 1471e1490

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UMassProcessor>,TObjectPtr<UMassProcessor>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UMassProcessor> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 1471e1520

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FInstancedStruct *pFVar3;
  
  if (this != param_1) {
    DestructItems<FInstancedStruct,int>
              ((FInstancedStruct *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FInstancedStruct *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FInstancedStruct,FInstancedStruct,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// AddDefaulted @ 1471ecf20

int __thiscall
TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
AddDefaulted(TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// Find @ 147219fe0

int __thiscall
TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_>::Find
          (TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *this,
          FMassArchetypeHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if (*(FMassArchetypeData **)pFVar2 == (param_1->DataPtr).Object) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// Find @ 14721a030

int __thiscall
TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::Find
          (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this,FSoftClassPath *param_1)

{
  int iVar1;
  FSoftObjectPath *pFVar2;
  bool bVar3;
  FSoftObjectPath *this_00;
  
  pFVar2 = (FSoftObjectPath *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + iVar1) {
      return -1;
    }
    bVar3 = FSoftObjectPath::operator==(this_00,(FSoftObjectPath *)param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 5);
}

// RemoveAt @ 147244e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x2a8;
  FVar1 = _Dst[0x298];
  if (1 < (ulonglong)(byte)FVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)FVar1])(_Dst + 0x20);
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x2a8,(longlong)iVar5 * 0x2a8);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2a8,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 147244f50

void __thiscall
TArray<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 147244fd0

void __thiscall
TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 147245050

void __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FInstancedStruct *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FInstancedStruct *)(pFVar1 + (longlong)param_1 * 0x10);
  FInstancedStruct::Reset(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 1472450d0

void __thiscall
TArray<FSharedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

