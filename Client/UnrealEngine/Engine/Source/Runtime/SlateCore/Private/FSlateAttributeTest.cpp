// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// GetTestFlags @ 142525a50

EAutomationTestFlags __thiscall FSlateAttributeTest::GetTestFlags(FSlateAttributeTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142525a60

bool __thiscall FSlateAttributeTest::IsStressTest(FSlateAttributeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142525a70

uint __thiscall FSlateAttributeTest::GetRequiredDeviceNum(FSlateAttributeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142525a80

FString * __thiscall
FSlateAttributeTest::GetTestSourceFileName
          (FSlateAttributeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateAttributeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142525ab0

int __thiscall FSlateAttributeTest::GetTestSourceFileLine(FSlateAttributeTest *this)

{
  return 0x12;
}

// GetTests @ 142525ac0

/* WARNING: Removing unreachable block (ram,0x000142525bad) */
/* WARNING: Removing unreachable block (ram,0x000142525c78) */

void __thiscall
FSlateAttributeTest::GetTests
          (FSlateAttributeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.Attribute");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// GetBeautifiedTestName @ 14252cb80

FString * __thiscall
FSlateAttributeTest::GetBeautifiedTestName
          (FSlateAttributeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.Attribute");
  return __return_storage_ptr__;
}

// operator() @ 142555040

void __thiscall
`FSlateAttributeTest::RunTest'::__l14::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3,int param_4,int param_5,wchar_t *param_6)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FString local_18;
  
  if ((((UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter == param_1) &&
       (UE::Slate::Private::FConstructionCounter::CopyConstructionCounter == param_2)) &&
      (UE::Slate::Private::FConstructionCounter::MoveConstructionCounter == param_3)) &&
     ((UE::Slate::Private::FConstructionCounter::CopyOperatorCounter == param_4 &&
      (UE::Slate::Private::FConstructionCounter::MoveOperatorCounter == param_5)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x30);
  ::FString::FString(&local_18,param_6);
  (*pcVar2)(plVar1,uVar3,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

