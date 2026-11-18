// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 6

// FUpdateInstancesContext @ 14da3fd30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FUpdateInstancesContext * __thiscall
NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
          (FUpdateInstancesContext *this,FUpdateInstancesContext *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  
  this->RendererProperties = param_1->RendererProperties;
  lVar8 = 2;
  this->ComputeInterface = param_1->ComputeInterface;
  this->NumInstancesEstimate = param_1->NumInstancesEstimate;
  (this->DataToRender).Reference = (FNiagaraDataBuffer *)0x0;
  (this->DataToRender).Reference = (param_1->DataToRender).Reference;
  (param_1->DataToRender).Reference = (FNiagaraDataBuffer *)0x0;
  pfVar6 = param_1->DefaultCustomFloats;
  pfVar7 = this->DefaultCustomFloats;
  do {
    uVar1 = *(undefined8 *)(pfVar6 + 2);
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar6;
    *(undefined8 *)(pfVar7 + 2) = uVar1;
    uVar1 = *(undefined8 *)(pfVar6 + 6);
    *(undefined8 *)(pfVar7 + 4) = *(undefined8 *)(pfVar6 + 4);
    *(undefined8 *)(pfVar7 + 6) = uVar1;
    uVar1 = *(undefined8 *)(pfVar6 + 10);
    *(undefined8 *)(pfVar7 + 8) = *(undefined8 *)(pfVar6 + 8);
    *(undefined8 *)(pfVar7 + 10) = uVar1;
    uVar1 = *(undefined8 *)(pfVar6 + 0xe);
    *(undefined8 *)(pfVar7 + 0xc) = *(undefined8 *)(pfVar6 + 0xc);
    *(undefined8 *)(pfVar7 + 0xe) = uVar1;
    uVar1 = *(undefined8 *)(pfVar6 + 0x12);
    *(undefined8 *)(pfVar7 + 0x10) = *(undefined8 *)(pfVar6 + 0x10);
    *(undefined8 *)(pfVar7 + 0x12) = uVar1;
    uVar1 = *(undefined8 *)(pfVar6 + 0x16);
    *(undefined8 *)(pfVar7 + 0x14) = *(undefined8 *)(pfVar6 + 0x14);
    *(undefined8 *)(pfVar7 + 0x16) = uVar1;
    uVar1 = *(undefined8 *)(pfVar6 + 0x1a);
    *(undefined8 *)(pfVar7 + 0x18) = *(undefined8 *)(pfVar6 + 0x18);
    *(undefined8 *)(pfVar7 + 0x1a) = uVar1;
    uVar1 = *(undefined8 *)(pfVar6 + 0x1e);
    *(undefined8 *)(pfVar7 + 0x1c) = *(undefined8 *)(pfVar6 + 0x1c);
    *(undefined8 *)(pfVar7 + 0x1e) = uVar1;
    lVar8 = lVar8 + -1;
    pfVar6 = pfVar6 + 0x20;
    pfVar7 = pfVar7 + 0x20;
  } while (lVar8 != 0);
  *(undefined8 *)&(this->MeshScale).field0_0x0 = *(undefined8 *)&(param_1->MeshScale).field0_0x0;
  (this->MeshScale).field0_0x0._s_0.Z = (param_1->MeshScale).field0_0x0._s_0.Z;
  fVar3 = (param_1->MeshRotation).Y;
  fVar4 = (param_1->MeshRotation).Z;
  fVar5 = (param_1->MeshRotation).W;
  (this->MeshRotation).X = (param_1->MeshRotation).X;
  (this->MeshRotation).Y = fVar3;
  (this->MeshRotation).Z = fVar4;
  (this->MeshRotation).W = fVar5;
  *(undefined8 *)&(this->DefaultPosition).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultPosition).field0_0x0;
  (this->DefaultPosition).field0_0x0._s_0.Z = (param_1->DefaultPosition).field0_0x0._s_0.Z;
  fVar3 = (param_1->DefaultRotation).Y;
  fVar4 = (param_1->DefaultRotation).Z;
  fVar5 = (param_1->DefaultRotation).W;
  (this->DefaultRotation).X = (param_1->DefaultRotation).X;
  (this->DefaultRotation).Y = fVar3;
  (this->DefaultRotation).Z = fVar4;
  (this->DefaultRotation).W = fVar5;
  *(undefined8 *)&(this->DefaultScale).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultScale).field0_0x0;
  (this->DefaultScale).field0_0x0._s_0.Z = (param_1->DefaultScale).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->DefaultPreviousPosition).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultPreviousPosition).field0_0x0;
  (this->DefaultPreviousPosition).field0_0x0._s_0.Z =
       (param_1->DefaultPreviousPosition).field0_0x0._s_0.Z;
  fVar3 = (param_1->DefaultPreviousRotation).Y;
  fVar4 = (param_1->DefaultPreviousRotation).Z;
  fVar5 = (param_1->DefaultPreviousRotation).W;
  (this->DefaultPreviousRotation).X = (param_1->DefaultPreviousRotation).X;
  (this->DefaultPreviousRotation).Y = fVar3;
  (this->DefaultPreviousRotation).Z = fVar4;
  (this->DefaultPreviousRotation).W = fVar5;
  *(undefined8 *)&(this->DefaultPreviousScale).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultPreviousScale).field0_0x0;
  (this->DefaultPreviousScale).field0_0x0._s_0.Z = (param_1->DefaultPreviousScale).field0_0x0._s_0.Z
  ;
  this->DefaultMeshIndex = param_1->DefaultMeshIndex;
  this->DefaultRendererVis = param_1->DefaultRendererVis;
  this->MeshIndexComponentOffset = param_1->MeshIndexComponentOffset;
  this->RendererVisComponentOffset = param_1->RendererVisComponentOffset;
  uVar2 = (param_1->SimulationToComponent).Rotation.m128_u64[1];
  (this->SimulationToComponent).Rotation.m128_u64[0] =
       (param_1->SimulationToComponent).Rotation.m128_u64[0];
  (this->SimulationToComponent).Rotation.m128_u64[1] = uVar2;
  uVar2 = (param_1->SimulationToComponent).Translation.m128_u64[1];
  (this->SimulationToComponent).Translation.m128_u64[0] =
       (param_1->SimulationToComponent).Translation.m128_u64[0];
  (this->SimulationToComponent).Translation.m128_u64[1] = uVar2;
  uVar2 = (param_1->SimulationToComponent).Scale3D.m128_u64[1];
  (this->SimulationToComponent).Scale3D.m128_u64[0] =
       (param_1->SimulationToComponent).Scale3D.m128_u64[0];
  (this->SimulationToComponent).Scale3D.m128_u64[1] = uVar2;
  uVar2 = (param_1->PreviousSimulationToComponent).Rotation.m128_u64[1];
  (this->PreviousSimulationToComponent).Rotation.m128_u64[0] =
       (param_1->PreviousSimulationToComponent).Rotation.m128_u64[0];
  (this->PreviousSimulationToComponent).Rotation.m128_u64[1] = uVar2;
  uVar2 = (param_1->PreviousSimulationToComponent).Translation.m128_u64[1];
  (this->PreviousSimulationToComponent).Translation.m128_u64[0] =
       (param_1->PreviousSimulationToComponent).Translation.m128_u64[0];
  (this->PreviousSimulationToComponent).Translation.m128_u64[1] = uVar2;
  uVar2 = (param_1->PreviousSimulationToComponent).Scale3D.m128_u64[1];
  (this->PreviousSimulationToComponent).Scale3D.m128_u64[0] =
       (param_1->PreviousSimulationToComponent).Scale3D.m128_u64[0];
  (this->PreviousSimulationToComponent).Scale3D.m128_u64[1] = uVar2;
  *(undefined8 *)&(this->SimulationLWCTile).field0_0x0 =
       *(undefined8 *)&(param_1->SimulationLWCTile).field0_0x0;
  (this->SimulationLWCTile).field0_0x0._s_0.Z = (param_1->SimulationLWCTile).field0_0x0._s_0.Z;
  return this;
}

