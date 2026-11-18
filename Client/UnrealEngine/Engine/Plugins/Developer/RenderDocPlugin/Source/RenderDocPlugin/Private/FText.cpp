// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 2

// FormatOrdered<float_&,FText_const_&> @ 14e2c8490

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<float_&,FText_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,float *param_2,FText *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,&local_18.AllocatorInstance,0,&local_18.ArrayMax);
  iVar2 = local_18.ArrayNum;
  if (local_18.ArrayNum == local_18.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  fVar1 = *param_2;
  iVar3 = iVar2 + 1;
  lVar4 = (longlong)iVar2 * 0x20;
  *(undefined4 *)&local_18.AllocatorInstance.Data[lVar4].field_0x0 = 2;
  *(undefined8 *)(local_18.AllocatorInstance.Data + lVar4 + 0x10) = 0;
  *(undefined4 *)(local_18.AllocatorInstance.Data + lVar4 + 0x18) = 0;
  *(float *)(local_18.AllocatorInstance.Data + lVar4 + 8) = fVar1;
  if (iVar3 == local_18.ArrayMax) {
    local_18.ArrayNum = iVar3;
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  local_18.ArrayNum = iVar3 + 1;
  FFormatArgumentValue::FFormatArgumentValue
            ((FFormatArgumentValue *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 0x20),
             param_3);
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

// FormatOrdered<unsigned___int64> @ 14e2c8680

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<unsigned___int64>
          (FText *__return_storage_ptr__,FTextFormat *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,&local_18.AllocatorInstance,0,&local_18.ArrayMax);
  iVar2 = local_18.ArrayNum;
  if (local_18.ArrayNum == local_18.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  uVar1 = *param_2;
  local_18.ArrayNum = iVar2 + 1;
  pFVar3 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined4 *)&pFVar3->field_0x0 = 1;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(undefined4 *)(pFVar3 + 0x18) = 0;
  *(ulong64 *)(pFVar3 + 8) = uVar1;
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

