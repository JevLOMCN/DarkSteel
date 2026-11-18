// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ArrayToString @ 141bf6ec0

void __thiscall
FTextTestClass::ArrayToString
          (FTextTestClass *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar7 = (longlong)param_1->ArrayNum;
  uVar6 = 0;
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      if (0 < (int)uVar6) {
        ::FString::AppendChars(param_2,L", ",2);
      }
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      iVar1 = *(int *)(pFVar2 + lVar9 + 8);
      iVar8 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(param_2,*(wchar_t **)(pFVar2 + lVar9),iVar8);
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// FormatWithoutArguments @ 141c01020

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FTextTestClass::FormatWithoutArguments
          (FTextTestClass *this,FText *__return_storage_ptr__,FText *param_1)

{
  FTextFormat *pFVar1;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_28;
  FTextFormat local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pFVar1 = FTextFormat::FTextFormat(&local_18,param_1,Default);
  FText::Format(__return_storage_ptr__,pFVar1,&local_28);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FFormatArgumentValue *)local_28.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TestIdentical @ 141c461c0

void __thiscall
FTextTestClass::TestIdentical
          (FTextTestClass *this,FTextTestClass *param_1,FText *param_2,FText *param_3,
          ETextIdenticalModeFlags param_4,bool param_5,int param_6)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar3 = FText::IdenticalTo(param_2,param_3,param_4);
  if (bVar3 != param_5) {
    pFVar4 = FAutomationTestFramework::Get();
    pwVar6 = L"true";
    pwVar5 = L"true";
    pFVar1 = pFVar4->CurrentTest;
    if (!param_5) {
      pwVar5 = L"false";
    }
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,pwVar5);
    if (!bVar3) {
      pwVar6 = L"false";
    }
    ::FString::FString(&local_58,pwVar6);
    FText::ToString(param_3);
    FText::ToString(param_2);
    ::FString::PrintfImpl
              (&local_38,
               L"FText(\"%s\").IdenticalTo(FText(\"%s\")) on line %d produced %s when it was expected to produce %s."
              );
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TestPatternParameterEnumeration @ 141c48e90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextTestClass::TestPatternParameterEnumeration
          (FTextTestClass *this,FTextTestClass *param_1,FText *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  FString local_48;
  undefined1 local_38 [8];
  FSharedReferencer<1> local_30;
  FString local_28;
  
  uVar1 = param_4->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  FTextFormat::FTextFormat((FTextFormat *)local_38,param_2,Default);
  FText::GetFormatPatternParameters((FTextFormat *)local_38,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  if ((param_3->ArrayNum != param_4->ArrayNum) ||
     (bVar4 = CompareItems<FString,int>
                        ((FString *)(param_3->AllocatorInstance).Data,
                         (FString *)(param_4->AllocatorInstance).Data,param_3->ArrayNum), !bVar4)) {
    local_38 = (undefined1  [8])0x0;
    local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ArrayToString(this,param_3,(FString *)local_38);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ArrayToString(this,param_4,&local_48);
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FText::ToString(param_2);
    ::FString::PrintfImpl
              (&local_28,L"\"%s\" contains parameters (%s) but expected parameters (%s).");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_38);
    }
  }
  return;
}

