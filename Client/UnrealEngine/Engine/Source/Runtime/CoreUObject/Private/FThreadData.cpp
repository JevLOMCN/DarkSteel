// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FlushEdgeList @ 1421cc100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FThreadData::FlushEdgeList(FThreadData *this,FPolicyUObjectHeap *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  longlong local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  if ((this->PreviousReferencingObject != (UObject *)0x0) &&
     (0 < *(int *)&(this->CurrentEdgeList).Elements.field_0x8 -
          *(int *)&(this->CurrentEdgeList).Elements.field_0x34)) {
    iVar2 = *(int *)&this->PreviousReferencingObject->field_0xc;
    if ((iVar2 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar2)) {
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&this->CurrentEdgeList,&local_28);
    lVar3 = (this->GraphBuffer).ArrayNum;
    TArray<int,TSizedDefaultAllocator<64>_>::Append<int,TSizedDefaultAllocator<32>_>
              (&this->GraphBuffer,&local_28);
    local_18 = lVar3 * 4;
    iStack_10 = local_28.ArrayNum;
    if ((local_28.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = iVar2 - this->StartVertex;
    uVar6 = 0;
    if ((int)uVar7 < (this->EdgeLists).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->EdgeLists).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    *(longlong *)pFVar1 = local_18;
    *(longlong *)(pFVar1 + 8) = CONCAT44(uStack_c,iStack_10);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->CurrentEdgeList);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// FlushEdgeList @ 1421cc250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FThreadData::FlushEdgeList(FThreadData *this,FPolicyUObjectHeap *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  longlong local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  if ((this->PreviousReferencingObject != (UObject *)0x0) &&
     (0 < *(int *)&(this->CurrentEdgeList).Elements.field_0x8 -
          *(int *)&(this->CurrentEdgeList).Elements.field_0x34)) {
    iVar2 = *(int *)&this->PreviousReferencingObject->field_0xc;
    if ((iVar2 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar2)) {
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&this->CurrentEdgeList,&local_28);
    lVar3 = (this->GraphBuffer).ArrayNum;
    TArray<int,TSizedDefaultAllocator<64>_>::Append<int,TSizedDefaultAllocator<32>_>
              (&this->GraphBuffer,&local_28);
    local_18 = lVar3 * 4;
    iStack_10 = local_28.ArrayNum;
    if ((local_28.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = iVar2 - this->StartVertex;
    uVar6 = 0;
    if ((int)uVar7 < (this->EdgeLists).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->EdgeLists).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    *(longlong *)pFVar1 = local_18;
    *(longlong *)(pFVar1 + 8) = CONCAT44(uStack_c,iStack_10);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->CurrentEdgeList);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

