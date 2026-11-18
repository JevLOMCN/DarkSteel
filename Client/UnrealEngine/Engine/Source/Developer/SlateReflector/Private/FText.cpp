// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// FormatOrdered<int,int,FText> @ 142df47b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<int,int,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,int *param_2,int *param_3,
          FText *param_4)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
  iVar5 = local_28.ArrayNum;
  if (local_28.ArrayNum == local_28.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  iVar6 = iVar5 + 1;
  iVar1 = *param_2;
  pFVar9 = local_28.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined4 *)&pFVar9->field_0x0 = 0;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(undefined4 *)(pFVar9 + 0x18) = 0;
  *(longlong *)(pFVar9 + 8) = (longlong)iVar1;
  if (iVar6 == local_28.ArrayMax) {
    local_28.ArrayNum = iVar6;
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  iVar5 = iVar6 + 1;
  iVar1 = *param_3;
  pFVar9 = local_28.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined4 *)&pFVar9->field_0x0 = 0;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(undefined4 *)(pFVar9 + 0x18) = 0;
  *(longlong *)(pFVar9 + 8) = (longlong)iVar1;
  if (iVar5 == local_28.ArrayMax) {
    local_28.ArrayNum = iVar5;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  FVar3.Data = local_28.AllocatorInstance.Data;
  local_28.ArrayNum = iVar5 + 1;
  lVar8 = (longlong)iVar5 * 0x20;
  *(undefined4 *)&local_28.AllocatorInstance.Data[lVar8].field_0x0 = 4;
  FText((FText *)(local_28.AllocatorInstance.Data + lVar8 + 0x10),param_4);
  if (*(longlong *)&FVar3.Data[lVar8 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
  }
  FormatOrderedImpl(__return_storage_ptr__,param_1,&local_28);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FFormatArgumentValue *)local_28.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

