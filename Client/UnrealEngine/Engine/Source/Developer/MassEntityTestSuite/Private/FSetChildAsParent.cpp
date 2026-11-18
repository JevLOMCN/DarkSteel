// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147181950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147181ad9) */
/* WARNING: Removing unreachable block (ram,0x000147181bd2) */
/* WARNING: Removing unreachable block (ram,0x000147181d2f) */
/* WARNING: Removing unreachable block (ram,0x000147181e23) */
/* WARNING: Removing unreachable block (ram,0x000147181f86) */
/* WARNING: Removing unreachable block (ram,0x00014718209c) */
/* WARNING: Removing unreachable block (ram,0x0001471821c2) */
/* WARNING: Removing unreachable block (ram,0x0001471822ee) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FSetChildAsParent::InstantTest(FSetChildAsParent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  TNotNull<UScriptStruct_const_*> *pTVar5;
  longlong lVar6;
  FMassArchetypeSharedFragmentValues *pFVar7;
  undefined1 auStackY_358 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_320;
  FMassEntityHandle local_310;
  FRelationManager *local_308;
  uint local_300;
  undefined4 local_2fc;
  uint local_2f8;
  undefined4 local_2f4;
  uint local_2f0;
  undefined4 local_2ec;
  uint local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  undefined4 local_2dc;
  uint local_2d8;
  undefined4 local_2d4;
  uint local_2d0;
  undefined4 local_2cc;
  uint local_2c8;
  undefined4 local_2c4;
  TNotNull<UScriptStruct_const_*> *local_2c0;
  UScriptStruct *local_2b8;
  FTypeManager *local_2b0;
  FMassEntityManager *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  FMassEntityHandle *local_298;
  FMassEntityHandle *local_290;
  FMassEntityHandle *local_288;
  FMassEntityHandle local_280;
  undefined4 local_278;
  undefined4 local_274;
  FMassEntityHandle *local_270;
  FMassEntityHandle *local_268;
  FMassEntityHandle *local_260;
  FMassEntityHandle local_258;
  FMassEntityHandle local_250;
  FMassEntityHandle local_248;
  FMassEntityHandle local_240;
  FMassEntityHandle local_238;
  undefined4 local_230;
  undefined4 local_22c;
  FMassEntityHandle *local_228;
  FMassEntityHandle *local_220;
  FMassEntityHandle *local_218;
  FMassEntityHandle local_210;
  undefined4 local_208;
  undefined4 local_204;
  FMassEntityHandle *local_200;
  FMassEntityHandle *local_1f8;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle local_1e8;
  FMassEntityHandle local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityHandle local_1d0;
  FMassEntityHandle local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  FMassEntityHandle *local_1b8;
  FMassEntityHandle *local_1b0;
  FMassEntityHandle *local_1a8;
  FMassEntityHandle local_1a0;
  FMassEntityHandle local_198;
  undefined4 local_190;
  undefined4 local_18c;
  FMassEntityHandle *local_188;
  FMassEntityHandle *local_180;
  FMassEntityHandle *local_178;
  FMassEntityHandle local_170;
  FMassEntityHandle local_168;
  undefined4 local_160;
  undefined4 local_15c;
  FMassEntityHandle *local_158;
  FMassEntityHandle *local_150;
  FMassEntityHandle *local_148;
  FMassEntityHandle local_140;
  FMassEntityHandle local_138;
  undefined4 local_130;
  undefined4 local_12c;
  FMassEntityHandle *local_128;
  FMassEntityHandle *local_120;
  FMassEntityHandle *local_118;
  FMassEntityHandle local_110;
  FMassEntityHandle local_108;
  UScriptStruct *local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  TNotNull<UScriptStruct_const_*> local_e8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_e0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_d0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_c0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2b0 = FMassEntityManager::GetTypeManager(pFVar4);
  local_2c0 = &local_e8;
  local_100 = FMassChildOfRelation::StaticStruct();
  pTVar5 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_2c0,&local_100);
  local_2b8 = pTVar5->Val;
  FTypeManager::GetRelationTypeHandle(local_2b0,(UScriptStruct *)&local_310);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_320.AllocatorInstance);
  local_320.ArrayNum = 0;
  local_320.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_320.AllocatorInstance);
  local_2a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar7 = &local_88;
  for (lVar6 = 0x68; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar7->HashCache = 0;
    pFVar7 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar7->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::BatchCreateEntities
            (local_2a8,&local_e0,(FMassArchetypeHandle *)&this->field_0x60,&local_88,2,&local_320);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_308 = FMassEntityManager::GetRelationManager(pFVar4);
  local_2fc = 1;
  local_300 = (uint)(1 < local_320.ArrayNum);
  if (local_300 == 0) {
    local_2a0 = 0;
    local_29c = 0;
    Core::Private::FormatStringSan::
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
  local_298 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_290 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_288 = (FMassEntityHandle *)(local_320.AllocatorInstance.Data + 8);
  local_280 = *local_288;
  local_2f4 = 1;
  local_2f8 = (uint)(0 < local_320.ArrayNum);
  local_248 = local_280;
  if (local_2f8 == 0) {
    local_278 = 0;
    local_274 = 0;
    Core::Private::FormatStringSan::
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
  local_270 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_268 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_260 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_258 = *(FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_250 = local_310;
  local_238 = local_310;
  local_240 = local_258;
  FRelationManager::CreateRelationInstance(local_308,(FTypeHandle)local_f8,local_310,local_258);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar4);
  local_2ec = 1;
  local_2f0 = (uint)(0 < local_320.ArrayNum);
  if (local_2f0 == 0) {
    local_230 = 0;
    local_22c = 0;
    Core::Private::FormatStringSan::
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
  local_228 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_220 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_218 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_210 = *(FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_2e4 = 1;
  local_2e8 = (uint)(1 < local_320.ArrayNum);
  local_1d8 = local_210;
  if (local_2e8 == 0) {
    local_208 = 0;
    local_204 = 0;
    Core::Private::FormatStringSan::
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
  local_200 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_1f8 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_1f0 = (FMassEntityHandle *)(local_320.AllocatorInstance.Data + 8);
  local_1e8 = *local_1f0;
  local_1e0 = local_310;
  local_1c8 = local_310;
  local_1d0 = local_1e8;
  FRelationManager::CreateRelationInstance(local_308,(FTypeHandle)local_f0,local_310,local_1e8);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar4);
  local_2dc = 1;
  local_2e0 = (uint)(0 < local_320.ArrayNum);
  if (local_2e0 == 0) {
    local_1c0 = 0;
    local_1bc = 0;
    Core::Private::FormatStringSan::
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
  local_1b8 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_1b0 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_1a8 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_1a0 = *(FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_198 = local_310;
  FRelationManager::GetRelationSubjects(local_308,&local_a0,(FTypeHandle)local_310,local_1a0);
  local_2d4 = 1;
  local_2d8 = (uint)(0 < local_320.ArrayNum);
  if (local_2d8 == 0) {
    local_190 = 0;
    local_18c = 0;
    Core::Private::FormatStringSan::
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
  local_188 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_180 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_178 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_170 = *(FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_168 = local_310;
  FRelationManager::GetRelationSubjects(local_308,&local_b0,(FTypeHandle)local_310,local_170);
  local_2cc = 1;
  local_2d0 = (uint)(1 < local_320.ArrayNum);
  if (local_2d0 == 0) {
    local_160 = 0;
    local_15c = 0;
    Core::Private::FormatStringSan::
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
  local_158 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_150 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_148 = (FMassEntityHandle *)(local_320.AllocatorInstance.Data + 8);
  local_140 = *local_148;
  local_138 = local_310;
  FRelationManager::GetRelationSubjects(local_308,&local_c0,(FTypeHandle)local_310,local_140);
  local_2c4 = 1;
  local_2c8 = (uint)(1 < local_320.ArrayNum);
  if (local_2c8 == 0) {
    local_130 = 0;
    local_12c = 0;
    Core::Private::FormatStringSan::
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
  local_128 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_120 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_118 = (FMassEntityHandle *)(local_320.AllocatorInstance.Data + 8);
  local_110 = *local_118;
  local_108 = local_310;
  FRelationManager::GetRelationSubjects(local_308,&local_d0,(FTypeHandle)local_310,local_110);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_d0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_c0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_320);
  return true;
}

