// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// FVelocityAndPressureField @ 143be2370

FVelocityAndPressureField * __thiscall
Chaos::Softs::FVelocityAndPressureField::FVelocityAndPressureField
          (FVelocityAndPressureField *this,FVelocityAndPressureField *param_1)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  
  pTVar1 = &this->PointToTriangleMapLocal;
  this->Offset = param_1->Offset;
  this->NumParticles = param_1->NumParticles;
  iVar5 = (param_1->PointToTriangleMap).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->PointToTriangleMap).field_0xc;
  piVar2 = &(this->PointToTriangleMapLocal).ArrayMax;
  (this->PointToTriangleMap).DataPtr = (param_1->PointToTriangleMap).DataPtr;
  (this->PointToTriangleMap).ArrayNum = iVar5;
  *(undefined4 *)&(this->PointToTriangleMap).field_0xc = uVar8;
  iVar5 = (param_1->Elements).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->Elements).field_0xc;
  (this->Elements).DataPtr = (param_1->Elements).DataPtr;
  (this->Elements).ArrayNum = iVar5;
  *(undefined4 *)&(this->Elements).field_0xc = uVar8;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PointToTriangleMapLocal).ArrayNum;
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (param_1->PointToTriangleMapLocal).AllocatorInstance.Data;
  (this->PointToTriangleMapLocal).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar6,iVar5);
  }
  pTVar3 = &this->ElementsLocal;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ElementsLocal).ArrayMax;
  iVar5 = (param_1->ElementsLocal).ArrayNum;
  pFVar7 = (param_1->ElementsLocal).AllocatorInstance.Data;
  (this->ElementsLocal).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 * 0xc);
  }
  pTVar6 = &this->ConstraintsPerColorStartIndex;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  iVar5 = (param_1->ConstraintsPerColorStartIndex).ArrayNum;
  pFVar7 = (param_1->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  (this->ConstraintsPerColorStartIndex).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar6->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 2);
  }
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->Lift,&param_1->Lift);
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->OuterLift,&param_1->OuterLift);
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->Drag,&param_1->Drag);
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->OuterDrag,&param_1->OuterDrag);
  FPBDFlatWeightMap::FPBDFlatWeightMap(&this->Pressure,&param_1->Pressure);
  pTVar4 = &this->Forces;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Forces).ArrayMax;
  iVar5 = (param_1->Forces).ArrayNum;
  pFVar7 = (param_1->Forces).AllocatorInstance.Data;
  (this->Forces).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5 * 0xc);
  }
  *(undefined8 *)&this->Velocity = *(undefined8 *)&param_1->Velocity;
  *(undefined4 *)&(this->Velocity).field_0x8 = *(undefined4 *)&(param_1->Velocity).field_0x8;
  this->Rho = param_1->Rho;
  this->QuarterRho = param_1->QuarterRho;
  this->TurbulenceRatio = param_1->TurbulenceRatio;
  (this->DragIndex).Index = (param_1->DragIndex).Index;
  (this->OuterDragIndex).Index = (param_1->OuterDragIndex).Index;
  (this->LiftIndex).Index = (param_1->LiftIndex).Index;
  (this->OuterLiftIndex).Index = (param_1->OuterLiftIndex).Index;
  (this->FluidDensityIndex).Index = (param_1->FluidDensityIndex).Index;
  (this->PressureIndex).Index = (param_1->PressureIndex).Index;
  (this->TurbulenceRatioIndex).Index = (param_1->TurbulenceRatioIndex).Index;
  (this->WindVelocityIndex).Index = (param_1->WindVelocityIndex).Index;
  (this->WindVelocitySpaceIndex).Index = (param_1->WindVelocitySpaceIndex).Index;
  return this;
}

// Apply @ 143beed30

