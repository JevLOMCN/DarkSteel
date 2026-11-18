// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148074a00

EAutomationTestFlags __thiscall FNetSequenceNumberTest::GetTestFlags(FNetSequenceNumberTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 148074a10

bool __thiscall FNetSequenceNumberTest::IsStressTest(FNetSequenceNumberTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148074a20

uint __thiscall FNetSequenceNumberTest::GetRequiredDeviceNum(FNetSequenceNumberTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148074a30

FString * __thiscall
FNetSequenceNumberTest::GetTestSourceFileName
          (FNetSequenceNumberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Tests\\Util\\SequenceNumberTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148074a60

int __thiscall FNetSequenceNumberTest::GetTestSourceFileLine(FNetSequenceNumberTest *this)

{
  return 8;
}

// GetTests @ 148074a70

/* WARNING: Removing unreachable block (ram,0x000148074b5d) */
/* WARNING: Removing unreachable block (ram,0x000148074c28) */

void __thiscall
FNetSequenceNumberTest::GetTests
          (FNetSequenceNumberTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Net.Misc.SequenceNumberTest");
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

// RunTest @ 148074c50

bool __thiscall FNetSequenceNumberTest::RunTest(FNetSequenceNumberTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"SequenceNumbers - Seq() == 0",0,0);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"SequenceNumbers - Seq(8) == 0",0,0);
  ::FString::FString(&local_238,"SequenceNumbers - Seq()++ == 1");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar5.Data = local_238.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,1,1);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_228,"SequenceNumbers - ++Seq == 1");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar5.Data = local_228.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,1,1);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_218,"SequenceNumbers - Seq(7) + 1 == 0");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar5.Data = local_218.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,0,0);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_208,"SequenceNumbers - operator ==");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar5.Data = local_208.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1f8,"SequenceNumbers - operator ==");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar5.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1e8,"SequenceNumbers - operator !=");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar5.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1d8,"SequenceNumbers - operator !=");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar5.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1c8,"SequenceNumbers - operator !=");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar5.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1b8,"SequenceNumbers - operator> HalfMinusOne > Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1b8.Data.ArrayNum != 0) {
    FVar5.Data = local_1b8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1a8,"SequenceNumbers - operator> Half > HalfMinusOne");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar5.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_198,"SequenceNumbers - operator> Half > Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar5.Data = local_198.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_188,"SequenceNumbers - operator> MaxSeq > Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar5.Data = local_188.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_178,"SequenceNumbers - operator> Zero > MaxSeq");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    FVar5.Data = local_178.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_168,"SequenceNumbers - operator> Zero >= Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar5.Data = local_168.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_158,"SequenceNumbers - operator> MaxSeq >= MaxSeq");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar5.Data = local_158.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_148,"SequenceNumbers - operator> HalfMinusOne >= Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar5.Data = local_148.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_138,"SequenceNumbers - operator> Half >= HalfMinusOne");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar5.Data = local_138.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_128,"SequenceNumbers - operator> Half >= Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar5.Data = local_128.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_118,"SequenceNumbers - operator> MaxSeq >= Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar5.Data = local_118.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_108,"SequenceNumbers - operator> Zero >= MaxSeq");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar5.Data = local_108.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,"SequenceNumbers - operator> HalfMinusOne < Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar5.Data = local_f8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_e8,"SequenceNumbers - operator> Half < HalfMinusOne");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar5.Data = local_e8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8,"SequenceNumbers - operator> Half < Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar5.Data = local_d8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,"SequenceNumbers - operator> MaxSeq < Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar5.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b8,"SequenceNumbers - operator> Zero < MaxSeq");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar5.Data = local_b8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,"SequenceNumbers - operator> Zero <= Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar5.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,"SequenceNumbers - operator> MaxSeq <= MaxSeq");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar5.Data = local_98.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,"SequenceNumbers - operator> HalfMinusOne < Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar5.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,"SequenceNumbers - operator> Half < HalfMinusOne");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_68,"SequenceNumbers - operator> Half < Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"SequenceNumbers - operator> MaxSeq < Zero");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,true);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"SequenceNumbers - operator> Zero < MaxSeq");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,false);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,"SequenceNumbers - Seq(5) + 3 == 0");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,0,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,"SequenceNumbers - Seq(5) - 7 == 6");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,6,6);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar10 = 0;
  do {
    uVar7 = (ushort)iVar10 & 7;
    uVar9 = 0;
    uVar8 = uVar7;
    do {
      uVar4 = (int)(((uint)uVar8 - (uint)uVar7) * 0x20000000) >> 0x1d;
      if (uVar9 < 4) {
        if (uVar4 != uVar9) {
          pwVar6 = L"SequenceNumbers - Expected Diff ";
LAB_14807552c:
          FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,false);
        }
      }
      else if (uVar4 != uVar9 - 8) {
        pwVar6 = L"SequenceNumbers - Expected Diff";
        goto LAB_14807552c;
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 8);
    iVar10 = iVar10 + 1;
    if (7 < iVar10) {
      bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
      if (bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAnyErrors()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Tests\\Util\\SequenceNumberTests.cpp"
                           ,0xac,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 1480755b0

FString * __thiscall
FNetSequenceNumberTest::GetBeautifiedTestName
          (FNetSequenceNumberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Net.Misc.SequenceNumberTest");
  return __return_storage_ptr__;
}

