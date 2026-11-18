// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 1

// FDragonData_SpineFeetPair_TRANSFORM_WSPACE @ 14d29e800

FDragonData_SpineFeetPair_TRANSFORM_WSPACE * __thiscall
FDragonData_SpineFeetPair_TRANSFORM_WSPACE::FDragonData_SpineFeetPair_TRANSFORM_WSPACE
          (FDragonData_SpineFeetPair_TRANSFORM_WSPACE *this,
          FDragonData_SpineFeetPair_TRANSFORM_WSPACE *param_1)

{
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  double dVar9;
  
  dVar9 = (param_1->Spine_Involved).Rotation.XY.m128d_f64[1];
  pTVar8 = &this->Associated_Feet;
  (this->Spine_Involved).Rotation.XY.m128d_f64[0] =
       (param_1->Spine_Involved).Rotation.XY.m128d_f64[0];
  (this->Spine_Involved).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Spine_Involved).Rotation.ZW.m128d_f64[1];
  (this->Spine_Involved).Rotation.ZW.m128d_f64[0] =
       (param_1->Spine_Involved).Rotation.ZW.m128d_f64[0];
  (this->Spine_Involved).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Spine_Involved).Translation.XY.m128d_f64[1];
  (this->Spine_Involved).Translation.XY.m128d_f64[0] =
       (param_1->Spine_Involved).Translation.XY.m128d_f64[0];
  (this->Spine_Involved).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Spine_Involved).Translation.ZW.m128d_f64[1];
  (this->Spine_Involved).Translation.ZW.m128d_f64[0] =
       (param_1->Spine_Involved).Translation.ZW.m128d_f64[0];
  (this->Spine_Involved).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Spine_Involved).Scale3D.XY.m128d_f64[1];
  (this->Spine_Involved).Scale3D.XY.m128d_f64[0] = (param_1->Spine_Involved).Scale3D.XY.m128d_f64[0]
  ;
  (this->Spine_Involved).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Spine_Involved).Scale3D.ZW.m128d_f64[1];
  (this->Spine_Involved).Scale3D.ZW.m128d_f64[0] = (param_1->Spine_Involved).Scale3D.ZW.m128d_f64[0]
  ;
  (this->Spine_Involved).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->last_spine_location).field0_0x0._s_0.Y;
  (this->last_spine_location).field0_0x0._s_0.X = (param_1->last_spine_location).field0_0x0._s_0.X;
  (this->last_spine_location).field0_0x0._s_0.Y = dVar9;
  (this->last_spine_location).field0_0x0._s_0.Z = (param_1->last_spine_location).field0_0x0._s_0.Z;
  dVar9 = (param_1->last_target_location).field0_0x0._s_0.Y;
  (this->last_target_location).field0_0x0._s_0.X = (param_1->last_target_location).field0_0x0._s_0.X
  ;
  (this->last_target_location).field0_0x0._s_0.Y = dVar9;
  (this->last_target_location).field0_0x0._s_0.Z = (param_1->last_target_location).field0_0x0._s_0.Z
  ;
  this->Z_Offset = param_1->Z_Offset;
  piVar1 = &(this->Associated_Feet).ArrayMax;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->Associated_Feet).ArrayNum;
  pFVar7 = (param_1->Associated_Feet).AllocatorInstance.Data;
  (this->Associated_Feet).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar8->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar8 = &this->Original_Associated_Feet;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Original_Associated_Feet).ArrayMax;
  iVar6 = (param_1->Original_Associated_Feet).ArrayNum;
  pFVar7 = (param_1->Original_Associated_Feet).AllocatorInstance.Data;
  (this->Original_Associated_Feet).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar8->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar2 = &this->Sticky_Feet_Auto;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Sticky_Feet_Auto).ArrayMax;
  iVar6 = (param_1->Sticky_Feet_Auto).ArrayNum;
  pFVar7 = (param_1->Sticky_Feet_Auto).AllocatorInstance.Data;
  (this->Sticky_Feet_Auto).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
  }
  pTVar2 = &this->Sticky_Feet_Input;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Sticky_Feet_Input).ArrayMax;
  iVar6 = (param_1->Sticky_Feet_Input).ArrayNum;
  pFVar7 = (param_1->Sticky_Feet_Input).AllocatorInstance.Data;
  (this->Sticky_Feet_Input).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
  }
  pTVar8 = &this->Associated_Frozen_Feet;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Frozen_Feet).ArrayMax;
  iVar6 = (param_1->Associated_Frozen_Feet).ArrayNum;
  pFVar7 = (param_1->Associated_Frozen_Feet).AllocatorInstance.Data;
  (this->Associated_Frozen_Feet).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar8->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar8 = &this->Associated_Temp_Feet;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Temp_Feet).ArrayMax;
  iVar6 = (param_1->Associated_Temp_Feet).ArrayNum;
  pFVar7 = (param_1->Associated_Temp_Feet).AllocatorInstance.Data;
  (this->Associated_Temp_Feet).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar8->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar3 = &this->Associated_Sticky_Alpha;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Sticky_Alpha).ArrayMax;
  iVar6 = (param_1->Associated_Sticky_Alpha).ArrayNum;
  pFVar7 = (param_1->Associated_Sticky_Alpha).AllocatorInstance.Data;
  (this->Associated_Sticky_Alpha).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar4 = &this->Associated_StickySwitch_Bools;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_StickySwitch_Bools).ArrayMax;
  iVar6 = (param_1->Associated_StickySwitch_Bools).ArrayNum;
  pFVar7 = (param_1->Associated_StickySwitch_Bools).AllocatorInstance.Data;
  (this->Associated_StickySwitch_Bools).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x18);
  }
  pTVar5 = &this->Associated_Fingers;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Fingers).ArrayMax;
  iVar6 = (param_1->Associated_Fingers).ArrayNum;
  pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
           (param_1->Associated_Fingers).AllocatorInstance.Data;
  (this->Associated_Fingers).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
              ((pTVar5->AllocatorInstance).Data,pTVar8,iVar6);
  }
  pTVar8 = &this->Associated_FeetBalls;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_FeetBalls).ArrayMax;
  iVar6 = (param_1->Associated_FeetBalls).ArrayNum;
  pFVar7 = (param_1->Associated_FeetBalls).AllocatorInstance.Data;
  (this->Associated_FeetBalls).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar8->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar8 = &this->Associated_Knee;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Knee).ArrayMax;
  iVar6 = (param_1->Associated_Knee).ArrayNum;
  pFVar7 = (param_1->Associated_Knee).AllocatorInstance.Data;
  (this->Associated_Knee).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar8->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar8 = &this->Associated_Thigh;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Associated_Thigh).ArrayMax;
  iVar6 = (param_1->Associated_Thigh).ArrayNum;
  pFVar7 = (param_1->Associated_Thigh).AllocatorInstance.Data;
  (this->Associated_Thigh).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar8->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  return this;
}