void __thiscall
Chaos::Softs::FVelocityAndPressureField::Apply
          (FVelocityAndPressureField *this,FSolverParticles *param_1,float param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 local_res20 [8];
  
  lVar17 = (longlong)param_3;
  uVar16 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (this->PointToTriangleMap).ArrayNum) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar6 = (this->PointToTriangleMap).DataPtr;
  uVar10 = pTVar6[lVar17].ArrayNum;
  uVar13 = (ulonglong)(int)uVar10;
  pFVar15 = pTVar6[lVar17].AllocatorInstance.Data;
  pFVar1 = pFVar15 + uVar13 * 4;
  while( true ) {
    if (pTVar6[lVar17].ArrayNum != (int)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar15 == pFVar1) break;
    uVar12 = *(uint *)pFVar15;
    lVar14 = (longlong)(int)uVar12;
    uVar11 = 0;
    if ((int)uVar12 < (this->Forces).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = (this->Forces).AllocatorInstance.Data;
    uVar12 = 0;
    if (param_3 < (int)param_1->_padding_) {
      uVar12 = uVar16;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    fVar2 = *(float *)(param_1->_padding_ + lVar17 * 4);
    fVar3 = *(float *)(pFVar7 + lVar14 * 0xc);
    uVar12 = 0;
    if (param_3 < (int)param_1->_padding_) {
      uVar12 = uVar16;
    }
    fVar4 = *(float *)(pFVar7 + lVar14 * 0xc + 4);
    fVar5 = *(float *)(pFVar7 + lVar14 * 0xc + 8);
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar14 = param_1->_padding_;
    pFVar15 = pFVar15 + 4;
    uVar13 = (ulonglong)uVar10;
    *(float *)(lVar14 + lVar17 * 0xc) = fVar2 * fVar3 + *(float *)(lVar14 + lVar17 * 0xc);
    *(float *)(lVar14 + 4 + lVar17 * 0xc) = fVar2 * fVar4 + *(float *)(lVar14 + 4 + lVar17 * 0xc);
    *(float *)(lVar14 + 8 + lVar17 * 0xc) = fVar2 * fVar5 + *(float *)(lVar14 + 8 + lVar17 * 0xc);
  }
  return;
}

// Apply @ 143eb56b0

void __thiscall
Chaos::Softs::FVelocityAndPressureField::Apply
          (FVelocityAndPressureField *this,FSolverParticlesRange *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  longlong lVar11;
  FSolverParticles *pFVar12;
  TArrayView<float,int> *pTVar13;
  TVector<int,3> *pTVar14;
  float *pfVar15;
  TVector<float,3> *pTVar16;
  char cVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  longlong local_370;
  float *local_368;
  float local_360;
  float local_35c;
  float local_358;
  float local_350;
  float local_34c;
  float local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  longlong local_318;
  float local_310;
  float local_30c;
  float local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  TArrayView<Chaos::TVector<float,3>,int> local_2f0;
  TArrayView<Chaos::TVector<float,3>,int> local_2e0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2d0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2c0;
  TArrayView<Chaos::TVector<float,3>,int> local_2b0;
  TArrayView<Chaos::TVector<float,3>,int> local_2a0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_290;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_280;
  TArrayView<Chaos::TVector<float,3>,int> local_270;
  TArrayView<Chaos::TVector<float,3>,int> local_260;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_250;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_240;
  TArrayView<Chaos::TVector<float,3>,int> local_230;
  TArrayView<Chaos::TVector<float,3>,int> local_220;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_210;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_200;
  TArrayView<Chaos::TVector<float,3>,int> local_1f0;
  TArrayView<Chaos::TVector<float,3>,int> local_1e0;
  TArrayView<Chaos::TVector<float,3>,int> local_1d0;
  TArrayView<Chaos::TVector<float,3>,int> local_1c0;
  TArrayView<Chaos::TVector<float,3>,int> local_1b0;
  TArrayView<Chaos::TVector<float,3>,int> local_1a0;
  TArrayView<Chaos::TVector<float,3>,int> local_190;
  TArrayView<Chaos::TVector<float,3>,int> local_180;
  TArrayView<Chaos::TVector<float,3>,int> local_170;
  TArrayView<Chaos::TVector<float,3>,int> local_160;
  TArrayView<Chaos::TVector<float,3>,int> local_150;
  TArrayView<Chaos::TVector<float,3>,int> local_140;
  TArrayView<float,int> local_130;
  TArrayView<float,int> local_120;
  TArrayView<float,int> local_110;
  float *local_100;
  undefined8 uStack_f8;
  float *local_f0;
  undefined8 uStack_e8;
  TArrayView<float,int> local_e0 [10];
  
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId603,"FVelocityAndPressureField_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\VelocityField.cpp"
               ,0x25b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId603);
  }
  uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_38d1b717;
  fVar33 = __real_7f7fffff;
  if (0.0 < Softs::Private::VelocityFieldMaxVelocity) {
    fVar33 = Softs::Private::VelocityFieldMaxVelocity * Softs::Private::VelocityFieldMaxVelocity;
  }
  if (((this->Drag).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->Drag).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar24 = '\0';
  }
  else {
    cVar24 = '\x01';
  }
  if (((this->OuterDrag).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->OuterDrag).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  if (((this->Lift).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->Lift).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar17 = '\0';
  }
  else {
    cVar17 = '\x01';
  }
  if (((this->OuterLift).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->OuterLift).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  if (((this->Pressure).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->Pressure).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar21 = '\0';
  }
  else {
    cVar21 = '\x01';
  }
  if ((((cVar24 == '\0') && (cVar18 == '\0')) && (cVar17 == '\0')) &&
     ((cVar9 == '\0' && (cVar21 == '\0')))) {
    if ((bChaos_VelocityField_ISPC_Enabled == false) ||
       (iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum, iVar7 < 2)) {
      iVar7 = (this->Elements).ArrayNum;
      iVar25 = 0;
      if (fVar33 == __real_7f7fffff) {
        if (0 < iVar7) {
          do {
            fVar6 = *(float *)&(this->Pressure).MapView.OffsetRange;
            fVar33 = *(float *)&(this->OuterLift).MapView.OffsetRange;
            fVar36 = *(float *)&(this->Lift).MapView.OffsetRange;
            fVar35 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
            fVar34 = *(float *)&(this->Drag).MapView.OffsetRange;
            pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
            TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetArrayView<Chaos::TVector<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_2f0,
                       (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &pFVar12->_padding_);
            local_2d0.DataPtr = local_2f0.DataPtr;
            local_2d0.ArrayNum = local_2f0.ArrayNum;
            pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
            TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetArrayView<Chaos::TVector<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_2e0,
                       (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &pFVar12->_padding_);
            local_2c0.DataPtr = local_2e0.DataPtr;
            local_2c0.ArrayNum = local_2e0.ArrayNum;
            CalculateForce(this,(TVector<float,3> *)&local_310,&local_2c0,&local_2d0,iVar25,
                           &this->Velocity,fVar34,fVar35,fVar36,fVar33,fVar6);
            pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[]
                                (&this->Elements,iVar25);
            pfVar15 = FSolverParticlesRange::InvM(param_1,(pTVar14->field0_0x0)._s_0.X);
            fVar6 = *pfVar15;
            pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[]
                                (&this->Elements,iVar25);
            pTVar16 = FSolverParticlesRange::Acceleration(param_1,(pTVar14->field0_0x0)._s_0.X);
            fVar35 = local_308;
            fVar36 = local_30c;
            fVar33 = local_310;
            *(float *)pTVar16 = local_310 * fVar6 + *(float *)pTVar16;
            *(float *)&pTVar16->field_0x4 = local_30c * fVar6 + *(float *)&pTVar16->field_0x4;
            *(float *)&pTVar16->field_0x8 = local_308 * fVar6 + *(float *)&pTVar16->field_0x8;
            pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[]
                                (&this->Elements,iVar25);
            pfVar15 = FSolverParticlesRange::InvM(param_1,(pTVar14->field0_0x0)._s_0.Y);
            fVar6 = *pfVar15;
            pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[]
                                (&this->Elements,iVar25);
            pTVar16 = FSolverParticlesRange::Acceleration(param_1,(pTVar14->field0_0x0)._s_0.Y);
            *(float *)pTVar16 = fVar33 * fVar6 + *(float *)pTVar16;
            *(float *)&pTVar16->field_0x8 = fVar35 * fVar6 + *(float *)&pTVar16->field_0x8;
            *(float *)&pTVar16->field_0x4 = fVar36 * fVar6 + *(float *)&pTVar16->field_0x4;
            pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[]
                                (&this->Elements,iVar25);
            pfVar15 = FSolverParticlesRange::InvM(param_1,(pTVar14->field0_0x0)._s_0.Z);
            fVar6 = *pfVar15;
            pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[]
                                (&this->Elements,iVar25);
            pTVar16 = FSolverParticlesRange::Acceleration(param_1,(pTVar14->field0_0x0)._s_0.Z);
            iVar25 = iVar25 + 1;
            *(float *)pTVar16 = fVar33 * fVar6 + *(float *)pTVar16;
            *(float *)&pTVar16->field_0x4 = fVar36 * fVar6 + *(float *)&pTVar16->field_0x4;
            *(float *)&pTVar16->field_0x8 = fVar35 * fVar6 + *(float *)&pTVar16->field_0x8;
          } while (iVar25 < (this->Elements).ArrayNum);
        }
      }
      else if (0 < iVar7) {
        do {
          fVar6 = *(float *)&(this->Pressure).MapView.OffsetRange;
          fVar36 = *(float *)&(this->OuterLift).MapView.OffsetRange;
          fVar35 = *(float *)&(this->Lift).MapView.OffsetRange;
          fVar34 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
          fVar32 = *(float *)&(this->Drag).MapView.OffsetRange;
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_2b0,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          local_290.DataPtr = local_2b0.DataPtr;
          local_290.ArrayNum = local_2b0.ArrayNum;
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_2a0,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          local_280.DataPtr = local_2a0.DataPtr;
          local_280.ArrayNum = local_2a0.ArrayNum;
          CalculateForce(this,(TVector<float,3> *)&local_300,&local_280,&local_290,iVar25,
                         &this->Velocity,fVar32,fVar34,fVar35,fVar36,fVar6,fVar33);
          pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,iVar25)
          ;
          pfVar15 = FSolverParticlesRange::InvM(param_1,(pTVar14->field0_0x0)._s_0.X);
          fVar6 = *pfVar15;
          pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,iVar25)
          ;
          pTVar16 = FSolverParticlesRange::Acceleration(param_1,(pTVar14->field0_0x0)._s_0.X);
          fVar34 = local_2f8;
          fVar35 = local_2fc;
          fVar36 = local_300;
          *(float *)pTVar16 = local_300 * fVar6 + *(float *)pTVar16;
          *(float *)&pTVar16->field_0x4 = local_2fc * fVar6 + *(float *)&pTVar16->field_0x4;
          *(float *)&pTVar16->field_0x8 = local_2f8 * fVar6 + *(float *)&pTVar16->field_0x8;
          pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,iVar25)
          ;
          pfVar15 = FSolverParticlesRange::InvM(param_1,(pTVar14->field0_0x0)._s_0.Y);
          fVar6 = *pfVar15;
          pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,iVar25)
          ;
          pTVar16 = FSolverParticlesRange::Acceleration(param_1,(pTVar14->field0_0x0)._s_0.Y);
          *(float *)pTVar16 = fVar36 * fVar6 + *(float *)pTVar16;
          *(float *)&pTVar16->field_0x4 = fVar35 * fVar6 + *(float *)&pTVar16->field_0x4;
          *(float *)&pTVar16->field_0x8 = fVar34 * fVar6 + *(float *)&pTVar16->field_0x8;
          pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,iVar25)
          ;
          pfVar15 = FSolverParticlesRange::InvM(param_1,(pTVar14->field0_0x0)._s_0.Z);
          fVar6 = *pfVar15;
          pTVar14 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,iVar25)
          ;
          pTVar16 = FSolverParticlesRange::Acceleration(param_1,(pTVar14->field0_0x0)._s_0.Z);
          iVar25 = iVar25 + 1;
          *(float *)pTVar16 = fVar36 * fVar6 + *(float *)pTVar16;
          *(float *)&pTVar16->field_0x4 = fVar35 * fVar6 + *(float *)&pTVar16->field_0x4;
          *(float *)&pTVar16->field_0x8 = fVar34 * fVar6 + *(float *)&pTVar16->field_0x8;
        } while (iVar25 < (this->Elements).ArrayNum);
      }
    }
    else {
      uVar19 = 0;
      lVar11 = (longlong)(iVar7 + -1);
      if (fVar33 == __real_7f7fffff) {
        if (0 < lVar11) {
          local_370 = 0;
          do {
            uVar20 = 0;
            if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar19 = uVar19 + 1;
            iVar7 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            local_370 * 4);
            uVar20 = 0;
            if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar1 = *(undefined4 *)&(this->Pressure).MapView.OffsetRange;
            uVar2 = *(undefined4 *)&(this->OuterLift).MapView.OffsetRange;
            uVar3 = *(undefined4 *)&(this->Lift).MapView.OffsetRange;
            iVar25 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             local_370 * 4 + 4);
            uVar4 = *(undefined4 *)&(this->OuterDrag).MapView.OffsetRange;
            uVar5 = *(undefined4 *)&(this->Drag).MapView.OffsetRange;
            fVar6 = this->TurbulenceRatio;
            fVar33 = this->QuarterRho;
            pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
            TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetArrayView<Chaos::TVector<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1f0,
                       (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &pFVar12->_padding_);
            pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
            TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetArrayView<Chaos::TVector<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1e0,
                       (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &pFVar12->_padding_);
            pTVar14 = (this->Elements).DataPtr;
            pTVar13 = FSolverParticlesRange::GetInvM(param_1,&local_130);
            pfVar15 = pTVar13->DataPtr;
            pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
            TParticlesRange<Chaos::Softs::FSolverParticles,void>::
            GetArrayView<Chaos::TVector<float,3>_>
                      ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1d0,
                       (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &pFVar12->_padding_);
            UpdateAndApplyVelocityField
                      (local_1d0.DataPtr,pfVar15,pTVar14 + iVar7,local_1e0.DataPtr,local_1f0.DataPtr
                       ,&this->Velocity,fVar33,fVar6,uVar5,uVar4,uVar3,uVar2,uVar1,iVar25 - iVar7);
            local_370 = local_370 + 1;
          } while (local_370 < lVar11);
        }
      }
      else if (0 < lVar11) {
        local_370 = 0;
        do {
          uVar20 = 0;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar19 = uVar19 + 1;
          iVar7 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                          local_370 * 4);
          uVar20 = 0;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar1 = *(undefined4 *)&(this->Pressure).MapView.OffsetRange;
          uVar2 = *(undefined4 *)&(this->OuterLift).MapView.OffsetRange;
          uVar3 = *(undefined4 *)&(this->Lift).MapView.OffsetRange;
          iVar25 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           local_370 * 4 + 4);
          uVar4 = *(undefined4 *)&(this->OuterDrag).MapView.OffsetRange;
          uVar5 = *(undefined4 *)&(this->Drag).MapView.OffsetRange;
          fVar6 = this->TurbulenceRatio;
          fVar36 = this->QuarterRho;
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1c0,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1b0,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          pTVar14 = (this->Elements).DataPtr;
          pTVar13 = FSolverParticlesRange::GetInvM(param_1,&local_120);
          pfVar15 = pTVar13->DataPtr;
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1a0,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          UpdateAndClampVelocityAndApplyVelocityField
                    (local_1a0.DataPtr,pfVar15,pTVar14 + iVar7,local_1b0.DataPtr,local_1c0.DataPtr,
                     &this->Velocity,fVar36,fVar6,uVar5,uVar4,uVar3,uVar2,uVar1,iVar25 - iVar7,
                     fVar33);
          local_370 = local_370 + 1;
        } while (local_370 < lVar11);
      }
    }
  }
  else if ((bChaos_VelocityField_ISPC_Enabled == false) ||
          (iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum, iVar7 < 2)) {
    iVar7 = (this->Elements).ArrayNum;
    uVar23 = 0;
    uVar20 = 0;
    if (fVar33 == __real_7f7fffff) {
      if (0 < iVar7) {
        local_370 = 0;
        do {
          if (((this->Drag).MapView.MapValues.ArrayNum < 1) ||
             (fVar33 = *(float *)&(this->Drag).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar33 & uVar19) <= fVar6)) {
            fVar36 = *(float *)&(this->Drag).MapView.OffsetRange;
          }
          else {
            fVar36 = *(float *)&(this->Drag).MapView.OffsetRange;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->Drag).MapView.MapValues,uVar23);
            fVar36 = fVar33 * *pfVar15 + fVar36;
          }
          if (((this->OuterDrag).MapView.MapValues.ArrayNum < 1) ||
             (fVar33 = *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar33 & uVar19) <= fVar6)) {
            fVar35 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
          }
          else {
            fVar35 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->OuterDrag).MapView.MapValues,uVar23);
            fVar35 = fVar33 * *pfVar15 + fVar35;
          }
          if (((this->Lift).MapView.MapValues.ArrayNum < 1) ||
             (fVar33 = *(float *)&(this->Lift).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar33 & uVar19) <= fVar6)) {
            fVar34 = *(float *)&(this->Lift).MapView.OffsetRange;
          }
          else {
            fVar34 = *(float *)&(this->Lift).MapView.OffsetRange;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->Lift).MapView.MapValues,uVar23);
            fVar34 = fVar33 * *pfVar15 + fVar34;
          }
          if (((this->OuterLift).MapView.MapValues.ArrayNum < 1) ||
             (fVar33 = *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar33 & uVar19) <= fVar6)) {
            fVar32 = *(float *)&(this->OuterLift).MapView.OffsetRange;
          }
          else {
            fVar32 = *(float *)&(this->OuterLift).MapView.OffsetRange;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->OuterLift).MapView.MapValues,uVar23);
            fVar32 = fVar33 * *pfVar15 + fVar32;
          }
          if (((this->Pressure).MapView.MapValues.ArrayNum < 1) ||
             (fVar33 = *(float *)&(this->Pressure).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar33 & uVar19) <= fVar6)) {
            fVar30 = *(float *)&(this->Pressure).MapView.OffsetRange;
          }
          else {
            fVar30 = *(float *)&(this->Pressure).MapView.OffsetRange;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->Pressure).MapView.MapValues,uVar23);
            fVar30 = fVar33 * *pfVar15 + fVar30;
          }
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_270,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)&param_1->field_0x8 + 0x48));
          local_250.DataPtr = local_270.DataPtr;
          local_250.ArrayNum = local_270.ArrayNum;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_260,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)&param_1->field_0x8 + 0x28));
          local_240.DataPtr = local_260.DataPtr;
          local_240.ArrayNum = local_260.ArrayNum;
          CalculateForce(this,(TVector<float,3> *)&local_360,&local_240,&local_250,uVar23,
                         &this->Velocity,fVar36,fVar35,fVar34,fVar32,fVar30);
          uVar22 = ~uVar23 >> 0x1f;
          uVar27 = 0;
          if ((int)uVar23 < (this->Elements).ArrayNum) {
            uVar27 = uVar22;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar26 = iVar7 + *(int *)&param_1->field_0x10;
          lVar11 = *(longlong *)&param_1->field_0x8;
          uVar28 = 0;
          uVar27 = uVar28;
          if ((int)uVar26 < *(int *)(lVar11 + 0x98)) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar33 = *(float *)(*(longlong *)(lVar11 + 0x90) + (longlong)(int)uVar26 * 4);
          fVar36 = local_360 * fVar33;
          uVar27 = uVar28;
          if ((int)uVar23 < (this->Elements).ArrayNum) {
            uVar27 = uVar22;
          }
          fVar35 = local_35c * fVar33;
          fVar33 = local_358 * fVar33;
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar16 = TDynamicParticles<float,3>::Acceleration
                              (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                               iVar7 + *(int *)&param_1->field_0x10);
          *(float *)pTVar16 = fVar36 + *(float *)pTVar16;
          *(float *)&pTVar16->field_0x4 = fVar35 + *(float *)&pTVar16->field_0x4;
          *(float *)&pTVar16->field_0x8 = fVar33 + *(float *)&pTVar16->field_0x8;
          uVar27 = uVar28;
          if ((int)uVar23 < (this->Elements).ArrayNum) {
            uVar27 = uVar22;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 4);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar27 = iVar7 + *(int *)&param_1->field_0x10;
          lVar11 = *(longlong *)&param_1->field_0x8;
          if ((int)uVar27 < *(int *)(lVar11 + 0x98)) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar33 = *(float *)(*(longlong *)(lVar11 + 0x90) + (longlong)(int)uVar27 * 4);
          fVar36 = local_360 * fVar33;
          uVar27 = uVar20;
          if ((int)uVar23 < (this->Elements).ArrayNum) {
            uVar27 = uVar22;
          }
          fVar35 = local_35c * fVar33;
          fVar33 = local_358 * fVar33;
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 4);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar16 = TDynamicParticles<float,3>::Acceleration
                              (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                               iVar7 + *(int *)&param_1->field_0x10);
          *(float *)pTVar16 = fVar36 + *(float *)pTVar16;
          *(float *)&pTVar16->field_0x4 = fVar35 + *(float *)&pTVar16->field_0x4;
          *(float *)&pTVar16->field_0x8 = fVar33 + *(float *)&pTVar16->field_0x8;
          uVar27 = uVar20;
          if ((int)uVar23 < (this->Elements).ArrayNum) {
            uVar27 = uVar22;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 8);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar28 = iVar7 + *(int *)&param_1->field_0x10;
          lVar11 = *(longlong *)&param_1->field_0x8;
          uVar27 = uVar20;
          if ((int)uVar28 < *(int *)(lVar11 + 0x98)) {
            uVar27 = ~uVar28 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar33 = *(float *)(*(longlong *)(lVar11 + 0x90) + (longlong)(int)uVar28 * 4);
          fVar36 = local_360 * fVar33;
          uVar27 = uVar20;
          if ((int)uVar23 < (this->Elements).ArrayNum) {
            uVar27 = uVar22;
          }
          fVar35 = local_35c * fVar33;
          fVar33 = local_358 * fVar33;
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 8);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar16 = TDynamicParticles<float,3>::Acceleration
                              (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar7);
          local_370 = local_370 + 0xc;
          uVar23 = uVar23 + 1;
          *(float *)pTVar16 = fVar36 + *(float *)pTVar16;
          *(float *)&pTVar16->field_0x4 = fVar35 + *(float *)&pTVar16->field_0x4;
          *(float *)&pTVar16->field_0x8 = fVar33 + *(float *)&pTVar16->field_0x8;
        } while ((int)uVar23 < (this->Elements).ArrayNum);
      }
    }
    else if (0 < iVar7) {
      local_370 = 0;
      do {
        if (((this->Drag).MapView.MapValues.ArrayNum < 1) ||
           (fVar36 = *(float *)&(this->Drag).MapView.OffsetRange.field_0x4,
           (float)((uint)fVar36 & uVar19) <= fVar6)) {
          fVar35 = *(float *)&(this->Drag).MapView.OffsetRange;
        }
        else {
          fVar35 = *(float *)&(this->Drag).MapView.OffsetRange;
          pfVar15 = TArrayView<float_const_,int>::operator[](&(this->Drag).MapView.MapValues,uVar23)
          ;
          fVar35 = fVar36 * *pfVar15 + fVar35;
        }
        if (((this->OuterDrag).MapView.MapValues.ArrayNum < 1) ||
           (fVar36 = *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4,
           (float)((uint)fVar36 & uVar19) <= fVar6)) {
          fVar34 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
        }
        else {
          fVar34 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
          pfVar15 = TArrayView<float_const_,int>::operator[]
                              (&(this->OuterDrag).MapView.MapValues,uVar23);
          fVar34 = fVar36 * *pfVar15 + fVar34;
        }
        if (((this->Lift).MapView.MapValues.ArrayNum < 1) ||
           (fVar36 = *(float *)&(this->Lift).MapView.OffsetRange.field_0x4,
           (float)((uint)fVar36 & uVar19) <= fVar6)) {
          fVar32 = *(float *)&(this->Lift).MapView.OffsetRange;
        }
        else {
          fVar32 = *(float *)&(this->Lift).MapView.OffsetRange;
          pfVar15 = TArrayView<float_const_,int>::operator[](&(this->Lift).MapView.MapValues,uVar23)
          ;
          fVar32 = fVar36 * *pfVar15 + fVar32;
        }
        if (((this->OuterLift).MapView.MapValues.ArrayNum < 1) ||
           (fVar36 = *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4,
           (float)((uint)fVar36 & uVar19) <= fVar6)) {
          fVar30 = *(float *)&(this->OuterLift).MapView.OffsetRange;
        }
        else {
          fVar30 = *(float *)&(this->OuterLift).MapView.OffsetRange;
          pfVar15 = TArrayView<float_const_,int>::operator[]
                              (&(this->OuterLift).MapView.MapValues,uVar23);
          fVar30 = fVar36 * *pfVar15 + fVar30;
        }
        if (((this->Pressure).MapView.MapValues.ArrayNum < 1) ||
           (fVar36 = *(float *)&(this->Pressure).MapView.OffsetRange.field_0x4,
           (float)((uint)fVar36 & uVar19) <= fVar6)) {
          fVar31 = *(float *)&(this->Pressure).MapView.OffsetRange;
        }
        else {
          fVar31 = *(float *)&(this->Pressure).MapView.OffsetRange;
          pfVar15 = TArrayView<float_const_,int>::operator[]
                              (&(this->Pressure).MapView.MapValues,uVar23);
          fVar31 = fVar36 * *pfVar15 + fVar31;
        }
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_230,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x48));
        local_210.DataPtr = local_230.DataPtr;
        local_210.ArrayNum = local_230.ArrayNum;
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_220,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pFVar12->_padding_);
        local_200.DataPtr = local_220.DataPtr;
        local_200.ArrayNum = local_220.ArrayNum;
        CalculateForce(this,(TVector<float,3> *)&local_350,&local_200,&local_210,uVar23,
                       &this->Velocity,fVar35,fVar34,fVar32,fVar30,fVar31,fVar33);
        uVar22 = ~uVar23 >> 0x1f;
        uVar27 = uVar20;
        if ((int)uVar23 < (this->Elements).ArrayNum) {
          uVar27 = uVar22;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar28 = iVar7 + *(int *)&param_1->field_0x10;
        lVar11 = *(longlong *)&param_1->field_0x8;
        uVar27 = uVar20;
        if ((int)uVar28 < *(int *)(lVar11 + 0x98)) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar36 = *(float *)(*(longlong *)(lVar11 + 0x90) + (longlong)(int)uVar28 * 4);
        fVar35 = fVar36 * local_350;
        uVar27 = uVar20;
        if ((int)uVar23 < (this->Elements).ArrayNum) {
          uVar27 = uVar22;
        }
        fVar34 = local_34c * fVar36;
        fVar36 = local_348 * fVar36;
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar16 = TDynamicParticles<float,3>::Acceleration
                            (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                             iVar7 + *(int *)&param_1->field_0x10);
        *(float *)pTVar16 = fVar35 + *(float *)pTVar16;
        *(float *)&pTVar16->field_0x4 = fVar34 + *(float *)&pTVar16->field_0x4;
        *(float *)&pTVar16->field_0x8 = fVar36 + *(float *)&pTVar16->field_0x8;
        uVar27 = uVar20;
        if ((int)uVar23 < (this->Elements).ArrayNum) {
          uVar27 = uVar22;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 4);
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        uVar28 = iVar7 + *(int *)&param_1->field_0x10;
        uVar27 = uVar20;
        if ((int)uVar28 < (int)pFVar12->_padding_) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar36 = *(float *)(pFVar12->_padding_ + (longlong)(int)uVar28 * 4);
        fVar35 = fVar36 * local_350;
        uVar27 = uVar20;
        if ((int)uVar23 < (this->Elements).ArrayNum) {
          uVar27 = uVar22;
        }
        fVar34 = local_34c * fVar36;
        fVar36 = local_348 * fVar36;
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 4);
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        pTVar16 = TDynamicParticles<float,3>::Acceleration
                            ((TDynamicParticles<float,3> *)pFVar12,
                             *(int *)&param_1->field_0x10 + iVar7);
        *(float *)pTVar16 = fVar35 + *(float *)pTVar16;
        *(float *)&pTVar16->field_0x4 = fVar34 + *(float *)&pTVar16->field_0x4;
        *(float *)&pTVar16->field_0x8 = fVar36 + *(float *)&pTVar16->field_0x8;
        uVar27 = uVar20;
        if ((int)uVar23 < (this->Elements).ArrayNum) {
          uVar27 = uVar22;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 8);
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        uVar28 = iVar7 + *(int *)&param_1->field_0x10;
        uVar27 = uVar20;
        if ((int)uVar28 < (int)pFVar12->_padding_) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar36 = *(float *)(pFVar12->_padding_ + (longlong)(int)uVar28 * 4);
        fVar35 = fVar36 * local_350;
        uVar27 = uVar20;
        if ((int)uVar23 < (this->Elements).ArrayNum) {
          uVar27 = uVar22;
        }
        fVar34 = local_34c * fVar36;
        fVar36 = local_348 * fVar36;
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar7 = *(int *)((longlong)&((this->Elements).DataPtr)->field0_0x0 + local_370 + 8);
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        pTVar16 = TDynamicParticles<float,3>::Acceleration
                            ((TDynamicParticles<float,3> *)pFVar12,
                             *(int *)&param_1->field_0x10 + iVar7);
        uVar23 = uVar23 + 1;
        local_370 = local_370 + 0xc;
        *(float *)pTVar16 = fVar35 + *(float *)pTVar16;
        *(float *)&pTVar16->field_0x4 = fVar34 + *(float *)&pTVar16->field_0x4;
        *(float *)&pTVar16->field_0x8 = fVar36 + *(float *)&pTVar16->field_0x8;
      } while ((int)uVar23 < (this->Elements).ArrayNum);
    }
  }
  else {
    uVar20 = 0;
    local_318 = (longlong)(iVar7 + -1);
    uVar19 = 0;
    if (fVar33 == __real_7f7fffff) {
      if (0 < local_318) {
        local_328 = (float *)0x0;
        do {
          pfVar15 = local_328;
          uVar23 = uVar19;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar7 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                          (longlong)pfVar15 * 4);
          uVar23 = uVar19;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar25 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar15 * 4 + 4);
          if (cVar21 == '\0') {
            local_368 = (float *)0x0;
          }
          else {
            local_368 = (this->Pressure).MapView.MapValues.DataPtr;
          }
          if (cVar9 == '\0') {
            local_320 = (float *)0x0;
          }
          else {
            local_320 = (this->OuterLift).MapView.MapValues.DataPtr;
          }
          if (cVar17 == '\0') {
            local_340 = (float *)0x0;
          }
          else {
            local_340 = (this->Lift).MapView.MapValues.DataPtr;
          }
          if (cVar18 == '\0') {
            local_338 = (float *)0x0;
          }
          else {
            local_338 = (this->OuterDrag).MapView.MapValues.DataPtr;
          }
          if (cVar24 == '\0') {
            local_330 = (float *)0x0;
          }
          else {
            local_330 = (this->Drag).MapView.MapValues.DataPtr;
          }
          fVar6 = this->TurbulenceRatio;
          fVar33 = this->QuarterRho;
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_190,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_180,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          pTVar14 = (this->Elements).DataPtr;
          pTVar13 = FSolverParticlesRange::GetInvM(param_1,&local_110);
          pfVar15 = pTVar13->DataPtr;
          pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
          TParticlesRange<Chaos::Softs::FSolverParticles,void>::
          GetArrayView<Chaos::TVector<float,3>_>
                    ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_170,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &pFVar12->_padding_);
          UpdateAndApplyVelocityFieldWithWeightMaps
                    (local_170.DataPtr,pfVar15,pTVar14 + iVar7,local_180.DataPtr,local_190.DataPtr,
                     &this->Velocity,fVar33,fVar6,cVar24,&(this->Drag).MapView.OffsetRange,local_330
                     ,cVar18,&(this->OuterDrag).MapView.OffsetRange,local_338,cVar17,
                     &(this->Lift).MapView.OffsetRange,local_340,cVar9,
                     &(this->OuterLift).MapView.OffsetRange,local_320,cVar21,
                     &(this->Pressure).MapView.OffsetRange,local_368,iVar25 - iVar7);
          local_328 = (float *)((longlong)local_328 + 1);
        } while ((longlong)local_328 < local_318);
      }
    }
    else if (0 < local_318) {
      local_368 = (float *)0x0;
      do {
        uVar23 = uVar19;
        if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar20 = uVar20 + 1;
        iVar7 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                        (longlong)local_368 * 4);
        uVar23 = uVar19;
        if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar25 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         (longlong)local_368 * 4 + 4);
        if (cVar21 == '\0') {
          local_328 = (float *)0x0;
        }
        else {
          local_328 = (this->Pressure).MapView.MapValues.DataPtr;
          uStack_f8 = *(undefined8 *)&(this->Pressure).MapView.MapValues.ArrayNum;
          local_100 = local_328;
        }
        if (cVar9 == '\0') {
          local_330 = (float *)0x0;
        }
        else {
          local_330 = (this->OuterLift).MapView.MapValues.DataPtr;
        }
        if (cVar17 == '\0') {
          local_338 = (float *)0x0;
        }
        else {
          local_338 = (this->Lift).MapView.MapValues.DataPtr;
        }
        if (cVar18 == '\0') {
          local_340 = (float *)0x0;
        }
        else {
          local_340 = (this->OuterDrag).MapView.MapValues.DataPtr;
          uStack_e8 = *(undefined8 *)&(this->OuterDrag).MapView.MapValues.ArrayNum;
          local_f0 = local_340;
        }
        if (cVar24 == '\0') {
          local_320 = (float *)0x0;
        }
        else {
          local_320 = (this->Drag).MapView.MapValues.DataPtr;
        }
        fVar6 = this->TurbulenceRatio;
        fVar36 = this->QuarterRho;
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_160,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pFVar12->_padding_);
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_150,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pFVar12->_padding_);
        pTVar14 = (this->Elements).DataPtr;
        pTVar13 = FSolverParticlesRange::GetInvM(param_1,local_e0);
        pfVar15 = pTVar13->DataPtr;
        pFVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetParticles
                            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1);
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_140,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &pFVar12->_padding_);
        UpdateAndClampVelocityAndApplyVelocityFieldWithWeightMaps
                  (local_140.DataPtr,pfVar15,pTVar14 + iVar7,local_150.DataPtr,local_160.DataPtr,
                   &this->Velocity,fVar36,fVar6,cVar24,&(this->Drag).MapView.OffsetRange,local_320,
                   cVar18,&(this->OuterDrag).MapView.OffsetRange,local_340,cVar17,
                   &(this->Lift).MapView.OffsetRange,local_338,cVar9,
                   &(this->OuterLift).MapView.OffsetRange,local_330,cVar21,
                   &(this->Pressure).MapView.OffsetRange,local_328,iVar25 - iVar7,fVar33);
        local_368 = (float *)((longlong)local_368 + 1);
      } while ((longlong)local_368 < local_318);
    }
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CalculateForce @ 143eb8180

