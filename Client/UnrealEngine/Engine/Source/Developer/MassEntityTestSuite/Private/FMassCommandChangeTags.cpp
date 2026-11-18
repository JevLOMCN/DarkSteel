// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// ~FMassCommandChangeTags @ 1470f8430

void __thiscall FMassCommandChangeTags::~FMassCommandChangeTags(FMassCommandChangeTags *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  pvVar1 = *(void **)&(this->TagsToRemove).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->TagsToAdd).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMassBatchedCommand__6B_;
  return;
}

// GetAllocatedSize @ 14711f840

ulong64 __thiscall FMassCommandChangeTags::GetAllocatedSize(FMassCommandChangeTags *this)

{
  return (ulonglong)((*(int *)&(this->TagsToRemove).field_0x1c + 0x1fU >> 5) << 2) +
         (ulonglong)((*(int *)&(this->TagsToAdd).field_0x1c + 0x1fU >> 5) << 2) +
         (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8;
}

// Run @ 14719cf30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandChangeTags::Run(FMassCommandChangeTags *this,FMassEntityManager *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_58;
  FMassEntityHandle *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FMassArchetypeEntityCollection *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandChangeTags::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId323,"MassCommandChangeTags_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x143);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandChangeTags::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId323);
  }
  iVar1 = (int)this->_padding_;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48 = (FMassEntityHandle *)this->_padding_;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = local_48;
  iStack_40 = iVar1;
  UE::Mass::Utils::CreateEntityCollections(param_1,&local_28,FoldDuplicates,&local_58);
  iStack_30 = local_58.ArrayNum;
  local_38 = (FMassArchetypeEntityCollection *)local_58.AllocatorInstance.Data;
  if ((local_58.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iStack_30;
  local_18.DataPtr = local_38;
  FMassEntityManager::BatchChangeTagsForEntities
            (param_1,&local_18,&this->TagsToAdd,&this->TagsToRemove);
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FMassArchetypeEntityCollection *)local_58.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

