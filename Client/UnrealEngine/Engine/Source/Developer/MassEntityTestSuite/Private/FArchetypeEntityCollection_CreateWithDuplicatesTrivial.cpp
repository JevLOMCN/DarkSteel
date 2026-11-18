// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147129f80

/* WARNING: Removing unreachable block (ram,0x000147129fdb) */
/* WARNING: Removing unreachable block (ram,0x00014712a2f4) */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateWithDuplicatesTrivial::
InstantTest(FArchetypeEntityCollection_CreateWithDuplicatesTrivial *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  FArchetypeEntityRange *pFVar5;
  longlong lVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_268;
  char local_258;
  undefined1 local_257;
  char local_256;
  undefined1 local_255;
  undefined1 local_254;
  uint local_250;
  undefined4 local_24c;
  int local_248;
  uint local_244;
  undefined4 local_240;
  int local_23c;
  uint local_238;
  uint local_234;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  int local_220;
  int local_21c;
  int local_218;
  longlong *local_210;
  longlong *local_208;
  int local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  longlong local_1f0;
  longlong local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  longlong local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  undefined4 local_108;
  undefined4 local_104;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  undefined8 *local_c0;
  TArrayView<FMassEntityHandle_const_,int> *local_b8;
  FAutomationTestBase *local_b0;
  FAutomationTestBase *local_a8;
  int local_a0;
  FString local_98;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_88;
  FString local_78;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  FMassArchetypeEntityCollection local_58;
  TArrayView<FMassEntityHandle_const_,int> local_30 [2];
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_268.AllocatorInstance);
  local_268.ArrayNum = 0;
  local_268.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_268.AllocatorInstance);
  local_210 = (longlong *)&this->field_0x90;
  local_24c = 1;
  local_250 = (uint)(2 < *(int *)&this->field_0x98);
  if (local_250 == 0) {
    local_1f8 = 0;
    local_1f4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_1f0 = *local_210;
  local_230 = (FScriptContainerElement *)(local_1f0 + 0x10);
  local_1d8 = local_268.AllocatorInstance.Data;
  local_1d0 = local_268.AllocatorInstance.Data;
  local_1c8 = local_268.AllocatorInstance.Data;
  local_1e8 = local_1f0;
  local_1e0 = local_230;
  if (local_268.AllocatorInstance.Data <= local_230) {
    local_1c0 = local_268.AllocatorInstance.Data;
    local_1b8 = local_268.AllocatorInstance.Data;
    local_1b0 = local_268.AllocatorInstance.Data;
    if (local_230 < local_268.AllocatorInstance.Data + (longlong)local_268.ArrayMax * 8) {
      local_1a8 = 0;
      local_1a4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_188 = (longlong)local_268.ArrayNum;
      local_180 = (longlong)local_268.ArrayMax;
      local_1a0 = local_268.AllocatorInstance.Data;
      local_198 = local_268.AllocatorInstance.Data;
      local_190 = local_268.AllocatorInstance.Data;
      local_178 = local_268.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_268.ArrayNum == local_268.ArrayMax) {
    local_268.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_268.AllocatorInstance,&local_268.ArrayMax);
  }
  local_248 = local_268.ArrayNum;
  local_170 = local_268.AllocatorInstance.Data;
  local_168 = local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 8;
  local_268.ArrayNum = local_268.ArrayNum + 1;
  local_160 = ::operator_new(8,local_168);
  *local_160 = *(undefined8 *)local_230;
  local_a0 = local_248;
  local_208 = (longlong *)&this->field_0x90;
  local_240 = 1;
  local_244 = (uint)(2 < *(int *)&this->field_0x98);
  if (local_244 == 0) {
    local_158 = 0;
    local_154 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_150 = *local_208;
  local_228 = (FScriptContainerElement *)(local_150 + 0x10);
  local_138 = local_268.AllocatorInstance.Data;
  local_130 = local_268.AllocatorInstance.Data;
  local_128 = local_268.AllocatorInstance.Data;
  local_148 = local_150;
  local_140 = local_228;
  if (local_268.AllocatorInstance.Data <= local_228) {
    local_120 = local_268.AllocatorInstance.Data;
    local_118 = local_268.AllocatorInstance.Data;
    local_110 = local_268.AllocatorInstance.Data;
    if (local_228 < local_268.AllocatorInstance.Data + (longlong)local_268.ArrayMax * 8) {
      local_108 = 0;
      local_104 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_e8 = (longlong)local_268.ArrayNum;
      local_e0 = (longlong)local_268.ArrayMax;
      local_100 = local_268.AllocatorInstance.Data;
      local_f8 = local_268.AllocatorInstance.Data;
      local_f0 = local_268.AllocatorInstance.Data;
      local_d8 = local_268.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_268.ArrayNum == local_268.ArrayMax) {
    local_268.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_268.AllocatorInstance,&local_268.ArrayMax);
  }
  local_23c = local_268.ArrayNum;
  local_d0 = local_268.AllocatorInstance.Data;
  local_c8 = local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 8;
  local_268.ArrayNum = local_268.ArrayNum + 1;
  local_c0 = ::operator_new(8,local_c8);
  *local_c0 = *(undefined8 *)local_228;
  local_200 = local_23c;
  local_b8 = local_30;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_b8,&local_268);
  pTVar7 = &local_68;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_58,(FMassArchetypeHandle *)&this->field_0x50,&local_68,FoldDuplicates);
  FMassArchetypeEntityCollection::GetRanges(&local_58,&local_88);
  local_b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_220 = local_88.ArrayNum;
  local_21c = local_88.ArrayNum;
  ::FString::FString(&local_98,"The result should have a single subchunk");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_98,local_21c,1,local_b0);
  local_258 = !bVar2;
  local_238 = (uint)(byte)local_258;
  ::FString::~FString(&local_98);
  if (local_258 == '\0') {
    local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
             operator[](&local_88,0);
    local_218 = pFVar5->Length;
    ::FString::FString(&local_78,"The resulting subchunk should be of length 1");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_78,local_218,1,local_a8);
    local_256 = !bVar2;
    local_234 = (uint)(byte)local_256;
    ::FString::~FString(&local_78);
    if (local_256 == '\0') {
      local_254 = 1;
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_58);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_268);
      local_257 = local_254;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_255 = 0;
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_58);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_268);
      local_257 = local_255;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_257 = 0;
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_58);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_268);
  }
  return (bool)local_257;
}

