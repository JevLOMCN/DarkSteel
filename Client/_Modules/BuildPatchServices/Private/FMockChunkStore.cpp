// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// Get @ 1432d18e0

IChunkDataAccess * __thiscall
BuildPatchServices::FMockChunkStore::Get(FMockChunkStore *this,FGuid *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxGet).ArrayNum;
  piVar1 = &(this->RxGet).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxGet).AllocatorInstance,piVar1);
  }
  (this->RxGet).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxGet).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5 * 0x20;
  *(double *)(pFVar2 + lVar6) = dVar3;
  *(undefined8 *)(pFVar2 + lVar6 + 8) = 0;
  uVar4 = *(undefined8 *)&param_1->C;
  *(undefined8 *)(pFVar2 + lVar6 + 0x10) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + lVar6 + 0x10 + 8) = uVar4;
  return (IChunkDataAccess *)0x0;
}

// GetSize @ 1432d9580

int __thiscall BuildPatchServices::FMockChunkStore::GetSize(FMockChunkStore *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxGetSize).ArrayNum;
  piVar1 = &(this->RxGetSize).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxGetSize).AllocatorInstance,piVar1);
  }
  (this->RxGetSize).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxGetSize).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(undefined4 *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = 0xffffffff;
  return -1;
}

// Put @ 1432e2940

void __thiscall
BuildPatchServices::FMockChunkStore::Put
          (FMockChunkStore *this,FGuid *param_1,
          TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
          param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  IChunkDataAccess IVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar8 = (this->RxPut).ArrayNum;
  piVar1 = &(this->RxPut).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxPut).AllocatorInstance,piVar1);
  }
  (this->RxPut).ArrayNum = iVar8 + 1;
  pFVar2 = (this->RxPut).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar8 * 0x18) = dVar4;
  uVar5 = param_1->B;
  uVar6 = param_1->C;
  uVar7 = param_1->D;
  pFVar2 = pFVar2 + (longlong)iVar8 * 0x18 + 8;
  *(uint *)pFVar2 = param_1->A;
  *(uint *)(pFVar2 + 4) = uVar5;
  *(uint *)(pFVar2 + 8) = uVar6;
  *(uint *)(pFVar2 + 0xc) = uVar7;
  IVar3 = *param_2.Ptr;
  if (IVar3 != (IChunkDataAccess)0x0) {
    (*(code *)**(undefined8 **)IVar3)(IVar3,1);
  }
  return;
}

// Remove @ 1432e9530

TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
 __thiscall BuildPatchServices::FMockChunkStore::Remove(FMockChunkStore *this,FGuid *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *in_R8;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxRemove).ArrayNum;
  piVar1 = &(this->RxRemove).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxRemove).AllocatorInstance,piVar1);
  }
  param_1->A = 0;
  param_1->B = 0;
  (this->RxRemove).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxRemove).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar5 * 0x18) = dVar3;
  uVar4 = in_R8[1];
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x18 + 8;
  *(undefined8 *)pFVar2 = *in_R8;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return (TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
          )(IChunkDataAccess *)param_1;
}

// SetLostChunkCallback @ 1432edb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockChunkStore::SetLostChunkCallback
          (FMockChunkStore *this,TFunction<void___cdecl(FGuid_const_&)> *param_1)

{
  longlong *plVar1;
  
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockChunkStore::SetLostChunkCallback(TFunction<void___cdecl(FGuid_const&___ptr64)>)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001432edb82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