// FUpdateInstancesContext @ 14da3ff40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FUpdateInstancesContext * __thiscall
NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
          (FUpdateInstancesContext *this,FUpdateInstancesContext *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FUpdateInstancesContext *pFVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  
  this->RendererProperties = param_1->RendererProperties;
  this->ComputeInterface = param_1->ComputeInterface;
  this->NumInstancesEstimate = param_1->NumInstancesEstimate;
  (this->DataToRender).Reference = (FNiagaraDataBuffer *)0x0;
  pFVar1 = (param_1->DataToRender).Reference;
  (this->DataToRender).Reference = pFVar1;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ == -1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsBeingWritten()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x26,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FUpdateInstancesContext *)(*pcVar2)();
        return pFVar9;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  lVar12 = 2;
  pfVar10 = param_1->DefaultCustomFloats;
  pfVar11 = this->DefaultCustomFloats;
  do {
    uVar3 = *(undefined8 *)(pfVar10 + 2);
    *(undefined8 *)pfVar11 = *(undefined8 *)pfVar10;
    *(undefined8 *)(pfVar11 + 2) = uVar3;
    uVar3 = *(undefined8 *)(pfVar10 + 6);
    *(undefined8 *)(pfVar11 + 4) = *(undefined8 *)(pfVar10 + 4);
    *(undefined8 *)(pfVar11 + 6) = uVar3;
    uVar3 = *(undefined8 *)(pfVar10 + 10);
    *(undefined8 *)(pfVar11 + 8) = *(undefined8 *)(pfVar10 + 8);
    *(undefined8 *)(pfVar11 + 10) = uVar3;
    uVar3 = *(undefined8 *)(pfVar10 + 0xe);
    *(undefined8 *)(pfVar11 + 0xc) = *(undefined8 *)(pfVar10 + 0xc);
    *(undefined8 *)(pfVar11 + 0xe) = uVar3;
    uVar3 = *(undefined8 *)(pfVar10 + 0x12);
    *(undefined8 *)(pfVar11 + 0x10) = *(undefined8 *)(pfVar10 + 0x10);
    *(undefined8 *)(pfVar11 + 0x12) = uVar3;
    uVar3 = *(undefined8 *)(pfVar10 + 0x16);
    *(undefined8 *)(pfVar11 + 0x14) = *(undefined8 *)(pfVar10 + 0x14);
    *(undefined8 *)(pfVar11 + 0x16) = uVar3;
    uVar3 = *(undefined8 *)(pfVar10 + 0x1a);
    *(undefined8 *)(pfVar11 + 0x18) = *(undefined8 *)(pfVar10 + 0x18);
    *(undefined8 *)(pfVar11 + 0x1a) = uVar3;
    uVar3 = *(undefined8 *)(pfVar10 + 0x1e);
    *(undefined8 *)(pfVar11 + 0x1c) = *(undefined8 *)(pfVar10 + 0x1c);
    *(undefined8 *)(pfVar11 + 0x1e) = uVar3;
    lVar12 = lVar12 + -1;
    pfVar10 = pfVar10 + 0x20;
    pfVar11 = pfVar11 + 0x20;
  } while (lVar12 != 0);
  *(undefined8 *)&(this->MeshScale).field0_0x0 = *(undefined8 *)&(param_1->MeshScale).field0_0x0;
  (this->MeshScale).field0_0x0._s_0.Z = (param_1->MeshScale).field0_0x0._s_0.Z;
  fVar5 = (param_1->MeshRotation).Y;
  fVar6 = (param_1->MeshRotation).Z;
  fVar7 = (param_1->MeshRotation).W;
  (this->MeshRotation).X = (param_1->MeshRotation).X;
  (this->MeshRotation).Y = fVar5;
  (this->MeshRotation).Z = fVar6;
  (this->MeshRotation).W = fVar7;
  *(undefined8 *)&(this->DefaultPosition).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultPosition).field0_0x0;
  (this->DefaultPosition).field0_0x0._s_0.Z = (param_1->DefaultPosition).field0_0x0._s_0.Z;
  fVar5 = (param_1->DefaultRotation).Y;
  fVar6 = (param_1->DefaultRotation).Z;
  fVar7 = (param_1->DefaultRotation).W;
  (this->DefaultRotation).X = (param_1->DefaultRotation).X;
  (this->DefaultRotation).Y = fVar5;
  (this->DefaultRotation).Z = fVar6;
  (this->DefaultRotation).W = fVar7;
  *(undefined8 *)&(this->DefaultScale).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultScale).field0_0x0;
  (this->DefaultScale).field0_0x0._s_0.Z = (param_1->DefaultScale).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->DefaultPreviousPosition).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultPreviousPosition).field0_0x0;
  (this->DefaultPreviousPosition).field0_0x0._s_0.Z =
       (param_1->DefaultPreviousPosition).field0_0x0._s_0.Z;
  fVar5 = (param_1->DefaultPreviousRotation).Y;
  fVar6 = (param_1->DefaultPreviousRotation).Z;
  fVar7 = (param_1->DefaultPreviousRotation).W;
  (this->DefaultPreviousRotation).X = (param_1->DefaultPreviousRotation).X;
  (this->DefaultPreviousRotation).Y = fVar5;
  (this->DefaultPreviousRotation).Z = fVar6;
  (this->DefaultPreviousRotation).W = fVar7;
  *(undefined8 *)&(this->DefaultPreviousScale).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultPreviousScale).field0_0x0;
  (this->DefaultPreviousScale).field0_0x0._s_0.Z = (param_1->DefaultPreviousScale).field0_0x0._s_0.Z
  ;
  this->DefaultMeshIndex = param_1->DefaultMeshIndex;
  this->DefaultRendererVis = param_1->DefaultRendererVis;
  this->MeshIndexComponentOffset = param_1->MeshIndexComponentOffset;
  this->RendererVisComponentOffset = param_1->RendererVisComponentOffset;
  uVar4 = (param_1->SimulationToComponent).Rotation.m128_u64[1];
  (this->SimulationToComponent).Rotation.m128_u64[0] =
       (param_1->SimulationToComponent).Rotation.m128_u64[0];
  (this->SimulationToComponent).Rotation.m128_u64[1] = uVar4;
  uVar4 = (param_1->SimulationToComponent).Translation.m128_u64[1];
  (this->SimulationToComponent).Translation.m128_u64[0] =
       (param_1->SimulationToComponent).Translation.m128_u64[0];
  (this->SimulationToComponent).Translation.m128_u64[1] = uVar4;
  uVar4 = (param_1->SimulationToComponent).Scale3D.m128_u64[1];
  (this->SimulationToComponent).Scale3D.m128_u64[0] =
       (param_1->SimulationToComponent).Scale3D.m128_u64[0];
  (this->SimulationToComponent).Scale3D.m128_u64[1] = uVar4;
  uVar4 = (param_1->PreviousSimulationToComponent).Rotation.m128_u64[1];
  (this->PreviousSimulationToComponent).Rotation.m128_u64[0] =
       (param_1->PreviousSimulationToComponent).Rotation.m128_u64[0];
  (this->PreviousSimulationToComponent).Rotation.m128_u64[1] = uVar4;
  uVar4 = (param_1->PreviousSimulationToComponent).Translation.m128_u64[1];
  (this->PreviousSimulationToComponent).Translation.m128_u64[0] =
       (param_1->PreviousSimulationToComponent).Translation.m128_u64[0];
  (this->PreviousSimulationToComponent).Translation.m128_u64[1] = uVar4;
  uVar4 = (param_1->PreviousSimulationToComponent).Scale3D.m128_u64[1];
  (this->PreviousSimulationToComponent).Scale3D.m128_u64[0] =
       (param_1->PreviousSimulationToComponent).Scale3D.m128_u64[0];
  (this->PreviousSimulationToComponent).Scale3D.m128_u64[1] = uVar4;
  *(undefined8 *)&(this->SimulationLWCTile).field0_0x0 =
       *(undefined8 *)&(param_1->SimulationLWCTile).field0_0x0;
  (this->SimulationLWCTile).field0_0x0._s_0.Z = (param_1->SimulationLWCTile).field0_0x0._s_0.Z;
  return this;
}

// CopyInstancePerInstanceData @ 14da41fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
NiagaraRendererNaniteLocal::FUpdateInstancesContext::CopyInstancePerInstanceData
          (FUpdateInstancesContext *this,FWriteView *param_1,uint param_2)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  UNiagaraNaniteRendererProperties *pUVar10;
  longlong lVar11;
  float fVar12;
  
  pUVar10 = this->RendererProperties;
  uVar8 = 0;
  iVar1 = (pUVar10->PerInstanceDataFloatComponents).ArrayNum;
  uVar7 = iVar1 * param_2;
  if (0 < iVar1) {
    lVar11 = 0;
    lVar9 = (longlong)(int)uVar7 * 4;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (pUVar10->PerInstanceDataFloatComponents).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)((pUVar10->PerInstanceDataFloatComponents).AllocatorInstance.Data + lVar11);
      if (uVar6 == 0xffffffff) {
        fVar12 = *(float *)((longlong)this->DefaultCustomFloats + lVar11);
      }
      else {
        pFVar2 = (this->DataToRender).Reference;
        if ((int)uVar6 < 0) {
          fVar12 = FGenericPlatformMath::LoadHalf
                             ((ushort *)
                              ((pFVar2->HalfData).AllocatorInstance.Data +
                              (ulonglong)((uVar6 & 0x7fffffff) * pFVar2->HalfStride) +
                              (ulonglong)param_2 * 2));
        }
        else {
          fVar12 = *(float *)((pFVar2->FloatData).AllocatorInstance.Data +
                             (ulonglong)(uVar6 * pFVar2->FloatStride) + (ulonglong)param_2 * 4);
        }
      }
      pTVar3 = param_1->InstanceCustomData;
      uVar6 = 0;
      if ((int)uVar7 < pTVar3->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 4;
      uVar7 = uVar7 + 1;
      *(float *)((pTVar3->AllocatorInstance).Data + lVar9) = fVar12;
      lVar9 = lVar9 + 4;
      pUVar10 = this->RendererProperties;
    } while ((int)uVar8 < (pUVar10->PerInstanceDataFloatComponents).ArrayNum);
  }
  return;
}

// MakeTransform @ 14da44a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRenderTransform * __thiscall
NiagaraRendererNaniteLocal::FUpdateInstancesContext::MakeTransform
          (FUpdateInstancesContext *this,FRenderTransform *__return_storage_ptr__,
          TVector<float> *param_1,TQuat<float> *param_2,TVector<float> *param_3)

