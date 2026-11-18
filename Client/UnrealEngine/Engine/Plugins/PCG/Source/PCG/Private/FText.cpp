// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// Format<FText,int> @ 14997c210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,int param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  longlong local_20;
  longlong *local_18;
  undefined4 local_10;
  
  local_48.Type = Text;
  FText((FText *)&local_48.TextValue,param_2);
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  local_28 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 2;
  local_20 = (longlong)param_3;
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
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Format<FText,int,FText,int> @ 14997c3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,int,FText,int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,int param_3,
          FText *param_4,int param_5)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_128 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FTextFormat local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8.Type = Text;
  FText((FText *)&local_c8.TextValue,param_2);
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_88 = 4;
  local_a0 = (longlong)param_3;
  FText(&local_78,param_4);
  if (local_78.TextData.Reference == (ITextData *)0x0) {
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
  local_60 = (longlong)param_5;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,0,&local_e8.AllocatorInstance,4,&local_e8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_e8.AllocatorInstance.Data,&local_c8,4);
  local_d8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_d8,&local_e8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference
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

// Format<FText,unsigned_int> @ 149a899d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,unsigned_int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,uint param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  ulonglong local_20;
  longlong *local_18;
  undefined4 local_10;
  
  local_48.Type = Text;
  FText((FText *)&local_48.TextValue,param_2);
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  local_28 = 1;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 2;
  local_20 = (ulonglong)param_3;
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
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Format<int,int> @ 149b4b060

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<int,int>(FText *__return_storage_ptr__,FTextFormat *param_1,int param_2,int param_3)

{
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  longlong local_20;
  longlong *local_18;
  undefined4 local_10;
  
  local_48.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)param_2;
  local_48.Type = Int;
  local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_20 = (longlong)param_3;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
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
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Format<int,FText,FText> @ 149bbf480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<int,FText,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,int param_2,FText *param_3,
          FText *param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_f8 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_b8;
  FTextFormat local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  undefined4 local_58;
  FText local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)param_2;
  local_98.Type = Int;
  local_98.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_98.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_78 = 4;
  FText(&local_68,param_3);
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
  FText(&local_48,param_4);
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
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_b8.AllocatorInstance,3,&local_b8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_b8.AllocatorInstance.Data,&local_98,3);
  local_a8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_a8,&local_b8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Format<int,FText,FText,FText> @ 149c41350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<int,FText,FText,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,int param_2,FText *param_3,
          FText *param_4,FText *param_5)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_128 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FTextFormat local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  FText local_98;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)param_2;
  local_c8.Type = Int;
  local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_c8.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_a8 = 4;
  FText(&local_98,param_3);
  if (local_98.TextData.Reference == (ITextData *)0x0) {
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
  local_88 = 4;
  FText(&local_78,param_4);
  if (local_78.TextData.Reference == (ITextData *)0x0) {
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
  local_68 = 4;
  FText(&local_58,param_5);
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
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,0,&local_e8.AllocatorInstance,4,&local_e8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_e8.AllocatorInstance.Data,&local_c8,4);
  local_d8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_d8,&local_e8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Format<unsigned_int,int> @ 149c41590

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<unsigned_int,int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,uint param_2,int param_3)

{
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  longlong local_20;
  longlong *local_18;
  undefined4 local_10;
  
  local_48.Type = UInt;
  local_48.field1_0x8.IntValue._4_4_ = 0;
  local_48.field1_0x8.FloatValue = (float)param_2;
  local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_20 = (longlong)param_3;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
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
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

