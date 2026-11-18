// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// FormatOrdered<FText_const_&> @ 1463071c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<FText_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2)

{
  int iVar1;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,&local_18.AllocatorInstance,0,&local_18.ArrayMax);
  iVar1 = local_18.ArrayNum;
  if (local_18.ArrayNum == local_18.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  local_18.ArrayNum = iVar1 + 1;
  FFormatArgumentValue::FFormatArgumentValue
            ((FFormatArgumentValue *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x20),
             param_2);
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

