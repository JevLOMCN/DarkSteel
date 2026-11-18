// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 8

// FGraphRenderCost @ 14ad3a2b0

FGraphRenderCost * __thiscall
Metasound::FGraphRenderCost::FGraphRenderCost(FGraphRenderCost *this,EPrivateToken param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->NodeCosts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeCosts).ArrayNum = 0;
  (this->NodeCosts).ArrayMax = 0;
  (this->NodeHierarchies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeHierarchies).ArrayNum = 0;
  (this->NodeHierarchies).ArrayMax = 0;
  return this;
}

// ~FGraphRenderCost @ 14ad3dc90

void __thiscall Metasound::FGraphRenderCost::~FGraphRenderCost(FGraphRenderCost *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TArray<FGuid,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)
             (this->NodeHierarchies).AllocatorInstance.Data,(this->NodeHierarchies).ArrayNum);
  pFVar3 = (this->NodeHierarchies).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NodeCosts).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad3dce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// AddNode @ 14ad45570

FNodeRenderCost * __thiscall
Metasound::FGraphRenderCost::AddNode
          (FGraphRenderCost *this,FNodeRenderCost *__return_storage_ptr__,FGuid *param_1,
          FMetasoundEnvironment *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FGraphRenderCost *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FNodeRenderCost *pFVar9;
  FGraphRenderCost *pFVar10;
  FGraphRenderCost *pFVar11;
  undefined4 local_28 [4];
  
  iVar2 = (this->NodeCosts).ArrayNum;
  local_28[0] = 0;
  pFVar3 = (this->NodeCosts).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->NodeCosts).ArrayMax * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FNodeRenderCost *)(*pcVar5)();
    return pFVar9;
  }
  iVar7 = (this->NodeCosts).ArrayNum;
  piVar1 = &(this->NodeCosts).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NodeCosts).AllocatorInstance,piVar1);
  }
  (this->NodeCosts).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->NodeCosts).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  AddNodeHierarchy(this,param_1,param_2);
  pFVar4 = (FGraphRenderCost *)this->_padding_;
  pFVar11 = (FGraphRenderCost *)0x0;
  pFVar10 = pFVar4;
  if (pFVar4 != (FGraphRenderCost *)0x0) {
    iVar7 = (int)pFVar4->_padding_;
    do {
      pFVar10 = pFVar11;
      if (iVar7 == 0) goto LAB_14ad45675;
      LOCK();
      iVar8 = (int)pFVar4->_padding_;
      bVar6 = iVar7 == iVar8;
      if (bVar6) {
        *(int *)&pFVar4->_padding_ = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
      iVar7 = iVar8;
    } while (!bVar6);
    pFVar11 = (FGraphRenderCost *)this->_padding_;
    pFVar10 = pFVar4;
  }
LAB_14ad45675:
  if ((pFVar11 != this) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FNodeRenderCost *)(*pcVar5)();
    return pFVar9;
  }
  if (pFVar11 == (FGraphRenderCost *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FNodeRenderCost *)(*pcVar5)();
      return pFVar9;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FNodeRenderCost *)(*pcVar5)();
      return pFVar9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->NodeIndex = iVar2;
  (__return_storage_ptr__->GraphRenderCost).Object = pFVar11;
  (__return_storage_ptr__->GraphRenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar10;
  if (pFVar10 != (FGraphRenderCost *)0x0) {
    LOCK();
    *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return __return_storage_ptr__;
}

// AddNodeHierarchy @ 14ad45740

/* WARNING: Removing unreachable block (ram,0x00014ad459c8) */

void __thiscall
Metasound::FGraphRenderCost::AddNodeHierarchy
          (FGraphRenderCost *this,FGuid *param_1,FMetasoundEnvironment *param_2)

{
  TArray<TArray<FGuid,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar7;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **ppTVar8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FName local_res10;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_48;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
  pTVar7 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&param_2->Variables,local_res8);
  if (pTVar7 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar7 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&param_2->Variables,local_res8);
    if ((pTVar7 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppTVar8 = (TArray<FGuid,TSizedDefaultAllocator<32>_> **)
              (**(code **)((longlong)*pTVar7->Ptr + 0x10))();
    if (ppTVar8 ==
        &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr) {
      FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
      pTVar9 = FMetasoundEnvironment::GetValue<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                         (param_2,&local_38,&local_res10);
      if (&local_48 != pTVar9) {
        if ((FGuid *)local_48.AllocatorInstance.Data != (FGuid *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        local_48.AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
        (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = pTVar9->ArrayNum;
        local_48.ArrayMax = pTVar9->ArrayMax;
        pTVar9->ArrayNum = 0;
        pTVar9->ArrayMax = 0;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  if (((local_48.AllocatorInstance.Data <= param_1) &&
      (param_1 < (FGuid *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = local_48.ArrayNum;
  if (local_48.ArrayNum == local_48.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_48.AllocatorInstance,&local_48.ArrayMax);
  }
  uVar4 = *(undefined8 *)&param_1->C;
  pTVar1 = &this->NodeHierarchies;
  local_48.ArrayNum = iVar6 + 1;
  *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar6 * 0x10) = *(undefined8 *)param_1
  ;
  *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) = uVar4;
  pTVar9 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(pTVar1->AllocatorInstance).Data;
  if (((pTVar9 <= &local_48) && (&local_48 < pTVar9 + (this->NodeHierarchies).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->NodeHierarchies).ArrayNum;
  piVar2 = &(this->NodeHierarchies).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->NodeHierarchies).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_48.AllocatorInstance.Data;
  *(int *)(pFVar10 + 8) = local_48.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_48.ArrayMax;
  return;
}

// ComputeGraphRenderCost @ 14ad4b0f0

float __thiscall Metasound::FGraphRenderCost::ComputeGraphRenderCost(FGraphRenderCost *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float local_res8 [8];
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  pFVar2 = (this->NodeCosts).AllocatorInstance.Data;
  iVar1 = (this->NodeCosts).ArrayNum;
  local_res8[0] = 0.0;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (float *)pFVar2;
  Audio::ArraySum(&local_18,local_res8);
  return local_res8[0];
}

// MakeGraphRenderCost @ 14ad5b3f0

TSharedRef<Metasound::FGraphRenderCost,1> * __cdecl
Metasound::FGraphRenderCost::MakeGraphRenderCost
          (TSharedRef<Metasound::FGraphRenderCost,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar1 = ::operator_new(0x40);
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGraphRenderCost_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = 0;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2 = pTVar1;
  }
  TSharedRef<Metasound::FGraphRenderCost,1>::TSharedRef<Metasound::FGraphRenderCost,1>
            (__return_storage_ptr__,(FGraphRenderCost *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// ResetNodeRenderCosts @ 14ad62c30

void __thiscall Metasound::FGraphRenderCost::ResetNodeRenderCosts(FGraphRenderCost *this)

{
  int iVar1;
  
  iVar1 = (this->NodeCosts).ArrayNum;
  if (0 < iVar1) {
    memset((this->NodeCosts).AllocatorInstance.Data,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// SetNodeRenderCost @ 14ad63be0

void __thiscall
Metasound::FGraphRenderCost::SetNodeRenderCost(FGraphRenderCost *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->NodeCosts).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)((this->NodeCosts).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  return;
}

