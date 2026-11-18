// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FVelocityAndPressureField @ 14db975b0

FVelocityAndPressureField * __thiscall
Chaos::Softs::FVelocityAndPressureField::FVelocityAndPressureField
          (FVelocityAndPressureField *this,FSolverParticlesRange *param_1,FTriangleMesh *param_2,
          FCollectionPropertyConstFacade *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,float param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res8;
  TVector<float,2> local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  TArrayView<float_const_,int> local_78 [4];
  
  (this->PointToTriangleMap).DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->PointToTriangleMap).ArrayNum = 0;
  (this->Elements).DataPtr = (TVector<int,3> *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->PointToTriangleMapLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointToTriangleMapLocal).ArrayNum = 0;
  (this->PointToTriangleMapLocal).ArrayMax = 0;
  (this->ElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsLocal).ArrayNum = 0;
  (this->ElementsLocal).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  local_res8._0_4_ = 0.0;
  local_res8._4_4_ = 0.0;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,LiftName);
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 != -1)) {
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_3,iVar3,&param_3->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_3,iVar3,&param_3->LowValueArray);
    local_res8._4_4_ = fVar6;
  }
  fVar6 = __real_41200000;
  pTVar5 = &param_3->HighValueArray;
  pTVar4 = &param_3->LowValueArray;
  (this->Lift).MapValues.ArrayNum = 0;
  (this->Lift).MapValues.ArrayMax = 0;
  if (fVar6 <= (float)local_res8) {
    local_res8._0_4_ = fVar6;
  }
  (this->Lift).MapValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lift).MapView.NumElements = 0;
  local_88 = (TVector<float,2>)0x0;
  uStack_80 = 0;
  if ((float)local_res8 <= 0.0) {
    local_res8._0_4_ = 0.0;
  }
  (this->Lift).MapView.MapValues.DataPtr = (float *)0x0;
  *(ulonglong *)&(this->Lift).MapView.MapValues.ArrayNum = (ulonglong)uStack_7c << 0x20;
  if (fVar6 <= local_res8._4_4_) {
    local_res8._4_4_ = fVar6;
  }
  *(float *)&(this->Lift).MapView.OffsetRange = (float)local_res8;
  if (local_res8._4_4_ <= 0.0) {
    local_res8._4_4_ = 0.0;
  }
  *(float *)&(this->Lift).MapView.OffsetRange.field_0x4 = local_res8._4_4_ - (float)local_res8;
  local_res8._4_4_ = (float)local_res8 + *(float *)&(this->Lift).MapView.OffsetRange.field_0x4;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,OuterLiftName);
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 != -1)) {
    fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_3,iVar3,pTVar5);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_3,iVar3,pTVar4);
    local_res8._4_4_ = fVar7;
  }
  (this->OuterLift).MapValues.ArrayNum = 0;
  (this->OuterLift).MapValues.ArrayMax = 0;
  fVar7 = (float)local_res8;
  if (fVar6 <= (float)local_res8) {
    fVar7 = fVar6;
  }
  (this->OuterLift).MapValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OuterLift).MapView.NumElements = 0;
  local_88 = (TVector<float,2>)0x0;
  uStack_80 = 0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  (this->OuterLift).MapView.MapValues.DataPtr = (float *)0x0;
  *(ulonglong *)&(this->OuterLift).MapView.MapValues.ArrayNum = (ulonglong)uStack_7c << 0x20;
  fVar8 = local_res8._4_4_;
  if (fVar6 <= local_res8._4_4_) {
    fVar8 = fVar6;
  }
  local_res8._0_4_ = 0.0;
  local_res8._4_4_ = 0.0;
  *(float *)&(this->OuterLift).MapView.OffsetRange = fVar7;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4 = fVar8 - fVar7;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,DragName);
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 != -1)) {
    fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_3,iVar3,pTVar5);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_3,iVar3,pTVar4);
    local_res8._4_4_ = fVar7;
  }
  (this->Drag).MapValues.ArrayNum = 0;
  (this->Drag).MapValues.ArrayMax = 0;
  if (fVar6 <= (float)local_res8) {
    local_res8._0_4_ = fVar6;
  }
  (this->Drag).MapValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Drag).MapView.NumElements = 0;
  local_88 = (TVector<float,2>)0x0;
  uStack_80 = 0;
  if ((float)local_res8 <= 0.0) {
    local_res8._0_4_ = 0.0;
  }
  (this->Drag).MapView.MapValues.DataPtr = (float *)0x0;
  *(ulonglong *)&(this->Drag).MapView.MapValues.ArrayNum = (ulonglong)uStack_7c << 0x20;
  if (fVar6 <= local_res8._4_4_) {
    local_res8._4_4_ = fVar6;
  }
  *(float *)&(this->Drag).MapView.OffsetRange = (float)local_res8;
  if (local_res8._4_4_ <= 0.0) {
    local_res8._4_4_ = 0.0;
  }
  *(float *)&(this->Drag).MapView.OffsetRange.field_0x4 = local_res8._4_4_ - (float)local_res8;
  local_res8._4_4_ = (float)local_res8 + *(float *)&(this->Drag).MapView.OffsetRange.field_0x4;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,OuterDragName);
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 != -1)) {
    fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_3,iVar3,pTVar5);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_3,iVar3,pTVar4);
    local_res8._4_4_ = fVar7;
  }
  (this->OuterDrag).MapValues.ArrayNum = 0;
  (this->OuterDrag).MapValues.ArrayMax = 0;
  fVar7 = (float)local_res8;
  if (fVar6 <= (float)local_res8) {
    fVar7 = fVar6;
  }
  (this->OuterDrag).MapValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OuterDrag).MapView.NumElements = 0;
  uStack_80 = 0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_88 = (TVector<float,2>)0x3f80000000000000;
  (this->OuterDrag).MapView.MapValues.DataPtr = (float *)0x0;
  *(ulonglong *)&(this->OuterDrag).MapView.MapValues.ArrayNum = (ulonglong)uStack_7c << 0x20;
  fVar8 = __real_3f800000;
  local_78[0].DataPtr = (float *)0x0;
  fVar9 = local_res8._4_4_;
  if (fVar6 <= local_res8._4_4_) {
    fVar9 = fVar6;
  }
  local_78[0].ArrayNum = 0;
  *(float *)&(this->OuterDrag).MapView.OffsetRange = fVar7;
  local_res8._0_4_ = 0.0;
  local_res8._4_4_ = 0.0;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4 = fVar9 - fVar7;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,PressureName);
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 != -1)) {
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_3,iVar3,pTVar5);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_3,iVar3,pTVar4);
    local_res8._4_4_ = fVar6;
  }
  local_res8._4_4_ = local_res8._4_4_ * (fVar8 / param_5);
  local_res8._0_4_ = (float)local_res8 * (fVar8 / param_5);
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->Pressure,(TVector<float,2> *)&local_res8,local_78,0,&local_88);
  (this->Forces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Forces).ArrayNum = 0;
  (this->Forces).ArrayMax = 0;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,FluidDensityName);
  if ((piVar2 == (int *)0x0) || (*piVar2 == -1)) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_3,*piVar2,pTVar4);
  }
  fVar6 = fVar6 / (param_5 * param_5 * param_5);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  this->Rho = fVar6;
  this->QuarterRho = fVar6 * __real_3e800000;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,TurbulenceRatioName);
  fVar6 = fVar8;
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_3,*piVar2,pTVar4);
  }
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  this->TurbulenceRatio = fVar6;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,DragName);
  iVar3 = -1;
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->DragIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,OuterDragName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->OuterDragIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,LiftName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->LiftIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,OuterLiftName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->OuterLiftIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,FluidDensityName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->FluidDensityIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,PressureName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->PressureIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,TurbulenceRatioName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->TurbulenceRatioIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,WindVelocityName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->WindVelocityIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_3->KeyNameIndices,WindVelocitySpaceName);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
  }
  (this->WindVelocitySpaceIndex).Index = iVar3;
  SetGeometry(this,param_1,param_2);
  SetMultipliers(this,param_3,param_4);
  InitColor(this,param_1);
  return this;
}

