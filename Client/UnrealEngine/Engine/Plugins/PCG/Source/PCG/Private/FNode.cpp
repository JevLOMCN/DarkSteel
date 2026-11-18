// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ~FNode @ 1499c5fb0

void __thiscall PCGDataTypeHierarchy::FNode::~FNode(FNode *this)

{
  int iVar1;
  FNode *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Children).AllocatorInstance.Data;
  iVar1 = (this->Children).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Children).ArrayNum != iVar1) {
      `TCheckedPointerIterator<PCGDataTypeHierarchy::FNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    this_00 = *(FNode **)pFVar3;
    if (this_00 != (FNode *)0x0) {
      ~FNode(this_00);
      ::operator_delete(this_00,0x20);
    }
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// AddChild @ 1499d3210

void __thiscall PCGDataTypeHierarchy::FNode::AddChild(FNode *this,FNode *param_1)

{
  TArray<PCGDataTypeHierarchy::FNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNode *local_res10 [3];
  
  pTVar1 = &this->Children;
  param_1->Parent = this;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->Children).ArrayMax * 8)) {
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
  iVar6 = (this->Children).ArrayNum;
  piVar2 = &(this->Children).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Children).ArrayNum = iVar6 + 1;
  *(FNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  return;
}

