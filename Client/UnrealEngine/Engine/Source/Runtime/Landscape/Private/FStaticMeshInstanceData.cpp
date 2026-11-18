// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// ~FStaticMeshInstanceData @ 145f437f0

void __thiscall FStaticMeshInstanceData::~FStaticMeshInstanceData(FStaticMeshInstanceData *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->InstanceOriginData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  pFVar1 = this->InstanceLightmapData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  pFVar1 = this->InstanceTransformData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  pFVar1 = this->InstanceCustomData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145f43847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// AllocateBuffers @ 145f49c70

void __thiscall
FStaticMeshInstanceData::AllocateBuffers
          (FStaticMeshInstanceData *this,int param_1,EResizeBufferFlags param_2)

{
  FStaticMeshVertexDataInterface *pFVar1;
  undefined **ppuVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  
  pFVar3 = this->InstanceOriginData;
  if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar3)(pFVar3,1);
  }
  pFVar3 = this->InstanceTransformData;
  pFVar4 = (FStaticMeshVertexDataInterface *)0x0;
  this->InstanceOriginDataPtr = (uchar *)0x0;
  if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar3)(pFVar3,1);
  }
  pFVar3 = this->InstanceLightmapData;
  this->InstanceTransformDataPtr = (uchar *)0x0;
  if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar3)(pFVar3,1);
  }
  pFVar3 = this->InstanceCustomData;
  this->InstanceLightmapDataPtr = (uchar *)0x0;
  if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar3)(pFVar3,1);
  }
  this->InstanceCustomData = (FStaticMeshVertexDataInterface *)0x0;
  pFVar1 = ::operator_new(0x28);
  pFVar3 = pFVar4;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
    *pFVar1 = (FStaticMeshVertexDataInterface)
              &___7__TStaticMeshVertexData_U__TVector4_M_Math_UE____6B_;
    pFVar1[1] = (FStaticMeshVertexDataInterface)
                &___7__TResourceArray_U__TVector4_M_Math_UE___0A___6B_;
    pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
    *(undefined1 *)(pFVar1 + 4) = 0;
    pFVar3 = pFVar1;
  }
  this->InstanceOriginData = pFVar3;
  (**(code **)((longlong)*pFVar3 + 8))(pFVar3,param_1,param_2);
  pFVar1 = ::operator_new(0x28);
  pFVar3 = pFVar4;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
    *pFVar1 = (FStaticMeshVertexDataInterface)
              &___7__TStaticMeshVertexData_UFInstanceLightMapVector_FStaticMeshInstanceData____6B_;
    pFVar1[1] = (FStaticMeshVertexDataInterface)
                &___7__TResourceArray_UFInstanceLightMapVector_FStaticMeshInstanceData___0A___6B_;
    pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
    *(undefined1 *)(pFVar1 + 4) = 0;
    pFVar3 = pFVar1;
  }
  this->InstanceLightmapData = pFVar3;
  (**(code **)((longlong)*pFVar3 + 8))(pFVar3,param_1,param_2);
  pFVar3 = pFVar4;
  if (this->bUseHalfFloat == false) {
    pFVar1 = ::operator_new(0x28);
    if (pFVar1 == (FStaticMeshVertexDataInterface *)0x0) goto LAB_145f49dd4;
    *pFVar1 = (FStaticMeshVertexDataInterface)
              &
              ___7__TStaticMeshVertexData_U__FInstanceTransformMatrix_M_FStaticMeshInstanceData____6B_
    ;
    ppuVar2 = &___7__TResourceArray_U__FInstanceTransformMatrix_M_FStaticMeshInstanceData___0A___6B_
    ;
  }
  else {
    pFVar1 = ::operator_new(0x28);
    if (pFVar1 == (FStaticMeshVertexDataInterface *)0x0) goto LAB_145f49dd4;
    *pFVar1 = (FStaticMeshVertexDataInterface)
              &
              ___7__TStaticMeshVertexData_U__FInstanceTransformMatrix_VFFloat16___FStaticMeshInstanceData____6B_
    ;
    ppuVar2 = &
              ___7__TResourceArray_U__FInstanceTransformMatrix_VFFloat16___FStaticMeshInstanceData___0A___6B_
    ;
  }
  *(undefined1 *)(pFVar1 + 4) = 0;
  pFVar1[1] = (FStaticMeshVertexDataInterface)ppuVar2;
  pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
  pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
  pFVar3 = pFVar1;
