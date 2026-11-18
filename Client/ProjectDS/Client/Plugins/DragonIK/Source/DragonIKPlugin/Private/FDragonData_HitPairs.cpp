// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 1

// FDragonData_HitPairs @ 14d29dea0

FDragonData_HitPairs * __thiscall
FDragonData_HitPairs::FDragonData_HitPairs(FDragonData_HitPairs *this,FDragonData_HitPairs *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<FHitResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FHitResult *pFVar5;
  FScriptContainerElement *_Src;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar6;
  double dVar7;
  
  FHitResult::FHitResult(&this->Parent_Spine_Hit,&param_1->Parent_Spine_Hit);
  dVar7 = (param_1->Parent_Spine_Point).field0_0x0._s_0.Y;
  (this->Parent_Spine_Point).field0_0x0._s_0.X = (param_1->Parent_Spine_Point).field0_0x0._s_0.X;
  (this->Parent_Spine_Point).field0_0x0._s_0.Y = dVar7;
  (this->Parent_Spine_Point).field0_0x0._s_0.Z = (param_1->Parent_Spine_Point).field0_0x0._s_0.Z;
  FHitResult::FHitResult(&this->Parent_Left_Hit,&param_1->Parent_Left_Hit);
  dVar7 = (param_1->Parent_Left_Point).field0_0x0._s_0.Y;
  (this->Parent_Left_Point).field0_0x0._s_0.X = (param_1->Parent_Left_Point).field0_0x0._s_0.X;
  (this->Parent_Left_Point).field0_0x0._s_0.Y = dVar7;
  (this->Parent_Left_Point).field0_0x0._s_0.Z = (param_1->Parent_Left_Point).field0_0x0._s_0.Z;
  FHitResult::FHitResult(&this->Parent_Right_Hit,&param_1->Parent_Right_Hit);
  dVar7 = (param_1->Parent_Right_Point).field0_0x0._s_0.Y;
  (this->Parent_Right_Point).field0_0x0._s_0.X = (param_1->Parent_Right_Point).field0_0x0._s_0.X;
  (this->Parent_Right_Point).field0_0x0._s_0.Y = dVar7;
  (this->Parent_Right_Point).field0_0x0._s_0.Z = (param_1->Parent_Right_Point).field0_0x0._s_0.Z;
  FHitResult::FHitResult(&this->Parent_Front_Hit,&param_1->Parent_Front_Hit);
  dVar7 = (param_1->Parent_Front_Point).field0_0x0._s_0.Y;
  (this->Parent_Front_Point).field0_0x0._s_0.X = (param_1->Parent_Front_Point).field0_0x0._s_0.X;
  (this->Parent_Front_Point).field0_0x0._s_0.Y = dVar7;
  (this->Parent_Front_Point).field0_0x0._s_0.Z = (param_1->Parent_Front_Point).field0_0x0._s_0.Z;
  FHitResult::FHitResult(&this->Parent_Back_Hit,&param_1->Parent_Back_Hit);
  dVar7 = (param_1->Parent_Back_Point).field0_0x0._s_0.Y;
  pTVar6 = &this->RV_Feet_Hits;
  piVar1 = &(this->RV_Feet_Hits).ArrayMax;
  (this->Parent_Back_Point).field0_0x0._s_0.X = (param_1->Parent_Back_Point).field0_0x0._s_0.X;
  (this->Parent_Back_Point).field0_0x0._s_0.Y = dVar7;
  (this->Parent_Back_Point).field0_0x0._s_0.Z = (param_1->Parent_Back_Point).field0_0x0._s_0.Z;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->RV_Feet_Hits).ArrayNum;
  pFVar5 = (FHitResult *)(param_1->RV_Feet_Hits).AllocatorInstance.Data;
  (this->RV_Feet_Hits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,iVar4,0,&pTVar6->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FHitResult,FHitResult,int>((pTVar6->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar2 = &this->RV_FeetHit_Points;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RV_FeetHit_Points).ArrayMax;
  iVar4 = (param_1->RV_FeetHit_Points).ArrayNum;
  _Src = (param_1->RV_FeetHit_Points).AllocatorInstance.Data;
  (this->RV_FeetHit_Points).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
  }
  pTVar3 = &this->RV_Associated_Fingers_Hits;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RV_Associated_Fingers_Hits).ArrayMax;
  iVar4 = (param_1->RV_Associated_Fingers_Hits).ArrayNum;
  pTVar6 = (TArray<FHitResult,TSizedDefaultAllocator<32>_> *)
           (param_1->RV_Associated_Fingers_Hits).AllocatorInstance.Data;
  (this->RV_Associated_Fingers_Hits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TArray<FHitResult,TSizedDefaultAllocator<32>_>,TArray<FHitResult,TSizedDefaultAllocator<32>_>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar6,iVar4);
  }
  pTVar3 = &this->RV_Original_Associated_Fingers_Hits;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RV_Original_Associated_Fingers_Hits).ArrayMax;
  iVar4 = (param_1->RV_Original_Associated_Fingers_Hits).ArrayNum;
  pTVar6 = (TArray<FHitResult,TSizedDefaultAllocator<32>_> *)
           (param_1->RV_Original_Associated_Fingers_Hits).AllocatorInstance.Data;
  (this->RV_Original_Associated_Fingers_Hits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TArray<FHitResult,TSizedDefaultAllocator<32>_>,TArray<FHitResult,TSizedDefaultAllocator<32>_>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar6,iVar4);
  }
  pTVar6 = &this->RV_FeetFront_Hits;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RV_FeetFront_Hits).ArrayMax;
  iVar4 = (param_1->RV_FeetFront_Hits).ArrayNum;
  pFVar5 = (FHitResult *)(param_1->RV_FeetFront_Hits).AllocatorInstance.Data;
  (this->RV_FeetFront_Hits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,iVar4,0,&pTVar6->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FHitResult,FHitResult,int>((pTVar6->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar6 = &this->RV_FeetBack_Hits;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RV_FeetBack_Hits).ArrayMax;
  iVar4 = (param_1->RV_FeetBack_Hits).ArrayNum;
  pFVar5 = (FHitResult *)(param_1->RV_FeetBack_Hits).AllocatorInstance.Data;
  (this->RV_FeetBack_Hits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,iVar4,0,&pTVar6->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FHitResult,FHitResult,int>((pTVar6->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar6 = &this->RV_FeetLeft_Hits;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RV_FeetLeft_Hits).ArrayMax;
  iVar4 = (param_1->RV_FeetLeft_Hits).ArrayNum;
  pFVar5 = (FHitResult *)(param_1->RV_FeetLeft_Hits).AllocatorInstance.Data;
  (this->RV_FeetLeft_Hits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,iVar4,0,&pTVar6->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FHitResult,FHitResult,int>((pTVar6->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar6 = &this->RV_FeetRight_Hits;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RV_FeetRight_Hits).ArrayMax;
  iVar4 = (param_1->RV_FeetRight_Hits).ArrayNum;
  pFVar5 = (FHitResult *)(param_1->RV_FeetRight_Hits).AllocatorInstance.Data;
  (this->RV_FeetRight_Hits).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,iVar4,0,&pTVar6->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FHitResult,FHitResult,int>((pTVar6->AllocatorInstance).Data,pFVar5,iVar4);
  }
  return this;
}

