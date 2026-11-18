// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// FormatOrdered<FText> @ 14ca569b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<FText>(FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  longlong lVar6;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,&local_18.AllocatorInstance,0,&local_18.ArrayMax);
  iVar4 = local_18.ArrayNum;
  if (local_18.ArrayNum == local_18.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  FVar2.Data = local_18.AllocatorInstance.Data;
  local_18.ArrayNum = iVar4 + 1;
  lVar6 = (longlong)iVar4 * 0x20;
  *(undefined4 *)&local_18.AllocatorInstance.Data[lVar6].field_0x0 = 4;
  FText((FText *)(local_18.AllocatorInstance.Data + lVar6 + 0x10),param_2);
  if (*(longlong *)&FVar2.Data[lVar6 + 0x10].field_0x0 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar1)();
      return pFVar5;
    }
  }
  FormatOrderedImpl(__return_storage_ptr__,param_1,&local_18);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FFormatArgumentValue *)local_18.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