{
  TVector<float>_u_0_s_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  __m128 _Var6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  
  _Var6 = GlobalVectorConstants::FloatOne;
  fVar2 = (this->SimulationToComponent).Rotation.m128_f32[0];
  fVar3 = (this->SimulationToComponent).Rotation.m128_f32[1];
  fVar15 = (this->SimulationToComponent).Rotation.m128_f32[2];
  fVar4 = (this->SimulationToComponent).Rotation.m128_f32[3];
  TVar1 = (param_1->field0_0x0)._s_0;
  fVar19 = TVar1.X * (this->SimulationToComponent).Scale3D.m128_f32[0];
  fVar21 = TVar1.Y * (this->SimulationToComponent).Scale3D.m128_f32[1];
  fVar22 = TVar1.Z * (this->SimulationToComponent).Scale3D.m128_f32[2];
  fVar13 = fVar21 * fVar2 - fVar3 * fVar19;
  fVar14 = fVar22 * fVar3 - fVar15 * fVar21;
  fVar17 = fVar19 * fVar15 - fVar2 * fVar22;
  fVar14 = fVar14 + fVar14;
  fVar17 = fVar17 + fVar17;
  fVar13 = fVar13 + fVar13;
  fVar16 = param_2->X;
  fVar18 = param_2->Y;
  fVar20 = param_2->Z;
  fVar24 = param_2->W;
  fVar5 = (this->SimulationToComponent).Translation.m128_f32[2];
  fVar8 = fVar18 * fVar18 + fVar16 * fVar16;
  fVar10 = fVar16 * fVar16 + fVar18 * fVar18;
  fVar11 = fVar24 * fVar24 + fVar20 * fVar20;
  fVar12 = fVar20 * fVar20 + fVar24 * fVar24;
  auVar23._4_4_ =
       fVar4 * fVar17 + fVar21 + (fVar14 * fVar15 - fVar2 * fVar13) +
       (this->SimulationToComponent).Translation.m128_f32[1];
  auVar23._0_4_ =
       fVar4 * fVar14 + fVar19 + (fVar13 * fVar3 - fVar15 * fVar17) +
       (this->SimulationToComponent).Translation.m128_f32[0];
  auVar9._0_4_ = fVar11 + fVar8;
  auVar9._4_4_ = fVar12 + fVar10;
  auVar9._8_4_ = fVar8 + fVar11;
  auVar9._12_4_ = fVar10 + fVar12;
  auVar7 = sqrtps(auVar9,auVar9);
  auVar7 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar7);
  fVar8 = (param_3->field0_0x0)._s_0.Z;
  fVar16 = (float)((uint)(auVar7._0_4_ * fVar16) &
                   -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar9._0_4_) |
                  ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar9._0_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[0]);
  fVar18 = (float)((uint)(auVar7._4_4_ * fVar18) & -(uint)(_UNK_1506895d4 <= auVar9._4_4_) |
                  ~-(uint)(_UNK_1506895d4 <= auVar9._4_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[1]);
  fVar20 = (float)((uint)(auVar7._8_4_ * fVar20) & -(uint)(_UNK_1506895d8 <= auVar9._8_4_) |
                  ~-(uint)(_UNK_1506895d8 <= auVar9._8_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[2]);
  fVar24 = (float)((uint)(auVar7._12_4_ * fVar24) & -(uint)(_UNK_1506895dc <= auVar9._12_4_) |
                  ~-(uint)(_UNK_1506895dc <= auVar9._12_4_) &
                  GlobalVectorConstants::Float0001.m128_u32[3]);
  fVar11 = fVar24 * fVar2 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar16 * fVar4 +
           fVar20 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fVar18 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  fVar12 = fVar20 * fVar2 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar18 * fVar4 +
           fVar24 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
           fVar16 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar19 = fVar18 * fVar2 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar20 * fVar4 +
           fVar16 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
           fVar24 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar21 = fVar16 * fVar2 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar24 * fVar4 +
           fVar18 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
           fVar20 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  fVar15 = fVar12 + fVar12;
  fVar18 = fVar19 + fVar19;
  fVar20 = (fVar11 + fVar11) * fVar11;
  fVar24 = (float)*(undefined8 *)&param_3->field0_0x0;
  fVar10 = (float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  fVar16 = (fVar11 + fVar11) * fVar21;
  auVar7._0_4_ = (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar18 * fVar19 + fVar15 * fVar12))
                 * fVar24;
  auVar7._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar18 * fVar19 + fVar20)) * fVar10
  ;
  auVar7._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar15 * fVar12 + fVar20)) * fVar8;
  auVar7._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar20 + fVar20)) * 0.0;
  auVar9 = insertps(auVar7,auVar7,8);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.X = auVar9._0_4_;
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Y =
       (fVar18 * fVar21 + fVar15 * fVar11) * fVar24;
  auVar23._8_4_ = fVar4 * fVar13 + fVar22 + (fVar17 * fVar2 - fVar3 * fVar14) + fVar5;
  auVar23._12_4_ = 0;
  auVar7 = blendps(auVar23,(undefined1  [16])_Var6,8);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z =
       fVar24 * (fVar18 * fVar11 - fVar15 * fVar21);
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X =
       fVar10 * (fVar15 * fVar11 - fVar18 * fVar21);
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = auVar9._4_4_;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = (fVar16 + fVar18 * fVar12) * fVar10;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X =
       (fVar15 * fVar21 + fVar18 * fVar11) * fVar8;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = fVar8 * (fVar18 * fVar12 - fVar16);
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = auVar9._8_4_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = auVar7._0_4_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = auVar7._4_4_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = auVar7._8_4_;
  return __return_storage_ptr__;
}

// UpdateInstancesCPU @ 14da46f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
NiagaraRendererNaniteLocal::FUpdateInstancesContext::UpdateInstancesCPU
          (FUpdateInstancesContext *this,FWriteView *param_1)

