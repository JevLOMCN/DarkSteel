// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 1

// Format<unsigned_int,unsigned_int,unsigned_int,FText,FText,FText> @ 148c0e780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<unsigned_int,unsigned_int,unsigned_int,FText,FText,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,uint param_2,uint param_3,uint param_4
          ,FText *param_5,FText *param_6,FText *param_7)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_158 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_118;
  FTextFormat local_108;
  FFormatArgumentValue local_f8;
  undefined4 local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  FText local_88;
  undefined4 local_78;
  FText local_68;
  undefined4 local_58;
  FText local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8.field1_0x8.IntValue._4_4_ = 0;
  local_f8.field1_0x8.FloatValue = (float)param_2;
  local_d0 = (ulonglong)param_3;
  local_b0 = (ulonglong)param_4;
  local_f8.Type = UInt;
  local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_f8.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_d8 = 1;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_b8 = 1;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  local_98 = 4;
  FText(&local_88,param_5);
  if (local_88.TextData.Reference == (ITextData *)0x0) {
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
  local_78 = 4;
  FText(&local_68,param_6);
  if (local_68.TextData.Reference == (ITextData *)0x0) {
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
  local_58 = 4;
  FText(&local_48,param_7);
  if (local_48.TextData.Reference == (ITextData *)0x0) {
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
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,6,0,&local_118.AllocatorInstance,6,&local_118.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_118.AllocatorInstance.Data,&local_f8,6);
  local_108.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_108.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_108.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_108,&local_118);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if ((FFormatArgumentValue *)local_118.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_6->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_7->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

