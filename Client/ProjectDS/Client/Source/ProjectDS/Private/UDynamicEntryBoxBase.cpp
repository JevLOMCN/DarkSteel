// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// GetTypedEntries<UDS_UserWidget> @ 14bc7d040

TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>
          (UDynamicEntryBoxBase *this,
          TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UClass *pUVar9;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar8 = GetAllEntries(this);
  pFVar11 = (pTVar8->AllocatorInstance).Data;
  iVar2 = pTVar8->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
LAB_14bc7d080:
  do {
    if (pTVar8->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UUserWidget_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar1) {
      return __return_storage_ptr__;
    }
    lVar3 = *(longlong *)pFVar11;
    if (lVar3 != 0) {
      pUVar9 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      iVar7 = (int)pUVar9->_padding_;
      if ((iVar7 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar7 * 8)
          == &pUVar9->_padding_)) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_38[0] = lVar3;
        if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        pFVar11 = pFVar11 + 8;
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_38[0];
        goto LAB_14bc7d080;
      }
    }
    local_38[0] = 0;
    pFVar11 = pFVar11 + 8;
  } while( true );
}