TVector<float,3> * __thiscall
Chaos::Softs::FVelocityAndPressureField::CalculateForce
          (FVelocityAndPressureField *this,TVector<float,3> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3,
          TVector<float,3> *param_4,float param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  float fVar1;
  TVector<int,3> *pTVar2;
  TVector<float,3> *pTVar3;
  TVector<float,3> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pTVar2 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,param_3);
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.Y);
  pTVar4 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.X);
  fVar7 = *(float *)pTVar3;
  fVar10 = *(float *)&pTVar3->field_0x8 - *(float *)&pTVar4->field_0x8;
  fVar12 = *(float *)&pTVar3->field_0x4 - *(float *)&pTVar4->field_0x4;
  fVar8 = *(float *)pTVar4;
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.Z);
  pTVar4 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.X);
  fVar13 = __real_3f800000;
  fVar14 = 0.0;
  fVar6 = *(float *)&pTVar3->field_0x8 - *(float *)&pTVar4->field_0x8;
  fVar5 = *(float *)&pTVar3->field_0x4 - *(float *)&pTVar4->field_0x4;
  fVar9 = fVar5 * fVar10 - fVar6 * fVar12;
  fVar6 = fVar6 * (fVar7 - fVar8) - (*(float *)pTVar3 - *(float *)pTVar4) * fVar10;
  fVar7 = (*(float *)pTVar3 - *(float *)pTVar4) * fVar12 - fVar5 * (fVar7 - fVar8);
  fVar8 = fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7;
  if (__real_38d1b717 <= fVar8) {
    fVar14 = SQRT(fVar8);
    fVar8 = __real_3f800000 / fVar14;
    fVar9 = fVar8 * fVar9;
    fVar6 = fVar8 * fVar6;
    fVar8 = fVar8 * fVar7;
  }
  else {
    fVar6 = 0.0;
    fVar8 = 0.0;
    fVar9 = __real_3f800000;
  }
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_2,(pTVar2->field0_0x0)._s_0.X);
  pTVar4 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_2,(pTVar2->field0_0x0)._s_0.Y);
  fVar7 = *(float *)&pTVar3->field_0x8;
  fVar5 = *(float *)&pTVar3->field_0x4;
  fVar10 = *(float *)pTVar3;
  fVar12 = *(float *)&pTVar4->field_0x8;
  fVar11 = *(float *)&pTVar4->field_0x4;
  fVar1 = *(float *)pTVar4;
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_2,(pTVar2->field0_0x0)._s_0.Z);
  fVar15 = *(float *)&param_4->field_0x8 -
           (fVar7 + fVar12 + *(float *)&pTVar3->field_0x8) * __real_3eaaaaab;
  fVar10 = *(float *)param_4 - (fVar10 + fVar1 + *(float *)pTVar3) * __real_3eaaaaab;
  fVar12 = *(float *)&param_4->field_0x4 -
           (fVar5 + fVar11 + *(float *)&pTVar3->field_0x4) * __real_3eaaaaab;
  fVar7 = fVar6 * fVar12 + fVar10 * fVar9 + fVar8 * fVar15;
  fVar5 = fVar10 * fVar10 + fVar12 * fVar12 + fVar15 * fVar15;
  if (__real_322bcc77 < fVar5) {
    fVar13 = (fVar13 - this->TurbulenceRatio) / SQRT(fVar5) + this->TurbulenceRatio;
  }
  if (fVar7 < 0.0) {
    fVar5 = fVar5 * param_8;
    fVar7 = (param_8 - param_6) * fVar7;
    fVar12 = fVar7 * fVar12 - fVar5 * fVar6;
    fVar11 = fVar7 * fVar15 - fVar5 * fVar8;
    fVar7 = fVar10 * fVar7 - fVar5 * fVar9;
  }
  else {
    fVar5 = fVar5 * param_7;
    fVar7 = (param_5 - param_7) * fVar7;
    fVar12 = fVar7 * fVar12 + fVar5 * fVar6;
    fVar11 = fVar7 * fVar15 + fVar5 * fVar8;
    fVar7 = fVar10 * fVar7 + fVar5 * fVar9;
  }
  fVar5 = fVar14 * __real_3f000000 * param_9;
  fVar13 = fVar14 * this->QuarterRho * fVar13;
  *(float *)__return_storage_ptr__ = fVar13 * fVar7 + fVar5 * fVar9;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar13 * fVar11 + fVar5 * fVar8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar13 * fVar12 + fVar5 * fVar6;
  return __return_storage_ptr__;
}

// CalculateForce @ 143eb8560

TVector<float,3> * __thiscall
Chaos::Softs::FVelocityAndPressureField::CalculateForce
          (FVelocityAndPressureField *this,TVector<float,3> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3,
          TVector<float,3> *param_4,float param_5,float param_6,float param_7,float param_8,
          float param_9,float param_10)

{
  float fVar1;
  TVector<int,3> *pTVar2;
  TVector<float,3> *pTVar3;
  TVector<float,3> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pTVar2 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](&this->Elements,param_3);
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.Y);
  pTVar4 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.X);
  fVar7 = *(float *)pTVar3;
  fVar11 = *(float *)&pTVar3->field_0x8 - *(float *)&pTVar4->field_0x8;
  fVar12 = *(float *)&pTVar3->field_0x4 - *(float *)&pTVar4->field_0x4;
  fVar8 = *(float *)pTVar4;
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.Z);
  pTVar4 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_1,(pTVar2->field0_0x0)._s_0.X);
  fVar13 = __real_3f800000;
  fVar14 = 0.0;
  fVar6 = *(float *)&pTVar3->field_0x8 - *(float *)&pTVar4->field_0x8;
  fVar5 = *(float *)&pTVar3->field_0x4 - *(float *)&pTVar4->field_0x4;
  fVar9 = fVar5 * fVar11 - fVar6 * fVar12;
  fVar6 = fVar6 * (fVar7 - fVar8) - (*(float *)pTVar3 - *(float *)pTVar4) * fVar11;
  fVar7 = (*(float *)pTVar3 - *(float *)pTVar4) * fVar12 - fVar5 * (fVar7 - fVar8);
  fVar8 = fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7;
  if (__real_38d1b717 <= fVar8) {
    fVar14 = SQRT(fVar8);
    fVar8 = __real_3f800000 / fVar14;
    fVar9 = fVar8 * fVar9;
    fVar6 = fVar8 * fVar6;
    fVar8 = fVar8 * fVar7;
  }
  else {
    fVar6 = 0.0;
    fVar8 = 0.0;
    fVar9 = __real_3f800000;
  }
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_2,(pTVar2->field0_0x0)._s_0.X);
  pTVar4 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_2,(pTVar2->field0_0x0)._s_0.Y);
  fVar7 = *(float *)&pTVar3->field_0x8;
  fVar5 = *(float *)&pTVar3->field_0x4;
  fVar11 = *(float *)pTVar3;
  fVar12 = *(float *)&pTVar4->field_0x8;
  fVar10 = *(float *)&pTVar4->field_0x4;
  fVar1 = *(float *)pTVar4;
  pTVar3 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (param_2,(pTVar2->field0_0x0)._s_0.Z);
  fVar10 = *(float *)&param_4->field_0x4 -
           (fVar5 + fVar10 + *(float *)&pTVar3->field_0x4) * __real_3eaaaaab;
  fVar5 = *(float *)param_4 - (fVar11 + fVar1 + *(float *)pTVar3) * __real_3eaaaaab;
  fVar11 = *(float *)&param_4->field_0x8 -
           (fVar7 + fVar12 + *(float *)&pTVar3->field_0x8) * __real_3eaaaaab;
  fVar7 = fVar5 * fVar5 + fVar10 * fVar10 + fVar11 * fVar11;
  if (param_10 < fVar7) {
    fVar7 = SQRT(param_10 / fVar7);
    fVar5 = fVar5 * fVar7;
    fVar10 = fVar10 * fVar7;
    fVar11 = fVar11 * fVar7;
  }
  fVar12 = fVar10 * fVar6 + fVar5 * fVar9 + fVar8 * fVar11;
  fVar7 = fVar10 * fVar10 + fVar5 * fVar5 + fVar11 * fVar11;
  if (__real_322bcc77 < fVar7) {
    fVar13 = (fVar13 - this->TurbulenceRatio) / SQRT(fVar7) + this->TurbulenceRatio;
  }
  if (fVar12 < 0.0) {
    fVar7 = fVar7 * param_8;
    fVar12 = (param_8 - param_6) * fVar12;
    fVar10 = fVar12 * fVar10 - fVar7 * fVar6;
    fVar5 = fVar12 * fVar5 - fVar7 * fVar9;
    fVar7 = fVar12 * fVar11 - fVar7 * fVar8;
  }
  else {
    fVar7 = fVar7 * param_7;
    fVar12 = (param_5 - param_7) * fVar12;
    fVar10 = fVar12 * fVar10 + fVar7 * fVar6;
    fVar5 = fVar12 * fVar5 + fVar7 * fVar9;
    fVar7 = fVar12 * fVar11 + fVar7 * fVar8;
  }
  fVar11 = fVar14 * __real_3f000000 * param_9;
  fVar13 = fVar14 * this->QuarterRho * fVar13;
  *(float *)__return_storage_ptr__ = fVar13 * fVar5 + fVar11 * fVar9;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar13 * fVar7 + fVar11 * fVar8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar13 * fVar10 + fVar11 * fVar6;
  return __return_storage_ptr__;
}

