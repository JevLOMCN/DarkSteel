// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 1491ee170

UScriptStruct * __cdecl FNiagaraDataInterfaceSplineLUT::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceSplineLUT.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceSplineLUT.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT,(UObject *)pUVar1,
                         L"NiagaraDataInterfaceSplineLUT");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceSplineLUT.OuterSingleton;
}

// FNiagaraDataInterfaceSplineLUT @ 149212750

FNiagaraDataInterfaceSplineLUT * __thiscall
FNiagaraDataInterfaceSplineLUT::FNiagaraDataInterfaceSplineLUT
          (FNiagaraDataInterfaceSplineLUT *this,FNiagaraDataInterfaceSplineLUT *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Positions).ArrayMax;
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Positions).ArrayNum;
  pFVar5 = (param_1->Positions).AllocatorInstance.Data;
  (this->Positions).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->Positions).AllocatorInstance.Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar2 = &this->Scales;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Scales).ArrayMax;
  iVar4 = (param_1->Scales).ArrayNum;
  pFVar5 = (param_1->Scales).AllocatorInstance.Data;
  (this->Scales).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar3 = &this->Rotations;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Rotations).ArrayMax;
  iVar4 = (param_1->Rotations).ArrayNum;
  pFVar5 = (param_1->Rotations).AllocatorInstance.Data;
  (this->Rotations).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 5);
  }
  this->SplineLength = param_1->SplineLength;
  this->SplineDistanceStep = param_1->SplineDistanceStep;
  this->InvSplineDistanceStep = param_1->InvSplineDistanceStep;
  this->MaxIndex = param_1->MaxIndex;
  return this;
}

// BuildLUT @ 14921ec80

void __thiscall
FNiagaraDataInterfaceSplineLUT::BuildLUT
          (FNiagaraDataInterfaceSplineLUT *this,FSplineCurves *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  TQuat<double> *pTVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  float local_res18 [2];
  FInterpCurve<UE::Math::TQuat<double>_> *local_res20;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  TQuat<double> local_98 [2];
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  iVar17 = 0;
  piVar1 = &(this->Positions).ArrayMax;
  (this->Positions).ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_2,(ForAnyElementType *)this,0,piVar1);
  }
  piVar2 = &(this->Scales).ArrayMax;
  (this->Scales).ArrayNum = 0;
  if (*piVar2 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_2,&(this->Scales).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->Rotations).ArrayMax;
  (this->Rotations).ArrayNum = 0;
  if (*piVar2 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,param_2,&(this->Rotations).AllocatorInstance,0,piVar2);
  }
  this->MaxIndex = param_2 + -1;
  fVar20 = FSplineCurves::GetSplineLength(param_1);
  this->SplineLength = fVar20;
  fVar21 = __real_3f800000;
  if (this->MaxIndex == 0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar20 / (float)this->MaxIndex;
  }
  this->SplineDistanceStep = fVar20;
  this->InvSplineDistanceStep = fVar21 / fVar20;
  dVar12 = __real_3e45798ee0000000;
  if (0 < param_2) {
    local_res20 = (FInterpCurve<UE::Math::TQuat<double>_> *)&param_1->Rotation;
    do {
      local_res18[0] = 0.0;
      fVar21 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&param_1->ReparamTable,
                          (float)iVar17 * this->SplineDistanceStep,local_res18);
      pFVar15 = (FScriptContainerElement *)
                FInterpCurve<UE::Math::TVector<double>_>::Eval
                          ((FInterpCurve<UE::Math::TVector<double>_> *)param_1,&local_d0,fVar21,
                           &UE::Math::TVector<double>::ZeroVector);
      pFVar3 = (this->Positions).AllocatorInstance.Data;
      if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = (this->Positions).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)this,piVar1);
      }
      (this->Positions).ArrayNum = iVar14 + 1;
      dVar6 = *(double *)(pFVar15 + 8);
      pFVar4 = (this->Positions).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar14 * 0x18;
      *(double *)pFVar3 = (((TVector<double>_u_0 *)&pFVar15->field_0x0)->_s_0).X;
      *(double *)(pFVar3 + 8) = dVar6;
      *(undefined8 *)(pFVar4 + (longlong)iVar14 * 0x18 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
      pFVar15 = (FScriptContainerElement *)
                FInterpCurve<UE::Math::TVector<double>_>::Eval
                          ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1->Scale,&local_b8,
                           fVar21,&UE::Math::TVector<double>::ZeroVector);
      pFVar3 = (this->Scales).AllocatorInstance.Data;
      if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)(this->Scales).ArrayMax * 0x18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = (this->Scales).ArrayNum;
      if (iVar14 == (this->Scales).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->Scales).AllocatorInstance,&(this->Scales).ArrayMax);
      }
      (this->Scales).ArrayNum = iVar14 + 1;
      dVar6 = *(double *)(pFVar15 + 8);
      pFVar4 = (this->Scales).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar14 * 0x18;
      *(double *)pFVar3 = (((TVector<double>_u_0 *)&pFVar15->field_0x0)->_s_0).X;
      *(double *)(pFVar3 + 8) = dVar6;
      *(undefined8 *)(pFVar4 + (longlong)iVar14 * 0x18 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
      pTVar16 = FInterpCurve<UE::Math::TQuat<double>_>::Eval
                          (local_res20,local_98,fVar21,&UE::Math::TQuat<double>::Identity);
      pFVar3 = (this->Rotations).AllocatorInstance.Data;
      dVar8 = pTVar16->X;
      dVar9 = pTVar16->Y;
      dVar10 = pTVar16->Z;
      dVar11 = pTVar16->W;
      local_d8 = dVar12;
      dVar22 = dVar10 * dVar10 + dVar8 * dVar8;
      dVar25 = dVar11 * dVar11 + dVar9 * dVar9;
      dVar6 = dVar25 + dVar22;
      dVar22 = dVar22 + dVar25;
      auVar27._8_4_ = SUB84(dVar22,0);
      auVar27._0_8_ = dVar6;
      auVar27._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      in_XMM4 = sqrtpd(in_XMM4,auVar27);
      uVar18 = -(ulonglong)(dVar12 <= dVar6);
      uVar19 = -(ulonglong)(dVar12 <= dVar22);
      uVar29 = (uint)(uVar18 >> 0x20);
      uVar30 = (uint)(uVar19 >> 0x20);
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
      auVar28._0_8_ = uVar18 & (ulonglong)(auVar27._0_8_ * dVar8);
      uVar7 = uVar19 & (ulonglong)(auVar27._8_8_ * dVar9);
      auVar28._8_4_ = (undefined4)uVar7;
      auVar28._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar23._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar23._4_4_ =
           ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar23._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar23._12_4_ =
           ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_f8 = auVar28 | auVar23;
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
      auVar26._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar26._4_4_ =
           ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar26._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar26._12_4_ =
           ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar24._0_8_ = (ulonglong)(auVar27._0_8_ * dVar10) & uVar18;
      uVar19 = (ulonglong)(auVar27._8_8_ * dVar11) & uVar19;
      auVar24._8_4_ = (undefined4)uVar19;
      auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
      local_e8 = auVar26 | auVar24;
      if (((pFVar3 <= (FScriptContainerElement *)local_f8) &&
          ((FScriptContainerElement *)local_f8 < pFVar3 + (longlong)*piVar2 * 0x20)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = (this->Rotations).ArrayNum;
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&(this->Rotations).AllocatorInstance,piVar2);
      }
      iVar17 = iVar17 + 1;
      (this->Rotations).ArrayNum = iVar14 + 1;
      pFVar15 = (this->Rotations).AllocatorInstance.Data;
      pFVar3 = pFVar15 + (longlong)iVar14 * 0x20;
      *(undefined8 *)pFVar3 = local_f8._0_8_;
      *(undefined8 *)(pFVar3 + 8) = local_f8._8_8_;
      pFVar15 = pFVar15 + (longlong)iVar14 * 0x20 + 0x10;
      *(undefined8 *)pFVar15 = local_e8._0_8_;
      *(undefined8 *)(pFVar15 + 8) = local_e8._8_8_;
    } while (iVar17 < param_2);
  }
  return;
}

