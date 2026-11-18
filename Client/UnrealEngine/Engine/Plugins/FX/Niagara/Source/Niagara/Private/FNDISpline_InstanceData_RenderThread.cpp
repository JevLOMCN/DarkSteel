// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FNDISpline_InstanceData_RenderThread @ 149212400

FNDISpline_InstanceData_RenderThread * __thiscall
FNDISpline_InstanceData_RenderThread::FNDISpline_InstanceData_RenderThread
          (FNDISpline_InstanceData_RenderThread *this,FNDISpline_InstanceData_RenderThread *param_1)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = *(undefined8 *)((param_1->SplineTransform).M[0] + 2);
  *(undefined8 *)(this->SplineTransform).M[0] = *(undefined8 *)(param_1->SplineTransform).M[0];
  *(undefined8 *)((this->SplineTransform).M[0] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransform).M[1] + 2);
  *(undefined8 *)(this->SplineTransform).M[1] = *(undefined8 *)(param_1->SplineTransform).M[1];
  *(undefined8 *)((this->SplineTransform).M[1] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransform).M[2] + 2);
  *(undefined8 *)(this->SplineTransform).M[2] = *(undefined8 *)(param_1->SplineTransform).M[2];
  *(undefined8 *)((this->SplineTransform).M[2] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransform).M[3] + 2);
  *(undefined8 *)(this->SplineTransform).M[3] = *(undefined8 *)(param_1->SplineTransform).M[3];
  *(undefined8 *)((this->SplineTransform).M[3] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformRotationMat).M[0] + 2);
  *(undefined8 *)(this->SplineTransformRotationMat).M[0] =
       *(undefined8 *)(param_1->SplineTransformRotationMat).M[0];
  *(undefined8 *)((this->SplineTransformRotationMat).M[0] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformRotationMat).M[1] + 2);
  *(undefined8 *)(this->SplineTransformRotationMat).M[1] =
       *(undefined8 *)(param_1->SplineTransformRotationMat).M[1];
  *(undefined8 *)((this->SplineTransformRotationMat).M[1] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformRotationMat).M[2] + 2);
  *(undefined8 *)(this->SplineTransformRotationMat).M[2] =
       *(undefined8 *)(param_1->SplineTransformRotationMat).M[2];
  *(undefined8 *)((this->SplineTransformRotationMat).M[2] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformRotationMat).M[3] + 2);
  *(undefined8 *)(this->SplineTransformRotationMat).M[3] =
       *(undefined8 *)(param_1->SplineTransformRotationMat).M[3];
  *(undefined8 *)((this->SplineTransformRotationMat).M[3] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverse).M[0] + 2);
  *(undefined8 *)(this->SplineTransformInverse).M[0] =
       *(undefined8 *)(param_1->SplineTransformInverse).M[0];
  *(undefined8 *)((this->SplineTransformInverse).M[0] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverse).M[1] + 2);
  *(undefined8 *)(this->SplineTransformInverse).M[1] =
       *(undefined8 *)(param_1->SplineTransformInverse).M[1];
  *(undefined8 *)((this->SplineTransformInverse).M[1] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverse).M[2] + 2);
  *(undefined8 *)(this->SplineTransformInverse).M[2] =
       *(undefined8 *)(param_1->SplineTransformInverse).M[2];
  *(undefined8 *)((this->SplineTransformInverse).M[2] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverse).M[3] + 2);
  *(undefined8 *)(this->SplineTransformInverse).M[3] =
       *(undefined8 *)(param_1->SplineTransformInverse).M[3];
  *(undefined8 *)((this->SplineTransformInverse).M[3] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverseTranspose).M[0] + 2);
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[0] =
       *(undefined8 *)(param_1->SplineTransformInverseTranspose).M[0];
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[0] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverseTranspose).M[1] + 2);
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[1] =
       *(undefined8 *)(param_1->SplineTransformInverseTranspose).M[1];
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[1] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverseTranspose).M[2] + 2);
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[2] =
       *(undefined8 *)(param_1->SplineTransformInverseTranspose).M[2];
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[2] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->SplineTransformInverseTranspose).M[3] + 2);
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[3] =
       *(undefined8 *)(param_1->SplineTransformInverseTranspose).M[3];
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[3] + 2) = uVar3;
  fVar4 = (param_1->SplineTransformRotation).Y;
  fVar5 = (param_1->SplineTransformRotation).Z;
  fVar6 = (param_1->SplineTransformRotation).W;
  (this->SplineTransformRotation).X = (param_1->SplineTransformRotation).X;
  (this->SplineTransformRotation).Y = fVar4;
  (this->SplineTransformRotation).Z = fVar5;
  (this->SplineTransformRotation).W = fVar6;
  *(undefined8 *)&(this->DefaultUpVector).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultUpVector).field0_0x0;
  (this->DefaultUpVector).field0_0x0._s_0.Z = (param_1->DefaultUpVector).field0_0x0._s_0.Z;
  this->SplineLength = param_1->SplineLength;
  this->SplineDistanceStep = param_1->SplineDistanceStep;
  this->InvSplineDistanceStep = param_1->InvSplineDistanceStep;
  this->MaxIndex = param_1->MaxIndex;
  (this->SplinePositionsLUT).Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar1 = (param_1->SplinePositionsLUT).Buffer.Reference;
  (this->SplinePositionsLUT).Buffer.Reference = pFVar1;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->SplinePositionsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar2 = (param_1->SplinePositionsLUT).SRV.Reference;
  (this->SplinePositionsLUT).SRV.Reference = pFVar2;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  (this->SplinePositionsLUT).NumBytes = (param_1->SplinePositionsLUT).NumBytes;
  (this->SplineScalesLUT).Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar1 = (param_1->SplineScalesLUT).Buffer.Reference;
  (this->SplineScalesLUT).Buffer.Reference = pFVar1;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->SplineScalesLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar2 = (param_1->SplineScalesLUT).SRV.Reference;
  (this->SplineScalesLUT).SRV.Reference = pFVar2;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  (this->SplineScalesLUT).NumBytes = (param_1->SplineScalesLUT).NumBytes;
  (this->SplineRotationsLUT).Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar1 = (param_1->SplineRotationsLUT).Buffer.Reference;
  (this->SplineRotationsLUT).Buffer.Reference = pFVar1;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->SplineRotationsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar2 = (param_1->SplineRotationsLUT).SRV.Reference;
  (this->SplineRotationsLUT).SRV.Reference = pFVar2;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  (this->SplineRotationsLUT).NumBytes = (param_1->SplineRotationsLUT).NumBytes;
  return this;
}

