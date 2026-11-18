// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Format<unsigned_int,unsigned_int,unsigned_int> @ 145031700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<unsigned_int,unsigned_int,unsigned_int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,uint param_2,uint param_3,uint param_4
          )

{
  undefined1 auStackY_d8 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_98;
  FTextFormat local_88;
  FFormatArgumentValue local_78;
  undefined4 local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78.field1_0x8.IntValue._4_4_ = 0;
  local_78.field1_0x8.FloatValue = (float)param_2;
  local_50 = (ulonglong)param_3;
  local_30 = (ulonglong)param_4;
  local_78.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_78.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Type = UInt;
  local_58 = 1;
  local_38 = 1;
  local_98.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_98.AllocatorInstance,3,&local_98.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_98.AllocatorInstance.Data,&local_78,3);
  local_88.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_88.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_88,&local_98);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FFormatArgumentValue *)local_98.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

