// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// ~FLayoutNode @ 142700d30

void __thiscall FTabManager::FLayoutNode::~FLayoutNode(FLayoutNode *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FLayoutNode_FTabManager__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142700d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AsArea @ 14270d350

TSharedPtr<FTabManager::FArea,1> * __thiscall
FTabManager::FLayoutNode::AsArea
          (FLayoutNode *this,TSharedPtr<FTabManager::FArea,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FArea *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// AsSplitter @ 14270dae0

TSharedPtr<FTabManager::FSplitter,1> * __thiscall
FTabManager::FLayoutNode::AsSplitter
          (FLayoutNode *this,TSharedPtr<FTabManager::FSplitter,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FSplitter *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// AsStack @ 14270db80

TSharedPtr<FTabManager::FStack,1> * __thiscall
FTabManager::FLayoutNode::AsStack
          (FLayoutNode *this,TSharedPtr<FTabManager::FStack,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FStack *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

