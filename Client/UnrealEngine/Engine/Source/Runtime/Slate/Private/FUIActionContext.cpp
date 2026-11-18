// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// AddContext @ 14270aaa0

void __thiscall
FUIActionContext::AddContext(FUIActionContext *this,TSharedPtr<IUIActionContextBase,1> *param_1)

{
  int *piVar1;
  TSharedPtr<IUIActionContextBase,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar2 = (TSharedPtr<IUIActionContextBase,1> *)(this->Contexts).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Contexts).ArrayMax)) {
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
  iVar6 = (this->Contexts).ArrayNum;
  piVar1 = &(this->Contexts).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Contexts).ArrayNum = iVar6 + 1;
  pFVar7 = (this->Contexts).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(IUIActionContextBase **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// FindContext @ 1427354e0

TSharedPtr<IUIActionContextBase,1> * __thiscall
FUIActionContext::FindContext
          (FUIActionContext *this,TSharedPtr<IUIActionContextBase,1> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [16];
  FName local_res18;
  undefined1 local_res20 [8];
  
  iVar1 = (this->Contexts).ArrayNum;
  pFVar7 = (this->Contexts).AllocatorInstance.Data;
  local_res18.Number = param_1.Number;
  uVar4 = local_res18.Number;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  local_res18 = param_1;
  while( true ) {
    if ((this->Contexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<IUIActionContextBase,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    puVar2 = *(undefined8 **)pFVar7;
    if (((puVar2 != (undefined8 *)0x0) &&
        (puVar5 = (uint *)(**(code **)*puVar2)(puVar2,local_res20),
        *puVar5 == param_1.ComparisonIndex.Value.Value)) && (puVar5[1] == uVar4)) {
      __return_storage_ptr__->Object = *(IUIActionContextBase **)pFVar7;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar7 = pFVar7 + 0x10;
  }
  __return_storage_ptr__->Object = (IUIActionContextBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

