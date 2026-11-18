// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 2

// FindOrAddImpl<FName_const_&> @ 1494c1850

TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 1494cd9a0

FComputeGraphTaskWorker ** __thiscall
TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
::Find(TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
       *this,FSceneInterface *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FComputeGraphTaskWorker **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(FSceneInterface **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FComputeGraphTaskWorker **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FComputeGraphTaskWorker **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FComputeGraphTaskWorker **)0x0;
}