// FindNeighborKeys @ 149230070

void __thiscall
FNiagaraDataInterfaceSplineLUT::FindNeighborKeys
          (FNiagaraDataInterfaceSplineLUT *this,float param_1,int *param_2,int *param_3,
          float *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 in_XMM1_Db;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar6 [16];
  
  fVar8 = param_1 * this->InvSplineDistanceStep;
  fVar5 = __real_bf000000 - (fVar8 + fVar8);
  iVar1 = (int)ROUND((fVar8 + fVar8) - __real_3f000000) >> 1;
  iVar3 = this->MaxIndex;
  if (iVar1 < this->MaxIndex) {
    iVar3 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  *param_2 = iVar1;
  auVar7._4_4_ = in_XMM1_Db;
  auVar7._0_4_ = fVar8;
  iVar1 = -((int)ROUND(fVar5) >> 1);
  iVar3 = this->MaxIndex;
  if (iVar1 < this->MaxIndex) {
    iVar3 = iVar1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  iVar3 = (int)fVar8;
  *param_3 = iVar4;
  fVar5 = fVar8;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar8)) {
    auVar7._8_4_ = in_XMM1_Db;
    auVar7._12_4_ = in_XMM1_Db;
    auVar6._8_8_ = auVar7._8_8_;
    auVar6._4_4_ = fVar8;
    auVar6._0_4_ = fVar8;
    uVar2 = movmskps(iVar1,auVar6);
    fVar5 = (float)(int)(iVar3 - (uVar2 & 1));
  }
  *param_4 = fVar8 - fVar5;
  return;
}

// Reset @ 14924bd40

void __thiscall FNiagaraDataInterfaceSplineLUT::Reset(FNiagaraDataInterfaceSplineLUT *this)

{
  int *piVar1;
  
  piVar1 = &(this->Positions).ArrayMax;
  (this->Positions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->Scales).ArrayMax;
  (this->Scales).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Scales).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Rotations).ArrayMax;
  (this->Rotations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->Rotations).AllocatorInstance,0,piVar1);
  }
  this->SplineLength = 0.0;
  this->SplineDistanceStep = 0.0;
  this->InvSplineDistanceStep = 0.0;
  this->MaxIndex = -1;
  return;
}