// CalculateForce @ 143eb8980

TVector<float,3> * __thiscall
Chaos::Softs::FVelocityAndPressureField::CalculateForce
          (FVelocityAndPressureField *this,TVector<float,3> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0.0 < Softs::Private::VelocityFieldMaxVelocity) {
    fVar6 = Softs::Private::VelocityFieldMaxVelocity * Softs::Private::VelocityFieldMaxVelocity;
    fVar1 = FPBDFlatWeightMap::GetValue(&this->Pressure,param_3);
    fVar2 = FPBDFlatWeightMap::GetValue(&this->OuterLift,param_3);
    fVar3 = FPBDFlatWeightMap::GetValue(&this->Lift,param_3);
    fVar4 = FPBDFlatWeightMap::GetValue(&this->OuterDrag,param_3);
    fVar5 = FPBDFlatWeightMap::GetValue(&this->Drag,param_3);
    CalculateForce(this,__return_storage_ptr__,param_1,param_2,param_3,&this->Velocity,fVar5,fVar4,
                   fVar3,fVar2,fVar1,fVar6);
  }
  else {
    fVar1 = FPBDFlatWeightMap::GetValue(&this->Pressure,param_3);
    fVar2 = FPBDFlatWeightMap::GetValue(&this->OuterLift,param_3);
    fVar3 = FPBDFlatWeightMap::GetValue(&this->Lift,param_3);
    fVar4 = FPBDFlatWeightMap::GetValue(&this->OuterDrag,param_3);
    fVar5 = FPBDFlatWeightMap::GetValue(&this->Drag,param_3);
    CalculateForce(this,__return_storage_ptr__,param_1,param_2,param_3,&this->Velocity,fVar5,fVar4,
                   fVar3,fVar2,fVar1);
  }
  return __return_storage_ptr__;
}

// GetDragString @ 143ec0b70

FString * __thiscall
Chaos::Softs::FVelocityAndPressureField::GetDragString
          (FVelocityAndPressureField *this,FCollectionPropertyConstFacade *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->DragIndex).Index == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DragIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                       ,0x142,
                       L"The default value getter that sets the property index must be called once prior to calling this function."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                     (param_1,(this->DragIndex).Index,&param_1->StringValueArray);
  return pFVar3;
}

// GetLiftString @ 143ec33d0

FString * __thiscall
Chaos::Softs::FVelocityAndPressureField::GetLiftString
          (FVelocityAndPressureField *this,FCollectionPropertyConstFacade *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->LiftIndex).Index == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LiftIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                       ,0x144,
                       L"The default value getter that sets the property index must be called once prior to calling this function."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                     (param_1,(this->LiftIndex).Index,&param_1->StringValueArray);
  return pFVar3;
}

// GetOuterDragString @ 143ec3680

FString * __thiscall
Chaos::Softs::FVelocityAndPressureField::GetOuterDragString
          (FVelocityAndPressureField *this,FCollectionPropertyConstFacade *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->OuterDragIndex).Index == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OuterDragIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                       ,0x143,
                       L"The default value getter that sets the property index must be called once prior to calling this function."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                     (param_1,(this->OuterDragIndex).Index,&param_1->StringValueArray);
  return pFVar3;
}

// GetPressureString @ 143ec3740

FString * __thiscall
Chaos::Softs::FVelocityAndPressureField::GetPressureString
          (FVelocityAndPressureField *this,FCollectionPropertyConstFacade *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->PressureIndex).Index == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PressureIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                       ,0x147,
                       L"The default value getter that sets the property index must be called once prior to calling this function."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                     (param_1,(this->PressureIndex).Index,&param_1->StringValueArray);
  return pFVar3;
}

