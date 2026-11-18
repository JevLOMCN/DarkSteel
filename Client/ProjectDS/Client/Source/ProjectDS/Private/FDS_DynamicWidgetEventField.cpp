// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b644a70

UScriptStruct * __cdecl FDS_DynamicWidgetEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_DynamicWidgetEventField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_DynamicWidgetEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_DynamicWidgetEventField,(UObject *)pUVar1,
                         L"DS_DynamicWidgetEventField");
  }
  return Z_Registration_Info_UScriptStruct_FDS_DynamicWidgetEventField.OuterSingleton;
}

// GetEntryWidgetList @ 14bdc2df0

TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_DynamicWidgetEventField::GetEntryWidgetList
          (FDS_DynamicWidgetEventField *this,
          TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDynamicEntryBoxBase *this_00;
  TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UClass *pUVar8;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_48;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar5) {
    this_00 = (UDynamicEntryBoxBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    pTVar7 = UDynamicEntryBoxBase::GetAllEntries(this_00);
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    iVar1 = pTVar7->ArrayNum;
    pFVar3 = pFVar10 + (longlong)iVar1 * 8;
    while( true ) {
      if (pTVar7->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UUserWidget_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar3) break;
      lVar2 = *(longlong *)pFVar10;
      if (lVar2 == 0) {
LAB_14bdc2f5b:
        local_48 = 0;
        pFVar10 = pFVar10 + 8;
      }
      else {
        pUVar8 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_14bdc2f5b;
        local_48 = lVar2;
        if ((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
           (((FScriptContainerElement *)&local_48 <
             local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar6 = local_40.ArrayNum;
        if (local_40.ArrayNum == local_40.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
        }
        pFVar10 = pFVar10 + 8;
        local_40.ArrayNum = iVar6 + 1;
        *(longlong *)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48;
      }
    }
    if (__return_storage_ptr__ != &local_40) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_40.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_40.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_40.ArrayMax;
      local_40.ArrayNum = 0;
      local_40.ArrayMax = 0;
      local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