// FVelocityAndPressureField @ 14db97bf0

FVelocityAndPressureField * __thiscall
Chaos::Softs::FVelocityAndPressureField::FVelocityAndPressureField(FVelocityAndPressureField *this)

{
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TArrayView<float_const_,int> local_18;
  
  this->Offset = -1;
  this->NumParticles = 0;
  (this->PointToTriangleMap).DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->PointToTriangleMap).ArrayNum = 0;
  (this->Elements).DataPtr = (TVector<int,3> *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->PointToTriangleMapLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointToTriangleMapLocal).ArrayNum = 0;
  (this->PointToTriangleMapLocal).ArrayMax = 0;
  (this->ElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsLocal).ArrayNum = 0;
  (this->ElementsLocal).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  local_res8._0_4_ = 0;
  local_res8._4_4_ = 0x3f800000;
  local_18.DataPtr = (float *)0x0;
  local_18.ArrayNum = 0;
  local_res10 = (TVector<float,2>)0x0;
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->Lift,&local_res10,&local_18,0,&local_res8);
  local_res8._0_4_ = 0;
  local_res8._4_4_ = 0x3f800000;
  local_18.DataPtr = (float *)0x0;
  local_18.ArrayNum = 0;
  local_res10 = (TVector<float,2>)0x0;
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->OuterLift,&local_res10,&local_18,0,&local_res8);
  local_res8._0_4_ = 0;
  local_res8._4_4_ = 0x3f800000;
  local_18.DataPtr = (float *)0x0;
  local_18.ArrayNum = 0;
  local_res10 = (TVector<float,2>)0x0;
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->Drag,&local_res10,&local_18,0,&local_res8);
  local_res8._0_4_ = 0;
  local_res8._4_4_ = 0x3f800000;
  local_18.DataPtr = (float *)0x0;
  local_18.ArrayNum = 0;
  local_res10 = (TVector<float,2>)0x0;
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->OuterDrag,&local_res10,&local_18,0,&local_res8);
  local_res8._0_4_ = 0;
  local_res8._4_4_ = 0x3f800000;
  local_18.DataPtr = (float *)0x0;
  local_18.ArrayNum = 0;
  local_res10 = (TVector<float,2>)0x0;
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->Pressure,&local_res10,&local_18,0,&local_res8);
  (this->Forces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Forces).ArrayNum = 0;
  (this->Forces).ArrayMax = 0;
  this->Rho = 0.0;
  this->QuarterRho = 0.0;
  this->TurbulenceRatio = 1.0;
  this->DragIndex = -1;
  this->OuterDragIndex = -1;
  this->LiftIndex = -1;
  this->OuterLiftIndex = -1;
  this->FluidDensityIndex = -1;
  this->PressureIndex = -1;
  this->TurbulenceRatioIndex = -1;
  this->WindVelocityIndex = -1;
  (this->WindVelocitySpaceIndex).Index = -1;
  return this;
}

// ~FVelocityAndPressureField @ 14dba0230

void __thiscall
Chaos::Softs::FVelocityAndPressureField::~FVelocityAndPressureField(FVelocityAndPressureField *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Forces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pressure).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OuterDrag).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Drag).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OuterLift).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lift).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ElementsLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->PointToTriangleMapLocal).AllocatorInstance.Data,
             (this->PointToTriangleMapLocal).ArrayNum);
  pFVar1 = (this->PointToTriangleMapLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