{
  UNiagaraNaniteRendererProperties *pUVar1;
  FNiagaraDataBuffer *pFVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  FRenderTransform *pFVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  float fVar31;
  undefined1 auVar27 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar54;
  float fVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  uint local_294;
  FScriptContainerElement *local_290;
  uint local_284;
  FScriptContainerElement *local_280;
  TVector<float>_u_0 local_278;
  undefined1 local_26c [12];
  TVector<float>_u_0 local_260;
  undefined1 local_254 [12];
  undefined8 local_248;
  float local_240;
  undefined8 local_23c;
  float local_234;
  TQuat<float> local_228;
  TQuat<float> local_218;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_208;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_1e8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_1c8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_1a8;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_188;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_160;
  FRenderTransform local_138;
  FRenderTransform local_108 [4];
  
  pUVar1 = this->RendererProperties;
  if (pUVar1->SourceMode == Particles) {
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::FNiagaraDataSetReaderFloat<FNiagaraPosition>
              (&local_1e8,(this->DataToRender).Reference,*(bool *)&pUVar1->PositionDataSetAccessor,
               *(int *)&(pUVar1->PositionDataSetAccessor).field_0x4);
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>
              (&local_188,(this->DataToRender).Reference,
               *(bool *)&this->RendererProperties->RotationDataSetAccessor,
               *(int *)&(this->RendererProperties->RotationDataSetAccessor).field_0x4);
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>
              (&local_208,(this->DataToRender).Reference,
               *(bool *)&this->RendererProperties->ScaleDataSetAccessor,
               *(int *)&(this->RendererProperties->ScaleDataSetAccessor).field_0x4);
    pUVar1 = this->RendererProperties;
    pFVar2 = (this->DataToRender).Reference;
    bVar16 = false;
    local_294 = 0;
    local_290 = (FScriptContainerElement *)0x0;
    if ((pFVar2 != (FNiagaraDataBuffer *)0x0) &&
       (pUVar1->RendererVisTagDataSetAccessor != (FNiagaraDataSetAccessor<int>)0xffffffff)) {
      bVar16 = true;
      local_290 = (pFVar2->Int32Data).AllocatorInstance.Data +
                  (int)pUVar1->RendererVisTagDataSetAccessor * pFVar2->Int32Stride;
      local_294 = pFVar2->NumInstances;
    }
    bVar14 = false;
    local_284 = 0;
    local_280 = (FScriptContainerElement *)0x0;
    if ((pFVar2 != (FNiagaraDataBuffer *)0x0) &&
       (pUVar1->MeshIndexDataSetAccessor != (FNiagaraDataSetAccessor<int>)0xffffffff)) {
      local_284 = pFVar2->NumInstances;
      bVar14 = true;
      local_280 = (pFVar2->Int32Data).AllocatorInstance.Data +
                  (int)pUVar1->MeshIndexDataSetAccessor * pFVar2->Int32Stride;
    }
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::FNiagaraDataSetReaderFloat<FNiagaraPosition>
              (&local_1a8,pFVar2,*(bool *)&pUVar1->PreviousPositionDataSetAccessor,
               *(int *)&(pUVar1->PreviousPositionDataSetAccessor).field_0x4);
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>
              (&local_160,(this->DataToRender).Reference,
               *(bool *)&this->RendererProperties->PreviousRotationDataSetAccessor,
               *(int *)&(this->RendererProperties->PreviousRotationDataSetAccessor).field_0x4);
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::
    FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>
              (&local_1c8,(this->DataToRender).Reference,
               *(bool *)&this->RendererProperties->PreviousScaleDataSetAccessor,
               *(int *)&(this->RendererProperties->PreviousScaleDataSetAccessor).field_0x4);
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1->InstanceToPrimitiveRelative,((this->DataToRender).Reference)->NumInstances,
               Default);
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1->PrevInstanceToPrimitiveRelative,
               ((this->DataToRender).Reference)->NumInstances,Default);
    pTVar3 = param_1->InstanceCustomData;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(this->RendererProperties->PerInstanceDataFloatComponents).ArrayNum *
                   ((this->DataToRender).Reference)->NumInstances,&pTVar3->AllocatorInstance,
               &pTVar3->ArrayNum,&pTVar3->ArrayMax);
    uVar22 = 0;
    uVar23 = 0;
    fVar32 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
    fVar33 = _UNK_1506895d4;
    fVar34 = _UNK_1506895d8;
    fVar36 = _UNK_1506895dc;
    if (((this->DataToRender).Reference)->NumInstances != 0) {
      do {
        if ((bVar16) && ((int)uVar23 < (int)local_294)) {
          iVar18 = *(int *)(local_290 + (longlong)(int)uVar23 * 4);
        }
        else {
          iVar18 = this->DefaultRendererVis;
        }
        if ((bVar14) && ((int)uVar23 < (int)local_284)) {
          iVar19 = *(int *)(local_280 + (longlong)(int)uVar23 * 4);
        }
        else {
          iVar19 = this->DefaultMeshIndex;
        }
        if ((iVar18 == this->DefaultRendererVis) && (iVar19 == this->DefaultMeshIndex)) {
          if ((local_208.bIsValid == false) || (local_208.NumInstances <= (int)uVar23)) {
            local_278._0_8_ = *(undefined8 *)&(this->DefaultScale).field0_0x0;
            local_278._s_0.Z = (this->DefaultScale).field0_0x0._s_0.Z;
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                      (&local_208,(TVector<float> *)&local_278._s_0,uVar23);
          }
          fVar56 = local_278._s_0.X * (this->MeshScale).field0_0x0._s_0.X;
          fVar57 = local_278._s_0.Y * (this->MeshScale).field0_0x0._s_0.Y;
          fVar58 = local_278._s_0.Z * (this->MeshScale).field0_0x0._s_0.Z;
          if ((local_188.bIsValid == false) || (local_188.NumInstances <= (int)uVar23)) {
            local_228.X = (this->DefaultRotation).X;
            local_228.Y = (this->DefaultRotation).Y;
            local_228.Z = (this->DefaultRotation).Z;
            local_228.W = (this->DefaultRotation).W;
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(&local_188,&local_228,uVar23);
          }
          fVar47 = (this->MeshRotation).X;
          fVar43 = (this->MeshRotation).Y;
          fVar46 = (this->MeshRotation).Z;
          fVar7 = (this->MeshRotation).W;
          fVar40 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
          fVar48 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
          fVar59 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
          fVar60 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
          fVar42 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
          fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
          fVar63 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
          fVar64 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
          fVar45 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
          fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
          fVar49 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
          fVar65 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          fVar39 = fVar7 * local_228.X * fVar40 + local_228.W * fVar47 +
                   fVar46 * local_228.Y * fVar42 + fVar43 * local_228.Z * fVar45;
          fVar41 = fVar46 * local_228.X * fVar48 + local_228.W * fVar43 +
                   fVar7 * local_228.Y * fVar62 + fVar47 * local_228.Z * fVar61;
          fVar44 = fVar43 * local_228.X * fVar59 + local_228.W * fVar46 +
                   fVar47 * local_228.Y * fVar63 + fVar7 * local_228.Z * fVar49;
          fVar47 = fVar47 * local_228.X * fVar60 + local_228.W * fVar7 +
                   fVar43 * local_228.Y * fVar64 + fVar46 * local_228.Z * fVar65;
          if ((local_1e8.bIsValid == false) || (local_1e8.NumInstances <= (int)uVar23)) {
            local_26c._0_8_ = *(undefined8 *)&(this->DefaultPosition).field0_0x0;
            local_26c._8_4_ = (this->DefaultPosition).field0_0x0._s_0.Z;
          }
          else {
            FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                      (&local_1e8,(FNiagaraPosition *)local_26c,uVar23);
            fVar40 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
            fVar48 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
            fVar59 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
            fVar60 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
            fVar42 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
            fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
            fVar63 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
            fVar64 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
            fVar45 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
            fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
            fVar49 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
            fVar65 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          }
          fVar43 = (this->SimulationToComponent).Rotation.m128_f32[0];
          fVar46 = (this->SimulationToComponent).Rotation.m128_f32[1];
          fVar7 = (this->SimulationToComponent).Rotation.m128_f32[2];
          fVar31 = (this->SimulationToComponent).Rotation.m128_f32[3];
          fVar35 = (float)local_26c._0_8_ * (this->SimulationToComponent).Scale3D.m128_f32[0];
          fVar37 = SUB84(local_26c._0_8_,4) * (this->SimulationToComponent).Scale3D.m128_f32[1];
          fVar38 = (float)local_26c._8_4_ * (this->SimulationToComponent).Scale3D.m128_f32[2];
          fVar50 = fVar37 * fVar43 - fVar46 * fVar35;
          fVar54 = fVar38 * fVar46 - fVar7 * fVar37;
          fVar55 = fVar35 * fVar7 - fVar43 * fVar38;
          fVar54 = fVar54 + fVar54;
          fVar55 = fVar55 + fVar55;
          fVar50 = fVar50 + fVar50;
          fVar25 = fVar41 * fVar41 + fVar39 * fVar39;
          fVar28 = fVar39 * fVar39 + fVar41 * fVar41;
          fVar29 = fVar47 * fVar47 + fVar44 * fVar44;
          fVar30 = fVar44 * fVar44 + fVar47 * fVar47;
          auVar51._0_8_ =
               CONCAT44(fVar55 * fVar31 + fVar37 + (fVar54 * fVar7 - fVar50 * fVar43) +
                        (this->SimulationToComponent).Translation.m128_f32[1],
                        fVar54 * fVar31 + fVar35 + (fVar50 * fVar46 - fVar55 * fVar7) +
                        (this->SimulationToComponent).Translation.m128_f32[0]);
          auVar51._8_4_ =
               fVar50 * fVar31 + fVar38 + (fVar55 * fVar43 - fVar54 * fVar46) +
               (this->SimulationToComponent).Translation.m128_f32[2];
          auVar26._0_4_ = fVar29 + fVar25;
          auVar26._4_4_ = fVar30 + fVar28;
          auVar26._8_4_ = fVar25 + fVar29;
          auVar26._12_4_ = fVar28 + fVar30;
          auVar24 = sqrtps(auVar26,auVar26);
          auVar24 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar24);
          fVar32 = (float)((uint)(auVar24._0_4_ * fVar39) & -(uint)(fVar32 <= auVar26._0_4_) |
                          ~-(uint)(fVar32 <= auVar26._0_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[0]);
          fVar33 = (float)((uint)(auVar24._4_4_ * fVar41) & -(uint)(fVar33 <= auVar26._4_4_) |
                          ~-(uint)(fVar33 <= auVar26._4_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[1]);
          fVar34 = (float)((uint)(auVar24._8_4_ * fVar44) & -(uint)(fVar34 <= auVar26._8_4_) |
                          ~-(uint)(fVar34 <= auVar26._8_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[2]);
          fVar36 = (float)((uint)(auVar24._12_4_ * fVar47) & -(uint)(fVar36 <= auVar26._12_4_) |
                          ~-(uint)(fVar36 <= auVar26._12_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[3]);
          fVar40 = fVar43 * fVar36 * fVar40 + fVar32 * fVar31 + fVar46 * fVar34 * fVar42 +
                   fVar7 * fVar33 * fVar45;
          fVar42 = fVar43 * fVar34 * fVar48 + fVar33 * fVar31 + fVar46 * fVar36 * fVar62 +
                   fVar7 * fVar32 * fVar61;
          fVar45 = fVar43 * fVar33 * fVar59 + fVar34 * fVar31 + fVar46 * fVar32 * fVar63 +
                   fVar7 * fVar36 * fVar49;
          fVar48 = fVar43 * fVar32 * fVar60 + fVar36 * fVar31 + fVar46 * fVar33 * fVar64 +
                   fVar7 * fVar34 * fVar65;
          fVar32 = fVar42 + fVar42;
          fVar34 = fVar45 + fVar45;
          fVar36 = (fVar40 + fVar40) * fVar40;
          pTVar4 = param_1->InstanceToPrimitiveRelative;
          fVar33 = (fVar40 + fVar40) * fVar48;
          uVar17 = 0;
          if ((int)uVar22 < pTVar4->ArrayNum) {
            uVar17 = ~uVar22 >> 0x1f;
          }
          auVar51._12_4_ = 0;
          auVar52 = blendps(auVar51,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
          auVar24._0_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar34 * fVar45 + fVar32 * fVar42)) *
               fVar56;
          auVar24._4_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar34 * fVar45 + fVar36)) * fVar57;
          auVar24._8_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar32 * fVar42 + fVar36)) * fVar58;
          auVar24._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar36 + fVar36)) * 0.0;
          auVar26 = insertps(auVar24,auVar24,8);
          local_248 = auVar51._0_8_;
          local_240 = auVar51._8_4_;
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar20 = (longlong)(int)uVar22;
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          *(int *)(pFVar5 + lVar20 * 0x30) = auVar26._0_4_;
          *(float *)(pFVar5 + lVar20 * 0x30 + 4) = (fVar34 * fVar48 + fVar32 * fVar40) * fVar56;
          *(float *)(pFVar5 + lVar20 * 0x30 + 8) = fVar56 * (fVar34 * fVar40 - fVar32 * fVar48);
          *(float *)(pFVar5 + lVar20 * 0x30 + 0xc) = fVar57 * (fVar32 * fVar40 - fVar34 * fVar48);
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x10) = auVar26._4_4_;
          *(float *)(pFVar5 + lVar20 * 0x30 + 0x14) = (fVar33 + fVar34 * fVar42) * fVar57;
          *(float *)(pFVar5 + lVar20 * 0x30 + 0x18) = (fVar32 * fVar48 + fVar34 * fVar40) * fVar58;
          *(float *)(pFVar5 + lVar20 * 0x30 + 0x1c) = fVar58 * (fVar34 * fVar42 - fVar33);
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x20) = auVar26._8_4_;
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x24) = auVar52._0_4_;
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x28) = auVar52._4_4_;
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x2c) = auVar52._8_4_;
          if ((local_1c8.bIsValid == false) || (local_1c8.NumInstances <= (int)uVar23)) {
            local_260._0_8_ = *(undefined8 *)&(this->DefaultPreviousScale).field0_0x0;
            local_260._s_0.Z = (this->DefaultPreviousScale).field0_0x0._s_0.Z;
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                      (&local_1c8,(TVector<float> *)&local_260._s_0,uVar23);
          }
          fVar32 = local_260._s_0.X * (this->MeshScale).field0_0x0._s_0.X;
          fVar33 = local_260._s_0.Y * (this->MeshScale).field0_0x0._s_0.Y;
          fVar34 = local_260._s_0.Z * (this->MeshScale).field0_0x0._s_0.Z;
          if ((local_160.bIsValid == false) || (local_160.NumInstances <= (int)uVar23)) {
            local_218.X = (this->DefaultPreviousRotation).X;
            local_218.Y = (this->DefaultPreviousRotation).Y;
            local_218.Z = (this->DefaultPreviousRotation).Z;
            local_218.W = (this->DefaultPreviousRotation).W;
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(&local_160,&local_218,uVar23);
          }
          fVar49 = (this->MeshRotation).X;
          fVar60 = (this->MeshRotation).Y;
          fVar64 = (this->MeshRotation).Z;
          fVar65 = (this->MeshRotation).W;
          fVar36 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
          fVar58 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
          fVar45 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
          fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
          fVar56 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
          fVar40 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
          fVar48 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
          fVar59 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
          fVar57 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
          fVar42 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
          fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
          fVar63 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          fVar47 = fVar65 * local_218.X * fVar36 + local_218.W * fVar49 +
                   fVar64 * local_218.Y * fVar56 + fVar60 * local_218.Z * fVar57;
          fVar43 = fVar64 * local_218.X * fVar58 + local_218.W * fVar60 +
                   fVar65 * local_218.Y * fVar40 + fVar49 * local_218.Z * fVar42;
          fVar46 = fVar60 * local_218.X * fVar45 + local_218.W * fVar64 +
                   fVar49 * local_218.Y * fVar48 + fVar65 * local_218.Z * fVar62;
          fVar49 = fVar49 * local_218.X * fVar61 + local_218.W * fVar65 +
                   fVar60 * local_218.Y * fVar59 + fVar64 * local_218.Z * fVar63;
          if ((local_1a8.bIsValid == false) || (local_1a8.NumInstances <= (int)uVar23)) {
            local_254._0_8_ = *(undefined8 *)&(this->DefaultPreviousPosition).field0_0x0;
            local_254._8_4_ = (this->DefaultPreviousPosition).field0_0x0._s_0.Z;
          }
          else {
            FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                      (&local_1a8,(FNiagaraPosition *)local_254,uVar23);
            fVar36 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
            fVar58 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
            fVar45 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
            fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
            fVar56 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
            fVar40 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
            fVar48 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
            fVar59 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
            fVar57 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
            fVar42 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
            fVar62 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
            fVar63 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          }
          fVar60 = (this->PreviousSimulationToComponent).Rotation.m128_f32[0];
          fVar64 = (this->PreviousSimulationToComponent).Rotation.m128_f32[1];
          fVar65 = (this->PreviousSimulationToComponent).Rotation.m128_f32[2];
          fVar7 = (this->PreviousSimulationToComponent).Rotation.m128_f32[3];
          fVar25 = (float)local_254._0_8_ *
                   (this->PreviousSimulationToComponent).Scale3D.m128_f32[0];
          fVar28 = SUB84(local_254._0_8_,4) *
                   (this->PreviousSimulationToComponent).Scale3D.m128_f32[1];
          fVar29 = (float)local_254._8_4_ *
                   (this->PreviousSimulationToComponent).Scale3D.m128_f32[2];
          fVar30 = fVar28 * fVar60 - fVar64 * fVar25;
          fVar35 = fVar29 * fVar64 - fVar65 * fVar28;
          fVar37 = fVar25 * fVar65 - fVar60 * fVar29;
          fVar35 = fVar35 + fVar35;
          fVar37 = fVar37 + fVar37;
          fVar30 = fVar30 + fVar30;
          fVar39 = fVar43 * fVar43 + fVar47 * fVar47;
          fVar41 = fVar47 * fVar47 + fVar43 * fVar43;
          fVar44 = fVar49 * fVar49 + fVar46 * fVar46;
          fVar31 = fVar46 * fVar46 + fVar49 * fVar49;
          auVar53._0_8_ =
               CONCAT44(fVar37 * fVar7 + fVar28 + (fVar35 * fVar65 - fVar30 * fVar60) +
                        (this->PreviousSimulationToComponent).Translation.m128_f32[1],
                        fVar35 * fVar7 + fVar25 + (fVar30 * fVar64 - fVar37 * fVar65) +
                        (this->PreviousSimulationToComponent).Translation.m128_f32[0]);
          auVar53._8_4_ =
               fVar30 * fVar7 + fVar29 + (fVar37 * fVar60 - fVar35 * fVar64) +
               (this->PreviousSimulationToComponent).Translation.m128_f32[2];
          auVar52._0_4_ = fVar44 + fVar39;
          auVar52._4_4_ = fVar31 + fVar41;
          auVar52._8_4_ = fVar39 + fVar44;
          auVar52._12_4_ = fVar41 + fVar31;
          auVar26 = sqrtps(auVar52,auVar52);
          auVar26 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar26);
          fVar47 = (float)((uint)(auVar26._0_4_ * fVar47) &
                           -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar52._0_4_) |
                          ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar52._0_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[0]);
          fVar43 = (float)((uint)(auVar26._4_4_ * fVar43) & -(uint)(_UNK_1506895d4 <= auVar52._4_4_)
                          | ~-(uint)(_UNK_1506895d4 <= auVar52._4_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[1]);
          fVar46 = (float)((uint)(auVar26._8_4_ * fVar46) & -(uint)(_UNK_1506895d8 <= auVar52._8_4_)
                          | ~-(uint)(_UNK_1506895d8 <= auVar52._8_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[2]);
          fVar49 = (float)((uint)(auVar26._12_4_ * fVar49) &
                           -(uint)(_UNK_1506895dc <= auVar52._12_4_) |
                          ~-(uint)(_UNK_1506895dc <= auVar52._12_4_) &
                          GlobalVectorConstants::Float0001.m128_u32[3]);
          fVar39 = fVar60 * fVar49 * fVar36 + fVar47 * fVar7 + fVar64 * fVar46 * fVar56 +
                   fVar65 * fVar43 * fVar57;
          fVar40 = fVar60 * fVar46 * fVar58 + fVar43 * fVar7 + fVar64 * fVar49 * fVar40 +
                   fVar65 * fVar47 * fVar42;
          fVar42 = fVar60 * fVar43 * fVar45 + fVar46 * fVar7 + fVar64 * fVar47 * fVar48 +
                   fVar65 * fVar49 * fVar62;
          fVar45 = fVar60 * fVar47 * fVar61 + fVar49 * fVar7 + fVar64 * fVar43 * fVar59 +
                   fVar65 * fVar46 * fVar63;
          fVar36 = fVar40 + fVar40;
          fVar57 = fVar42 + fVar42;
          fVar58 = (fVar39 + fVar39) * fVar39;
          pTVar4 = param_1->PrevInstanceToPrimitiveRelative;
          fVar56 = (fVar39 + fVar39) * fVar45;
          uVar17 = 0;
          if ((int)uVar22 < pTVar4->ArrayNum) {
            uVar17 = ~uVar22 >> 0x1f;
          }
          auVar53._12_4_ = 0;
          auVar24 = blendps(auVar53,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
          auVar27._0_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar57 * fVar42 + fVar36 * fVar40)) *
               fVar32;
          auVar27._4_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar57 * fVar42 + fVar58)) * fVar33;
          auVar27._8_4_ =
               (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar36 * fVar40 + fVar58)) * fVar34;
          auVar27._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar58 + fVar58)) * 0.0;
          auVar26 = insertps(auVar27,auVar27,8);
          local_23c = auVar53._0_8_;
          local_234 = auVar53._8_4_;
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar20 = (longlong)(int)uVar22;
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          *(int *)(pFVar5 + lVar20 * 0x30) = auVar26._0_4_;
          *(float *)(pFVar5 + lVar20 * 0x30 + 4) = (fVar57 * fVar45 + fVar36 * fVar39) * fVar32;
          *(float *)(pFVar5 + lVar20 * 0x30 + 8) = fVar32 * (fVar57 * fVar39 - fVar36 * fVar45);
          *(float *)(pFVar5 + lVar20 * 0x30 + 0xc) = fVar33 * (fVar36 * fVar39 - fVar57 * fVar45);
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x10) = auVar26._4_4_;
          *(float *)(pFVar5 + lVar20 * 0x30 + 0x14) = (fVar56 + fVar57 * fVar40) * fVar33;
          *(float *)(pFVar5 + lVar20 * 0x30 + 0x18) = (fVar36 * fVar45 + fVar57 * fVar39) * fVar34;
          *(float *)(pFVar5 + lVar20 * 0x30 + 0x1c) = fVar34 * (fVar57 * fVar40 - fVar56);
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x20) = auVar26._8_4_;
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x24) = auVar24._0_4_;
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x28) = auVar24._4_4_;
          *(int *)(pFVar5 + lVar20 * 0x30 + 0x2c) = auVar24._8_4_;
          CopyInstancePerInstanceData(this,param_1,uVar23);
          uVar22 = uVar22 + 1;
          fVar32 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
          fVar33 = _UNK_1506895d4;
          fVar34 = _UNK_1506895d8;
          fVar36 = _UNK_1506895dc;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < ((this->DataToRender).Reference)->NumInstances);
    }
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1->InstanceToPrimitiveRelative,uVar22,No);
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1->PrevInstanceToPrimitiveRelative,uVar22,No);
    pTVar3 = param_1->InstanceCustomData;
    iVar18 = pTVar3->ArrayNum;
    uVar22 = uVar22 * (this->RendererProperties->PerInstanceDataFloatComponents).ArrayNum;
    if (iVar18 < (int)uVar22) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22 - iVar18,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax)
      ;
    }
    else {
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if ((int)uVar22 < iVar18) {
        uVar23 = iVar18 - uVar22;
        if (((int)(uVar23 | uVar22) < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar23 != 0) {
          pFVar5 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar22 * 4;
          iVar18 = (pTVar3->ArrayNum - uVar23) - uVar22;
          if (iVar18 != 0) {
            memmove(pFVar5,pFVar5 + (longlong)(int)uVar23 * 4,(longlong)iVar18 << 2);
          }
          pTVar3->ArrayNum = pTVar3->ArrayNum - uVar23;
        }
      }
    }
  }
  else {
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1->InstanceToPrimitiveRelative,1,Default);
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1->PrevInstanceToPrimitiveRelative,1,Default);
    pTVar3 = param_1->InstanceCustomData;
    iVar18 = pTVar3->ArrayNum;
    uVar22 = (this->RendererProperties->PerInstanceDataFloatComponents).ArrayNum;
    if (iVar18 < (int)uVar22) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar22 - iVar18,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,
                          &pTVar3->ArrayMax);
      memset((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 4,0,
             (longlong)(int)(uVar22 - iVar18) << 2);
    }
    else {
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if ((int)uVar22 < iVar18) {
        uVar23 = iVar18 - uVar22;
        if (((int)(uVar23 | uVar22) < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar23 != 0) {
          TArray<float,TSizedDefaultAllocator<32>_>::RemoveAtImpl(pTVar3,uVar22,uVar23);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar3->AllocatorInstance,pTVar3->ArrayNum,&pTVar3->ArrayMax);
        }
      }
    }
    pFVar21 = MakeTransform(this,&local_138,&this->DefaultPosition,&this->DefaultRotation,
                            &this->DefaultScale);
    pTVar4 = param_1->InstanceToPrimitiveRelative;
    uVar8 = *(undefined8 *)&pFVar21->TransformRows[0].field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&pFVar21->TransformRows[0].field0_0x0 + 8);
    uVar10 = *(undefined8 *)((longlong)&pFVar21->TransformRows[1].field0_0x0 + 4);
    uVar11 = *(undefined8 *)&pFVar21->TransformRows[2].field0_0x0;
    uVar12 = *(undefined8 *)((longlong)&pFVar21->TransformRows[2].field0_0x0 + 8);
    uVar13 = *(undefined8 *)((longlong)&(pFVar21->Origin).field0_0x0 + 4);
    if ((pTVar4->ArrayNum < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    *(undefined8 *)pFVar5 = uVar8;
    *(undefined8 *)(pFVar5 + 8) = uVar9;
    *(undefined8 *)(pFVar5 + 0x10) = uVar10;
    *(undefined8 *)(pFVar5 + 0x18) = uVar11;
    *(undefined8 *)(pFVar5 + 0x20) = uVar12;
    *(undefined8 *)(pFVar5 + 0x28) = uVar13;
    pFVar21 = MakeTransform(this,local_108,&this->DefaultPreviousPosition,
                            &this->DefaultPreviousRotation,&this->DefaultPreviousScale);
    pTVar4 = param_1->PrevInstanceToPrimitiveRelative;
    uVar8 = *(undefined8 *)&pFVar21->TransformRows[0].field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&pFVar21->TransformRows[0].field0_0x0 + 8);
    uVar10 = *(undefined8 *)((longlong)&pFVar21->TransformRows[1].field0_0x0 + 4);
    uVar11 = *(undefined8 *)&pFVar21->TransformRows[2].field0_0x0;
    uVar12 = *(undefined8 *)((longlong)&pFVar21->TransformRows[2].field0_0x0 + 8);
    uVar13 = *(undefined8 *)((longlong)&(pFVar21->Origin).field0_0x0 + 4);
    if ((pTVar4->ArrayNum < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    *(undefined8 *)pFVar5 = uVar8;
    *(undefined8 *)(pFVar5 + 8) = uVar9;
    *(undefined8 *)(pFVar5 + 0x10) = uVar10;
    *(undefined8 *)(pFVar5 + 0x18) = uVar11;
    *(undefined8 *)(pFVar5 + 0x20) = uVar12;
    *(undefined8 *)(pFVar5 + 0x28) = uVar13;
    CopyInstancePerInstanceData(this,param_1,0);
  }
  return;
}

// UpdateInstancesGPU @ 14da47d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
NiagaraRendererNaniteLocal::FUpdateInstancesContext::UpdateInstancesGPU
          (FUpdateInstancesContext *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  __m128 *p_Var1;
  int *piVar2;
  UNiagaraNaniteRendererProperties *pUVar3;
  FNiagaraGpuComputeDispatchInterface *pFVar4;
  code *pcVar5;
  FRDGBufferUAV *pFVar6;
  undefined8 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  FRHIShaderResourceView *pFVar22;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar23;
  FName this_01;
  FRDGEventName *pFVar24;
  FShaderParametersMetadata *pFVar25;
  undefined4 uVar26;
  longlong lVar27;
  undefined4 *puVar28;
  uint uVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  FParameters *pFVar32;
  int iVar33;
  int local_res8;
  undefined8 *local_120;
  float local_118;
  float fStack_114;
  float local_110;
  longlong local_108;
  longlong local_100;
  FParameters *local_f8;
  FScriptContainerElement *local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  TIntVector3<int>_u_0 local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  undefined1 local_98 [8];
  FString local_90;
  TShaderRefBase<FNiagaraNaniteGPUSceneCS,FShaderMapPointerTable> local_78;
  FRDGEventName local_68;
  
  if ((param_2->PersistentPrimitiveId == 0xffffffff) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GpuSceneParams.PersistentPrimitiveId != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\NiagaraNanite\\Source\\NiagaraNanite\\Private\\Renderer\\NiagaraRendererNanite.cpp"
                          ,0xb3,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar3 = this->RendererProperties;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                          ,0x9b,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar31 = (pUVar3->RendererLayout).VFVariables_RT.AllocatorInstance.Data;
  iVar19 = (pUVar3->RendererLayout).VFVariables_RT.ArrayNum;
  local_f0 = pFVar31;
  if ((iVar19 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar27 = 0x10;
  iVar14 = (this->RendererProperties->PerInstanceDataFloatComponents).ArrayNum;
  iVar33 = 0x40;
  if (iVar14 < 0x40) {
    iVar33 = iVar14;
  }
  iVar14 = (int)(iVar33 + 3 + (iVar33 + 3 >> 0x1f & 3U)) >> 2;
  puVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x3d0,0x10);
  if (puVar20 == (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar20 + 9) = 1;
    puVar20[2] = 0;
    *puVar20 = &___7__TObject_VFParameters_FNiagaraNaniteGPUSceneCS___FRDGAllocator__6B_;
    puVar21 = puVar20 + 0x36;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[8] = 0;
    puVar20[0x10] = 0;
    puVar20[0x11] = 0;
    puVar20[0x12] = 0;
    puVar20[0x13] = 0;
    do {
      *puVar21 = 0;
      *(undefined4 *)(puVar21 + 1) = 0;
      *(undefined4 *)((longlong)puVar21 + 0xc) = 0x3f800000;
      puVar21 = puVar21 + 2;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  local_120 = puVar20;
  if ((((undefined8 **)param_1->_padding_ <= &local_120) &&
      (&local_120 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (int)param_1->_padding_;
  piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar15 == *piVar2) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
  }
  pFVar32 = (FParameters *)(puVar20 + 2);
  *(int *)&param_1->_padding_ = iVar15 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar15 * 8) = local_120;
  pFVar6 = (param_2->GPUWriteParams).GPUSceneInstancePayloadDataRW;
  (pFVar32->GPUSceneWriterParameters).GPUSceneInstanceSceneDataRW =
       (param_2->GPUWriteParams).GPUSceneInstanceSceneDataRW;
  puVar20[3] = pFVar6;
  uVar7 = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneInstanceSceneDataSOAStride;
  puVar20[4] = (param_2->GPUWriteParams).GPUScenePrimitiveSceneDataRW;
  puVar20[5] = uVar7;
  lVar27 = (param_2->GPUWriteParams)._padding_;
  puVar20[6] = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneNumAllocatedPrimitives;
  puVar20[7] = lVar27;
  uVar7 = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneWriterUB.field_0x8;
  puVar20[8] = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneWriterUB;
  puVar20[9] = uVar7;
  uVar7 = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneInstanceDataTileStride;
  puVar20[10] = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters;
  puVar20[0xb] = uVar7;
  uVar7 = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneNumLightmapDataItems;
  puVar20[0xc] = *(undefined8 *)
                  &(param_2->GPUWriteParams).CommonParameters.GPUSceneMaxAllocatedInstanceId;
  puVar20[0xd] = uVar7;
  *(int *)(puVar20 + 0xe) = this->NumInstancesEstimate;
  *(uint *)((longlong)puVar20 + 0x74) = ((this->DataToRender).Reference)->NumInstances;
  *(uint *)(puVar20 + 0xf) = ((this->DataToRender).Reference)->GPUInstanceCountBufferOffset;
  *(uint *)((longlong)puVar20 + 0x7c) = ((this->DataToRender).Reference)->FloatStride >> 2;
  pFVar22 = (((this->DataToRender).Reference)->GPUBufferFloat).SRV.Reference;
  local_f8 = pFVar32;
  if (pFVar22 == (FRHIShaderResourceView *)0x0) {
    pFVar22 = FNiagaraRenderer::GetDummyFloatBuffer();
  }
  puVar20[0x10] = pFVar22;
  pFVar22 = (((this->DataToRender).Reference)->GPUBufferHalf).SRV.Reference;
  if (pFVar22 == (FRHIShaderResourceView *)0x0) {
    pFVar22 = FNiagaraRenderer::GetDummyHalfBuffer();
  }
  puVar20[0x11] = pFVar22;
  pFVar22 = (((this->DataToRender).Reference)->GPUBufferInt).SRV.Reference;
  if (pFVar22 == (FRHIShaderResourceView *)0x0) {
    pFVar22 = FNiagaraRenderer::GetDummyIntBuffer();
  }
  puVar20[0x12] = pFVar22;
  pFVar4 = this->ComputeInterface;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                          ,0x6a,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((pFVar4->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (pFVar4->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("UsedInstanceCounts <= AllocatedInstanceCounts",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                          ,0x44,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar22 = (pFVar4->GPUInstanceCounterManager).CountBuffer.SRV.Reference;
  if (pFVar22 == (FRHIShaderResourceView *)0x0) {
    pFVar22 = FNiagaraRenderer::GetDummyUIntBuffer();
  }
  puVar20[0x13] = pFVar22;
  local_108 = (longlong)iVar14;
  *(int *)(puVar20 + 0x14) = iVar33;
  uVar18 = 0xffffffff;
  *(int *)((longlong)puVar20 + 0xa4) = iVar14;
  if (0 < local_108) {
    puVar28 = (undefined4 *)((longlong)puVar20 + 0x1b4);
    lVar27 = -(longlong)pFVar32;
    local_100 = lVar27 + -0x1a4;
    lVar30 = 0;
    local_res8 = 0;
    uVar29 = 2;
    do {
      if (local_res8 < 0) {
LAB_14da481d3:
        uVar26 = 0xffffffff;
      }
      else {
        pUVar3 = this->RendererProperties;
        if ((pUVar3->PerInstanceDataFloatComponents).ArrayNum <= (int)(uVar29 - 2))
        goto LAB_14da481d3;
        uVar16 = 0;
        if ((int)(uVar29 - 2) < (pUVar3->PerInstanceDataFloatComponents).ArrayNum) {
          uVar16 = ~(uVar29 - 2) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar26 = *(undefined4 *)
                  ((pUVar3->PerInstanceDataFloatComponents).AllocatorInstance.Data + lVar30);
      }
      puVar28[-0x41] = uVar26;
      iVar14 = uVar29 - 1;
      puVar28[-1] = *(undefined4 *)((longlong)this->DefaultCustomFloats + lVar30);
      if ((iVar14 < 0) ||
         (pUVar3 = this->RendererProperties,
         (pUVar3->PerInstanceDataFloatComponents).ArrayNum <= iVar14)) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar16 = 0;
        if (iVar14 < (pUVar3->PerInstanceDataFloatComponents).ArrayNum) {
          uVar16 = ~(uVar29 - 1) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar26 = *(undefined4 *)
                  ((longlong)puVar28 +
                  (longlong)
                  ((pUVar3->PerInstanceDataFloatComponents).AllocatorInstance.Data + lVar27 + -0x1a0
                  ));
      }
      puVar28[-0x40] = uVar26;
      *puVar28 = *(undefined4 *)((longlong)this + (-0x180 - (longlong)pFVar32) + (longlong)puVar28);
      if (((int)uVar29 < 0) ||
         (pUVar3 = this->RendererProperties,
         (pUVar3->PerInstanceDataFloatComponents).ArrayNum <= (int)uVar29)) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar16 = 0;
        if ((int)uVar29 < (pUVar3->PerInstanceDataFloatComponents).ArrayNum) {
          uVar16 = ~uVar29 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar26 = *(undefined4 *)
                  ((longlong)puVar28 +
                  (longlong)
                  ((pUVar3->PerInstanceDataFloatComponents).AllocatorInstance.Data + lVar27 + -0x19c
                  ));
      }
      puVar28[-0x3f] = uVar26;
      uVar16 = uVar29 + 1;
      puVar28[1] = *(undefined4 *)
                    ((longlong)this + (-0x17c - (longlong)pFVar32) + (longlong)puVar28);
      if (((int)uVar16 < 0) ||
         (pUVar3 = this->RendererProperties,
         (pUVar3->PerInstanceDataFloatComponents).ArrayNum <= (int)uVar16)) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar17 = 0;
        if ((int)uVar16 < (pUVar3->PerInstanceDataFloatComponents).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar26 = *(undefined4 *)
                  ((longlong)puVar28 +
                  (longlong)
                  ((pUVar3->PerInstanceDataFloatComponents).AllocatorInstance.Data + lVar27 + -0x198
                  ));
      }
      puVar28[-0x3e] = uVar26;
      uVar29 = uVar29 + 4;
      lVar30 = lVar30 + 0x10;
      puVar28[2] = *(undefined4 *)
                    ((longlong)puVar28 + (longlong)this + (-0x178 - (longlong)pFVar32));
      puVar28 = puVar28 + 4;
      local_108 = local_108 + -1;
      local_res8 = local_res8 + 4;
    } while (local_108 != 0);
    local_108 = 0;
    pFVar31 = local_f0;
    pFVar32 = local_f8;
  }
  if ((iVar19 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar29 = 0xffffffff;
  if (*(ushort *)(pFVar31 + 2) != 0xffff) {
    uVar29 = (uint)*(ushort *)(pFVar31 + 2);
  }
  pFVar32->PositionComponentOffset =
       -(uint)(pFVar31[7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar29;
  if ((iVar19 < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar29 = 0xffffffff;
  if (*(ushort *)(pFVar31 + 10) != 0xffff) {
    uVar29 = (uint)*(ushort *)(pFVar31 + 10);
  }
  pFVar32->RotationComponentOffset =
       -(uint)(pFVar31[0xf] != (FScriptContainerElement)0x0) & 0x80000000 | uVar29;
  if ((iVar19 < 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar29 = 0xffffffff;
  if (*(ushort *)(pFVar31 + 0x12) != 0xffff) {
    uVar29 = (uint)*(ushort *)(pFVar31 + 0x12);
  }
  pFVar32->ScaleComponentOffset =
       -(uint)(pFVar31[0x17] != (FScriptContainerElement)0x0) & 0x80000000 | uVar29;
  if ((iVar19 < 4) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar29 = 0xffffffff;
  if (*(ushort *)(pFVar31 + 0x1a) != 0xffff) {
    uVar29 = (uint)*(ushort *)(pFVar31 + 0x1a);
  }
  pFVar32->PrevPositionComponentOffset =
       -(uint)(pFVar31[0x1f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar29;
  if ((iVar19 < 5) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar29 = 0xffffffff;
  if (*(ushort *)(pFVar31 + 0x22) != 0xffff) {
    uVar29 = (uint)*(ushort *)(pFVar31 + 0x22);
  }
  pFVar32->PrevRotationComponentOffset =
       -(uint)(pFVar31[0x27] != (FScriptContainerElement)0x0) & 0x80000000 | uVar29;
  if ((iVar19 < 6) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(ushort *)(pFVar31 + 0x2a) != 0xffff) {
    uVar18 = (uint)*(ushort *)(pFVar31 + 0x2a);
  }
  pFVar32->PrevScaleComponentOffset =
       -(uint)(pFVar31[0x2f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar18;
  *(undefined8 *)&(pFVar32->DefaultPosition).field0_0x0 =
       *(undefined8 *)&(this->DefaultPosition).field0_0x0;
  (pFVar32->DefaultPosition).field0_0x0._s_0.Z = (this->DefaultPosition).field0_0x0._s_0.Z;
  fVar10 = (this->DefaultRotation).Y;
  fVar11 = (this->DefaultRotation).Z;
  fVar12 = (this->DefaultRotation).W;
  (pFVar32->DefaultRotation).X = (this->DefaultRotation).X;
  (pFVar32->DefaultRotation).Y = fVar10;
  (pFVar32->DefaultRotation).Z = fVar11;
  (pFVar32->DefaultRotation).W = fVar12;
  *(undefined8 *)&(pFVar32->DefaultScale).field0_0x0 =
       *(undefined8 *)&(this->DefaultScale).field0_0x0;
  (pFVar32->DefaultScale).field0_0x0._s_0.Z = (this->DefaultScale).field0_0x0._s_0.Z;
  *(undefined8 *)&(pFVar32->DefaultPrevPosition).field0_0x0 =
       *(undefined8 *)&(this->DefaultPreviousPosition).field0_0x0;
  (pFVar32->DefaultPrevPosition).field0_0x0._s_0.Z =
       (this->DefaultPreviousPosition).field0_0x0._s_0.Z;
  fVar10 = (this->DefaultPreviousRotation).Y;
  fVar11 = (this->DefaultPreviousRotation).Z;
  fVar12 = (this->DefaultPreviousRotation).W;
  (pFVar32->DefaultPrevRotation).X = (this->DefaultPreviousRotation).X;
  (pFVar32->DefaultPrevRotation).Y = fVar10;
  (pFVar32->DefaultPrevRotation).Z = fVar11;
  (pFVar32->DefaultPrevRotation).W = fVar12;
  *(undefined8 *)&(pFVar32->DefaultPrevScale).field0_0x0 =
       *(undefined8 *)&(this->DefaultPreviousScale).field0_0x0;
  (pFVar32->DefaultPrevScale).field0_0x0._s_0.Z = (this->DefaultPreviousScale).field0_0x0._s_0.Z;
  *(undefined8 *)&(pFVar32->MeshScale).field0_0x0 = *(undefined8 *)&(this->MeshScale).field0_0x0;
  (pFVar32->MeshScale).field0_0x0._s_0.Z = (this->MeshScale).field0_0x0._s_0.Z;
  fVar10 = (this->MeshRotation).Y;
  fVar11 = (this->MeshRotation).Z;
  fVar12 = (this->MeshRotation).W;
  (pFVar32->MeshRotation).X = (this->MeshRotation).X;
  (pFVar32->MeshRotation).Y = fVar10;
  (pFVar32->MeshRotation).Z = fVar11;
  (pFVar32->MeshRotation).W = fVar12;
  pFVar32->MeshIndex = this->DefaultMeshIndex;
  pFVar32->RendererVis = this->DefaultRendererVis;
  pFVar32->MeshIndexComponentOffset = this->MeshIndexComponentOffset;
  pFVar32->RendererVisComponentOffset = this->RendererVisComponentOffset;
  p_Var1 = &(this->SimulationToComponent).Translation;
  local_e8 = p_Var1->m128_f32[0];
  fStack_e4 = (this->SimulationToComponent).Translation.m128_f32[1];
  local_e0 = (this->SimulationToComponent).Translation.m128_f32[2];
  *(ulong64 *)&(pFVar32->SimulationToComponent_Translation).field0_0x0 = p_Var1->m128_u64[0];
  (pFVar32->SimulationToComponent_Translation).field0_0x0._s_0.Z = local_e0;
  uVar8 = (this->SimulationToComponent).Rotation.m128_u64[0];
  uVar9 = (this->SimulationToComponent).Rotation.m128_u64[1];
  (pFVar32->SimulationToComponent_Rotation).X = (float)(int)uVar8;
  (pFVar32->SimulationToComponent_Rotation).Y = (float)(int)(uVar8 >> 0x20);
  (pFVar32->SimulationToComponent_Rotation).Z = (float)(int)uVar9;
  (pFVar32->SimulationToComponent_Rotation).W = (float)(int)(uVar9 >> 0x20);
  p_Var1 = &(this->SimulationToComponent).Scale3D;
  local_dc = p_Var1->m128_f32[0];
  fStack_d8 = (this->SimulationToComponent).Scale3D.m128_f32[1];
  local_d4 = (this->SimulationToComponent).Scale3D.m128_f32[2];
  *(ulong64 *)&(pFVar32->SimulationToComponent_Scale).field0_0x0 = p_Var1->m128_u64[0];
  (pFVar32->SimulationToComponent_Scale).field0_0x0._s_0.Z = local_d4;
  p_Var1 = &(this->PreviousSimulationToComponent).Translation;
  local_d0 = p_Var1->m128_f32[0];
  fStack_cc = (this->PreviousSimulationToComponent).Translation.m128_f32[1];
  local_c8 = (this->PreviousSimulationToComponent).Translation.m128_f32[2];
  *(ulong64 *)&(pFVar32->PreviousSimulationToComponent_Translation).field0_0x0 = p_Var1->m128_u64[0]
  ;
  (pFVar32->PreviousSimulationToComponent_Translation).field0_0x0._s_0.Z = local_c8;
  uVar8 = (this->PreviousSimulationToComponent).Rotation.m128_u64[0];
  uVar9 = (this->PreviousSimulationToComponent).Rotation.m128_u64[1];
  (pFVar32->PreviousSimulationToComponent_Rotation).X = (float)(int)uVar8;
  (pFVar32->PreviousSimulationToComponent_Rotation).Y = (float)(int)(uVar8 >> 0x20);
  (pFVar32->PreviousSimulationToComponent_Rotation).Z = (float)(int)uVar9;
  (pFVar32->PreviousSimulationToComponent_Rotation).W = (float)(int)(uVar9 >> 0x20);
  p_Var1 = &(this->PreviousSimulationToComponent).Scale3D;
  local_118 = p_Var1->m128_f32[0];
  fStack_114 = (this->PreviousSimulationToComponent).Scale3D.m128_f32[1];
  local_110 = (this->PreviousSimulationToComponent).Scale3D.m128_f32[2];
  *(ulong64 *)&(pFVar32->PreviousSimulationToComponent_Scale).field0_0x0 = p_Var1->m128_u64[0];
  (pFVar32->PreviousSimulationToComponent_Scale).field0_0x0._s_0.Z = local_110;
  *(undefined8 *)&(pFVar32->SimulationLWCTile).field0_0x0 =
       *(undefined8 *)&(this->SimulationLWCTile).field0_0x0;
  (pFVar32->SimulationLWCTile).field0_0x0._s_0.Z = (this->SimulationLWCTile).field0_0x0._s_0.Z;
  pFVar32->PrimitiveId = param_2->PersistentPrimitiveId;
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar23 = (FShaderType *)FNiagaraNaniteGPUSceneCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_a8,pFVar23,0);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
    ::FName::ToString((FName *)this_01,&local_90);
    FNiagaraNaniteGPUSceneCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FNiagaraNaniteGPUSceneCS::GetStaticType();
  iVar19 = pFVar32->NumAllocatedInstances + 0x3f;
  local_78.ShaderContent = (FNiagaraNaniteGPUSceneCS *)local_a8.ShaderContent;
  local_78.ShaderMap = local_a8.ShaderMap;
  iVar19 = (int)((iVar19 >> 0x1f & 0x3fU) + iVar19) >> 6;
  if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
      (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,400,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = 1;
  iVar33 = 1;
  iVar14 = iVar19;
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < iVar19) {
    iVar14 = 0x80;
    iVar15 = (int)((iVar19 + 0x7f >> 0x1f & 0x7fU) + iVar19 + 0x7f) >> 7;
  }
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < iVar15) {
    iVar33 = iVar15 + 0x7f;
    iVar15 = 0x80;
    iVar33 = (int)((iVar33 >> 0x1f & 0x7fU) + iVar33) >> 7;
  }
  if ((iVar33 * iVar15 * iVar14 < iVar19) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,0x19f,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_118 = (float)iVar14;
  fStack_114 = (float)iVar15;
  pFVar24 = FRDGEventName::FRDGEventName(&local_68,1,L"NiagaraNanite");
  pFVar25 = FNiagaraNaniteGPUSceneCS::FParameters::FTypeInfo::GetStructMetadata();
  local_b8._0_8_ = CONCAT44(fStack_114,local_118);
  local_b8._s_0.Z = iVar33;
  FComputeShaderUtils::AddPass<FNiagaraNaniteGPUSceneCS>
            (param_1,pFVar24,NeverCull|Compute,&local_78,pFVar25,pFVar32,
             (TIntVector3<int> *)&local_b8._s_0);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

