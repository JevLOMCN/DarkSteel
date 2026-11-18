// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// CreateEntity @ 1460b9400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001460b947d) */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::FEntityBuilderImplBase::CreateEntity
          (FEntityBuilderImplBase *this,FEntityManager *param_1,FComponentMask *param_2)

{
  FComponentMask *in_R9;
  undefined1 auStackY_b8 [32];
  FEntityAllocationWriteContext local_80;
  FEntityRange local_78;
  FEntityInfo local_68;
  FMutualComponentInitializers local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  (**(code **)((longlong)*this + 0x10))(this,param_2);
  local_50.Initializers.ArrayMax = 2;
  local_50.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  local_50.Initializers.ArrayNum = 0;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_80,(FEntityManager *)param_2);
  FMutualInclusivityGraph::ComputeMutuallyInclusiveComponents
            ((FMutualInclusivityGraph *)(*(longlong *)&param_2[10].Bits.NumBits + 0x60),Mandatory,
             in_R9,in_R9,&local_50);
  FEntityManager::AllocateEntity((FEntityManager *)param_2,&local_68,in_R9);
  (**(code **)((longlong)*this + 0x18))(this,param_2,&local_68);
  local_78.ComponentStartOffset = local_68.Data.ComponentOffset;
  local_78.Allocation = local_68.Data.Allocation;
  local_78.Num = 1;
  FMutualComponentInitializers::Execute(&local_50,&local_78,&local_80);
  *(ushort *)&param_1->_padding_ = local_68.EntityID.Value;
  if (local_50.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_50.Initializers.AllocatorInstance.SecondaryData);
  }
  return (FMovieSceneEntityID)(ushort)param_1;
}