// ~FNDISpline_InstanceData_RenderThread @ 149215260

void __thiscall
FNDISpline_InstanceData_RenderThread::~FNDISpline_InstanceData_RenderThread
          (FNDISpline_InstanceData_RenderThread *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  
  Reset(this);
  pFVar1 = (this->SplineRotationsLUT).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SplineRotationsLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->SplineScalesLUT).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SplineScalesLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->SplinePositionsLUT).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SplinePositionsLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
    return;
  }
  return;
}

// Reset @ 14924b6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDISpline_InstanceData_RenderThread::Reset(FNDISpline_InstanceData_RenderThread *this)

{
  FName FVar1;
  FRHIBuffer *pFVar2;
  FRHIShaderResourceView *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  uchar auVar13 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_68;
  FStatMessage local_58;
  FStatMessage local_48;
  
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                       ,0x21,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  auVar11._0_4_ = (this->SplinePositionsLUT).NumBytes;
  if (auVar11 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_res20,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar7,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_68.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_68.StatData.Pad = auVar11;
      local_68.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_68);
      FStatsTrace::Add(&local_res8,-(longlong)auVar11);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12._0_4_ = (this->SplineScalesLUT).NumBytes;
  if (auVar12 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_78,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar7,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_58.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_58.StatData.Pad = auVar12;
      local_58.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_58);
      FStatsTrace::Add(&local_res10,-(longlong)auVar12);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = (this->SplineRotationsLUT).NumBytes;
  if (auVar13 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_70,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar7,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18 = FVar1;
      local_48.StatData.Pad = auVar13;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_48);
      FStatsTrace::Add(&local_res18,-(longlong)auVar13);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  (this->SplinePositionsLUT).NumBytes = 0;
  pFVar2 = (this->SplinePositionsLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    (this->SplinePositionsLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->SplinePositionsLUT).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SplinePositionsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->SplineScalesLUT).NumBytes = 0;
  pFVar2 = (this->SplineScalesLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    (this->SplineScalesLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->SplineScalesLUT).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SplineScalesLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->SplineRotationsLUT).NumBytes = 0;
  pFVar2 = (this->SplineRotationsLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    (this->SplineRotationsLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->SplineRotationsLUT).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SplineRotationsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->SplineTransform).M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->SplineTransform).M[0] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->SplineTransform).M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->SplineTransform).M[1] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->SplineTransform).M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->SplineTransform).M[2] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->SplineTransform).M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->SplineTransform).M[3] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->SplineTransformRotationMat).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->SplineTransformRotationMat).M[0] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->SplineTransformRotationMat).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->SplineTransformRotationMat).M[1] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->SplineTransformRotationMat).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->SplineTransformRotationMat).M[2] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->SplineTransformRotationMat).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->SplineTransformRotationMat).M[3] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->SplineTransformInverse).M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_
  ;
  *(undefined8 *)((this->SplineTransformInverse).M[0] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->SplineTransformInverse).M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_
  ;
  *(undefined8 *)((this->SplineTransformInverse).M[1] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->SplineTransformInverse).M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_
  ;
  *(undefined8 *)((this->SplineTransformInverse).M[2] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->SplineTransformInverse).M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_
  ;
  *(undefined8 *)((this->SplineTransformInverse).M[3] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[0] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[1] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[2] + 2) = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->SplineTransformInverseTranspose).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->SplineTransformInverseTranspose).M[3] + 2) = uVar5;
  this->SplineTransformRotation = UE::Math::TQuat<float>::Identity;
  *(undefined8 *)&(this->DefaultUpVector).field0_0x0 =
       UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  (this->DefaultUpVector).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  this->SplineLength = 0.0;
  this->SplineDistanceStep = 0.0;
  this->InvSplineDistanceStep = 0.0;
  this->MaxIndex = -1;
  return;
}

