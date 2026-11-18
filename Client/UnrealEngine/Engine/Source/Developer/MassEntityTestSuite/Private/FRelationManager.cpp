// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// CreateRelationInstance @ 14711bdf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall
UE::Mass::FRelationManager::CreateRelationInstance
          (FRelationManager *this,FTypeHandle param_1,FMassEntityHandle param_2,
          FMassEntityHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  FMassEntityHandle FVar4;
  FMassEntityHandle local_res20;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_58;
  FMassEntityHandle *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TArrayView<FMassEntityHandle,int> local_38;
  TArrayView<FMassEntityHandle,int> local_28;
  undefined4 local_c;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)&stack0x00000028;
  uStack_40 = 1;
  local_48 = &local_res20;
  local_58.ArrayNum = 1;
  local_38._12_4_ = local_c;
  local_38.ArrayNum = 1;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = 1;
  local_res20 = param_3;
  local_38.DataPtr = (FMassEntityHandle *)local_58.AllocatorInstance.Data;
  local_28.DataPtr = local_48;
  CreateRelationInstances(this,&local_58,(FTypeHandle)param_2,&local_28,&local_38);
  if (local_58.ArrayNum == 0) {
    uVar3 = 0;
  }
  else {
    if (local_58.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FMassEntityHandle)(*pcVar1)();
        return FVar4;
      }
    }
    uVar3 = *(undefined8 *)local_58.AllocatorInstance.Data;
  }
  *(undefined8 *)param_1.TypeKey.ObjectKey = uVar3;
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return (FMassEntityHandle)param_1.TypeKey.ObjectKey;
}

// GetRelationObjects @ 1471219e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationManager::GetRelationObjects
          (FRelationManager *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypeHandle param_1,FMassEntityHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar3;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  FObjectKey local_res8;
  
  local_res8 = (FObjectKey)param_1.TypeKey.ObjectKey;
  pTVar3 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&this->RelationsDataMap,(FTypeHandle *)&local_res8);
  if (pTVar3 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  GetRelationObjects(this,__return_storage_ptr__,(FRelationData *)&pTVar3->field_0x10,param_2);
  return __return_storage_ptr__;
}

// GetRelationSubjects @ 147121a70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::FRelationManager::GetRelationSubjects
          (FRelationManager *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypeHandle param_1,FMassEntityHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar3;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  FObjectKey local_res8;
  
  local_res8 = (FObjectKey)param_1.TypeKey.ObjectKey;
  pTVar3 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&this->RelationsDataMap,(FTypeHandle *)&local_res8);
  if (pTVar3 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  GetRelationSubjects(this,__return_storage_ptr__,(FRelationData *)&pTVar3->field_0x10,param_2);
  return __return_storage_ptr__;
}