LAB_145f49dd4:
  this->InstanceTransformData = pFVar3;
  (**(code **)((longlong)*pFVar3 + 8))(pFVar3,param_1,param_2);
  pFVar3 = ::operator_new(0x28);
  if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
    pFVar3[2] = (FStaticMeshVertexDataInterface)0x0;
    *pFVar3 = (FStaticMeshVertexDataInterface)&___7__TStaticMeshVertexData_M__6B_;
    pFVar3[1] = (FStaticMeshVertexDataInterface)&___7__TResourceArray_M_0A___6B_;
    pFVar3[3] = (FStaticMeshVertexDataInterface)0x0;
    *(undefined1 *)(pFVar3 + 4) = 0;
    pFVar4 = pFVar3;
  }
  this->InstanceCustomData = pFVar4;
                    /* WARNING: Could not recover jumptable at 0x000145f49e3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pFVar4 + 8))(pFVar4,param_1 * this->NumCustomDataFloats,param_2);
  return;
}

// AllocateInstances @ 145f49e50

void __thiscall
FStaticMeshInstanceData::AllocateInstances
          (FStaticMeshInstanceData *this,int param_1,int param_2,EResizeBufferFlags param_3,
          bool param_4)

{
  uchar *puVar1;
  
  this->NumInstances = param_1;
  this->NumCustomDataFloats = param_2;
  if (param_4) {
    (**(code **)((longlong)*this->InstanceOriginData + 0x10))();
    (**(code **)((longlong)*this->InstanceLightmapData + 0x10))
              (this->InstanceLightmapData,this->NumInstances);
    (**(code **)((longlong)*this->InstanceTransformData + 0x10))
              (this->InstanceTransformData,this->NumInstances);
    (**(code **)((longlong)*this->InstanceCustomData + 0x10))
              (this->InstanceCustomData,this->NumInstances * this->NumCustomDataFloats);
  }
  (**(code **)((longlong)*this->InstanceOriginData + 8))
            (this->InstanceOriginData,this->NumInstances,param_3);
  puVar1 = (uchar *)(**(code **)((longlong)*this->InstanceOriginData + 0x30))();
  this->InstanceOriginDataPtr = puVar1;
  (**(code **)((longlong)*this->InstanceLightmapData + 8))
            (this->InstanceLightmapData,this->NumInstances,param_3);
  puVar1 = (uchar *)(**(code **)((longlong)*this->InstanceLightmapData + 0x30))();
  this->InstanceLightmapDataPtr = puVar1;
  (**(code **)((longlong)*this->InstanceTransformData + 8))
            (this->InstanceTransformData,this->NumInstances,param_3);
  puVar1 = (uchar *)(**(code **)((longlong)*this->InstanceTransformData + 0x30))();
  this->InstanceTransformDataPtr = puVar1;
  (**(code **)((longlong)*this->InstanceCustomData + 8))
            (this->InstanceCustomData,this->NumInstances * this->NumCustomDataFloats,param_3);
  puVar1 = (uchar *)(**(code **)((longlong)*this->InstanceCustomData + 0x30))();
  this->InstanceCustomDataPtr = puVar1;
  return;
}

// SetInstance @ 145f5dcd0

void __thiscall
FStaticMeshInstanceData::SetInstance
          (FStaticMeshInstanceData *this,int param_1,TMatrix<float> *param_2,float param_3,
          TVector2<double> *param_4,TVector2<double> *param_5)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FStaticMeshVertexDataInterface *pFVar12;
  uchar *puVar13;
  code *pcVar14;
  bool bVar15;
  undefined2 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_168 [2];
  uint local_160 [2];
  uchar *local_158;
  int *local_150;
  uint *local_148;
  uchar **local_140;
  FStaticMeshInstanceData *local_138;
  int *local_130;
  uint *local_128;
  uchar **local_120;
  FStaticMeshInstanceData *local_118;
  
  pFVar12 = this->InstanceOriginData;
  fVar23 = param_2->M[3][0];
  fVar24 = param_2->M[3][1];
  fVar25 = param_2->M[3][2];
  local_158 = this->InstanceOriginDataPtr;
  lVar22 = (longlong)param_1;
  local_168[0] = param_1;
  iVar17 = (**(code **)((longlong)*pFVar12 + 0x20))(pFVar12);
  iVar18 = (**(code **)((longlong)*pFVar12 + 0x28))(pFVar12);
  local_160[0] = iVar18 * iVar17;
  if (this->InstanceOriginDataPtr + local_160[0] < local_158 + ((longlong)local_168[0] + 1) * 0x10)
  {
    local_150 = local_168;
    local_148 = local_160;
    local_140 = &local_158;
    local_138 = this;
    bVar15 = `FStaticMeshInstanceData::SetInstanceOriginInternal'::__l3::<lambda_1>::operator()
                       (&local_150);
    if (bVar15) goto LAB_145f5ddd5;
  }
  else {
LAB_145f5ddd5:
    if (local_158 + (longlong)local_168[0] * 0x10 < this->InstanceOriginDataPtr) {
      local_130 = local_168;
      local_128 = local_160;
      local_120 = &local_158;
      local_118 = this;
      bVar15 = `FStaticMeshInstanceData::SetInstanceOriginInternal'::__l3::<lambda_2>::operator()
                         (&local_130);
      if (!bVar15) goto LAB_145f5de3e;
    }
    lVar20 = (longlong)local_168[0];
    *(float *)(local_158 + lVar20 * 0x10) = fVar23;
    *(float *)(local_158 + lVar20 * 0x10 + 4) = fVar24;
    *(float *)(local_158 + lVar20 * 0x10 + 8) = fVar25;
    *(float *)(local_158 + lVar20 * 0x10 + 0xc) = param_3;
  }
LAB_145f5de3e:
  pFVar12 = this->InstanceTransformData;
  fVar23 = param_2->M[0][0];
  fVar24 = param_2->M[0][1];
  fVar25 = param_2->M[0][2];
  fVar2 = param_2->M[1][0];
  fVar3 = param_2->M[1][1];
  fVar4 = param_2->M[1][2];
  fVar5 = param_2->M[2][0];
  fVar6 = param_2->M[2][1];
  fVar7 = param_2->M[2][2];
  puVar13 = this->InstanceTransformDataPtr;
  if (this->bUseHalfFloat == false) {
    iVar17 = (**(code **)((longlong)*pFVar12 + 0x28))(pFVar12);
    iVar18 = (**(code **)((longlong)*pFVar12 + 0x20))(pFVar12);
    pfVar21 = (float *)(puVar13 + lVar22 * 0x30);
    if ((float *)((ulonglong)(uint)(iVar18 * iVar17) + (longlong)this->InstanceTransformDataPtr) <
        pfVar21 + 0xc) goto LAB_145f5dfc5;
    if (pfVar21 < this->InstanceTransformDataPtr) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9111849448622782939>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x625,
                          "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceTransformDataPtr)"
                         );
      if (bVar15) goto code_r0x000145f5e023;
    }
    else {
      *pfVar21 = fVar23;
      pfVar21[1] = fVar24;
      pfVar21[2] = fVar25;
      pfVar21[3] = 0.0;
      pfVar21[4] = fVar2;
      pfVar21[5] = fVar3;
      pfVar21[6] = fVar4;
      pfVar21[7] = 0.0;
      pfVar21[8] = fVar5;
      pfVar21[9] = fVar6;
      pfVar21[10] = fVar7;
      pfVar21[0xb] = 0.0;
    }
  }
  else {
    iVar17 = (**(code **)((longlong)*pFVar12 + 0x28))();
    iVar18 = (**(code **)((longlong)*pFVar12 + 0x20))(pFVar12);
    puVar1 = (ushort *)(puVar13 + lVar22 * 0x18);
    if ((ushort *)((ulonglong)(uint)(iVar18 * iVar17) + (longlong)this->InstanceTransformDataPtr) <
        puVar1 + 0xc) {
LAB_145f5dfc5:
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9111849448622782940>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x624,
                          "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                         );
      if (bVar15) {
code_r0x000145f5e023:
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    else if (puVar1 < this->InstanceTransformDataPtr) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9111849448622782939>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x625,
                          "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceTransformDataPtr)"
                         );
      if (bVar15) goto code_r0x000145f5e023;
    }
    else {
      FGenericPlatformMath::StoreHalf(puVar1,fVar23);
      FGenericPlatformMath::StoreHalf(puVar1 + 1,fVar24);
      FGenericPlatformMath::StoreHalf(puVar1 + 2,fVar25);
      FGenericPlatformMath::StoreHalf(puVar1 + 3,0.0);
      FGenericPlatformMath::StoreHalf(puVar1 + 4,fVar2);
      FGenericPlatformMath::StoreHalf(puVar1 + 5,fVar3);
      FGenericPlatformMath::StoreHalf(puVar1 + 6,fVar4);
      FGenericPlatformMath::StoreHalf(puVar1 + 7,0.0);
      FGenericPlatformMath::StoreHalf(puVar1 + 8,fVar5);
      FGenericPlatformMath::StoreHalf(puVar1 + 9,fVar6);
      FGenericPlatformMath::StoreHalf(puVar1 + 10,fVar7);
      FGenericPlatformMath::StoreHalf(puVar1 + 0xb,0.0);
    }
  }
  pFVar12 = this->InstanceLightmapData;
  puVar13 = this->InstanceLightmapDataPtr;
  dVar8 = (param_4->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.Y;
  dVar10 = (param_5->field0_0x0)._s_0.X;
  dVar11 = (param_5->field0_0x0)._s_0.Y;
  iVar17 = (**(code **)((longlong)*pFVar12 + 0x20))(pFVar12);
  iVar18 = (**(code **)((longlong)*pFVar12 + 0x28))(pFVar12);
  puVar13 = puVar13 + lVar22 * 8;
  if (this->InstanceLightmapDataPtr + (uint)(iVar18 * iVar17) < puVar13 + 8) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9111849448622782903>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x649,
                        "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceLightmapDataPtr + CurrentSize)"
                       );
    if (bVar15) {
code_r0x000145f5e137:
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  else if (puVar13 < this->InstanceLightmapDataPtr) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9111849448622782902>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x64a,
                        "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceLightmapDataPtr)"
                       );
    if (bVar15) goto code_r0x000145f5e137;
  }
  else {
    fVar23 = (float)dVar9 * __real_46fffe00;
    iVar18 = (int)((float)dVar8 * __real_46fffe00);
    fVar24 = (float)dVar10 * __real_46fffe00;
    fVar25 = (float)dVar11 * __real_46fffe00;
    iVar17 = 0x7fff;
    if (iVar18 < 0x7fff) {
      iVar17 = iVar18;
    }
    uVar16 = 0x8000;
    if (-0x8000 < iVar17) {
      uVar16 = (short)iVar17;
    }
    *(undefined2 *)puVar13 = uVar16;
    iVar18 = (int)fVar23;
    iVar17 = 0x7fff;
    if (iVar18 < 0x7fff) {
      iVar17 = iVar18;
    }
    uVar16 = 0x8000;
    if (-0x8000 < iVar17) {
      uVar16 = (short)iVar17;
    }
    *(undefined2 *)(puVar13 + 2) = uVar16;
    iVar18 = (int)fVar24;
    iVar17 = 0x7fff;
    if (iVar18 < 0x7fff) {
      iVar17 = iVar18;
    }
    uVar16 = 0x8000;
    if (-0x8000 < iVar17) {
      uVar16 = (undefined2)iVar17;
    }
    *(undefined2 *)(puVar13 + 4) = uVar16;
    iVar18 = (int)fVar25;
    iVar17 = 0x7fff;
    if (iVar18 < 0x7fff) {
      iVar17 = iVar18;
    }
    uVar16 = 0x8000;
    if (-0x8000 < iVar17) {
      uVar16 = (short)iVar17;
    }
    *(undefined2 *)(puVar13 + 6) = uVar16;
  }
  iVar17 = 0;
  if (0 < this->NumCustomDataFloats) {
    if (this->NumCustomDataFloats < 1) goto LAB_145f5e28a;
    do {
      pFVar12 = this->InstanceCustomData;
      puVar13 = this->InstanceCustomDataPtr;
      iVar18 = (**(code **)((longlong)*pFVar12 + 0x20))(pFVar12);
      iVar19 = (**(code **)((longlong)*pFVar12 + 0x28))(pFVar12);
      puVar13 = puVar13 + (longlong)(param_1 * this->NumCustomDataFloats + iVar17) * 4;
      if (this->InstanceCustomDataPtr + (uint)(iVar19 * iVar18) < puVar13 + 4) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9111849448622782879>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                            ,0x661,
                            "(void*)((&ElementData[CustomDataIndex]) + 1) <= (void*)(InstanceCustomDataPtr + CurrentSize)"
                           );
        if (bVar15) {
code_r0x000145f5e284:
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      else if (puVar13 < this->InstanceCustomDataPtr) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9111849448622782878>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                            ,0x662,
                            "(void*)((&ElementData[CustomDataIndex]) + 0) >= (void*)(InstanceCustomDataPtr)"
                           );
        if (bVar15) goto code_r0x000145f5e284;
      }
      else {
        puVar13[0] = '\0';
        puVar13[1] = '\0';
        puVar13[2] = '\0';
        puVar13[3] = '\0';
      }
LAB_145f5e28a:
      iVar17 = iVar17 + 1;
    } while (iVar17 < this->NumCustomDataFloats);
  }
  return;
}

// SwapInstance @ 145f5eec0

void __thiscall
FStaticMeshInstanceData::SwapInstance(FStaticMeshInstanceData *this,int param_1,int param_2)

{
  uchar *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uchar *puVar22;
  int iVar23;
  longlong lVar24;
  uchar *puVar25;
  longlong lVar26;
  
  pFVar4 = this->InstanceTransformData;
  puVar22 = this->InstanceTransformDataPtr;
  lVar24 = (longlong)param_2;
  lVar26 = (longlong)param_1;
  if (this->bUseHalfFloat == false) {
    iVar19 = (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4);
    iVar20 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4);
    puVar25 = puVar22 + lVar26 * 0x30;
    if (this->InstanceTransformDataPtr + (uint)(iVar19 * iVar20) < puVar25 + 0x30) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index1]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x53a,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (puVar25 < this->InstanceTransformDataPtr) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index1]) + 0) >= (void*)(InstanceTransformDataPtr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x53b,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar22 = puVar22 + lVar24 * 0x30;
    if (this->InstanceTransformDataPtr + (uint)(iVar19 * iVar20) < puVar22 + 0x30) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index2]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x53c,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (puVar22 < this->InstanceTransformDataPtr) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index2]) + 0) >= (void*)(InstanceTransformDataPtr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x53d,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar3 = *(undefined8 *)(puVar22 + 8);
    uVar2 = *(undefined4 *)puVar25;
    uVar6 = *(undefined4 *)(puVar25 + 4);
    uVar7 = *(undefined4 *)(puVar25 + 8);
    uVar8 = *(undefined4 *)(puVar25 + 0xc);
    uVar9 = *(undefined4 *)(puVar25 + 0x10);
    uVar10 = *(undefined4 *)(puVar25 + 0x14);
    uVar11 = *(undefined4 *)(puVar25 + 0x18);
    uVar12 = *(undefined4 *)(puVar25 + 0x1c);
    uVar16 = *(undefined8 *)(puVar25 + 0x20);
    uVar17 = *(undefined8 *)(puVar25 + 0x28);
    *(undefined8 *)puVar25 = *(undefined8 *)puVar22;
    *(undefined8 *)(puVar25 + 8) = uVar3;
    uVar13 = *(undefined4 *)(puVar22 + 0x14);
    uVar14 = *(undefined4 *)(puVar22 + 0x18);
    uVar15 = *(undefined4 *)(puVar22 + 0x1c);
    *(undefined4 *)(puVar25 + 0x10) = *(undefined4 *)(puVar22 + 0x10);
    *(undefined4 *)(puVar25 + 0x14) = uVar13;
    *(undefined4 *)(puVar25 + 0x18) = uVar14;
    *(undefined4 *)(puVar25 + 0x1c) = uVar15;
    uVar13 = *(undefined4 *)(puVar22 + 0x24);
    uVar14 = *(undefined4 *)(puVar22 + 0x28);
    uVar15 = *(undefined4 *)(puVar22 + 0x2c);
    *(undefined4 *)(puVar25 + 0x20) = *(undefined4 *)(puVar22 + 0x20);
    *(undefined4 *)(puVar25 + 0x24) = uVar13;
    *(undefined4 *)(puVar25 + 0x28) = uVar14;
    *(undefined4 *)(puVar25 + 0x2c) = uVar15;
    *(undefined4 *)puVar22 = uVar2;
    *(undefined4 *)(puVar22 + 4) = uVar6;
    *(undefined4 *)(puVar22 + 8) = uVar7;
    *(undefined4 *)(puVar22 + 0xc) = uVar8;
    *(undefined4 *)(puVar22 + 0x10) = uVar9;
    *(undefined4 *)(puVar22 + 0x14) = uVar10;
    *(undefined4 *)(puVar22 + 0x18) = uVar11;
    *(undefined4 *)(puVar22 + 0x1c) = uVar12;
    *(undefined8 *)(puVar22 + 0x20) = uVar16;
    *(undefined8 *)(puVar22 + 0x28) = uVar17;
  }
  else {
    iVar19 = (**(code **)((longlong)*pFVar4 + 0x28))();
    iVar20 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4);
    puVar25 = puVar22 + lVar26 * 0x18;
    if (this->InstanceTransformDataPtr + (uint)(iVar19 * iVar20) < puVar25 + 0x18) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index1]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x52d,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (puVar25 < this->InstanceTransformDataPtr) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index1]) + 0) >= (void*)(InstanceTransformDataPtr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x52e,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar22 = puVar22 + lVar24 * 0x18;
    if (this->InstanceTransformDataPtr + (uint)(iVar19 * iVar20) < puVar22 + 0x18) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index2]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x52f,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (puVar22 < this->InstanceTransformDataPtr) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[Index2]) + 0) >= (void*)(InstanceTransformDataPtr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                          ,0x530,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar2 = *(undefined4 *)(puVar22 + 4);
    uVar6 = *(undefined4 *)(puVar22 + 8);
    uVar7 = *(undefined4 *)(puVar22 + 0xc);
    uVar8 = *(undefined4 *)puVar25;
    uVar9 = *(undefined4 *)(puVar25 + 4);
    uVar10 = *(undefined4 *)(puVar25 + 8);
    uVar11 = *(undefined4 *)(puVar25 + 0xc);
    uVar3 = *(undefined8 *)(puVar25 + 0x10);
    *(undefined4 *)puVar25 = *(undefined4 *)puVar22;
    *(undefined4 *)(puVar25 + 4) = uVar2;
    *(undefined4 *)(puVar25 + 8) = uVar6;
    *(undefined4 *)(puVar25 + 0xc) = uVar7;
    *(undefined8 *)(puVar25 + 0x10) = *(undefined8 *)(puVar22 + 0x10);
    *(undefined4 *)puVar22 = uVar8;
    *(undefined4 *)(puVar22 + 4) = uVar9;
    *(undefined4 *)(puVar22 + 8) = uVar10;
    *(undefined4 *)(puVar22 + 0xc) = uVar11;
    *(undefined8 *)(puVar22 + 0x10) = uVar3;
  }
  pFVar4 = this->InstanceOriginData;
  puVar22 = this->InstanceOriginDataPtr;
  iVar19 = (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4);
  iVar20 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4);
  puVar25 = puVar22 + lVar26 * 0x10;
  if (this->InstanceOriginDataPtr + (uint)(iVar19 * iVar20) < puVar25 + 0x10) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index1]) + 1) <= (void*)(InstanceOriginDataPtr + CurrentSize)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x547,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (puVar25 < this->InstanceOriginDataPtr) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index1]) + 0) >= (void*)(InstanceOriginDataPtr)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x548,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar22 = puVar22 + lVar24 * 0x10;
  if (this->InstanceOriginDataPtr + (uint)(iVar19 * iVar20) < puVar22 + 0x10) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index2]) + 1) <= (void*)(InstanceOriginDataPtr + CurrentSize)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x549,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (puVar22 < this->InstanceOriginDataPtr) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index2]) + 0) >= (void*)(InstanceOriginDataPtr)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x54a,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar2 = *(undefined4 *)puVar25;
  uVar6 = *(undefined4 *)(puVar25 + 4);
  uVar7 = *(undefined4 *)(puVar25 + 8);
  uVar8 = *(undefined4 *)(puVar25 + 0xc);
  uVar9 = *(undefined4 *)(puVar22 + 4);
  uVar10 = *(undefined4 *)(puVar22 + 8);
  uVar11 = *(undefined4 *)(puVar22 + 0xc);
  *(undefined4 *)puVar25 = *(undefined4 *)puVar22;
  *(undefined4 *)(puVar25 + 4) = uVar9;
  *(undefined4 *)(puVar25 + 8) = uVar10;
  *(undefined4 *)(puVar25 + 0xc) = uVar11;
  *(undefined4 *)puVar22 = uVar2;
  *(undefined4 *)(puVar22 + 4) = uVar6;
  *(undefined4 *)(puVar22 + 8) = uVar7;
  *(undefined4 *)(puVar22 + 0xc) = uVar8;
  pFVar4 = this->InstanceLightmapData;
  puVar25 = this->InstanceLightmapDataPtr;
  iVar19 = (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4);
  iVar20 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4);
  puVar22 = puVar25 + lVar26 * 8;
  if (this->InstanceLightmapDataPtr + (uint)(iVar19 * iVar20) < puVar22 + 8) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index1]) + 1) <= (void*)(InstanceLightmapDataPtr + CurrentSize)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x553,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (puVar22 < this->InstanceLightmapDataPtr) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index1]) + 0) >= (void*)(InstanceLightmapDataPtr)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x554,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar25 = puVar25 + lVar24 * 8;
  if (this->InstanceLightmapDataPtr + (uint)(iVar19 * iVar20) < puVar25 + 8) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index2]) + 1) <= (void*)(InstanceLightmapDataPtr + CurrentSize)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x555,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (puVar25 < this->InstanceLightmapDataPtr) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)((&ElementData[Index2]) + 0) >= (void*)(InstanceLightmapDataPtr)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                        ,0x556,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = *(undefined8 *)puVar22;
  *(undefined8 *)puVar22 = *(undefined8 *)puVar25;
  *(undefined8 *)puVar25 = uVar3;
  pFVar4 = this->InstanceCustomData;
  puVar22 = this->InstanceCustomDataPtr;
  iVar20 = (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4);
  iVar21 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4);
  iVar19 = this->NumCustomDataFloats;
  iVar23 = 0;
  if (0 < iVar19) {
    do {
      puVar25 = puVar22 + (longlong)(iVar19 * param_1 + iVar23) * 4;
      if (this->InstanceCustomDataPtr + (uint)(iVar21 * iVar20) < puVar25 + 4) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[CustomDataIndex1]) + 1) <= (void*)(InstanceCustomDataPtr + CurrentSize)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                            ,0x565,L"");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (puVar25 < this->InstanceCustomDataPtr) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[CustomDataIndex1]) + 0) >= (void*)(InstanceCustomDataPtr)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                            ,0x566,L"");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar1 = puVar22 + (longlong)(iVar19 * param_2 + iVar23) * 4;
      if (this->InstanceCustomDataPtr + (uint)(iVar21 * iVar20) < puVar1 + 4) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[CustomDataIndex2]) + 1) <= (void*)(InstanceCustomDataPtr + CurrentSize)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                            ,0x567,L"");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (puVar1 < this->InstanceCustomDataPtr) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[CustomDataIndex2]) + 0) >= (void*)(InstanceCustomDataPtr)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                            ,0x568,L"");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = *(undefined4 *)puVar25;
      iVar23 = iVar23 + 1;
      *(undefined4 *)puVar25 = *(undefined4 *)puVar1;
      *(undefined4 *)puVar1 = uVar2;
      iVar19 = this->NumCustomDataFloats;
    } while (iVar23 < iVar19);
  }
  return;
}

// operator() @ 1504defb0

bool __thiscall
`FStaticMeshInstanceData::SetInstanceOriginInternal'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9111849448622782915>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9111849448622782915>,
                       &`public:___cdecl_`private:_void___cdecl_FStaticMeshInstanceData::SetInstanceOriginInternal(int,UE::Math::TVector4<float>_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504df020

bool __thiscall
`FStaticMeshInstanceData::SetInstanceOriginInternal'::__l3::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9111849448622782914>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9111849448622782914>,
                       &`public:___cdecl_`private:_void___cdecl_FStaticMeshInstanceData::SetInstanceOriginInternal(int,UE::Math::TVector4<float>_const&___ptr64)const___ptr64'::`3'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

