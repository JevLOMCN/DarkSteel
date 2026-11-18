// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// Run @ 14719c790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>::Run
          (FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> *this,
          FMassEntityManager *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStackY_158 [32];
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_128;
  TArray<FStructArrayView,TSizedDefaultAllocator<32>_> local_118;
  FMassArchetypeCreationParams local_108;
  FStructArrayView *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassEntityHandle *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FMassGenericPayloadView local_d8;
  TArrayView<FMassEntityHandle_const_,int> local_c8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b8;
  undefined1 local_a8 [24];
  void *pvStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  void *pvStack_70;
  undefined8 local_68;
  ForAnyElementType FStack_60;
  undefined8 local_58;
  ForAnyElementType FStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId511,"MassCommandBuildEntity_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x1ff);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId511);
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,2,&local_118.AllocatorInstance,0,&local_118.ArrayMax);
  UE::Mass::TMultiArray<FTestFragment_Int,FTestFragment_Float>::GetAsGenericMultiArray
            ((TMultiArray<FTestFragment_Int,FTestFragment_Float> *)&this->field_0x30,&local_118);
  iStack_f0 = local_118.ArrayNum;
  local_f8 = (FStructArrayView *)local_118.AllocatorInstance.Data;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  if ((local_118.ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e8 = *(FMassEntityHandle **)&this->field_0x20;
  iVar3 = *(int *)&this->field_0x28;
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d8.Content._12_4_ = uStack_ec;
  local_d8.Content.ArrayNum = iStack_f0;
  local_c8._12_4_ = uStack_dc;
  local_c8.ArrayNum = iVar3;
  local_c8.DataPtr = local_e8;
  local_d8.Content.DataPtr = local_f8;
  iStack_e0 = iVar3;
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (param_1,&local_c8,FoldDuplicates,&local_d8,&local_128);
  if (1 < local_128.ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityCollections.Num() <= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
                       ,0x209,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 0;
  if (local_128.ArrayNum != 0) {
    local_108.ChunkMemorySize = 0;
    local_108.DebugName.ComparisonIndex.Value = 0;
    local_a8._8_8_ = 0;
    auStack_80._0_8_ = 0;
    local_a8._0_4_ = 0xffffffff;
    local_a8[4] = true;
    local_a8[5] = 0;
    local_a8._6_2_ = 0;
    local_a8._16_8_ = 0;
    pvStack_90 = (void *)0x0;
    auStack_80._8_8_ = 0;
    local_88 = 0x8000000000;
    pvStack_70 = (void *)0x0;
    local_68 = 0x8000000000;
    FStack_60.Data = (FScriptContainerElement *)0x0;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_108.DebugName.Number = 0;
    local_108.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    if ((local_128.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMassEntityManager::BatchBuildEntities
              (param_1,&local_b8,
               (FMassArchetypeEntityCollectionWithPayload *)local_128.AllocatorInstance.Data,
               (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)&this->field_0x50,(FMassArchetypeSharedFragmentValues *)local_a8,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_50.Data,(int)local_48);
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_60.Data,(int)local_58);
    if (FStack_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_60.Data);
    }
    if (pvStack_70 != (void *)0x0) {
      FMemory::Free(pvStack_70);
    }
    if (pvStack_90 != (void *)0x0) {
      FMemory::Free(pvStack_90);
    }
    iVar3 = local_128.ArrayNum;
  }
  DestructItems<FMassArchetypeEntityCollectionWithPayload,int>
            ((FMassArchetypeEntityCollectionWithPayload *)local_128.AllocatorInstance.Data,iVar3);
  if ((FMassArchetypeEntityCollectionWithPayload *)local_128.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollectionWithPayload *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

