// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// StaticStruct @ 14d4dc2a0

UScriptStruct * __cdecl FStateTreeEventQueue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEventQueue,(UObject *)pUVar1,
                         L"StateTreeEventQueue");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton;
}

// ConsumeEvent @ 14d4f2680

bool __thiscall
FStateTreeEventQueue::ConsumeEvent(FStateTreeEventQueue *this,FStateTreeSharedEvent *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar1 = (this->SharedEvents).ArrayNum;
  bVar3 = false;
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    iVar9 = iVar1;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar9) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (*(FStateTreeEvent **)((this->SharedEvents).AllocatorInstance.Data + lVar8) ==
          (param_1->Event).Object) {
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar7 < (this->SharedEvents).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        TArray<FStateTreeSharedEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->SharedEvents,uVar7);
      }
      else {
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      }
      iVar9 = (this->SharedEvents).ArrayNum;
    } while ((int)uVar7 < iVar9);
    if (bVar3) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this,iVar9,&(this->SharedEvents).ArrayMax);
    }
  }
  return 0 < iVar1 - (this->SharedEvents).ArrayNum;
}

// GetMutableEventsView @ 14d4fe4a0

TArrayView<FStateTreeSharedEvent,int> * __thiscall
FStateTreeEventQueue::GetMutableEventsView
          (FStateTreeEventQueue *this,TArrayView<FStateTreeSharedEvent,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FStateTreeSharedEvent,int> *pTVar4;
  
  iVar1 = (this->SharedEvents).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FStateTreeSharedEvent *)(this->SharedEvents).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FStateTreeSharedEvent,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// Reset @ 14d506620

void __thiscall FStateTreeEventQueue::Reset(FStateTreeEventQueue *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(this->SharedEvents).ArrayMax;
  pFVar3 = (this->SharedEvents).AllocatorInstance.Data;
  iVar2 = (this->SharedEvents).ArrayNum;
  if (-1 < (this->SharedEvents).ArrayMax) {
    DestructItems<FStateTreeSharedEvent,int>((FStateTreeSharedEvent *)pFVar3,iVar2);
    (this->SharedEvents).ArrayNum = 0;
    return;
  }
  DestructItems<FStateTreeSharedEvent,int>((FStateTreeSharedEvent *)pFVar3,iVar2);
  (this->SharedEvents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// SendEvent @ 14d512fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStateTreeEventQueue::SendEvent
          (FStateTreeEventQueue *this,UObject *param_1,FGameplayTag *param_2,
          FConstStructView *param_3,FName param_4)

{
  int iVar1;
  ForAnyElementType FVar2;
  UScriptStruct *pUVar3;
  undefined1 auStack_1d8 [32];
  UScriptStruct *local_1b8;
  FScriptContainerElement *local_1b0;
  UScriptStruct *local_1a8;
  FString local_198;
  FName local_188 [2];
  FConstStructView local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if ((param_2->TagName == (FName)0x0) &&
     ((param_3->StructMemory == (uchar *)0x0 || (param_3->ScriptStruct == (UScriptStruct *)0x0)))) {
    if (FVisualLogger::bIsRecording != 0) {
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_198,L"None");
      }
      else {
        local_188[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_188[0].Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(local_188,&local_198);
      }
      local_168._padding_ = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_198.Data.ArrayNum != 0) {
        FVar2.Data = local_198.Data.AllocatorInstance.Data;
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FStateTreeEventQueue::SendEvent",0x1f,Yes);
      local_1b8 = (UScriptStruct *)local_168.Ptr;
      local_1b0 = FVar2.Data;
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogStateTree.field_0x4,Error,
                 L"%s: An event with an invalid tag and payload has been sent to \'%s\'. This is not allowed."
                );
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
    if ((byte)LogStateTree._0_1_ < 2) {
      return false;
    }
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_198,L"None");
    }
    else {
      local_188[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_188[0].Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(local_188,&local_198);
    }
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FStateTreeEventQueue::SendEvent",0x1f,Yes);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    local_178.ScriptStruct = (UScriptStruct *)local_198.Data.AllocatorInstance.Data;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
      local_178.ScriptStruct = (UScriptStruct *)local_198.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar1 = (this->SharedEvents).ArrayNum;
    if (iVar1 < 0x40) {
      if (iVar1 == (this->SharedEvents).ArrayMax) {
        iVar1 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,&(this->SharedEvents).ArrayMax);
      }
      local_178.ScriptStruct = param_3->ScriptStruct;
      local_178.StructMemory = param_3->StructMemory;
      (this->SharedEvents).ArrayNum = iVar1 + 1;
      FStateTreeSharedEvent::FStateTreeSharedEvent
                ((FStateTreeSharedEvent *)
                 ((this->SharedEvents).AllocatorInstance.Data + (longlong)iVar1 * 0x10),
                 (FGameplayTag)param_2->TagName,&local_178,param_4);
      return true;
    }
    if (FVisualLogger::bIsRecording != 0) {
      ::FName::ToString(&param_2->TagName,(FString *)&local_178);
      pUVar3 = (UScriptStruct *)L"";
      if ((int)local_178.StructMemory != 0) {
        pUVar3 = local_178.ScriptStruct;
      }
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_198,L"None");
      }
      else {
        local_188[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_188[0].Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(local_188,&local_198);
      }
      local_168._padding_ = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_198.Data.ArrayNum != 0) {
        FVar2.Data = local_198.Data.AllocatorInstance.Data;
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FStateTreeEventQueue::SendEvent",0x1f,Yes);
      local_1b8 = (UScriptStruct *)local_168.Ptr;
      local_1b0 = FVar2.Data;
      local_1a8 = pUVar3;
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogStateTree.field_0x4,Error,
                 L"%s: Too many events send on \'%s\'. Dropping event %s");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_178.ScriptStruct != (UScriptStruct *)0x0) {
        FMemory::Free(local_178.ScriptStruct);
      }
    }
    if ((byte)LogStateTree._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(&param_2->TagName,(FString *)&local_178);
    pUVar3 = (UScriptStruct *)L"";
    if ((int)local_178.StructMemory != 0) {
      pUVar3 = local_178.ScriptStruct;
    }
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_198,L"None");
    }
    else {
      local_188[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_188[0].Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(local_188,&local_198);
    }
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FStateTreeEventQueue::SendEvent",0x1f,Yes);
    local_1b8 = pUVar3;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (local_178.ScriptStruct != (UScriptStruct *)0x0) {
    FMemory::Free(local_178.ScriptStruct);
  }
  return false;
}

