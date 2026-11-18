// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FSystemTaskPrerequisites @ 14689c6c0

FSystemTaskPrerequisites * __thiscall
UE::MovieScene::FSystemTaskPrerequisites::FSystemTaskPrerequisites
          (FSystemTaskPrerequisites *this,FSystemTaskPrerequisites *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar3;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  
  (this->Prereqs).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
  FVar3 = (param_1->Prereqs).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Prereqs).ArrayNum;
  (this->Prereqs).ArrayNum = iVar2;
  FVar6 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)param_1;
  if (FVar3 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar6 = FVar3;
  }
  piVar1 = &(this->Prereqs).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
              (0x10,8,iVar2,0,
               (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)this,iVar2
               ,piVar1);
    FVar3 = (this->Prereqs).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)this;
    if (FVar3 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar4 = FVar3;
    }
    ConstructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((void *)FVar4,(FPrerequisite *)FVar6,iVar2);
  }
  (this->AllTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  FVar7 = (param_1->AllTasks).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->AllTasks).ArrayNum;
  (this->AllTasks).ArrayNum = iVar2;
  if (FVar7 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&param_1->AllTasks;
  }
  piVar1 = &(this->AllTasks).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,iVar2,0,&(this->AllTasks).AllocatorInstance,iVar2,piVar1);
    FVar5 = (this->AllTasks).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->AllTasks;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar5,(TRefCountPtr<FBaseGraphTask> *)FVar7,iVar2);
  }
  return this;
}