// InitColor @ 143ec41e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FVelocityAndPressureField::InitColor
          (FVelocityAndPressureField *this,FSolverParticlesRange *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_a8;
  undefined1 local_a4;
  undefined1 local_a3 [3];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_60;
  int iStack_58;
  undefined4 uStack_54;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_50;
  FScriptContainerElement *local_48;
  
  pTVar19 = &this->ElementsLocal;
  local_50 = pTVar19;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0>
            (&local_78,pTVar19,param_1,this->Offset,this->NumParticles + this->Offset);
  uVar16 = (this->ElementsLocal).ArrayNum;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  if ((int)uVar16 < 1) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar16,&local_a0.AllocatorInstance,&local_a0.ArrayNum,&local_a0.ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(this->ElementsLocal).ArrayNum,Default);
  uVar16 = local_78.ArrayNum + 1;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar10 = (ulonglong)local_78.ArrayNum;
  local_a8 = 0;
  local_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar10 * 0x10);
  local_7c = local_78.ArrayNum;
  FVar18.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar5 = local_60;
    piVar14 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar11 = &this->ConstraintsPerColorStartIndex;
    if (local_78.ArrayNum != (uint)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    pFVar13 = (pTVar11->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar5) {
      if (((pFVar13 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar13 + (longlong)*piVar14 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar7 == *piVar14) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar11->AllocatorInstance,piVar14);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar7 + 1;
      *(uint *)((pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8;
      if (pTVar19 != &local_a0) {
        pFVar13 = (pTVar19->AllocatorInstance).Data;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        (pTVar19->AllocatorInstance).Data = local_a0.AllocatorInstance.Data;
        pTVar19->ArrayNum = local_a0.ArrayNum;
        pTVar19->ArrayMax = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar19->AllocatorInstance).Data;
      iVar7 = pTVar19->ArrayNum;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->Elements).DataPtr = (TVector<int,3> *)local_60;
      *(ulonglong *)&(this->Elements).ArrayNum = CONCAT44(uStack_54,iVar7);
      iStack_58 = iVar7;
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->Lift,&local_90,(this->Lift).MapValues.ArrayNum);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->Drag,&local_90,(this->Drag).MapValues.ArrayNum);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->Pressure,&local_90,(this->Pressure).MapValues.ArrayNum);
      iVar7 = (this->PointToTriangleMapLocal).ArrayNum;
      pFVar13 = (this->PointToTriangleMapLocal).AllocatorInstance.Data;
      pFVar17 = pFVar13 + (longlong)iVar7 * 0x10;
      while( true ) {
        if ((this->PointToTriangleMapLocal).ArrayNum != iVar7) {
          local_a4 = 0;
          `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_a4);
        }
        if (pFVar13 == pFVar17) break;
        puVar12 = *(uint **)pFVar13;
        iVar3 = *(int *)(pFVar13 + 8);
        puVar1 = puVar12 + iVar3;
        while( true ) {
          if (*(int *)(pFVar13 + 8) != iVar3) {
            local_a3[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_a3)
            ;
          }
          if (puVar12 == puVar1) break;
          uVar16 = *puVar12;
          uVar8 = 0;
          if ((int)uVar16 < local_90.ArrayNum) {
            uVar8 = ~uVar16 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *puVar12 = *(uint *)(local_90.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
          puVar12 = puVar12 + 1;
        }
        pFVar13 = pFVar13 + 0x10;
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data,
                 local_78.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar13 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar13 + (longlong)*piVar14 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar7 == *piVar14) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar11->AllocatorInstance,piVar14);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar7 + 1;
    *(uint *)((pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8;
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum;
    uVar10 = (ulonglong)(int)local_80;
    pFVar13 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data;
    local_48 = pFVar13 + uVar10 * 4;
    while( true ) {
      pFVar17 = local_48;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar13 == pFVar17) break;
      uVar16 = *(uint *)pFVar13;
      lVar15 = (longlong)(int)uVar16;
      uVar8 = 0;
      if ((int)uVar16 < pTVar19->ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (pTVar19->AllocatorInstance).Data;
      lVar20 = (longlong)(int)local_a8;
      local_68 = *(undefined8 *)(pFVar17 + lVar15 * 0xc);
      uVar21 = (undefined4)local_68;
      uVar22 = (undefined4)((ulonglong)local_68 >> 0x20);
      uVar2 = *(undefined4 *)(pFVar17 + lVar15 * 0xc + 8);
      uVar8 = 0;
      if ((int)local_a8 < local_a0.ArrayNum) {
        uVar8 = ~local_a8 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar21 = (undefined4)local_68;
        uVar22 = (undefined4)((ulonglong)local_68 >> 0x20);
      }
      uVar8 = local_a8;
      *(ulonglong *)(local_a0.AllocatorInstance.Data + lVar20 * 0xc) = CONCAT44(uVar22,uVar21);
      *(undefined4 *)(local_a0.AllocatorInstance.Data + lVar20 * 0xc + 8) = uVar2;
      uVar9 = 0;
      if ((int)uVar16 < local_90.ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = (ulonglong)local_80;
      *(uint *)(local_90.AllocatorInstance.Data + lVar15 * 4) = uVar8;
      local_a8 = local_a8 + 1;
      pFVar13 = pFVar13 + 4;
      pTVar19 = local_50;
    }
    FVar18.Data = FVar18.Data + 0x10;
    uVar10 = (ulonglong)local_7c;
  } while( true );
}

// ResetColor @ 143ecb730

void __thiscall Chaos::Softs::FVelocityAndPressureField::ResetColor(FVelocityAndPressureField *this)

{
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  return;
}

// SetGeometry @ 143eccfc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetGeometry
          (FVelocityAndPressureField *this,FSolverParticlesRange *param_1,FTriangleMesh *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  undefined1 local_res20 [8];
  int local_88;
  uint local_84;
  TArray<int,TSizedDefaultAllocator<32>_> *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  
  piVar1 = &(this->PointToTriangleMapLocal).ArrayMax;
  piVar2 = &(this->PointToTriangleMapLocal).ArrayNum;
  if (param_2 == (FTriangleMesh *)0x0) {
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->PointToTriangleMapLocal).AllocatorInstance.Data;
    if (*piVar1 < 0) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,*piVar2);
      *piVar2 = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->PointToTriangleMapLocal).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,*piVar2);
      *piVar2 = 0;
    }
    local_70 = 0;
    uStack_68 = 0;
    piVar1 = &(this->ElementsLocal).ArrayMax;
    (this->PointToTriangleMap).DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    *(ulonglong *)&(this->PointToTriangleMap).ArrayNum = (ulonglong)uStack_64 << 0x20;
    (this->ElementsLocal).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->ElementsLocal).AllocatorInstance,0,piVar1);
    }
    local_60 = 0;
    uStack_58 = 0;
    piVar1 = &(this->Forces).ArrayMax;
    this->Offset = 0;
    this->NumParticles = 0;
    (this->Elements).DataPtr = (TVector<int,3> *)0x0;
    *(ulonglong *)&(this->Elements).ArrayNum = (ulonglong)uStack_54 << 0x20;
    (this->Forces).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Forces).AllocatorInstance,0,piVar1);
    }
  }
  else {
    this->Offset = 0;
    iVar9 = *(int *)&param_1->field_0x14;
    this->NumParticles = iVar9;
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Reset
              (&this->PointToTriangleMapLocal,iVar9);
    iVar9 = this->NumParticles;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar9,&(this->PointToTriangleMapLocal).AllocatorInstance,piVar2,piVar1
                      );
    memset((this->PointToTriangleMapLocal).AllocatorInstance.Data + (longlong)iVar7 * 0x10,0,
           (longlong)iVar9 << 4);
    uVar8 = (param_2->MElements).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    (this->ElementsLocal).ArrayNum = 0;
    if ((this->ElementsLocal).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar8,&(this->ElementsLocal).AllocatorInstance,0,
                 &(this->ElementsLocal).ArrayMax);
    }
    local_84 = (param_2->MElements).ArrayNum;
    uVar10 = (ulonglong)(int)local_84;
    pFVar14 = (param_2->MElements).AllocatorInstance.Data;
    local_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar14 + uVar10 * 0xc);
    while( true ) {
      if ((param_2->MElements).ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar14 == local_80) break;
      iVar9 = *(int *)pFVar14;
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar11 = iVar9 + *(int *)&param_1->field_0x10;
      lVar3 = *(longlong *)&param_1->field_0x8;
      uVar8 = 0;
      if ((int)uVar11 < *(int *)(lVar3 + 0x98)) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar8 = 0;
      if (*(float *)(*(longlong *)(lVar3 + 0x90) + (longlong)(int)uVar11 * 4) == 0.0) {
        iVar9 = *(int *)(pFVar14 + 4);
        if (*(longlong *)&param_1->field_0x8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar12 = iVar9 + *(int *)&param_1->field_0x10;
        lVar3 = *(longlong *)&param_1->field_0x8;
        uVar11 = uVar8;
        if ((int)uVar12 < *(int *)(lVar3 + 0x98)) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (*(float *)(*(longlong *)(lVar3 + 0x90) + (longlong)(int)uVar12 * 4) != 0.0)
        goto LAB_143ecd214;
        fVar15 = FSolverParticlesRange::InvM(param_1,*(int *)(pFVar14 + 8));
        if (fVar15 != 0.0) goto LAB_143ecd214;
      }
      else {
LAB_143ecd214:
        pFVar13 = (this->ElementsLocal).AllocatorInstance.Data;
        if ((pFVar13 <= pFVar14) &&
           (pFVar14 < pFVar13 + (longlong)(this->ElementsLocal).ArrayMax * 0xc)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar9 = (this->ElementsLocal).ArrayNum;
        if (iVar9 == (this->ElementsLocal).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&(this->ElementsLocal).AllocatorInstance,
                             &(this->ElementsLocal).ArrayMax);
        }
        pFVar13 = (this->ElementsLocal).AllocatorInstance.Data;
        (this->ElementsLocal).ArrayNum = iVar9 + 1;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 * 0xc) = *(undefined8 *)pFVar14;
        *(int *)(pFVar13 + (longlong)iVar9 * 0xc + 8) = *(int *)(pFVar14 + 8);
        uVar12 = *(int *)pFVar14 - this->Offset;
        uVar11 = uVar8;
        if ((int)uVar12 < (this->PointToTriangleMapLocal).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        local_88 = iVar9;
        if (uVar11 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = (this->PointToTriangleMapLocal).AllocatorInstance.Data +
                  (longlong)(int)uVar12 * 0x10;
        if ((*(int **)&pFVar13->field_0x0 <= &local_88) &&
           (&local_88 < *(int **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar9 = *(int *)&pFVar13[8].field_0x0;
        if (iVar9 == *(int *)(pFVar13 + 0xc)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
        }
        *(int *)&pFVar13[8].field_0x0 = iVar9 + 1;
        *(int *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar9 * 4) = local_88;
        uVar12 = *(int *)(pFVar14 + 4) - this->Offset;
        uVar11 = uVar8;
        if ((int)uVar12 < (this->PointToTriangleMapLocal).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = (this->PointToTriangleMapLocal).AllocatorInstance.Data +
                  (longlong)(int)uVar12 * 0x10;
        if ((*(int **)&pFVar13->field_0x0 <= &local_88) &&
           (&local_88 < *(int **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar9 = *(int *)&pFVar13[8].field_0x0;
        if (iVar9 == *(int *)(pFVar13 + 0xc)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
        }
        *(int *)&pFVar13[8].field_0x0 = iVar9 + 1;
        *(int *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar9 * 4) = local_88;
        uVar11 = *(int *)(pFVar14 + 8) - this->Offset;
        if ((int)uVar11 < (this->PointToTriangleMapLocal).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = (this->PointToTriangleMapLocal).AllocatorInstance.Data +
                  (longlong)(int)uVar11 * 0x10;
        if ((*(int **)&pFVar13->field_0x0 <= &local_88) &&
           (&local_88 < *(int **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar9 = *(int *)&pFVar13[8].field_0x0;
        if (iVar9 == *(int *)(pFVar13 + 0xc)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
        }
        *(int *)&pFVar13[8].field_0x0 = iVar9 + 1;
        *(int *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar9 * 4) = local_88;
      }
      pFVar14 = pFVar14 + 0xc;
      uVar10 = (ulonglong)local_84;
    }
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Forces,(this->ElementsLocal).ArrayNum,Default);
    local_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)
               (this->PointToTriangleMapLocal).AllocatorInstance.Data;
    iStack_78 = (this->PointToTriangleMapLocal).ArrayNum;
    if (iStack_78 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (this->PointToTriangleMap).DataPtr = local_80;
    *(ulonglong *)&(this->PointToTriangleMap).ArrayNum = CONCAT44(uStack_74,iStack_78);
    local_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)
               (this->ElementsLocal).AllocatorInstance.Data;
    iVar9 = (this->ElementsLocal).ArrayNum;
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (this->Elements).DataPtr = (TVector<int,3> *)local_80;
    *(ulonglong *)&(this->Elements).ArrayNum = CONCAT44(uStack_74,iVar9);
  }
  return;
}

// SetGeometry @ 143ecd740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetGeometry
          (FVelocityAndPressureField *this,FTriangleMesh *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar8;
  int local_res10;
  int iStackX_14;
  undefined4 uStack_4c;
  uint uStack_3c;
  uint uStack_2c;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_28;
  
  piVar1 = &(this->PointToTriangleMapLocal).ArrayMax;
  if (param_1 == (FTriangleMesh *)0x0) {
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->PointToTriangleMapLocal).AllocatorInstance.Data;
    iVar2 = (this->PointToTriangleMapLocal).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
      (this->PointToTriangleMapLocal).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->PointToTriangleMapLocal).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
      (this->PointToTriangleMapLocal).ArrayNum = 0;
    }
    piVar1 = &(this->ElementsLocal).ArrayMax;
    (this->PointToTriangleMap).DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    *(ulonglong *)&(this->PointToTriangleMap).ArrayNum = (ulonglong)uStack_3c << 0x20;
    (this->ElementsLocal).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->ElementsLocal).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->Forces).ArrayMax;
    this->Offset = 0;
    this->NumParticles = 0;
    (this->Elements).DataPtr = (TVector<int,3> *)0x0;
    *(ulonglong *)&(this->Elements).ArrayNum = (ulonglong)uStack_2c << 0x20;
    (this->Forces).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->Forces).AllocatorInstance,0,piVar1);
    }
  }
  else {
    pTVar8 = FTriangleMesh::GetPointToTriangleMap(param_1,&local_28);
    iVar2 = pTVar8->ArrayNum;
    uVar6 = *(undefined4 *)&pTVar8->field_0xc;
    (this->PointToTriangleMap).DataPtr = pTVar8->DataPtr;
    (this->PointToTriangleMap).ArrayNum = iVar2;
    *(undefined4 *)&(this->PointToTriangleMap).field_0xc = uVar6;
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->PointToTriangleMapLocal).AllocatorInstance.Data;
    iVar2 = (this->PointToTriangleMapLocal).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
      (this->PointToTriangleMapLocal).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->PointToTriangleMapLocal).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
      (this->PointToTriangleMapLocal).ArrayNum = 0;
    }
    pFVar4 = (param_1->MElements).AllocatorInstance.Data;
    iVar2 = (param_1->MElements).ArrayNum;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    piVar1 = &(this->ElementsLocal).ArrayMax;
    (this->Elements).DataPtr = (TVector<int,3> *)pFVar4;
    *(ulonglong *)&(this->Elements).ArrayNum = CONCAT44(uStack_4c,iVar2);
    (this->ElementsLocal).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->ElementsLocal).AllocatorInstance,0,piVar1);
    }
    FTriangleMesh::GetVertexRange(param_1);
    iVar2 = (this->Elements).ArrayNum;
    this->Offset = local_res10;
    this->NumParticles = (iStackX_14 - local_res10) + 1;
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Forces,iVar2,Default);
  }
  return;
}

// SetGeometry @ 143ecd960

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetGeometry
          (FVelocityAndPressureField *this,FTriangleMesh *param_1,
          TArrayView<float_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4,TArrayView<float_const_,int> *param_5,
          TArrayView<float_const_,int> *param_6)

{
  SetGeometry(this,param_1);
  SetMultipliers(this,param_2,param_3,param_4,param_5,param_6);
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  return;
}

// SetGeometry @ 143ecd9f0

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetGeometry
          (FVelocityAndPressureField *this,FTriangleMesh *param_1,
          FCollectionPropertyConstFacade *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,DragName);
  iVar5 = -1;
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->DragIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,OuterDragName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->OuterDragIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,LiftName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->LiftIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,OuterLiftName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->OuterLiftIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,FluidDensityName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->FluidDensityIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,PressureName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->PressureIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,TurbulenceRatioName);
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar4;
  }
  (this->TurbulenceRatioIndex).Index = iVar5;
  SetGeometry(this,param_1);
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,DragName);
  if ((piVar4 == (int *)0x0) || (iVar5 = *piVar4, iVar5 == -1)) {
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_2,iVar5,&param_2->HighValueArray);
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_2,iVar5,&param_2->LowValueArray);
  }
  pTVar7 = &param_2->HighValueArray;
  pTVar6 = &param_2->LowValueArray;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,LiftName);
  if ((piVar4 == (int *)0x0) || (iVar5 = *piVar4, iVar5 == -1)) {
    fVar11 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar7);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar6);
  }
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,OuterDragName);
  fVar13 = fVar9;
  fVar12 = fVar8;
  if ((piVar4 != (int *)0x0) && (iVar5 = *piVar4, iVar5 != -1)) {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar7);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar6);
  }
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,OuterLiftName);
  fVar15 = fVar11;
  fVar14 = fVar10;
  if ((piVar4 != (int *)0x0) && (iVar5 = *piVar4, iVar5 != -1)) {
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar7);
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar6);
  }
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,PressureName);
  if ((piVar4 == (int *)0x0) || (iVar5 = *piVar4, iVar5 == -1)) {
    fVar17 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar7);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar5,pTVar6);
  }
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,FluidDensityName);
  if ((piVar4 == (int *)0x0) || (*piVar4 == -1)) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,*piVar4,pTVar6);
  }
  fVar2 = __real_41200000;
  fVar1 = __real_3f800000;
  if (__real_41200000 <= fVar9) {
    fVar9 = __real_41200000;
  }
  if (__real_41200000 <= fVar8) {
    fVar8 = __real_41200000;
  }
  if (__real_41200000 <= fVar11) {
    fVar11 = __real_41200000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  *(float *)&(this->Drag).MapView.OffsetRange = fVar9;
  if (fVar2 <= fVar13) {
    fVar13 = fVar2;
  }
  *(float *)&(this->Drag).MapView.OffsetRange.field_0x4 = fVar8 - fVar9;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (fVar2 <= fVar12) {
    fVar12 = fVar2;
  }
  *(float *)&(this->OuterDrag).MapView.OffsetRange = fVar13;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar2 <= fVar15) {
    fVar15 = fVar2;
  }
  *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4 = fVar12 - fVar13;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar2 <= fVar10) {
    fVar10 = fVar2;
  }
  *(float *)&(this->Lift).MapView.OffsetRange = fVar11;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)&(this->Lift).MapView.OffsetRange.field_0x4 = fVar10 - fVar11;
  *(float *)&(this->OuterLift).MapView.OffsetRange = fVar15;
  if (fVar2 <= fVar14) {
    fVar14 = fVar2;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4 = fVar14 - fVar15;
  fVar17 = (fVar1 / param_4) * fVar17;
  *(float *)&(this->Pressure).MapView.OffsetRange = fVar17;
  *(float *)&(this->Pressure).MapView.OffsetRange.field_0x4 = (fVar1 / param_4) * fVar16 - fVar17;
  fVar18 = fVar18 / (param_4 * param_4 * param_4);
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  this->Rho = fVar18;
  this->QuarterRho = fVar18 * __real_3e800000;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,TurbulenceRatioName);
  fVar9 = fVar1;
  if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_2,*piVar4,pTVar6);
  }
  if (fVar1 <= fVar9) {
    fVar9 = fVar1;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  this->TurbulenceRatio = fVar9;
  SetMultipliers(this,param_2,param_3);
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  return;
}

// SetMultipliers @ 143ecdfa0

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetMultipliers
          (FVelocityAndPressureField *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4,TArrayView<float_const_,int> *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  int iVar13;
  TVector<float,2> TVar14;
  TVector<float,2> TVar15;
  TVector<float,2> TVar16;
  TVector<float,2> TVar17;
  TVector<float,2> TVar18;
  bool bVar19;
  FScriptContainerElement **ppFVar20;
  FPBDFlatWeightMap *pFVar21;
  TArray<float,TSizedDefaultAllocator<32>_> local_2f8;
  int local_2e8;
  undefined4 uStack_2e4;
  FScriptContainerElement *pFStack_2e0;
  FScriptContainerElement *pFStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  TArray<float,TSizedDefaultAllocator<32>_> local_2c8;
  int local_2b8;
  undefined4 uStack_2b4;
  FScriptContainerElement *pFStack_2b0;
  FScriptContainerElement *pFStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  TArray<float,TSizedDefaultAllocator<32>_> local_298;
  int local_288;
  undefined4 uStack_284;
  FScriptContainerElement *pFStack_280;
  FScriptContainerElement *pFStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TArray<float,TSizedDefaultAllocator<32>_> local_268;
  int local_258;
  undefined4 uStack_254;
  FScriptContainerElement *pFStack_250;
  FScriptContainerElement *pFStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  TArray<float,TSizedDefaultAllocator<32>_> local_238;
  int local_228;
  undefined4 uStack_224;
  FScriptContainerElement *pFStack_220;
  FScriptContainerElement *pFStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  undefined4 local_1f0;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  undefined4 local_1d0;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *local_1b8;
  undefined4 local_1b0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  undefined4 local_190;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  undefined4 local_170;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_168;
  FScriptContainerElement *local_158;
  undefined8 uStack_150;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_148;
  FScriptContainerElement *local_138;
  undefined8 uStack_130;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_128;
  FScriptContainerElement *local_118;
  undefined8 uStack_110;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_108;
  FScriptContainerElement *local_f8;
  undefined8 uStack_f0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_e8;
  FScriptContainerElement *local_d8;
  undefined8 uStack_d0;
  
  uVar1 = *(undefined4 *)&(this->Pressure).MapView.OffsetRange;
  local_168.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
  local_168.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
  iVar13 = (this->Elements).ArrayNum;
  local_168._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
  uVar2 = *(undefined4 *)&(this->Drag).MapView.OffsetRange.field_0x4;
  uVar3 = *(undefined4 *)&(this->Drag).MapView.OffsetRange;
  uVar4 = *(undefined4 *)&(this->OuterDrag).MapView.OffsetRange.field_0x4;
  uVar5 = *(undefined4 *)&(this->OuterDrag).MapView.OffsetRange;
  uVar6 = *(undefined4 *)&(this->Lift).MapView.OffsetRange.field_0x4;
  uVar7 = *(undefined4 *)&(this->Lift).MapView.OffsetRange;
  uVar8 = *(undefined4 *)&(this->Pressure).MapView.OffsetRange.field_0x4;
  uVar9 = *(undefined4 *)&(this->OuterLift).MapView.OffsetRange.field_0x4;
  uVar10 = *(undefined4 *)&(this->OuterLift).MapView.OffsetRange;
  local_168.ArrayNum = iVar13;
  FPBDFlatWeightMap::CalculateMapValues<3>
            (&local_2f8,param_1,&local_168,this->Offset,this->NumParticles);
  iStack_200 = local_2f8.ArrayNum;
  local_208 = local_2f8.AllocatorInstance.Data;
  if ((local_2f8.ArrayNum < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (iStack_200 == iVar13) {
    ppFVar20 = &local_158;
    local_158 = local_208;
    uStack_150 = CONCAT44(uStack_1fc,iStack_200);
  }
  else {
    local_1f8 = (FScriptContainerElement *)0x0;
    ppFVar20 = &local_1f8;
    local_1f0 = 0;
  }
  pFStack_2e0 = *ppFVar20;
  pFStack_2d8 = ppFVar20[1];
  pFVar21 = &this->Drag;
  local_2e8 = iVar13;
  uStack_2d0 = uVar3;
  uStack_2cc = uVar2;
  if (pFVar21 != (FPBDFlatWeightMap *)&local_2f8) {
    pFVar11 = (pFVar21->MapValues).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pFVar21->MapValues).AllocatorInstance.Data = local_2f8.AllocatorInstance.Data;
    (this->Drag).MapValues.ArrayNum = local_2f8.ArrayNum;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Drag).MapValues.ArrayMax = local_2f8.ArrayMax;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
  }
  TVar14._4_4_ = uStack_2cc;
  TVar14._0_4_ = uStack_2d0;
  *(ulonglong *)&(this->Drag).MapView = CONCAT44(uStack_2e4,local_2e8);
  (this->Drag).MapView.MapValues.DataPtr = (float *)pFStack_2e0;
  *(FScriptContainerElement **)&(this->Drag).MapView.MapValues.ArrayNum = pFStack_2d8;
  (this->Drag).MapView.OffsetRange = TVar14;
  if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AllocatorInstance.Data);
  }
  local_148.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
  local_148.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
  iVar13 = (this->Elements).ArrayNum;
  local_148._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
  local_148.ArrayNum = iVar13;
  FPBDFlatWeightMap::CalculateMapValues<3>
            (&local_2c8,param_2,&local_148,this->Offset,this->NumParticles);
  iStack_1e0 = local_2c8.ArrayNum;
  local_1e8 = local_2c8.AllocatorInstance.Data;
  if ((local_2c8.ArrayNum < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (iStack_1e0 == iVar13) {
    ppFVar20 = &local_138;
    local_138 = local_1e8;
    uStack_130 = CONCAT44(uStack_1dc,iStack_1e0);
  }
  else {
    local_1d8 = (FScriptContainerElement *)0x0;
    ppFVar20 = &local_1d8;
    local_1d0 = 0;
  }
  pFStack_2b0 = *ppFVar20;
  pFStack_2a8 = ppFVar20[1];
  pFVar21 = &this->OuterDrag;
  local_2b8 = iVar13;
  uStack_2a0 = uVar5;
  uStack_29c = uVar4;
  if (pFVar21 != (FPBDFlatWeightMap *)&local_2c8) {
    pFVar11 = (pFVar21->MapValues).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pFVar21->MapValues).AllocatorInstance.Data = local_2c8.AllocatorInstance.Data;
    (this->OuterDrag).MapValues.ArrayNum = local_2c8.ArrayNum;
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OuterDrag).MapValues.ArrayMax = local_2c8.ArrayMax;
    local_2c8.ArrayNum = 0;
    local_2c8.ArrayMax = 0;
  }
  TVar15._4_4_ = uStack_29c;
  TVar15._0_4_ = uStack_2a0;
  *(ulonglong *)&(this->OuterDrag).MapView = CONCAT44(uStack_2b4,local_2b8);
  (this->OuterDrag).MapView.MapValues.DataPtr = (float *)pFStack_2b0;
  *(FScriptContainerElement **)&(this->OuterDrag).MapView.MapValues.ArrayNum = pFStack_2a8;
  (this->OuterDrag).MapView.OffsetRange = TVar15;
  if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AllocatorInstance.Data);
  }
  local_128.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
  local_128.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
  iVar13 = (this->Elements).ArrayNum;
  local_128._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
  local_128.ArrayNum = iVar13;
  FPBDFlatWeightMap::CalculateMapValues<3>
            (&local_298,param_3,&local_128,this->Offset,this->NumParticles);
  iStack_1c0 = local_298.ArrayNum;
  local_1c8 = local_298.AllocatorInstance.Data;
  if ((local_298.ArrayNum < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (iStack_1c0 == iVar13) {
    ppFVar20 = &local_118;
    local_118 = local_1c8;
    uStack_110 = CONCAT44(uStack_1bc,iStack_1c0);
  }
  else {
    local_1b8 = (FScriptContainerElement *)0x0;
    ppFVar20 = &local_1b8;
    local_1b0 = 0;
  }
  pFStack_280 = *ppFVar20;
  pFStack_278 = ppFVar20[1];
  pFVar21 = &this->Lift;
  local_288 = iVar13;
  uStack_270 = uVar7;
  uStack_26c = uVar6;
  if (pFVar21 != (FPBDFlatWeightMap *)&local_298) {
    pFVar11 = (pFVar21->MapValues).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pFVar21->MapValues).AllocatorInstance.Data = local_298.AllocatorInstance.Data;
    (this->Lift).MapValues.ArrayNum = local_298.ArrayNum;
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Lift).MapValues.ArrayMax = local_298.ArrayMax;
    local_298.ArrayNum = 0;
    local_298.ArrayMax = 0;
  }
  TVar16._4_4_ = uStack_26c;
  TVar16._0_4_ = uStack_270;
  *(ulonglong *)&(this->Lift).MapView = CONCAT44(uStack_284,local_288);
  (this->Lift).MapView.MapValues.DataPtr = (float *)pFStack_280;
  *(FScriptContainerElement **)&(this->Lift).MapView.MapValues.ArrayNum = pFStack_278;
  (this->Lift).MapView.OffsetRange = TVar16;
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  local_108.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
  local_108.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
  iVar13 = (this->Elements).ArrayNum;
  local_108._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
  local_108.ArrayNum = iVar13;
  FPBDFlatWeightMap::CalculateMapValues<3>
            (&local_268,param_4,&local_108,this->Offset,this->NumParticles);
  iStack_1a0 = local_268.ArrayNum;
  local_1a8 = local_268.AllocatorInstance.Data;
  if ((local_268.ArrayNum < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (iStack_1a0 == iVar13) {
    ppFVar20 = &local_f8;
    local_f8 = local_1a8;
    uStack_f0 = CONCAT44(uStack_19c,iStack_1a0);
  }
  else {
    local_198 = (FScriptContainerElement *)0x0;
    ppFVar20 = &local_198;
    local_190 = 0;
  }
  pFStack_250 = *ppFVar20;
  pFStack_248 = ppFVar20[1];
  pFVar21 = &this->OuterLift;
  local_258 = iVar13;
  uStack_240 = uVar10;
  uStack_23c = uVar9;
  if (pFVar21 != (FPBDFlatWeightMap *)&local_268) {
    pFVar11 = (pFVar21->MapValues).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pFVar21->MapValues).AllocatorInstance.Data = local_268.AllocatorInstance.Data;
    (this->OuterLift).MapValues.ArrayNum = local_268.ArrayNum;
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OuterLift).MapValues.ArrayMax = local_268.ArrayMax;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
  }
  TVar17._4_4_ = uStack_23c;
  TVar17._0_4_ = uStack_240;
  *(ulonglong *)&(this->OuterLift).MapView = CONCAT44(uStack_254,local_258);
  (this->OuterLift).MapView.MapValues.DataPtr = (float *)pFStack_250;
  *(FScriptContainerElement **)&(this->OuterLift).MapView.MapValues.ArrayNum = pFStack_248;
  (this->OuterLift).MapView.OffsetRange = TVar17;
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  local_e8.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
  local_e8.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
  iVar13 = (this->Elements).ArrayNum;
  local_e8._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
  local_e8.ArrayNum = iVar13;
  FPBDFlatWeightMap::CalculateMapValues<3>
            (&local_238,param_5,&local_e8,this->Offset,this->NumParticles);
  iStack_180 = local_238.ArrayNum;
  local_188 = local_238.AllocatorInstance.Data;
  if ((local_238.ArrayNum < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (iStack_180 == iVar13) {
    ppFVar20 = &local_d8;
    local_d8 = local_188;
    uStack_d0 = CONCAT44(uStack_17c,iStack_180);
  }
  else {
    local_178 = (FScriptContainerElement *)0x0;
    ppFVar20 = &local_178;
    local_170 = 0;
  }
  pFStack_220 = *ppFVar20;
  pFStack_218 = ppFVar20[1];
  pFVar21 = &this->Pressure;
  local_228 = iVar13;
  uStack_210 = uVar1;
  uStack_20c = uVar8;
  if (pFVar21 != (FPBDFlatWeightMap *)&local_238) {
    pFVar11 = (pFVar21->MapValues).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pFVar21->MapValues).AllocatorInstance.Data = local_238.AllocatorInstance.Data;
    (this->Pressure).MapValues.ArrayNum = local_238.ArrayNum;
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Pressure).MapValues.ArrayMax = local_238.ArrayMax;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
  }
  TVar18._4_4_ = uStack_20c;
  TVar18._0_4_ = uStack_210;
  *(ulonglong *)&(this->Pressure).MapView = CONCAT44(uStack_224,local_228);
  (this->Pressure).MapView.MapValues.DataPtr = (float *)pFStack_220;
  *(FScriptContainerElement **)&(this->Pressure).MapView.MapValues.ArrayNum = pFStack_218;
  (this->Pressure).MapView.OffsetRange = TVar18;
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  return;
}

// SetMultipliers @ 143ece620

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetMultipliers
          (FVelocityAndPressureField *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  TArrayView<FString_const_,int> *pTVar1;
  int iVar2;
  FString *pFVar3;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar4;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  iVar2 = (this->DragIndex).Index;
  pTVar1 = &param_1->StringValueArray;
  if (iVar2 == -1) {
LAB_143ece67f:
    local_68.DataPtr = (float *)0x0;
    local_68._8_8_ = (ulonglong)(uint)local_68._12_4_ << 0x20;
  }
  else {
    pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>(param_1,iVar2,pTVar1)
    ;
    pTVar4 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                     *)param_2,pFVar3);
    if (pTVar4 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) goto LAB_143ece67f;
    local_68.DataPtr = *(float **)&pTVar4->field_0x10;
    local_68._8_8_ = *(undefined8 *)&pTVar4->field_0x18;
  }
  iVar2 = (this->OuterDragIndex).Index;
  local_28.DataPtr._0_4_ = local_68.DataPtr._0_4_;
  local_28.DataPtr._4_4_ = local_68.DataPtr._4_4_;
  local_28.ArrayNum = local_68.ArrayNum;
  local_28._12_4_ = local_68._12_4_;
  if (iVar2 == -1) {
LAB_143ece6bb:
  }
  else {
    pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>(param_1,iVar2,pTVar1)
    ;
    pTVar4 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                     *)param_2,pFVar3);
    if (pTVar4 != (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
      local_68.DataPtr._0_4_ = *(undefined4 *)&pTVar4->field_0x10;
      local_68.DataPtr._4_4_ = *(undefined4 *)&pTVar4->field_0x14;
      local_68.ArrayNum = *(int *)&pTVar4->field_0x18;
      local_68._12_4_ = *(undefined4 *)&pTVar4->field_0x1c;
      goto LAB_143ece6bb;
    }
    local_68.DataPtr = (float *)0x0;
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  }
  iVar2 = (this->LiftIndex).Index;
  local_38.DataPtr = local_68.DataPtr;
  local_38.ArrayNum = local_68.ArrayNum;
  local_38._12_4_ = local_68._12_4_;
  if (iVar2 == -1) {
LAB_143ece703:
    local_68.DataPtr = (float *)0x0;
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  }
  else {
    pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>(param_1,iVar2,pTVar1)
    ;
    pTVar4 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                     *)param_2,pFVar3);
    if (pTVar4 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) goto LAB_143ece703;
    local_68.DataPtr = *(float **)&pTVar4->field_0x10;
    local_68._8_8_ = *(undefined8 *)&pTVar4->field_0x18;
  }
  iVar2 = (this->OuterLiftIndex).Index;
  local_48.DataPtr._0_4_ = local_68.DataPtr._0_4_;
  local_48.DataPtr._4_4_ = local_68.DataPtr._4_4_;
  local_48.ArrayNum = local_68.ArrayNum;
  local_48._12_4_ = local_68._12_4_;
  if (iVar2 == -1) {
LAB_143ece73f:
  }
  else {
    pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>(param_1,iVar2,pTVar1)
    ;
    pTVar4 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                     *)param_2,pFVar3);
    if (pTVar4 != (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
      local_68.DataPtr._0_4_ = *(undefined4 *)&pTVar4->field_0x10;
      local_68.DataPtr._4_4_ = *(undefined4 *)&pTVar4->field_0x14;
      local_68.ArrayNum = *(int *)&pTVar4->field_0x18;
      local_68._12_4_ = *(undefined4 *)&pTVar4->field_0x1c;
      goto LAB_143ece73f;
    }
    local_68.DataPtr = (float *)0x0;
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  }
  iVar2 = (this->PressureIndex).Index;
  local_58.DataPtr = local_68.DataPtr;
  local_58.ArrayNum = local_68.ArrayNum;
  local_58._12_4_ = local_68._12_4_;
  if (iVar2 != -1) {
    pFVar3 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>(param_1,iVar2,pTVar1)
    ;
    pTVar4 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                     *)param_2,pFVar3);
    if (pTVar4 != (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
      local_68.DataPtr = *(float **)&pTVar4->field_0x10;
      local_68._8_8_ = *(undefined8 *)&pTVar4->field_0x18;
      goto LAB_143ece78e;
    }
  }
  local_68.DataPtr = (float *)0x0;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
LAB_143ece78e:
  SetMultipliers(this,&local_28,&local_38,&local_48,&local_58,&local_68);
  return;
}

// SetProperties @ 143ece930

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetProperties
          (FVelocityAndPressureField *this,TVector<float,2> *param_1,TVector<float,2> *param_2,
          TVector<float,2> *param_3,TVector<float,2> *param_4,float param_5,
          TVector<float,2> *param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = __real_41200000;
  fVar2 = *(float *)&param_1->field_0x4;
  if (__real_41200000 <= *(float *)&param_1->field_0x4) {
    fVar2 = __real_41200000;
  }
  fVar3 = *(float *)param_1;
  if (__real_41200000 <= *(float *)param_1) {
    fVar3 = __real_41200000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)&(this->Drag).MapView.OffsetRange = fVar3;
  *(float *)&(this->Drag).MapView.OffsetRange.field_0x4 = fVar2 - fVar3;
  fVar2 = *(float *)param_2;
  if (fVar4 <= *(float *)param_2) {
    fVar2 = fVar4;
  }
  fVar3 = *(float *)&param_2->field_0x4;
  if (fVar4 <= *(float *)&param_2->field_0x4) {
    fVar3 = fVar4;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)&(this->OuterDrag).MapView.OffsetRange = fVar2;
  *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4 = fVar3 - fVar2;
  fVar2 = *(float *)param_3;
  if (fVar4 <= *(float *)param_3) {
    fVar2 = fVar4;
  }
  fVar3 = *(float *)&param_3->field_0x4;
  if (fVar4 <= *(float *)&param_3->field_0x4) {
    fVar3 = fVar4;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)&(this->Lift).MapView.OffsetRange = fVar2;
  fVar1 = __real_3f800000;
  *(float *)&(this->Lift).MapView.OffsetRange.field_0x4 = fVar3 - fVar2;
  fVar2 = *(float *)param_4;
  if (fVar4 <= *(float *)param_4) {
    fVar2 = fVar4;
  }
  fVar3 = *(float *)&param_4->field_0x4;
  if (fVar4 <= *(float *)&param_4->field_0x4) {
    fVar3 = fVar4;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)&(this->OuterLift).MapView.OffsetRange = fVar2;
  *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4 = fVar3 - fVar2;
  fVar4 = *(float *)&param_6->field_0x4;
  fVar2 = (fVar1 / param_7) * *(float *)param_6;
  *(float *)&(this->Pressure).MapView.OffsetRange = fVar2;
  *(float *)&(this->Pressure).MapView.OffsetRange.field_0x4 = (fVar1 / param_7) * fVar4 - fVar2;
  fVar4 = param_5 / (param_7 * param_7 * param_7);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  this->Rho = fVar4;
  this->QuarterRho = fVar4 * __real_3e800000;
  return;
}

// SetProperties @ 143ecea70

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetProperties
          (FVelocityAndPressureField *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,float param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  ECollectionPropertyFlags EVar5;
  bool bVar6;
  FString *pFVar7;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar8;
  FScriptContainerElement **ppFVar9;
  FScriptContainerElement **ppFVar10;
  FPBDFlatWeightMap *pFVar11;
  FOuterDragIndex *pFVar12;
  FOuterLiftIndex *pFVar13;
  TArrayView<unsigned_char_const_,int> *pTVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8;
  float local_resc;
  TArrayView<float_const_,int> local_2d8;
  TArrayView<float_const_,int> local_2c8;
  TArrayView<float_const_,int> local_2b8;
  TArrayView<float_const_,int> local_2a8;
  TArrayView<float_const_,int> local_298;
  FScriptContainerElement *local_288;
  int iStack_280;
  FScriptContainerElement *local_278;
  undefined4 local_270;
  FScriptContainerElement *local_268;
  int iStack_260;
  FScriptContainerElement *local_258;
  undefined4 local_250;
  FScriptContainerElement *local_248;
  int iStack_240;
  FScriptContainerElement *local_238;
  undefined4 local_230;
  FScriptContainerElement *local_228;
  int iStack_220;
  FScriptContainerElement *local_218;
  undefined4 local_210;
  undefined1 local_208 [40];
  float local_1e0;
  float local_1dc;
  undefined1 local_1d8 [40];
  float local_1b0;
  float local_1ac;
  undefined1 local_1a8 [40];
  float local_180;
  float local_17c;
  undefined1 local_178 [40];
  float local_150;
  float local_14c;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_148;
  FScriptContainerElement *local_138 [2];
  TArrayView<Chaos::TVector<int,3>_const_,int> local_128;
  FScriptContainerElement *local_118 [2];
  TArrayView<Chaos::TVector<int,3>_const_,int> local_108;
  FScriptContainerElement *local_f8 [2];
  TArrayView<Chaos::TVector<int,3>_const_,int> local_e8;
  FScriptContainerElement *local_d8 [2];
  TArrayView<Chaos::TVector<int,3>_const_,int> local_c8;
  FPBDFlatWeightMap local_b8 [3];
  
  fVar17 = __real_41200000;
  ppFVar10 = &local_218;
  iVar1 = (this->DragIndex).Index;
  if (iVar1 != -1) {
    pTVar14 = &param_1->FlagsArray;
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,pTVar14);
    if (((EVar5 & Animatable) != None) &&
       (EVar5 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->DragIndex).Index,pTVar14), (char)EVar5 < '\0')) {
      if (((this->DragIndex).Index == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DragIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                             ,0x142,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (this->DragIndex).Index;
      fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->HighValueArray);
      fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->LowValueArray);
      if (((this->DragIndex).Index == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DragIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                             ,0x142,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->DragIndex).Index,pTVar14);
      if ((EVar5 & StringDirty) == None) {
        if (fVar17 <= fVar15) {
          fVar15 = fVar17;
        }
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        *(float *)&(this->Drag).MapView.OffsetRange = fVar16;
        *(float *)&(this->Drag).MapView.OffsetRange.field_0x4 = fVar15 - fVar16;
        if ((this->OuterDragIndex).Index == -1) {
          *(float *)&(this->OuterDrag).MapView.OffsetRange = fVar16;
          *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4 = fVar15 - fVar16;
        }
      }
      else {
        pFVar7 = GetDragString(this,param_1);
        local_148.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
        local_148.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
        iVar4 = (this->Elements).ArrayNum;
        local_148._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
        iVar1 = this->NumParticles;
        iVar2 = this->Offset;
        local_148.ArrayNum = iVar4;
        pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                         *)param_2,pFVar7);
        if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_2d8.DataPtr = (float *)0x0;
          local_2d8._8_8_ = (ulonglong)(uint)local_2d8._12_4_ << 0x20;
        }
        else {
          local_2d8.DataPtr = *(float **)&pTVar8->field_0x10;
          local_2d8._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
        }
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
        if (fVar17 <= fVar15) {
          fVar15 = fVar17;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        FPBDFlatWeightMap::CalculateMapValues<3>
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)local_208,&local_2d8,&local_148,
                   iVar2,iVar1);
        local_288 = (FScriptContainerElement *)local_208._0_8_;
        if (((int)local_208._8_4_ < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iStack_280 = local_208._8_4_;
        local_208._16_4_ = iVar4;
        if (local_208._8_4_ == iVar4) {
          ppFVar9 = local_138;
          local_138[0] = local_288;
        }
        else {
          local_278 = (FScriptContainerElement *)0x0;
          ppFVar9 = &local_278;
          local_270 = 0;
        }
        local_208._24_8_ = *ppFVar9;
        local_208._32_8_ = ppFVar9[1];
        local_1dc = fVar15 - fVar16;
        local_1e0 = fVar16;
        FPBDFlatWeightMap::operator=(&this->Drag,(FPBDFlatWeightMap *)local_208);
        if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_208._0_8_);
        }
        if ((this->OuterDragIndex).Index == -1) {
          FPBDFlatWeightMap::operator=(&this->OuterDrag,&this->Drag);
        }
      }
    }
  }
  pTVar14 = &param_1->FlagsArray;
  pFVar12 = &this->OuterDragIndex;
  if (((pFVar12->Index != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,pFVar12->Index,pTVar14), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,pFVar12->Index,pTVar14), (char)EVar5 < '\0')) {
    if ((pFVar12->Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OuterDragIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x143,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = pFVar12->Index;
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if ((pFVar12->Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OuterDragIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x143,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,pFVar12->Index,pTVar14);
    if ((EVar5 & StringDirty) == None) {
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)&(this->OuterDrag).MapView.OffsetRange = fVar16;
      *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4 = fVar15 - fVar16;
    }
    else {
      pFVar7 = GetOuterDragString(this,param_1);
      local_128.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
      local_128.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
      iVar4 = (this->Elements).ArrayNum;
      local_128._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
      iVar1 = this->NumParticles;
      iVar2 = this->Offset;
      local_128.ArrayNum = iVar4;
      pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar7);
      if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_2c8.DataPtr = (float *)0x0;
        local_2c8._8_8_ = (ulonglong)(uint)local_2c8._12_4_ << 0x20;
      }
      else {
        local_2c8.DataPtr = *(float **)&pTVar8->field_0x10;
        local_2c8._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      FPBDFlatWeightMap::CalculateMapValues<3>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_1d8,&local_2c8,&local_128,iVar2,
                 iVar1);
      local_268 = (FScriptContainerElement *)local_1d8._0_8_;
      if (((int)local_1d8._8_4_ < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_260 = local_1d8._8_4_;
      local_1d8._16_4_ = iVar4;
      if (local_1d8._8_4_ == iVar4) {
        ppFVar9 = local_118;
        local_118[0] = local_268;
      }
      else {
        local_258 = (FScriptContainerElement *)0x0;
        ppFVar9 = &local_258;
        local_250 = 0;
      }
      local_1d8._24_8_ = *ppFVar9;
      local_1d8._32_8_ = ppFVar9[1];
      local_1ac = fVar15 - fVar16;
      local_1b0 = fVar16;
      FPBDFlatWeightMap::operator=(&this->OuterDrag,(FPBDFlatWeightMap *)local_1d8);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
  }
  iVar1 = (this->LiftIndex).Index;
  if (((iVar1 != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar14), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->LiftIndex).Index,pTVar14), (char)EVar5 < '\0')) {
    if (((this->LiftIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LiftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x144,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->LiftIndex).Index;
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (((this->LiftIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LiftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x144,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->LiftIndex).Index,pTVar14);
    if ((EVar5 & StringDirty) == None) {
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)&(this->Lift).MapView.OffsetRange = fVar16;
      *(float *)&(this->Lift).MapView.OffsetRange.field_0x4 = fVar15 - fVar16;
      if ((this->OuterLiftIndex).Index == -1) {
        *(float *)&(this->OuterLift).MapView.OffsetRange = fVar16;
        *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4 = fVar15 - fVar16;
      }
    }
    else {
      pFVar7 = GetLiftString(this,param_1);
      local_108.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
      local_108.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
      iVar4 = (this->Elements).ArrayNum;
      local_108._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
      iVar1 = this->NumParticles;
      iVar2 = this->Offset;
      local_108.ArrayNum = iVar4;
      pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar7);
      if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_2b8.DataPtr = (float *)0x0;
        local_2b8._8_8_ = (ulonglong)(uint)local_2b8._12_4_ << 0x20;
      }
      else {
        local_2b8.DataPtr = *(float **)&pTVar8->field_0x10;
        local_2b8._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      FPBDFlatWeightMap::CalculateMapValues<3>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_1a8,&local_2b8,&local_108,iVar2,
                 iVar1);
      local_248 = (FScriptContainerElement *)local_1a8._0_8_;
      if (((int)local_1a8._8_4_ < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_240 = local_1a8._8_4_;
      local_1a8._16_4_ = iVar4;
      if (local_1a8._8_4_ == iVar4) {
        ppFVar9 = local_f8;
        local_f8[0] = local_248;
      }
      else {
        local_238 = (FScriptContainerElement *)0x0;
        ppFVar9 = &local_238;
        local_230 = 0;
      }
      local_1a8._24_8_ = *ppFVar9;
      local_1a8._32_8_ = ppFVar9[1];
      local_17c = fVar15 - fVar16;
      local_180 = fVar16;
      FPBDFlatWeightMap::operator=(&this->Lift,(FPBDFlatWeightMap *)local_1a8);
      if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1a8._0_8_);
      }
      if ((this->OuterLiftIndex).Index == -1) {
        FPBDFlatWeightMap::operator=(&this->OuterLift,&this->Lift);
      }
    }
  }
  pFVar13 = &this->OuterLiftIndex;
  if (((pFVar13->Index != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,pFVar13->Index,pTVar14), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,pFVar13->Index,pTVar14), (char)EVar5 < '\0')) {
    if ((pFVar13->Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OuterLiftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x145,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = pFVar13->Index;
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if ((pFVar13->Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OuterLiftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x145,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,pFVar13->Index,pTVar14);
    if ((EVar5 & StringDirty) == None) {
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)&(this->OuterLift).MapView.OffsetRange = fVar16;
      *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4 = fVar15 - fVar16;
    }
    else {
      if ((pFVar13->Index == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OuterLiftIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                             ,0x145,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,pFVar13->Index,&param_1->StringValueArray);
      local_e8.DataPtr._0_4_ = *(undefined4 *)&(this->Elements).DataPtr;
      local_e8.DataPtr._4_4_ = *(undefined4 *)((longlong)&(this->Elements).DataPtr + 4);
      iVar4 = (this->Elements).ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
      iVar1 = this->NumParticles;
      iVar2 = this->Offset;
      local_e8.ArrayNum = iVar4;
      pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar7);
      if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_2a8.DataPtr = (float *)0x0;
        local_2a8._8_8_ = (ulonglong)(uint)local_2a8._12_4_ << 0x20;
      }
      else {
        local_2a8.DataPtr = *(float **)&pTVar8->field_0x10;
        local_2a8._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      if (fVar17 <= fVar15) {
        fVar15 = fVar17;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      FPBDFlatWeightMap::CalculateMapValues<3>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_178,&local_2a8,&local_e8,iVar2,
                 iVar1);
      local_228 = (FScriptContainerElement *)local_178._0_8_;
      if (((int)local_178._8_4_ < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_220 = local_178._8_4_;
      local_178._16_4_ = iVar4;
      if (local_178._8_4_ == iVar4) {
        ppFVar10 = local_d8;
        local_d8[0] = local_228;
      }
      else {
        local_218 = (FScriptContainerElement *)0x0;
        local_210 = 0;
      }
      local_178._24_8_ = *ppFVar10;
      local_178._32_8_ = ppFVar10[1];
      local_14c = fVar15 - fVar16;
      local_150 = fVar16;
      FPBDFlatWeightMap::operator=(&this->OuterLift,(FPBDFlatWeightMap *)local_178);
      if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_178._0_8_);
      }
    }
  }
  iVar1 = (this->FluidDensityIndex).Index;
  if (((iVar1 != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar14), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->FluidDensityIndex).Index,pTVar14), (char)EVar5 < '\0')) {
    if (((this->FluidDensityIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FluidDensityIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x146,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,(this->FluidDensityIndex).Index,&param_1->LowValueArray);
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    this->Rho = fVar17 / (param_3 * param_3 * param_3);
  }
  fVar17 = __real_3f800000;
  iVar1 = (this->TurbulenceRatioIndex).Index;
  if (((iVar1 != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar14), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->TurbulenceRatioIndex).Index,pTVar14), (char)EVar5 < '\0')) {
    if (((this->TurbulenceRatioIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TurbulenceRatioIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x148,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,(this->TurbulenceRatioIndex).Index,&param_1->LowValueArray);
    if (fVar17 <= fVar15) {
      fVar15 = fVar17;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    this->TurbulenceRatio = fVar15;
  }
  iVar1 = (this->PressureIndex).Index;
  if (((iVar1 != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar14), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->PressureIndex).Index,pTVar14), (char)EVar5 < '\0')) {
    if (((this->PressureIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PressureIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x147,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->PressureIndex).Index;
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (((this->PressureIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PressureIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\VelocityField.h"
                           ,0x147,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->PressureIndex).Index,pTVar14);
    if ((EVar5 & StringDirty) == None) {
      fVar16 = fVar16 * (fVar17 / param_3);
      *(float *)&(this->Pressure).MapView.OffsetRange = fVar16;
      *(float *)&(this->Pressure).MapView.OffsetRange.field_0x4 =
           fVar15 * (fVar17 / param_3) - fVar16;
    }
    else {
      pFVar7 = GetPressureString(this,param_1);
      local_c8.DataPtr = (this->Elements).DataPtr;
      local_c8.ArrayNum = (this->Elements).ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&(this->Elements).field_0xc;
      iVar1 = this->NumParticles;
      iVar2 = this->Offset;
      pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar7);
      if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_298.DataPtr = (float *)0x0;
        local_298._8_8_ = (ulonglong)(uint)local_298._12_4_ << 0x20;
      }
      else {
        local_298.DataPtr = *(float **)&pTVar8->field_0x10;
        local_298._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
      }
      local_res8 = fVar16 * (fVar17 / param_3);
      local_resc = fVar15 * (fVar17 / param_3);
      pFVar11 = FPBDFlatWeightMap::FPBDFlatWeightMap<3>
                          (local_b8,(TVector<float,2> *)&local_res8,&local_298,&local_c8,iVar2,iVar1
                           ,(void *)0x0);
      FPBDFlatWeightMap::operator=(&this->Pressure,pFVar11);
      if (local_b8[0].MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].MapValues.AllocatorInstance.Data);
      }
    }
  }
  if (param_4) {
    this->QuarterRho = this->Rho * __real_3e800000;
  }
  else {
    this->QuarterRho = 0.0;
  }
  return;
}

// SetPropertiesAndWind @ 143ecf760

void __thiscall
Chaos::Softs::FVelocityAndPressureField::SetPropertiesAndWind
          (FVelocityAndPressureField *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,float param_3,bool param_4,TVector<float,3> *param_5,TRotation<double,3> *param_6
          ,TRotation<double,3> *param_7)

{
  char cVar1;
  TVector<float> *pTVar3;
  TQuat<float> *this_00;
  TVector<float>_u_0 *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78;
  TVector<float>_u_0 local_68;
  TVector<float> local_58;
  TVector<float> local_4c;
  TQuat<float> local_38;
  TQuat<float> local_28 [2];
  int iVar2;
  
  SetProperties(this,param_1,param_2,param_3,param_4);
  iVar2 = (this->WindVelocityIndex).Index;
  if (iVar2 == -1) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    FCollectionPropertyConstFacade::GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
              (param_1,(TVector<float> *)&local_88._s_0,iVar2,&param_1->LowValueArray);
    fVar5 = local_88._s_0.X * param_3;
    fVar6 = local_88._s_0.Y * param_3;
    fVar7 = local_88._s_0.Z * param_3;
  }
  iVar2 = (this->WindVelocitySpaceIndex).Index;
  local_88._0_8_ = CONCAT44(fVar6,fVar5);
  if (iVar2 == -1) {
    cVar1 = '\0';
  }
  else {
    iVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_1,iVar2,&param_1->LowValueArray);
    cVar1 = (char)iVar2;
  }
  if (cVar1 == '\x01') {
    pTVar4 = &local_68;
    local_68._0_8_ = CONCAT44(fVar6,fVar5);
    pTVar3 = &local_4c;
    this_00 = local_28;
    local_28[0].X = (float)*(double *)param_6;
    local_28[0].Y = (float)*(double *)&param_6->field_0x8;
    local_28[0].Z = (float)*(double *)&param_6->field_0x10;
    local_28[0].W = (float)*(double *)&param_6->field_0x18;
    local_68._s_0.Z = fVar7;
  }
  else {
    if (cVar1 != '\x02') goto LAB_143ecf8c8;
    pTVar4 = &local_78;
    local_78._0_8_ = CONCAT44(fVar6,fVar5);
    pTVar3 = &local_58;
    this_00 = &local_38;
    local_38.X = (float)*(double *)param_7;
    local_38.Y = (float)*(double *)&param_7->field_0x8;
    local_38.Z = (float)*(double *)&param_7->field_0x10;
    local_38.W = (float)*(double *)&param_7->field_0x18;
    local_78._s_0.Z = fVar7;
  }
  pTVar3 = UE::Math::TQuat<float>::RotateVector(this_00,pTVar3,(TVector<float> *)&pTVar4->_s_0);
  local_88._0_8_ = *(undefined8 *)&pTVar3->field0_0x0;
  fVar7 = (pTVar3->field0_0x0)._s_0.Z;
LAB_143ecf8c8:
  fVar5 = *(float *)&param_5->field_0x4;
  fVar6 = *(float *)&param_5->field_0x8;
  *(float *)&this->Velocity = local_88._s_0.X + *(float *)param_5;
  *(float *)&(this->Velocity).field_0x4 = local_88._s_0.Y + fVar5;
  *(float *)&(this->Velocity).field_0x8 = fVar7 + fVar6;
  return;
}

// UpdateField @ 143ed5000

void __thiscall
Chaos::Softs::FVelocityAndPressureField::UpdateField
          (FVelocityAndPressureField *this,FSolverParticles *param_1,int param_2,
          TVector<float,3> *param_3,float param_4,float param_5,float param_6,float param_7,
          float param_8)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_28 [2];
  
  iVar2 = (int)param_1->_padding_;
  local_38.DataPtr = (TVector<float,3> *)param_1->_padding_;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_28[0].DataPtr = (TVector<float,3> *)param_1->_padding_;
  iVar3 = (int)param_1->_padding_;
  local_38.ArrayNum = iVar2;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar3;
  pTVar9 = CalculateForce(this,&local_48,local_28,&local_38,param_2,param_3,param_4,param_5,param_6,
                          param_7,param_8);
  uVar1 = *(undefined8 *)pTVar9;
  uVar4 = *(undefined4 *)&pTVar9->field_0x8;
  uVar8 = 0;
  if (param_2 < (this->Forces).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (this->Forces).AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + (longlong)param_2 * 0xc) = uVar1;
  *(undefined4 *)(pFVar5 + (longlong)param_2 * 0xc + 8) = uVar4;
  return;
}

// UpdateField @ 143ed51b0

void __thiscall
Chaos::Softs::FVelocityAndPressureField::UpdateField
          (FVelocityAndPressureField *this,FSolverParticles *param_1,int param_2,
          TVector<float,3> *param_3,float param_4,float param_5,float param_6,float param_7,
          float param_8,float param_9)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_28 [2];
  
  iVar2 = (int)param_1->_padding_;
  local_38.DataPtr = (TVector<float,3> *)param_1->_padding_;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_28[0].DataPtr = (TVector<float,3> *)param_1->_padding_;
  iVar3 = (int)param_1->_padding_;
  local_38.ArrayNum = iVar2;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar3;
  pTVar9 = CalculateForce(this,&local_48,local_28,&local_38,param_2,param_3,param_4,param_5,param_6,
                          param_7,param_8,param_9);
  uVar1 = *(undefined8 *)pTVar9;
  uVar4 = *(undefined4 *)&pTVar9->field_0x8;
  uVar8 = 0;
  if (param_2 < (this->Forces).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (this->Forces).AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + (longlong)param_2 * 0xc) = uVar1;
  *(undefined4 *)(pFVar5 + (longlong)param_2 * 0xc + 8) = uVar4;
  return;
}

// UpdateForces @ 143ed5360

void __thiscall
Chaos::Softs::FVelocityAndPressureField::UpdateForces
          (FVelocityAndPressureField *this,FSolverParticles *param_1,float param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  char cVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  TVector<float,3> local_118;
  TVector<float,3> local_10c;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_100;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_f0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d0 [10];
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId429,"FVelocityAndPressureField_UpdateForces",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\VelocityField.cpp"
               ,0x1ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId429);
  }
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_38d1b717;
  fVar30 = __real_7f7fffff;
  if (0.0 < Softs::Private::VelocityFieldMaxVelocity) {
    fVar30 = Softs::Private::VelocityFieldMaxVelocity * Softs::Private::VelocityFieldMaxVelocity;
  }
  if (((this->Drag).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->Drag).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
  }
  if (((this->OuterDrag).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->OuterDrag).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  if (((this->Lift).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->Lift).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar17 = '\0';
  }
  else {
    cVar17 = '\x01';
  }
  if (((this->OuterLift).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->OuterLift).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  if (((this->Pressure).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->Pressure).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  if ((((cVar19 == '\0') && (cVar18 == '\0')) && (cVar17 == '\0')) &&
     ((cVar16 == '\0' && (cVar12 == '\0')))) {
    iVar2 = (this->Elements).ArrayNum;
    if (bChaos_VelocityField_ISPC_Enabled == false) {
      iVar15 = 0;
      if (fVar30 == __real_7f7fffff) {
        if (0 < iVar2) {
          do {
            UpdateField(this,param_1,iVar15,&this->Velocity,
                        *(float *)&(this->Drag).MapView.OffsetRange,
                        *(float *)&(this->OuterDrag).MapView.OffsetRange,
                        *(float *)&(this->Lift).MapView.OffsetRange,
                        *(float *)&(this->OuterLift).MapView.OffsetRange,
                        *(float *)&(this->Pressure).MapView.OffsetRange);
            iVar15 = iVar15 + 1;
          } while (iVar15 < (this->Elements).ArrayNum);
        }
      }
      else if (0 < iVar2) {
        do {
          UpdateField(this,param_1,iVar15,&this->Velocity,
                      *(float *)&(this->Drag).MapView.OffsetRange,
                      *(float *)&(this->OuterDrag).MapView.OffsetRange,
                      *(float *)&(this->Lift).MapView.OffsetRange,
                      *(float *)&(this->OuterLift).MapView.OffsetRange,
                      *(float *)&(this->Pressure).MapView.OffsetRange,fVar30);
          iVar15 = iVar15 + 1;
        } while (iVar15 < (this->Elements).ArrayNum);
      }
    }
    else if (fVar30 == __real_7f7fffff) {
      ::UpdateField();
    }
    else {
      UpdateFieldAndClampVelocity
                ((this->Forces).AllocatorInstance.Data,(this->Elements).DataPtr,param_1->_padding_,
                 param_1->_padding_,&this->Velocity,this->QuarterRho,this->TurbulenceRatio,
                 *(undefined4 *)&(this->Drag).MapView.OffsetRange,
                 *(undefined4 *)&(this->OuterDrag).MapView.OffsetRange,
                 *(undefined4 *)&(this->Lift).MapView.OffsetRange,
                 *(undefined4 *)&(this->OuterLift).MapView.OffsetRange,
                 *(undefined4 *)&(this->Pressure).MapView.OffsetRange,iVar2,fVar30);
    }
  }
  else {
    pfVar10 = (float *)0x0;
    iVar2 = (this->Elements).ArrayNum;
    if (bChaos_VelocityField_ISPC_Enabled == false) {
      if (fVar30 == __real_7f7fffff) {
        if (0 < iVar2) {
          pfVar21 = pfVar10;
          do {
            uVar13 = (uint)pfVar10;
            if (((this->Drag).MapView.MapValues.ArrayNum < 1) ||
               (fVar30 = *(float *)&(this->Drag).MapView.OffsetRange.field_0x4,
               (float)((uint)fVar30 & uVar7) <= fVar6)) {
              fVar29 = *(float *)&(this->Drag).MapView.OffsetRange;
            }
            else {
              fVar29 = *(float *)&(this->Drag).MapView.OffsetRange;
              pfVar10 = TArrayView<float_const_,int>::operator[]
                                  (&(this->Drag).MapView.MapValues,uVar13);
              fVar29 = fVar30 * *pfVar10 + fVar29;
            }
            if (((this->OuterDrag).MapView.MapValues.ArrayNum < 1) ||
               (fVar30 = *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4,
               (float)((uint)fVar30 & uVar7) <= fVar6)) {
              fVar28 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
            }
            else {
              fVar28 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
              pfVar10 = TArrayView<float_const_,int>::operator[]
                                  (&(this->OuterDrag).MapView.MapValues,uVar13);
              fVar28 = fVar30 * *pfVar10 + fVar28;
            }
            if (((this->Lift).MapView.MapValues.ArrayNum < 1) ||
               (fVar30 = *(float *)&(this->Lift).MapView.OffsetRange.field_0x4,
               (float)((uint)fVar30 & uVar7) <= fVar6)) {
              fVar27 = *(float *)&(this->Lift).MapView.OffsetRange;
            }
            else {
              fVar27 = *(float *)&(this->Lift).MapView.OffsetRange;
              pfVar10 = TArrayView<float_const_,int>::operator[]
                                  (&(this->Lift).MapView.MapValues,uVar13);
              fVar27 = fVar30 * *pfVar10 + fVar27;
            }
            if (((this->OuterLift).MapView.MapValues.ArrayNum < 1) ||
               (fVar30 = *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4,
               (float)((uint)fVar30 & uVar7) <= fVar6)) {
              fVar26 = *(float *)&(this->OuterLift).MapView.OffsetRange;
            }
            else {
              fVar26 = *(float *)&(this->OuterLift).MapView.OffsetRange;
              pfVar10 = TArrayView<float_const_,int>::operator[]
                                  (&(this->OuterLift).MapView.MapValues,uVar13);
              fVar26 = fVar30 * *pfVar10 + fVar26;
            }
            if (((this->Pressure).MapView.MapValues.ArrayNum < 1) ||
               (fVar30 = *(float *)&(this->Pressure).MapView.OffsetRange.field_0x4,
               (float)((uint)fVar30 & uVar7) <= fVar6)) {
              fVar24 = *(float *)&(this->Pressure).MapView.OffsetRange;
            }
            else {
              fVar24 = *(float *)&(this->Pressure).MapView.OffsetRange;
              pfVar10 = TArrayView<float_const_,int>::operator[]
                                  (&(this->Pressure).MapView.MapValues,uVar13);
              fVar24 = fVar30 * *pfVar10 + fVar24;
            }
            local_100.DataPtr = (TVector<float,3> *)param_1->_padding_;
            iVar2 = (int)param_1->_padding_;
            if ((iVar2 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_f0.DataPtr = (TVector<float,3> *)param_1->_padding_;
            iVar15 = (int)param_1->_padding_;
            local_100.ArrayNum = iVar2;
            if ((iVar15 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_f0.ArrayNum = iVar15;
            pTVar11 = CalculateForce(this,&local_118,&local_f0,&local_100,uVar13,&this->Velocity,
                                     fVar29,fVar28,fVar27,fVar26,fVar24);
            uVar1 = *(undefined8 *)pTVar11;
            uVar3 = *(undefined4 *)&pTVar11->field_0x8;
            uVar9 = 0;
            if ((int)uVar13 < (this->Forces).ArrayNum) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (this->Forces).AllocatorInstance.Data;
            pfVar10 = (float *)(ulonglong)(uVar13 + 1);
            *(undefined8 *)((longlong)pfVar21 + (longlong)pFVar4) = uVar1;
            *(undefined4 *)((longlong)(pfVar21 + 2) + (longlong)pFVar4) = uVar3;
            pfVar21 = pfVar21 + 3;
          } while ((int)(uVar13 + 1) < (this->Elements).ArrayNum);
        }
      }
      else if (0 < iVar2) {
        pfVar21 = pfVar10;
        do {
          uVar13 = (uint)pfVar10;
          if (((this->Drag).MapView.MapValues.ArrayNum < 1) ||
             (fVar29 = *(float *)&(this->Drag).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar29 & uVar7) <= fVar6)) {
            fVar28 = *(float *)&(this->Drag).MapView.OffsetRange;
          }
          else {
            fVar28 = *(float *)&(this->Drag).MapView.OffsetRange;
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (&(this->Drag).MapView.MapValues,uVar13);
            fVar28 = fVar29 * *pfVar10 + fVar28;
          }
          if (((this->OuterDrag).MapView.MapValues.ArrayNum < 1) ||
             (fVar29 = *(float *)&(this->OuterDrag).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar29 & uVar7) <= fVar6)) {
            fVar27 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
          }
          else {
            fVar27 = *(float *)&(this->OuterDrag).MapView.OffsetRange;
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (&(this->OuterDrag).MapView.MapValues,uVar13);
            fVar27 = fVar29 * *pfVar10 + fVar27;
          }
          if (((this->Lift).MapView.MapValues.ArrayNum < 1) ||
             (fVar29 = *(float *)&(this->Lift).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar29 & uVar7) <= fVar6)) {
            fVar26 = *(float *)&(this->Lift).MapView.OffsetRange;
          }
          else {
            fVar26 = *(float *)&(this->Lift).MapView.OffsetRange;
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (&(this->Lift).MapView.MapValues,uVar13);
            fVar26 = fVar29 * *pfVar10 + fVar26;
          }
          if (((this->OuterLift).MapView.MapValues.ArrayNum < 1) ||
             (fVar29 = *(float *)&(this->OuterLift).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar29 & uVar7) <= fVar6)) {
            fVar24 = *(float *)&(this->OuterLift).MapView.OffsetRange;
          }
          else {
            fVar24 = *(float *)&(this->OuterLift).MapView.OffsetRange;
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (&(this->OuterLift).MapView.MapValues,uVar13);
            fVar24 = fVar29 * *pfVar10 + fVar24;
          }
          if (((this->Pressure).MapView.MapValues.ArrayNum < 1) ||
             (fVar29 = *(float *)&(this->Pressure).MapView.OffsetRange.field_0x4,
             (float)((uint)fVar29 & uVar7) <= fVar6)) {
            fVar25 = *(float *)&(this->Pressure).MapView.OffsetRange;
          }
          else {
            fVar25 = *(float *)&(this->Pressure).MapView.OffsetRange;
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (&(this->Pressure).MapView.MapValues,uVar13);
            fVar25 = fVar29 * *pfVar10 + fVar25;
          }
          local_e0.DataPtr = (TVector<float,3> *)param_1->_padding_;
          iVar2 = (int)param_1->_padding_;
          if ((iVar2 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d0[0].DataPtr = (TVector<float,3> *)param_1->_padding_;
          iVar15 = (int)param_1->_padding_;
          local_e0.ArrayNum = iVar2;
          if ((iVar15 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d0[0].ArrayNum = iVar15;
          pTVar11 = CalculateForce(this,&local_10c,local_d0,&local_e0,uVar13,&this->Velocity,fVar28,
                                   fVar27,fVar26,fVar24,fVar25,fVar30);
          uVar1 = *(undefined8 *)pTVar11;
          uVar3 = *(undefined4 *)&pTVar11->field_0x8;
          uVar9 = 0;
          if ((int)uVar13 < (this->Forces).ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->Forces).AllocatorInstance.Data;
          pfVar10 = (float *)(ulonglong)(uVar13 + 1);
          *(undefined8 *)((longlong)pfVar21 + (longlong)pFVar4) = uVar1;
          *(undefined4 *)((longlong)(pfVar21 + 2) + (longlong)pFVar4) = uVar3;
          pfVar21 = pfVar21 + 3;
        } while ((int)(uVar13 + 1) < (this->Elements).ArrayNum);
      }
    }
    else if (fVar30 == __real_7f7fffff) {
      pfVar21 = pfVar10;
      if (cVar12 != '\0') {
        pfVar21 = (this->Pressure).MapView.MapValues.DataPtr;
      }
      pfVar20 = pfVar10;
      if (cVar16 != '\0') {
        pfVar20 = (this->OuterLift).MapView.MapValues.DataPtr;
      }
      pfVar22 = pfVar10;
      if (cVar17 != '\0') {
        pfVar22 = (this->Lift).MapView.MapValues.DataPtr;
      }
      pfVar14 = pfVar10;
      if (cVar18 != '\0') {
        pfVar14 = (this->OuterDrag).MapView.MapValues.DataPtr;
      }
      if (cVar19 != '\0') {
        pfVar10 = (this->Drag).MapView.MapValues.DataPtr;
      }
      UpdateFieldWithWeightMaps
                ((this->Forces).AllocatorInstance.Data,(this->Elements).DataPtr,param_1->_padding_,
                 param_1->_padding_,&this->Velocity,this->QuarterRho,this->TurbulenceRatio,cVar19,
                 &(this->Drag).MapView.OffsetRange,pfVar10,cVar18,
                 &(this->OuterDrag).MapView.OffsetRange,pfVar14,cVar17,
                 &(this->Lift).MapView.OffsetRange,pfVar22,cVar16,
                 &(this->OuterLift).MapView.OffsetRange,pfVar20,cVar12,
                 &(this->Pressure).MapView.OffsetRange,pfVar21,iVar2);
    }
    else {
      pfVar21 = pfVar10;
      if (cVar12 != '\0') {
        pfVar21 = (this->Pressure).MapView.MapValues.DataPtr;
      }
      pfVar20 = pfVar10;
      if (cVar16 != '\0') {
        pfVar20 = (this->OuterLift).MapView.MapValues.DataPtr;
      }
      pfVar22 = pfVar10;
      if (cVar17 != '\0') {
        pfVar22 = (this->Lift).MapView.MapValues.DataPtr;
      }
      pfVar14 = pfVar10;
      if (cVar18 != '\0') {
        pfVar14 = (this->OuterDrag).MapView.MapValues.DataPtr;
      }
      if (cVar19 != '\0') {
        pfVar10 = (this->Drag).MapView.MapValues.DataPtr;
      }
      UpdateFieldWithWeightMapsAndClampVelocity
                ((this->Forces).AllocatorInstance.Data,(this->Elements).DataPtr,param_1->_padding_,
                 param_1->_padding_,&this->Velocity,this->QuarterRho,this->TurbulenceRatio,cVar19,
                 &(this->Drag).MapView.OffsetRange,pfVar10,cVar18,
                 &(this->OuterDrag).MapView.OffsetRange,pfVar14,cVar17,
                 &(this->Lift).MapView.OffsetRange,pfVar22,cVar16,
                 &(this->OuterLift).MapView.OffsetRange,pfVar20,cVar12,
                 &(this->Pressure).MapView.OffsetRange,pfVar21,iVar2,fVar30);
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

