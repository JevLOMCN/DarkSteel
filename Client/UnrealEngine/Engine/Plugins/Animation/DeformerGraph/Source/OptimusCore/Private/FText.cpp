// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FormatOrdered<FText,FText_const_&> @ 14e135170

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<FText,FText_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,FText *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
  iVar5 = local_28.ArrayNum;
  if (local_28.ArrayNum == local_28.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  FVar3.Data = local_28.AllocatorInstance.Data;
  local_28.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined4 *)&local_28.AllocatorInstance.Data[lVar7].field_0x0 = 4;
  FText((FText *)(local_28.AllocatorInstance.Data + lVar7 + 0x10),param_2);
  if (*(longlong *)&FVar3.Data[lVar7 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = local_28.ArrayNum;
  if (local_28.ArrayNum == local_28.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  local_28.ArrayNum = iVar5 + 1;
  pFVar8 = local_28.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined4 *)&pFVar8->field_0x0 = 4;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  pIVar1 = (param_3->TextData).Reference;
  *(ITextData **)(pFVar8 + 0x10) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)(pFVar8 + 0x18) = param_3->Flags;
  if (*(longlong *)(pFVar8 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
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

// FormatOrdered<FText,FText_const_&,FText> @ 14e135390

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<FText,FText_const_&,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,FText *param_3,
          FText *param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
  iVar5 = local_38.ArrayNum;
  if (local_38.ArrayNum == local_38.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  FVar3.Data = local_38.AllocatorInstance.Data;
  local_38.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined4 *)&local_38.AllocatorInstance.Data[lVar7].field_0x0 = 4;
  FText((FText *)(local_38.AllocatorInstance.Data + lVar7 + 0x10),param_2);
  if (*(longlong *)&FVar3.Data[lVar7 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = local_38.ArrayNum;
  if (local_38.ArrayNum == local_38.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  local_38.ArrayNum = iVar5 + 1;
  pFVar8 = local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined4 *)&pFVar8->field_0x0 = 4;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  pIVar1 = (param_3->TextData).Reference;
  *(ITextData **)(pFVar8 + 0x10) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)(pFVar8 + 0x18) = param_3->Flags;
  if (*(longlong *)(pFVar8 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = local_38.ArrayNum;
  if (local_38.ArrayNum == local_38.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  FVar3.Data = local_38.AllocatorInstance.Data;
  lVar7 = (longlong)iVar5 * 0x20;
  local_38.ArrayNum = iVar5 + 1;
  *(undefined4 *)&local_38.AllocatorInstance.Data[lVar7].field_0x0 = 4;
  FText((FText *)(local_38.AllocatorInstance.Data + lVar7 + 0x10),param_4);
  if (*(longlong *)&FVar3.Data[lVar7 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  FormatOrderedImpl(__return_storage_ptr__,param_1,&local_38);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FFormatArgumentValue *)local_38.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatOrdered<FText,FText_const_&,FText,FText> @ 14e135620

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatOrdered<FText,FText_const_&,FText,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,FText *param_3,
          FText *param_4,FText *param_5)

{
  ITextData *pIVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
  iVar5 = local_38.ArrayNum;
  if (local_38.ArrayNum == local_38.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  FVar3.Data = local_38.AllocatorInstance.Data;
  local_38.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined4 *)&local_38.AllocatorInstance.Data[lVar7].field_0x0 = 4;
  FText((FText *)(local_38.AllocatorInstance.Data + lVar7 + 0x10),param_2);
  if (*(longlong *)&FVar3.Data[lVar7 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = local_38.ArrayNum;
  if (local_38.ArrayNum == local_38.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  local_38.ArrayNum = iVar5 + 1;
  pFVar8 = local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined4 *)&pFVar8->field_0x0 = 4;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  pIVar1 = (param_3->TextData).Reference;
  *(ITextData **)(pFVar8 + 0x10) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)(pFVar8 + 0x18) = param_3->Flags;
  if (*(longlong *)(pFVar8 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = local_38.ArrayNum;
  if (local_38.ArrayNum == local_38.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  FVar3.Data = local_38.AllocatorInstance.Data;
  local_38.ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined4 *)&local_38.AllocatorInstance.Data[lVar7].field_0x0 = 4;
  FText((FText *)(local_38.AllocatorInstance.Data + lVar7 + 0x10),param_4);
  if (*(longlong *)&FVar3.Data[lVar7 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = local_38.ArrayNum;
  if (local_38.ArrayNum == local_38.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  FVar3.Data = local_38.AllocatorInstance.Data;
  lVar7 = (longlong)iVar5 * 0x20;
  local_38.ArrayNum = iVar5 + 1;
  *(undefined4 *)&local_38.AllocatorInstance.Data[lVar7].field_0x0 = 4;
  FText((FText *)(local_38.AllocatorInstance.Data + lVar7 + 0x10),param_5);
  if (*(longlong *)&FVar3.Data[lVar7 + 0x10].field_0x0 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
  }
  FormatOrderedImpl(__return_storage_ptr__,param_1,&local_38);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FFormatArgumentValue *)local_38.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

