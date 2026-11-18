// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// Serialize @ 147d28070

void __thiscall FStaticMeshInstanceData::Serialize(FStaticMeshInstanceData *this,FArchive *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uchar *puVar6;
  longlong lVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  uint local_res8 [2];
  undefined1 local_58 [24];
  longlong local_40;
  bool local_38;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  lVar7 = *(longlong *)&param_1->field_0x68;
  iVar11 = 0;
  if ((((lVar7 == 0) || (*(longlong *)(lVar7 + 0x10) == 0)) || (this->bUseHalfFloat == false)) ||
     (cVar4 = (**(code **)(**(longlong **)(lVar7 + 8) + 200))(*(longlong **)(lVar7 + 8),0x10),
     cVar4 != '\0')) {
    bVar3 = false;
    ::operator<<(param_1,&this->bUseHalfFloat);
  }
  else {
    puVar1 = *(ulonglong **)&param_1->field_0x8;
    bVar3 = true;
    if (puVar1[1] < *puVar1 + 4) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar1 = *puVar1 + 4;
    }
  }
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->NumInstances);
    }
  }
  else {
    this->NumInstances = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     0x27 < iVar5)) {
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->NumCustomDataFloats);
      }
    }
    else {
      this->NumCustomDataFloats = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    lVar7 = (longlong)this->NumInstances * (longlong)this->NumCustomDataFloats;
    if (lVar7 - (int)lVar7 != 0) {
      this->NumCustomDataFloats = 0;
      `FStaticMeshInstanceData::Serialize'::__l16::<lambda_1>::operator()(local_res8);
    }
    AllocateBuffers(this,this->NumInstances,None);
  }
  (**(code **)((longlong)*this->InstanceOriginData + 0x40))(this->InstanceOriginData,param_1);
  (**(code **)((longlong)*this->InstanceLightmapData + 0x40))(this->InstanceLightmapData,param_1);
  if (bVar3) {
    local_58._0_8_ =
         &___7__TStaticMeshVertexData_U__FInstanceTransformMatrix_M_FStaticMeshInstanceData____6B_;
    local_58._16_8_ = (undefined1 *)0x0;
    local_58._8_8_ =
         &___7__TResourceArray_U__FInstanceTransformMatrix_M_FStaticMeshInstanceData___0A___6B_;
    local_40 = 0;
    local_38 = false;
    TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::ResizeBuffer
              ((TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *)
               local_58,this->NumInstances,None);
    lVar7 = (**(code **)((longlong)*this->InstanceTransformData + 0x30))();
    puVar9 = (undefined1 *)local_58._16_8_;
    if ((local_58._16_8_ & 1) != 0) {
      puVar9 = local_58 + ((longlong)local_58._16_8_ >> 0x18) + 0x10;
    }
    if (0 < this->NumInstances) {
      pfVar10 = (float *)(puVar9 + 8);
      puVar8 = (ushort *)(lVar7 + 4);
      do {
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + -2);
        pfVar10[-2] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + -1);
        pfVar10[-1] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8);
        *pfVar10 = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 1);
        pfVar10[1] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 2);
        pfVar10[2] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 3);
        pfVar10[3] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 4);
        pfVar10[4] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 5);
        pfVar10[5] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 6);
        pfVar10[6] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 7);
        pfVar10[7] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 8);
        pfVar10[8] = fVar12;
        fVar12 = FGenericPlatformMath::LoadHalf(puVar8 + 9);
        pfVar10[9] = fVar12;
        pfVar10 = pfVar10 + 0xc;
        puVar8 = puVar8 + 0xc;
        iVar11 = iVar11 + 1;
      } while (iVar11 < this->NumInstances);
    }
    TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>::
    BulkSerialize((TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
                   *)(local_58 + 0x10),param_1,false);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)(local_58 + 0x10));
  }
  else {
    (**(code **)((longlong)*this->InstanceTransformData + 0x40))
              (this->InstanceTransformData,param_1,0);
  }
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     0x27 < iVar11)) {
    (**(code **)((longlong)*this->InstanceCustomData + 0x40))(this->InstanceCustomData,param_1,0);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    puVar6 = (uchar *)(**(code **)((longlong)*this->InstanceOriginData + 0x30))();
    this->InstanceOriginDataPtr = puVar6;
    puVar6 = (uchar *)(**(code **)((longlong)*this->InstanceLightmapData + 0x30))();
    this->InstanceLightmapDataPtr = puVar6;
    puVar6 = (uchar *)(**(code **)((longlong)*this->InstanceTransformData + 0x30))();
    this->InstanceTransformDataPtr = puVar6;
    puVar6 = (uchar *)(**(code **)((longlong)*this->InstanceCustomData + 0x30))();
    this->InstanceCustomDataPtr = puVar6;
  }
  return;
}

// SetInstanceCustomDataInternal @ 147d2a030

void __thiscall
FStaticMeshInstanceData::SetInstanceCustomDataInternal
          (FStaticMeshInstanceData *this,int param_1,int param_2,float param_3)

{
  float *pfVar1;
  uchar *puVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 < this->NumCustomDataFloats) {
    puVar2 = this->InstanceCustomDataPtr;
    pFVar3 = this->InstanceCustomData;
    iVar6 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3);
    iVar7 = (**(code **)((longlong)*pFVar3 + 0x28))(pFVar3);
    pfVar1 = (float *)(puVar2 + (longlong)(param_2 + param_1 * this->NumCustomDataFloats) * 4);
    if ((float *)((ulonglong)(uint)(iVar7 * iVar6) + (longlong)this->InstanceCustomDataPtr) <
        pfVar1 + 1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9111849448622782879>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                         ,0x661,
                         "(void*)((&ElementData[CustomDataIndex]) + 1) <= (void*)(InstanceCustomDataPtr + CurrentSize)"
                        );
      if (!bVar5) {
        return;
      }
code_r0x000147d2a11e:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pfVar1 < this->InstanceCustomDataPtr) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9111849448622782878>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                         ,0x662,
                         "(void*)((&ElementData[CustomDataIndex]) + 0) >= (void*)(InstanceCustomDataPtr)"
                        );
      if (bVar5) goto code_r0x000147d2a11e;
    }
    else {
      *pfVar1 = param_3;
    }
  }
  return;
}

// SetInstanceLightMapDataInternal @ 147d2a150

void __thiscall
FStaticMeshInstanceData::SetInstanceLightMapDataInternal
          (FStaticMeshInstanceData *this,int param_1,TVector4<float> *param_2)

{
  FStaticMeshVertexDataInterface *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  
  pFVar1 = this->InstanceLightmapData;
  puVar2 = this->InstanceLightmapDataPtr;
  iVar7 = (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1);
  iVar8 = (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1);
  fVar4 = __real_46fffe00;
  puVar2 = puVar2 + (longlong)param_1 * 8;
  if (this->InstanceLightmapDataPtr + (uint)(iVar8 * iVar7) < puVar2 + 8) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782903>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x649,
                       "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceLightmapDataPtr + CurrentSize)"
                      );
    if (bVar5) {
code_r0x000147d2a20c:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (puVar2 < this->InstanceLightmapDataPtr) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782902>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x64a,
                       "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceLightmapDataPtr)"
                      );
    if (bVar5) goto code_r0x000147d2a20c;
  }
  else {
    iVar8 = (int)((param_2->field0_0x0)._s_0.X * __real_46fffe00);
    iVar7 = 0x7fff;
    if (iVar8 < 0x7fff) {
      iVar7 = iVar8;
    }
    uVar6 = 0x8000;
    if (-0x8000 < iVar7) {
      uVar6 = (short)iVar7;
    }
    *(undefined2 *)puVar2 = uVar6;
    iVar8 = (int)((param_2->field0_0x0)._s_0.Y * fVar4);
    iVar7 = 0x7fff;
    if (iVar8 < 0x7fff) {
      iVar7 = iVar8;
    }
    uVar6 = 0x8000;
    if (-0x8000 < iVar7) {
      uVar6 = (short)iVar7;
    }
    *(undefined2 *)(puVar2 + 2) = uVar6;
    iVar8 = (int)((param_2->field0_0x0)._s_0.Z * fVar4);
    iVar7 = 0x7fff;
    if (iVar8 < 0x7fff) {
      iVar7 = iVar8;
    }
    uVar6 = 0x8000;
    if (-0x8000 < iVar7) {
      uVar6 = (undefined2)iVar7;
    }
    *(undefined2 *)(puVar2 + 4) = uVar6;
    iVar8 = (int)((param_2->field0_0x0)._s_0.W * fVar4);
    iVar7 = 0x7fff;
    if (iVar8 < 0x7fff) {
      iVar7 = iVar8;
    }
    uVar6 = 0x8000;
    if (-0x8000 < iVar7) {
      uVar6 = (short)iVar7;
    }
    *(undefined2 *)(puVar2 + 6) = uVar6;
  }
  return;
}

// GetInstanceTransformInternal<FFloat16> @ 147d6b0b0

void __thiscall
FStaticMeshInstanceData::GetInstanceTransformInternal<FFloat16>
          (FStaticMeshInstanceData *this,int param_1,TVector4<float> (*param_2) [3])

{
  ushort *puVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  
  pFVar2 = this->InstanceTransformData;
  puVar3 = this->InstanceTransformDataPtr;
  lVar8 = (longlong)param_1;
  iVar6 = (**(code **)((longlong)*pFVar2 + 0x28))(pFVar2);
  iVar7 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  puVar1 = (ushort *)(puVar3 + lVar8 * 0x18);
  if ((ushort *)((ulonglong)(uint)(iVar7 * iVar6) + (longlong)this->InstanceTransformDataPtr) <
      puVar1 + 0xc) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622783029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x5cb,
                       "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                      );
    if (bVar5) {
code_r0x000147d6b179:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (this->InstanceTransformDataPtr <= puVar1) {
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1);
      (*param_2)[0].field0_0x0._s_0.X = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 1);
      (*param_2)[0].field0_0x0._s_0.Y = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf((ushort *)(puVar3 + lVar8 * 0x18 + 4));
      (*param_2)[0].field0_0x0._s_0.Z = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 3);
      (*param_2)[0].field0_0x0._s_0.W = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 4);
      (*param_2)[1].field0_0x0._s_0.X = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 5);
      (*param_2)[1].field0_0x0._s_0.Y = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf((ushort *)(puVar3 + lVar8 * 0x18 + 0xc));
      (*param_2)[1].field0_0x0._s_0.Z = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 7);
      (*param_2)[1].field0_0x0._s_0.W = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 8);
      (*param_2)[2].field0_0x0._s_0.X = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 9);
      (*param_2)[2].field0_0x0._s_0.Y = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf((ushort *)(puVar3 + lVar8 * 0x18 + 0x14));
      (*param_2)[2].field0_0x0._s_0.Z = fVar9;
      fVar9 = FGenericPlatformMath::LoadHalf(puVar1 + 0xb);
      (*param_2)[2].field0_0x0._s_0.W = fVar9;
      return;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622783028>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x5cc,
                       "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceTransformDataPtr)"
                      );
    if (bVar5) goto code_r0x000147d6b179;
  }
  *(undefined8 *)&(*param_2)[0].field0_0x0 = 0x3f800000;
  *(undefined8 *)((longlong)&(*param_2)[0].field0_0x0 + 8) = 0;
  (*param_2)[1].field0_0x0._s_0.X = 0.0;
  *(undefined8 *)((longlong)&(*param_2)[1].field0_0x0 + 4) = 0x3f800000;
  *(undefined8 *)((longlong)&(*param_2)[1].field0_0x0 + 0xc) = 0;
  (*param_2)[2].field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)((longlong)&(*param_2)[2].field0_0x0 + 8) = 0x3f800000;
  return;
}

// SetInstanceTransformInternal<float> @ 147d72f60

void __thiscall
FStaticMeshInstanceData::SetInstanceTransformInternal<float>
          (FStaticMeshInstanceData *this,int param_1,TVector4<float> *param_2)

{
  FStaticMeshVertexDataInterface *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  
  pFVar1 = this->InstanceTransformData;
  puVar2 = this->InstanceTransformDataPtr;
  iVar5 = (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1);
  iVar6 = (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1);
  pfVar7 = (float *)(puVar2 + (longlong)param_1 * 0x30);
  if ((float *)((longlong)this->InstanceTransformDataPtr + (ulonglong)(uint)(iVar6 * iVar5)) <
      pfVar7 + 0xc) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782940>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x624,
                       "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                      );
    if (bVar4) {
code_r0x000147d7301f:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (pfVar7 < this->InstanceTransformDataPtr) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x625,
                       "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceTransformDataPtr)"
                      );
    if (bVar4) goto code_r0x000147d7301f;
  }
  else {
    *pfVar7 = (param_2->field0_0x0)._s_0.X;
    pfVar7[1] = (param_2->field0_0x0)._s_0.Y;
    pfVar7[2] = (param_2->field0_0x0)._s_0.Z;
    pfVar7[3] = (param_2->field0_0x0)._s_0.W;
    pfVar7[4] = param_2[1].field0_0x0._s_0.X;
    pfVar7[5] = param_2[1].field0_0x0._s_0.Y;
    pfVar7[6] = param_2[1].field0_0x0._s_0.Z;
    pfVar7[7] = param_2[1].field0_0x0._s_0.W;
    pfVar7[8] = param_2[2].field0_0x0._s_0.X;
    pfVar7[9] = param_2[2].field0_0x0._s_0.Y;
    pfVar7[10] = param_2[2].field0_0x0._s_0.Z;
    pfVar7[0xb] = param_2[2].field0_0x0._s_0.W;
  }
  return;
}

// SetInstanceTransformInternal<FFloat16> @ 147d730a0

void __thiscall
FStaticMeshInstanceData::SetInstanceTransformInternal<FFloat16>
          (FStaticMeshInstanceData *this,int param_1,TVector4<float> *param_2)

{
  ushort *puVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  pFVar2 = this->InstanceTransformData;
  puVar3 = this->InstanceTransformDataPtr;
  iVar6 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  iVar7 = (**(code **)((longlong)*pFVar2 + 0x28))(pFVar2);
  puVar1 = (ushort *)(puVar3 + (longlong)param_1 * 0x18);
  if ((ushort *)((ulonglong)(uint)(iVar7 * iVar6) + (longlong)this->InstanceTransformDataPtr) <
      puVar1 + 0xc) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782940>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x624,
                       "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                      );
    if (bVar5) {
code_r0x000147d73167:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (puVar1 < this->InstanceTransformDataPtr) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x625,
                       "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceTransformDataPtr)"
                      );
    if (bVar5) goto code_r0x000147d73167;
  }
  else {
    FGenericPlatformMath::StoreHalf(puVar1,(param_2->field0_0x0)._s_0.X);
    FGenericPlatformMath::StoreHalf(puVar1 + 1,(param_2->field0_0x0)._s_0.Y);
    FGenericPlatformMath::StoreHalf(puVar1 + 2,(param_2->field0_0x0)._s_0.Z);
    FGenericPlatformMath::StoreHalf(puVar1 + 3,(param_2->field0_0x0)._s_0.W);
    FGenericPlatformMath::StoreHalf(puVar1 + 4,param_2[1].field0_0x0._s_0.X);
    FGenericPlatformMath::StoreHalf(puVar1 + 5,param_2[1].field0_0x0._s_0.Y);
    FGenericPlatformMath::StoreHalf(puVar1 + 6,param_2[1].field0_0x0._s_0.Z);
    FGenericPlatformMath::StoreHalf(puVar1 + 7,param_2[1].field0_0x0._s_0.W);
    FGenericPlatformMath::StoreHalf(puVar1 + 8,param_2[2].field0_0x0._s_0.X);
    FGenericPlatformMath::StoreHalf(puVar1 + 9,param_2[2].field0_0x0._s_0.Y);
    FGenericPlatformMath::StoreHalf(puVar1 + 10,param_2[2].field0_0x0._s_0.Z);
    FGenericPlatformMath::StoreHalf(puVar1 + 0xb,param_2[2].field0_0x0._s_0.W);
  }
  return;
}

// GetInstanceCustomDataInternal @ 147da5e10

void __thiscall
FStaticMeshInstanceData::GetInstanceCustomDataInternal
          (FStaticMeshInstanceData *this,int param_1,TArrayView<float,int> *param_2)

{
  uchar *puVar1;
  undefined4 uVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((param_2->ArrayNum != this->NumCustomDataFloats) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutCustomData.Num() == NumCustomDataFloats",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                         ,0x60d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = this->InstanceCustomData;
  puVar4 = this->InstanceCustomDataPtr;
  iVar7 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3);
  iVar8 = (**(code **)((longlong)*pFVar3 + 0x28))(pFVar3);
  iVar10 = this->NumCustomDataFloats;
  uVar11 = 0;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      puVar1 = puVar4 + (longlong)(int)(uVar11 + iVar10 * param_1) * 4;
      if (this->InstanceCustomDataPtr + (uint)(iVar8 * iVar7) < puVar1 + 4) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9111849448622782954>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                           ,0x616,
                           "(void*)((&ElementData[CustomDataIndex]) + 1) <= (void*)(InstanceCustomDataPtr + CurrentSize)"
                          );
        if (bVar6) {
code_r0x000147da5f20:
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (puVar1 < this->InstanceCustomDataPtr) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9111849448622782953>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                           ,0x617,
                           "(void*)((&ElementData[CustomDataIndex]) + 0) >= (void*)(InstanceCustomDataPtr)"
                          );
        if (bVar6) goto code_r0x000147da5f20;
      }
      else {
        uVar2 = *(undefined4 *)puVar1;
        uVar9 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(lVar12 + (longlong)param_2->DataPtr) = uVar2;
      }
      iVar10 = this->NumCustomDataFloats;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)uVar11 < iVar10);
  }
  return;
}

// GetInstanceOriginInternal @ 147da5fc0

void __thiscall
FStaticMeshInstanceData::GetInstanceOriginInternal
          (FStaticMeshInstanceData *this,int param_1,TVector4<float> *param_2)

{
  FStaticMeshVertexDataInterface *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pFVar1 = this->InstanceOriginData;
  puVar2 = this->InstanceOriginDataPtr;
  iVar5 = (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1);
  iVar6 = (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1);
  pfVar7 = (float *)(puVar2 + (longlong)param_1 * 0x10);
  if ((float *)((longlong)this->InstanceOriginDataPtr + (ulonglong)(uint)(iVar6 * iVar5)) <
      pfVar7 + 4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782998>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x5ea,
                       "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceOriginDataPtr + CurrentSize)"
                      );
    if (bVar4) {
code_r0x000147da607d:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  else if (pfVar7 < this->InstanceOriginDataPtr) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111849448622782997>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x5eb,
                       "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceOriginDataPtr)"
                      );
    if (bVar4) goto code_r0x000147da607d;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar8 = *pfVar7;
    fVar9 = pfVar7[1];
    fVar10 = pfVar7[2];
    fVar11 = pfVar7[3];
  }
  (param_2->field0_0x0)._s_0.X = fVar8;
  (param_2->field0_0x0)._s_0.Y = fVar9;
  (param_2->field0_0x0)._s_0.Z = fVar10;
  (param_2->field0_0x0)._s_0.W = fVar11;
  return;
}

// GetInstanceTransform @ 147da60b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FStaticMeshInstanceData::GetInstanceTransform
          (FStaticMeshInstanceData *this,int param_1,FRenderTransform *param_2)

{
  uchar *puVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStackY_b8 [32];
  TVector4<float>_u_0 local_88;
  float local_78 [4];
  TVector4<float>_u_0 local_68;
  TVector4<float>_u_0 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_78._8_8_ = _UNK_150689648;
  local_68._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_68._8_8_ = _UNK_150689648;
  local_58._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_58._8_8_ = _UNK_150689648;
  if (this->bUseHalfFloat == false) {
    puVar1 = this->InstanceTransformDataPtr;
    pFVar2 = this->InstanceTransformData;
    iVar5 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
    iVar6 = (**(code **)((longlong)*pFVar2 + 0x28))(pFVar2);
    pfVar7 = (float *)(puVar1 + (longlong)param_1 * 0x30);
    if ((float *)((ulonglong)(uint)(iVar6 * iVar5) + (longlong)this->InstanceTransformDataPtr) <
        pfVar7 + 0xc) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9111849448622783029>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                         ,0x5cb,
                         "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceTransformDataPtr + CurrentSize)"
                        );
      if (bVar4) {
code_r0x000147da61d8:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (this->InstanceTransformDataPtr <= pfVar7) {
        fVar8 = *pfVar7;
        local_78._0_8_ = *(undefined8 *)pfVar7;
        local_78._8_8_ = *(undefined8 *)(pfVar7 + 2);
        local_68._0_8_ = *(undefined8 *)(pfVar7 + 4);
        local_68._8_8_ = *(undefined8 *)(pfVar7 + 6);
        local_58._0_8_ = *(undefined8 *)(pfVar7 + 8);
        local_58._8_8_ = *(undefined8 *)(pfVar7 + 10);
        goto LAB_147da628b;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9111849448622783028>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                         ,0x5cc,
                         "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceTransformDataPtr)"
                        );
      if (bVar4) goto code_r0x000147da61d8;
    }
    local_78[0] = __real_3f800000;
    local_78._8_8_ = local_78._8_8_ & 0xffffffff;
    local_68._s_0.Y = (float)0x3f800000;
    local_68._8_8_ = local_68._8_8_ & 0xffffffff;
    local_58._8_8_ = 0x3f800000;
    fVar8 = __real_3f800000;
  }
  else {
    GetInstanceTransformInternal<FFloat16>(this,param_1,(TVector4<float> (*) [3])local_78);
    fVar8 = local_78[0];
  }
LAB_147da628b:
  param_2->TransformRows[0].field0_0x0._s_0.X = fVar8;
  param_2->TransformRows[0].field0_0x0._s_0.Y = local_78[1];
  param_2->TransformRows[0].field0_0x0._s_0.Z = local_78[2];
  param_2->TransformRows[1].field0_0x0._s_0.X = local_68._s_0.X;
  param_2->TransformRows[1].field0_0x0._s_0.Y = local_68._s_0.Y;
  param_2->TransformRows[1].field0_0x0._s_0.Z = local_68._s_0.Z;
  param_2->TransformRows[2].field0_0x0._s_0.X = local_58._s_0.X;
  param_2->TransformRows[2].field0_0x0._s_0.Y = local_58._s_0.Y;
  param_2->TransformRows[2].field0_0x0._s_0.Z = local_58._s_0.Z;
  local_88._0_8_ = 0;
  local_88._s_0.Z = 0.0;
  GetInstanceOriginInternal(this,param_1,(TVector4<float> *)&local_88._s_0);
  (param_2->Origin).field0_0x0._s_0.X = local_88._s_0.X;
  (param_2->Origin).field0_0x0._s_0.Y = local_88._s_0.Y;
  (param_2->Origin).field0_0x0._s_0.Z = local_88._s_0.Z;
  return;
}

// SetInstanceOriginInternal @ 147dc02e0

void __thiscall
FStaticMeshInstanceData::SetInstanceOriginInternal
          (FStaticMeshInstanceData *this,int param_1,TVector4<float> *param_2)

{
  FStaticMeshVertexDataInterface *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint local_res8 [2];
  int local_res10 [4];
  uchar *local_res20;
  int *local_48;
  uint *local_40;
  uchar **local_38;
  FStaticMeshInstanceData *local_30;
  
  local_res20 = this->InstanceOriginDataPtr;
  pFVar1 = this->InstanceOriginData;
  local_res10[0] = param_1;
  iVar4 = (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1);
  iVar5 = (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1);
  local_res8[0] = iVar5 * iVar4;
  if (this->InstanceOriginDataPtr + local_res8[0] <
      local_res20 + ((longlong)local_res10[0] + 1) * 0x10) {
    local_48 = local_res10;
    local_40 = local_res8;
    local_38 = &local_res20;
    local_30 = this;
    bVar3 = `FStaticMeshInstanceData::SetInstanceOriginInternal'::__l3::<lambda_1>::operator()
                      (&local_48);
    if (!bVar3) {
      return;
    }
  }
  if (local_res20 + (longlong)local_res10[0] * 0x10 < this->InstanceOriginDataPtr) {
    local_48 = local_res10;
    local_40 = local_res8;
    local_38 = &local_res20;
    local_30 = this;
    bVar3 = `FStaticMeshInstanceData::SetInstanceOriginInternal'::__l3::<lambda_2>::operator()
                      (&local_48);
    if (!bVar3) {
      return;
    }
  }
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)(local_res20 + (longlong)local_res10[0] * 0x10) =
       *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)(local_res20 + (longlong)local_res10[0] * 0x10 + 8) = uVar2;
  return;
}

// operator() @ 15051b710

bool __thiscall `FStaticMeshInstanceData::Serialize'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1853197200457204350>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1853197200457204350>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

