// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// FRHIResourceCollection @ 145c87e40

FRHIResourceCollection * __thiscall
FRHIResourceCollection::FRHIResourceCollection
          (FRHIResourceCollection *this,TArrayView<FRHIResourceCollectionMember_const_,int> *param_1
          )

{
  TArray<FRHIResourceCollectionMember,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  FRHIResourceCollection *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_ResourceCollection);
  iVar5 = param_1->ArrayNum;
  pTVar1 = &this->Members;
  this->_padding_ = (longlong)&___7FRHIResourceCollection__6B_;
  piVar2 = &(this->Members).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Members).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,param_1->DataPtr,(longlong)iVar5 << 4);
  }
  iVar5 = (this->Members).ArrayNum;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar5 * 0x10;
  while( true ) {
    if ((this->Members).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRHIResourceCollectionMember,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    if (*(longlong *)pFVar10 != 0) {
      LOCK();
      puVar3 = (uint *)(*(longlong *)pFVar10 + 8);
      uVar4 = *puVar3;
      *puVar3 = *puVar3 + 1;
      UNLOCK();
      if ((int)uVar4 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x99,L"Resource is being deleted.");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar8 = (FRHIResourceCollection *)(*pcVar6)();
          return pFVar8;
        }
      }
      if (0x3ffffffe < (uVar4 & 0x3fffffff) + 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs < NumRefsMask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x9b,L"Reference count has overflowed.");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar8 = (FRHIResourceCollection *)(*pcVar6)();
          return pFVar8;
        }
      }
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return this;
}

// ~FRHIResourceCollection @ 145c8b300

void __thiscall FRHIResourceCollection::~FRHIResourceCollection(FRHIResourceCollection *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar7;
  bool bVar8;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar9;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar10;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *paVar11;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *paVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FRHIResourceCollection__6B_;
  iVar3 = (this->Members).ArrayNum;
  paVar12 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)
            (this->Members).AllocatorInstance.Data;
  paVar11 = paVar12 + (longlong)iVar3 * 2;
  do {
    while( true ) {
      if ((this->Members).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRHIResourceCollectionMember,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (paVar12 == paVar11) {
        pFVar5 = (this->Members).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        FRHIResource::~FRHIResource((FRHIResource *)this);
        return;
      }
      aVar4 = *paVar12;
      if (aVar4 != (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0) break;
LAB_145c8b4ce:
      paVar12 = paVar12 + 2;
    }
    LOCK();
    puVar1 = (uint *)((longlong)aVar4 + 8);
    uVar13 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (((int)uVar13 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa2,L"Resource is being deleted."), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar13 = uVar13 & 0x3fffffff;
    if (uVar13 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xa4,L"Reference count has underflowed.");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewValue >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x53,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_145c8b4ce;
    }
    if (uVar13 != 1) goto LAB_145c8b4ce;
    uVar13 = *(uint *)((longlong)aVar4 + 8);
    do {
      LOCK();
      uVar2 = *(uint *)((longlong)aVar4 + 8);
      bVar8 = uVar13 == uVar2;
      if (bVar8) {
        *(uint *)((longlong)aVar4 + 8) = uVar13 | 0x40000000;
        uVar2 = uVar13;
      }
      uVar13 = uVar2;
      UNLOCK();
    } while (!bVar8);
    if (((int)uVar13 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xab,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((uVar13 >> 0x1e & 1) != 0) goto LAB_145c8b4ce;
    if ((*(byte *)((longlong)aVar4 + 0xd) & 2) == 0) {
      aVar9 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
              FMemory::Malloc(0x10,8);
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 =
           (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)((longlong)aVar9 + 8) =
           aVar4;
      TVar10 = PendingDeletes;
      do {
        *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 = TVar10.Head;
        LOCK();
        bVar8 = TVar10.Head != PendingDeletes.Head;
        TVar7.Head = aVar9;
        if (bVar8) {
          TVar10 = PendingDeletes;
          TVar7 = PendingDeletes;
        }
        PendingDeletes.Head = TVar7.Head;
        UNLOCK();
      } while (bVar8);
      goto LAB_145c8b4ce;
    }
    aVar9 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
            FMemory::Malloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 =
         (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
    *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)((longlong)aVar9 + 8) =
         aVar4;
    TVar10 = PendingDeletesWithLifetimeExtension;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 = TVar10.Head;
      LOCK();
      bVar8 = TVar10.Head != PendingDeletesWithLifetimeExtension.Head;
      TVar7.Head = aVar9;
      if (bVar8) {
        TVar10 = PendingDeletesWithLifetimeExtension;
        TVar7 = PendingDeletesWithLifetimeExtension;
      }
      PendingDeletesWithLifetimeExtension.Head = TVar7.Head;
      UNLOCK();
    } while (bVar8);
    paVar12 = paVar12 + 2;
  } while( true );
}

// GetBindlessHandle @ 145ca8d50

FRHIDescriptorHandle __thiscall
FRHIResourceCollection::GetBindlessHandle(FRHIResourceCollection *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  *(undefined4 *)in_RDX = 0xffffffff;
  *(undefined1 *)((longlong)in_RDX + 4) = 9;
  return in_RDX;
}

// UpdateMember @ 145cc95e0

void __thiscall
FRHIResourceCollection::UpdateMember
          (FRHIResourceCollection *this,int param_1,FRHIResourceCollectionMember *param_2)

{
  FRHIResource *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Members).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = param_2->Resource;
    pFVar4 = (this->Members).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    if (*(FRHIResource **)pFVar4 != this_00) {
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
      }
      if (*(FRHIResource **)pFVar4 != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)pFVar4);
      }
      uVar2 = *(undefined8 *)&param_2->Type;
      *(FRHIResource **)pFVar4 = param_2->Resource;
      *(undefined8 *)(pFVar4 + 8) = uVar2;
    }
  }
  return;
}

// UpdateMembers @ 145cc9690

void __thiscall
FRHIResourceCollection::UpdateMembers
          (FRHIResourceCollection *this,int param_1,
          TArrayView<FRHIResourceCollectionMember_const_,int> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FRHIResource *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  iVar2 = param_2->ArrayNum;
  uVar12 = (ulonglong)param_1;
  if (0 < iVar2) {
    lVar11 = 0;
    uVar13 = uVar12;
    do {
      iVar5 = (int)uVar13;
      uVar10 = -param_1 + iVar5;
      uVar9 = 0;
      if ((int)uVar10 < iVar2) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = (undefined8 *)((longlong)&param_2->DataPtr->Resource + lVar11);
      uVar6 = *puVar1;
      this_00 = (FRHIResource *)*puVar1;
      uVar7 = puVar1[1];
      if ((-1 < iVar5) && (iVar5 < (this->Members).ArrayNum)) {
        if ((iVar5 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Members).AllocatorInstance.Data;
        if (*(FRHIResource **)(pFVar3 + lVar11 + uVar12 * 0x10) != this_00) {
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(this_00);
          }
          if (*(FRHIResource **)(pFVar3 + lVar11 + uVar12 * 0x10) != (FRHIResource *)0x0) {
            FRHIResource::Release(*(FRHIResource **)(pFVar3 + lVar11 + uVar12 * 0x10));
          }
          *(undefined8 *)(pFVar3 + lVar11 + uVar12 * 0x10) = uVar6;
          *(undefined8 *)(pFVar3 + lVar11 + uVar12 * 0x10 + 8) = uVar7;
        }
      }
      uVar13 = (ulonglong)(iVar5 + 1U);
      lVar11 = lVar11 + 0x10;
    } while ((int)(-param_1 + iVar5 + 1U) < iVar2);
  }
  return;
}

