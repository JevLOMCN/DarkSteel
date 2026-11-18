// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// Format<int,unsigned_int,unsigned_int,unsigned_int,unsigned_int> @ 14e6af600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<int,unsigned_int,unsigned_int,unsigned_int,unsigned_int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,int param_2,uint param_3,uint param_4,
          uint param_5,uint param_6)

{
  undefined1 auStackY_118 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_b8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)param_2;
  local_90 = (ulonglong)param_3;
  local_70 = (ulonglong)param_4;
  local_50 = (ulonglong)param_5;
  local_30 = (ulonglong)param_6;
  local_b8.Type = Int;
  local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_b8.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98 = 1;
  local_78 = 1;
  local_58 = 1;
  local_38 = 1;
  local_d8.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,5,0,&local_d8.AllocatorInstance,5,&local_d8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_d8.AllocatorInstance.Data,&local_b8,5);
  local_c8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_c8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_c8,&local_d8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Format<int,FText> @ 14e703550

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<int,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,int param_2,FText *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  FText local_18;
  
  local_48.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)param_2;
  local_48.Type = Int;
  local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_28 = 4;
  FText(&local_18,param_3);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_68.AllocatorInstance,2,&local_68.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_68.AllocatorInstance.Data,&local_48,2);
  local_58.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_58.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_58.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_58,&local_68);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FFormatArgumentValue *)local_68.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

