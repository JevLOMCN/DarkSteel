// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateDebuggingWidgetUpdatedEventArgs @ 14242d560

FSlateDebuggingWidgetUpdatedEventArgs * __thiscall
FSlateDebuggingWidgetUpdatedEventArgs::FSlateDebuggingWidgetUpdatedEventArgs
          (FSlateDebuggingWidgetUpdatedEventArgs *this,SWidget *param_1,EWidgetUpdateFlags param_2,
          bool param_3)

{
  this->Widget = param_1;
  this->UpdateFlags = param_2;
  this->bFromPaint = param_3;
  return this;
}

// ToText @ 1424544a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FSlateDebuggingWidgetUpdatedEventArgs::ToText
          (FSlateDebuggingWidgetUpdatedEventArgs *this,FText *__return_storage_ptr__)

{
  EWidgetUpdateFlags EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TArray<FText,TSizedDefaultAllocator<32>_> local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  EVar1 = this->UpdateFlags;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  if ((EVar1 & NeedsVolatilePaint) == None) {
    if ((EVar1 & NeedsRepaint) == None) {
      if ((EVar1 & (NeedsActiveTimerUpdate|NeedsTick)) == (NeedsActiveTimerUpdate|NeedsTick)) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_98,L"SlateDebugger",L"NeedsTickNeedsActiveTimerUpdate",
                            L"Active Timer and Tick");
        if (((local_c8.AllocatorInstance.Data <= pFVar5) &&
            (pFVar5 < (FText *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x10
                               ))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar2)();
          return pFVar5;
        }
        iVar4 = local_c8.ArrayNum;
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        local_c8.ArrayNum = iVar4 + 1;
        FText::FText((FText *)(local_c8.AllocatorInstance.Data + (longlong)iVar4 * 0x10),pFVar5);
        local_b8.TextData.Reference = local_98.TextData.Reference;
      }
      else if ((EVar1 & NeedsActiveTimerUpdate) == None) {
        if ((EVar1 & NeedsTick) == None) goto LAB_142454928;
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_78,L"SlateDebugger",L"NeedsTick",L"Tick");
        if (((local_c8.AllocatorInstance.Data <= pFVar5) &&
            (pFVar5 < (FText *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x10
                               ))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar2)();
          return pFVar5;
        }
        iVar4 = local_c8.ArrayNum;
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        local_c8.ArrayNum = iVar4 + 1;
        FText::FText((FText *)(local_c8.AllocatorInstance.Data + (longlong)iVar4 * 0x10),pFVar5);
        local_b8.TextData.Reference = local_78.TextData.Reference;
      }
      else {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"SlateDebugger",L"NeedsActiveTimerUpdate",L"Active Timer");
        if (((local_c8.AllocatorInstance.Data <= pFVar5) &&
            (pFVar5 < (FText *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x10
                               ))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar2)();
          return pFVar5;
        }
        iVar4 = local_c8.ArrayNum;
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        local_c8.ArrayNum = iVar4 + 1;
        FText::FText((FText *)(local_c8.AllocatorInstance.Data + (longlong)iVar4 * 0x10),pFVar5);
        local_b8.TextData.Reference = local_88.TextData.Reference;
      }
    }
    else {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"SlateDebugger",L"NeedsRepaint",L"Repaint");
      if (((local_c8.AllocatorInstance.Data <= pFVar5) &&
          (pFVar5 < (FText *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x10))
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = local_c8.ArrayNum;
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_c8.ArrayNum = iVar4 + 1;
      FText::FText((FText *)(local_c8.AllocatorInstance.Data + (longlong)iVar4 * 0x10),pFVar5);
      local_b8.TextData.Reference = local_a8.TextData.Reference;
    }
  }
  else {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_b8,L"SlateDebugger",L"NeedsVolatilePaint",L"Volatile Repaint");
    if (((local_c8.AllocatorInstance.Data <= pFVar5) &&
        (pFVar5 < (FText *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x10)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    iVar4 = local_c8.ArrayNum;
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
    }
    local_c8.ArrayNum = iVar4 + 1;
    FText::FText((FText *)(local_c8.AllocatorInstance.Data + (longlong)iVar4 * 0x10),pFVar5);
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
LAB_142454928:
  pFVar6 = FReflectionMetaData::GetWidgetDebugInfo(&local_48,this->Widget);
  pFVar5 = FText::FromString(&local_38,pFVar6);
  pFVar7 = FText::FromString(&local_58,L"|");
  pFVar7 = FText::Join(&local_28,pFVar7,&local_c8);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"SlateDebugger",L"WidgetUpdatedEventFormat",L"{0} {1}");
  pFVar9 = FTextFormat::FTextFormat(&local_18,pFVar8,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar9,pFVar7,pFVar5);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FText,int>((FText *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FText *)local_c8.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

