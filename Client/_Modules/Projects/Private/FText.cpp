// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 2

// Format<int> @ 141e07470

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl FText::Format<int>(FText *__return_storage_ptr__,FTextFormat *param_1,int param_2)

{
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)param_2;
  local_28.Type = Int;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_48.AllocatorInstance.Data,&local_28,1);
  local_38.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_38.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_38.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_38,&local_48);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FFormatArgumentValue *)local_48.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Format<FText,int,FText> @ 141e07570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,int,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,int param_3,
          FText *param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_108 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8.Type = Text;
  FText((FText *)&local_a8.TextValue,param_2);
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = 4;
  local_80 = (longlong)param_3;
  FText(&local_58,param_4);
  if (local_58.TextData.Reference == (ITextData *)0x0) {
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
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_c8.AllocatorInstance,3,&local_c8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_c8.AllocatorInstance.Data,&local_a8,3);
  local_b8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_b8,&local_c8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

