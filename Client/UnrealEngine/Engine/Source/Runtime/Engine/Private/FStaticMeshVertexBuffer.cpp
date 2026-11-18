// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// SetVertexUV @ 1478f6460

void __thiscall
FStaticMeshVertexBuffer::SetVertexUV
          (FStaticMeshVertexBuffer *this,uint param_1,uint param_2,TVector2<float> *param_3,
          bool param_4)

{
  TVector2<float>_u_0 *pTVar1;
  FFloat16 *this_00;
  float fVar2;
  float fVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FFloat16 local_res8 [4];
  FFloat16 local_38 [16];
  
  puVar4 = this->TexcoordDataPtr;
  lVar7 = (ulonglong)param_2 + (ulonglong)this->NumTexCoords * (ulonglong)param_1;
  if (this->bUseFullPrecisionUVs != false) {
    pTVar1 = (TVector2<float>_u_0 *)(puVar4 + lVar7 * 8);
    lVar7 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
    if ((TVector2<float>_u_0 *)(puVar4 + lVar7) < pTVar1 + 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x15d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (pTVar1 < (TVector2<float>_u_0 *)this->TexcoordDataPtr) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x15e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar1->_s_0 = (TVector2<float>_u_0_s_0)param_3->field0_0x0;
    return;
  }
  this_00 = (FFloat16 *)(puVar4 + lVar7 * 4);
  lVar7 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
  if ((FFloat16 *)(puVar4 + lVar7) < this_00 + 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                       ,0x166,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this_00 < (FFloat16 *)this->TexcoordDataPtr) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                       ,0x167,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar2 = (param_3->field0_0x0)._s_0.X;
  if (param_4) {
    fVar3 = (param_3->field0_0x0)._s_0.Y;
    FFloat16::SetTruncate(this_00,fVar2);
    FFloat16::SetTruncate(this_00 + 1,fVar3);
    return;
  }
  local_res8[0].Encoded = 0;
  FGenericPlatformMath::StoreHalf(&local_res8[0].Encoded,fVar2);
  this_00->Encoded = local_res8[0].Encoded;
  local_38[0].Encoded = 0;
  FGenericPlatformMath::StoreHalf(&local_38[0].Encoded,(param_3->field0_0x0)._s_0.Y);
  this_00[1].Encoded = local_38[0].Encoded;
  return;
}

// VertexTangentX @ 14797c560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
FStaticMeshVertexBuffer::VertexTangentX
          (FStaticMeshVertexBuffer *this,TVector4<float> *__return_storage_ptr__,uint param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TVector4<float> *pTVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar2 = this->TangentsDataPtr;
  if (this->bUseHighPrecisionTangentBasis == false) {
    puVar1 = puVar2 + (ulonglong)param_1 * 8;
    lVar5 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if (puVar2 + lVar5 < puVar1 + 8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0xec,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if (puVar1 < this->TangentsDataPtr) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0xed,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    auVar7 = pmovsxbd(in_XMM1,*(undefined4 *)puVar1);
    fVar8 = (float)auVar7._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar9 = (float)auVar7._4_4_ * _UNK_151040074;
    fVar10 = (float)auVar7._8_4_ * _UNK_151040078;
  }
  else {
    puVar1 = puVar2 + (ulonglong)param_1 * 0x10;
    lVar5 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if (puVar2 + lVar5 < puVar1 + 0x10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0xec,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if (puVar1 < this->TangentsDataPtr) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0xed,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    auVar7 = pmovsxwd(in_XMM1,*(undefined8 *)puVar1);
    fVar8 = (float)auVar7._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar9 = (float)auVar7._4_4_ * _UNK_150d565e4;
    fVar10 = (float)auVar7._8_4_ * _UNK_150d565e8;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// VertexTangentY @ 14797c6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
FStaticMeshVertexBuffer::VertexTangentY
          (FStaticMeshVertexBuffer *this,TVector<float> *__return_storage_ptr__,uint param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TVector<float> *pTVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = this->TangentsDataPtr;
  if (this->bUseHighPrecisionTangentBasis == false) {
    puVar1 = puVar2 + (ulonglong)param_1 * 8;
    lVar5 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if (puVar2 + lVar5 < puVar1 + 8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x11c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if (puVar1 < this->TangentsDataPtr) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x11d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    auVar7 = pmovsxbd(in_XMM1,*(undefined4 *)puVar1);
    auVar8 = pmovsxbd(auVar7,*(undefined4 *)(puVar1 + 4));
    fVar9 = (float)auVar7._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar11 = (float)auVar7._4_4_ * _UNK_151040074;
    fVar13 = (float)auVar7._8_4_ * _UNK_151040078;
    fVar10 = (float)auVar8._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar12 = (float)auVar8._4_4_ * _UNK_151040074;
    fVar14 = (float)auVar8._8_4_ * _UNK_151040078;
    fVar15 = (float)auVar8._12_4_ * _UNK_15104007c;
  }
  else {
    puVar1 = puVar2 + (ulonglong)param_1 * 0x10;
    lVar5 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if (puVar2 + lVar5 < puVar1 + 0x10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x11c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if (puVar1 < this->TangentsDataPtr) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x11d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    auVar7 = pmovsxwd(in_XMM1,*(undefined8 *)puVar1);
    auVar8 = pmovsxwd(auVar7,*(undefined8 *)(puVar1 + 8));
    fVar9 = (float)auVar7._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar11 = (float)auVar7._4_4_ * _UNK_150d565e4;
    fVar13 = (float)auVar7._8_4_ * _UNK_150d565e8;
    fVar10 = (float)auVar8._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar12 = (float)auVar8._4_4_ * _UNK_150d565e4;
    fVar14 = (float)auVar8._8_4_ * _UNK_150d565e8;
    fVar15 = (float)auVar8._12_4_ * _UNK_150d565ec;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (fVar13 * fVar12 - fVar14 * fVar11) * fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (fVar14 * fVar9 - fVar13 * fVar10) * fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (fVar10 * fVar11 - fVar12 * fVar9) * fVar15;
  return __return_storage_ptr__;
}

// FStaticMeshVertexBuffer @ 148442ec0

FStaticMeshVertexBuffer * __thiscall
FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(FStaticMeshVertexBuffer *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FStaticMeshVertexBuffer__6B_;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->TangentsVertexBuffer);
  *(undefined ***)&this->TangentsVertexBuffer =
       &___7FTangentsVertexBuffer_FStaticMeshVertexBuffer__6B_;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->TexCoordVertexBuffer);
  *(undefined ***)&this->TexCoordVertexBuffer =
       &___7FTexcoordVertexBuffer_FStaticMeshVertexBuffer__6B_;
  this->TangentsData = (FStaticMeshVertexDataInterface *)0x0;
  (this->TangentsSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->TexcoordData = (FStaticMeshVertexDataInterface *)0x0;
  (this->TextureCoordinatesSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->TangentsDataPtr = (uchar *)0x0;
  this->TexcoordDataPtr = (uchar *)0x0;
  this->NumTexCoords = 0;
  this->NumVertices = 0;
  this->bUseFullPrecisionUVs = false;
  this->bUseHighPrecisionTangentBasis = false;
  this->NeedsCPUAccess = true;
  return this;
}

// ~FStaticMeshVertexBuffer @ 1484464e0

void __thiscall FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(FStaticMeshVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  this->_padding_ = (longlong)&___7FStaticMeshVertexBuffer__6B_;
  pFVar1 = this->TangentsData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->TangentsData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = this->TexcoordData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->TexcoordData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar2 = (this->TextureCoordinatesSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->TangentsSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TexCoordVertexBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TangentsVertexBuffer);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator= @ 148447dd0

void __thiscall
FStaticMeshVertexBuffer::operator=(FStaticMeshVertexBuffer *this,FStaticMeshVertexBuffer *param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->TangentsData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->TangentsData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = this->TexcoordData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->TexcoordData = (FStaticMeshVertexDataInterface *)0x0;
  }
  this->bUseFullPrecisionUVs = param_1->bUseFullPrecisionUVs;
  this->bUseHighPrecisionTangentBasis = param_1->bUseHighPrecisionTangentBasis;
  return;
}

// AllocateData @ 148452420

void __thiscall FStaticMeshVertexBuffer::AllocateData(FStaticMeshVertexBuffer *this,bool param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  undefined **ppuVar4;
  
  pFVar3 = (FStaticMeshVertexDataInterface *)0x0;
  pFVar2 = this->TangentsData;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
    this->TangentsData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar2 = this->TexcoordData;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
    this->TexcoordData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar2 = pFVar3;
  if (this->bUseHighPrecisionTangentBasis == false) {
    this->TangentsStride = 8;
    pFVar1 = ::operator_new(0x28);
    if (pFVar1 == (FStaticMeshVertexDataInterface *)0x0) goto LAB_1484524da;
    *pFVar1 = (FStaticMeshVertexDataInterface)
              &___7__TStaticMeshVertexData_U__TStaticMeshVertexTangentDatum_UFPackedNormal______6B_;
    ppuVar4 = &___7__TResourceArray_U__TStaticMeshVertexTangentDatum_UFPackedNormal_____0A___6B_;
  }
  else {
    this->TangentsStride = 0x10;
    pFVar1 = ::operator_new(0x28);
    if (pFVar1 == (FStaticMeshVertexDataInterface *)0x0) goto LAB_1484524da;
    *pFVar1 = (FStaticMeshVertexDataInterface)
              &___7__TStaticMeshVertexData_U__TStaticMeshVertexTangentDatum_UFPackedRGBA16N______6B_
    ;
    ppuVar4 = &___7__TResourceArray_U__TStaticMeshVertexTangentDatum_UFPackedRGBA16N_____0A___6B_;
  }
  *(bool *)(pFVar1 + 4) = param_1;
  pFVar1[1] = (FStaticMeshVertexDataInterface)ppuVar4;
  pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
  pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
  pFVar2 = pFVar1;
LAB_1484524da:
  this->TangentsData = pFVar2;
  if (this->bUseFullPrecisionUVs == false) {
    this->TexcoordStride = 4;
    pFVar2 = ::operator_new(0x28);
    if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
      pFVar2[2] = (FStaticMeshVertexDataInterface)0x0;
      *pFVar2 = (FStaticMeshVertexDataInterface)
                &___7__TStaticMeshVertexData_U__TStaticMeshVertexUVsDatum_UFVector2DHalf______6B_;
      pFVar2[1] = (FStaticMeshVertexDataInterface)
                  &___7__TResourceArray_U__TStaticMeshVertexUVsDatum_UFVector2DHalf_____0A___6B_;
      pFVar2[3] = (FStaticMeshVertexDataInterface)0x0;
      *(bool *)(pFVar2 + 4) = param_1;
      pFVar3 = pFVar2;
    }
  }
  else {
    this->TexcoordStride = 8;
    pFVar2 = ::operator_new(0x28);
    if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
      pFVar2[2] = (FStaticMeshVertexDataInterface)0x0;
      *pFVar2 = (FStaticMeshVertexDataInterface)
                &
                ___7__TStaticMeshVertexData_U__TStaticMeshVertexUVsDatum_U__TVector2_M_Math_UE______6B_
      ;
      pFVar2[1] = (FStaticMeshVertexDataInterface)
                  &
                  ___7__TResourceArray_U__TStaticMeshVertexUVsDatum_U__TVector2_M_Math_UE_____0A___6B_
      ;
      pFVar2[3] = (FStaticMeshVertexDataInterface)0x0;
      *(bool *)(pFVar2 + 4) = param_1;
      pFVar3 = pFVar2;
    }
  }
  this->TexcoordData = pFVar3;
  return;
}

// AppendVertices @ 148452580

void __thiscall
FStaticMeshVertexBuffer::AppendVertices
          (FStaticMeshVertexBuffer *this,FStaticMeshBuildVertex *param_1,uint param_2,bool param_3)

{
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this_00;
  TStaticMeshVertexTangentDatum<FPackedNormal> *this_01;
  TVector2<float>_u_0 *pTVar1;
  FFloat16 *this_02;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uchar *puVar12;
  longlong lVar13;
  FStaticMeshVertexDataInterface **ppFVar14;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  TVector<float> *pTVar18;
  uint uVar19;
  FFloat16 local_res8 [4];
  FFloat16 local_res18 [4];
  char local_res20;
  ulonglong local_d8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78 [5];
  
  local_d8 = (ulonglong)param_2;
  local_res20 = param_3;
  if ((this->TangentsData == (FStaticMeshVertexDataInterface *)0x0) ||
     (this->TexcoordData == (FStaticMeshVertexDataInterface *)0x0)) {
    if (param_2 == 0) {
      return;
    }
    if ((this->NumVertices != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumVertices == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                           ,0x9d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this->NumTexCoords = 1;
    AllocateData(this,this->NeedsCPUAccess);
  }
  else if (param_2 == 0) {
    return;
  }
  puVar16 = &this->NumTexCoords;
  puVar15 = &this->NumVertices;
  ppFVar14 = &this->TexcoordData;
  if ((param_1 == (FStaticMeshBuildVertex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Vertices != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                         ,0xa6,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *puVar15;
  *puVar15 = uVar11 + param_2;
  (**(code **)((longlong)*this->TangentsData + 8))(this->TangentsData,uVar11 + param_2,0);
  (**(code **)((longlong)**ppFVar14 + 8))(*ppFVar14,*puVar16 * *puVar15,0);
  if (*puVar15 != 0) {
    puVar12 = (uchar *)(**(code **)((longlong)*this->TangentsData + 0x30))();
    this->TangentsDataPtr = puVar12;
    puVar12 = (uchar *)(**(code **)((longlong)**ppFVar14 + 0x30))();
    pTVar18 = &param_1->TangentY;
    this->TexcoordDataPtr = puVar12;
    do {
      uVar2 = *(undefined8 *)&pTVar18[1].field0_0x0;
      fVar5 = pTVar18[1].field0_0x0._s_0.Z;
      uVar3 = *(undefined8 *)&pTVar18->field0_0x0;
      fVar6 = (pTVar18->field0_0x0)._s_0.Z;
      uVar4 = *(undefined8 *)&pTVar18[-1].field0_0x0;
      fVar7 = pTVar18[-1].field0_0x0._s_0.Z;
      puVar12 = this->TangentsDataPtr;
      pcVar8 = *(code **)((longlong)*this->TangentsData + 0x50);
      if (this->bUseHighPrecisionTangentBasis == false) {
        this_01 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar12 + (ulonglong)uVar11 * 8);
        lVar13 = (*pcVar8)();
        if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar12 + lVar13) < this_01 + 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x145,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this_01 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)this->TangentsDataPtr) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x146,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_98._0_8_ = uVar2;
        local_98._s_0.Z = fVar5;
        local_88._0_8_ = uVar3;
        local_88._s_0.Z = fVar6;
        local_78[0]._0_8_ = uVar4;
        local_78[0]._8_4_ = fVar7;
        TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                  (this_01,(TVector<float> *)&local_78[0]._s_0,(TVector<float> *)&local_88._s_0,
                   (TVector<float> *)&local_98._s_0);
      }
      else {
        this_00 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                  (puVar12 + (ulonglong)uVar11 * 0x10);
        lVar13 = (*pcVar8)();
        if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar12 + lVar13) < this_00 + 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x13d,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this_00 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)this->TangentsDataPtr) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x13e,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_c8._0_8_ = uVar2;
        local_c8._s_0.Z = fVar5;
        local_b8._0_8_ = uVar3;
        local_b8._s_0.Z = fVar6;
        local_a8._0_8_ = uVar4;
        local_a8._s_0.Z = fVar7;
        TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                  (this_00,(TVector<float> *)&local_a8._s_0,(TVector<float> *)&local_b8._s_0,
                   (TVector<float> *)&local_c8._s_0);
      }
      uVar19 = 0;
      uVar10 = *puVar16;
      if (uVar10 != 0) {
        do {
          puVar12 = this->TexcoordDataPtr;
          uVar17 = (ulonglong)uVar19;
          lVar13 = uVar17 + (ulonglong)uVar10 * (ulonglong)uVar11;
          if (this->bUseFullPrecisionUVs == false) {
            this_02 = (FFloat16 *)(puVar12 + lVar13 * 4);
            lVar13 = (**(code **)((longlong)**ppFVar14 + 0x50))();
            if (((FFloat16 *)(puVar12 + lVar13) < this_02 + 2) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                   ,0x166,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((this_02 < (FFloat16 *)this->TexcoordDataPtr) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                   ,0x167,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            fVar5 = ((TVector2<float> *)(pTVar18 + 2))[uVar17].field0_0x0._s_0.X;
            if (local_res20 == '\0') {
              local_res18[0].Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_res18[0].Encoded,fVar5);
              this_02->Encoded = local_res18[0].Encoded;
              local_res8[0].Encoded = 0;
              FGenericPlatformMath::StoreHalf
                        (&local_res8[0].Encoded,
                         ((TVector2<float> *)(pTVar18 + 2))[uVar17].field0_0x0._s_0.Y);
              this_02[1].Encoded = local_res8[0].Encoded;
            }
            else {
              fVar6 = ((TVector2<float> *)(pTVar18 + 2))[uVar17].field0_0x0._s_0.Y;
              FFloat16::SetTruncate(this_02,fVar5);
              FFloat16::SetTruncate(this_02 + 1,fVar6);
            }
          }
          else {
            pTVar1 = (TVector2<float>_u_0 *)(puVar12 + lVar13 * 8);
            lVar13 = (**(code **)((longlong)**ppFVar14 + 0x50))();
            if (((TVector2<float>_u_0 *)(puVar12 + lVar13) < pTVar1 + 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                   ,0x15d,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((pTVar1 < (TVector2<float>_u_0 *)this->TexcoordDataPtr) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                   ,0x15e,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *pTVar1 = ((TVector2<float> *)(pTVar18 + 2))[uVar17].field0_0x0;
          }
          uVar19 = uVar19 + 1;
          uVar10 = *puVar16;
        } while (uVar19 < uVar10);
      }
      pTVar18 = (TVector<float> *)((longlong)(pTVar18 + 9) + 8);
      uVar11 = uVar11 + 1;
      local_d8 = local_d8 - 1;
    } while (local_d8 != 0);
  }
  return;
}

// BindLightMapVertexBuffer @ 148456710

void __thiscall
FStaticMeshVertexBuffer::BindLightMapVertexBuffer
          (FStaticMeshVertexBuffer *this,FVertexFactory *param_1,FStaticMeshDataType *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  
  if ((int)this->NumTexCoords <= param_3) {
    param_3 = this->NumTexCoords - 1;
  }
  param_2->LightMapCoordinateIndex = (schar)param_3;
  param_2->NumTexCoords = (uchar)this->NumTexCoords;
  param_2->TextureCoordinatesSRV = (this->TextureCoordinatesSRV).Reference;
  iVar5 = 8;
  if (this->bUseFullPrecisionUVs == false) {
    iVar5 = 4;
  }
  uVar4 = iVar5 * this->NumTexCoords;
  if ((-1 < param_3) && ((uint)param_3 < this->NumTexCoords)) {
    uVar3 = '\x02';
    if (this->bUseFullPrecisionUVs == false) {
      uVar3 = '\f';
    }
    if (0xff < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStride <= 0xFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                         ,0x39,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (0xff < (uint)(iVar5 * param_3)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOffset <= 0xFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                         ,0x3a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (param_2->LightMapCoordinateComponent).VertexBuffer =
         (FVertexBuffer *)&this->TexCoordVertexBuffer;
    (param_2->LightMapCoordinateComponent).StreamOffset = 0;
    (param_2->LightMapCoordinateComponent).Offset = (uchar)(iVar5 * param_3);
    (param_2->LightMapCoordinateComponent).Stride = (uchar)uVar4;
    (param_2->LightMapCoordinateComponent).Type.Value = uVar3;
    (param_2->LightMapCoordinateComponent).VertexStreamUsage = ManualFetch;
  }
  return;
}

// BindPackedTexCoordVertexBuffer @ 148456850

void __thiscall
FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
          (FStaticMeshVertexBuffer *this,FVertexFactory *param_1,FStaticMeshDataType *param_2,
          int param_3)

{
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *pTVar1;
  int *piVar2;
  FTexcoordVertexBuffer *pFVar3;
  TTypeCompatibleBytes<FVertexStreamComponent> *pTVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  FTexcoordVertexBuffer *local_58;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  FTexcoordVertexBuffer *local_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  pTVar1 = &param_2->TextureCoordinates;
  piVar2 = &(param_2->TextureCoordinates).ArrayMax;
  (param_2->TextureCoordinates).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  param_2->NumTexCoords = (uchar)this->NumTexCoords;
  param_2->TextureCoordinatesSRV = (this->TextureCoordinatesSRV).Reference;
  bVar8 = this->bUseFullPrecisionUVs;
  uVar5 = this->NumTexCoords;
  iVar10 = 8;
  if (bVar8 == false) {
    iVar10 = 4;
  }
  uVar13 = iVar10 * uVar5;
  uVar15 = uVar5;
  if ((-1 < param_3) && (uVar15 = param_3, (int)uVar5 < param_3)) {
    uVar15 = uVar5;
  }
  if (((int)uVar15 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClampedNumTexCoords >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                         ,0x23a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = &this->TexCoordVertexBuffer;
  iVar11 = 0;
  uVar12 = (undefined1)uVar13;
  if (0 < (int)(uVar15 - 1)) {
    uVar14 = 4;
    if (bVar8 == false) {
      iVar11 = 0;
      uVar14 = 0xd;
    }
    do {
      uStack_50 = 0;
      uStack_49 = 4;
      uStack_4c = (undefined1)(iVar10 * iVar11);
      local_58 = pFVar3;
      uStack_4b = uVar12;
      uStack_4a = uVar14;
      if ((0xff < uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InStride <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x39,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((0xff < (uint)(iVar10 * iVar11)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOffset <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x3a,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((pTVar1 <= &local_58) && (&local_58 < (pTVar1->AllocatorInstance).InlineData + *piVar2))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (param_2->TextureCoordinates).ArrayNum;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                          (0x810,&pTVar1->AllocatorInstance,piVar2);
      }
      iVar11 = iVar11 + 2;
      (param_2->TextureCoordinates).ArrayNum = iVar9 + 1;
      pTVar4 = (pTVar1->AllocatorInstance).InlineData + iVar9;
      *(FTexcoordVertexBuffer **)pTVar4->Pad = local_58;
      *(ulonglong *)(pTVar4->Pad + 8) =
           CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT15(uStack_4b,CONCAT14(uStack_4c,uStack_50))))
      ;
    } while (iVar11 < (int)(uVar15 - 1));
  }
  if (iVar11 < (int)uVar15) {
    uStack_3a = 2;
    if (bVar8 == false) {
      uStack_3a = 0xc;
    }
    uStack_40 = 0;
    uStack_3c = (undefined1)(iVar10 * iVar11);
    uStack_39 = 4;
    local_48 = pFVar3;
    uStack_3b = uVar12;
    if ((0xff < uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStride <= 0xFF",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                           ,0x39,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((0xff < (uint)(iVar10 * iVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOffset <= 0xFF",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                           ,0x3a,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((pTVar1 <= &local_48) && (&local_48 < (pTVar1->AllocatorInstance).InlineData + *piVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (param_2->TextureCoordinates).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (param_2->TextureCoordinates).ArrayNum = iVar10 + 1;
    pTVar4 = (pTVar1->AllocatorInstance).InlineData + iVar10;
    *(FTexcoordVertexBuffer **)pTVar4->Pad = local_48;
    *(ulonglong *)(pTVar4->Pad + 8) =
         CONCAT17(uStack_39,CONCAT16(uStack_3a,CONCAT15(uStack_3b,CONCAT14(uStack_3c,uStack_40))));
  }
  return;
}

// BindTangentVertexBuffer @ 148456c00

void __thiscall
FStaticMeshVertexBuffer::BindTangentVertexBuffer
          (FStaticMeshVertexBuffer *this,FVertexFactory *param_1,FStaticMeshDataType *param_2)

{
  bool bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  
  param_2->TangentsSRV = (this->TangentsSRV).Reference;
  bVar1 = this->bUseHighPrecisionTangentBasis;
  param_2->TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)&this->TangentsVertexBuffer;
  uVar3 = '\b';
  uVar4 = '\x10';
  if (bVar1 == false) {
    uVar4 = uVar3;
  }
  uVar2 = '\x0e';
  if (bVar1 == false) {
    uVar2 = '\x05';
  }
  param_2->TangentBasisComponents[0].StreamOffset = 0;
  param_2->TangentBasisComponents[0].Offset = '\0';
  param_2->TangentBasisComponents[0].Stride = uVar4;
  param_2->TangentBasisComponents[0].Type.Value = uVar2;
  param_2->TangentBasisComponents[0].VertexStreamUsage = ManualFetch;
  param_2->TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)&this->TangentsVertexBuffer;
  param_2->TangentBasisComponents[1].StreamOffset = 0;
  if (bVar1 == false) {
    uVar3 = '\x04';
  }
  param_2->TangentBasisComponents[1].Offset = uVar3;
  param_2->TangentBasisComponents[1].Stride = uVar4;
  param_2->TangentBasisComponents[1].Type.Value = uVar2;
  param_2->TangentBasisComponents[1].VertexStreamUsage = ManualFetch;
  return;
}

// BindTexCoordVertexBuffer @ 148456c80

void __thiscall
FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
          (FStaticMeshVertexBuffer *this,FVertexFactory *param_1,FStaticMeshDataType *param_2,
          int param_3)

{
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *pTVar1;
  int *piVar2;
  TTypeCompatibleBytes<FVertexStreamComponent> *pTVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FTexcoordVertexBuffer *local_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  pTVar1 = &param_2->TextureCoordinates;
  piVar2 = &(param_2->TextureCoordinates).ArrayMax;
  (param_2->TextureCoordinates).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  param_2->NumTexCoords = (uchar)this->NumTexCoords;
  param_2->TextureCoordinatesSRV = (this->TextureCoordinatesSRV).Reference;
  bVar8 = this->bUseFullPrecisionUVs;
  uVar4 = this->NumTexCoords;
  iVar11 = 8;
  if (bVar8 == false) {
    iVar11 = 4;
  }
  uVar12 = uVar4;
  if ((-1 < param_3) && (uVar12 = 4, uVar4 < 4)) {
    uVar12 = uVar4;
  }
  if (((int)uVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClampedNumTexCoords >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                         ,0x279,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = 0;
  if (uVar12 != 0) {
    uVar7 = 2;
    if (bVar8 == false) {
      uVar7 = 0xc;
    }
    do {
      uStack_40 = 0;
      uStack_3b = (undefined1)(iVar11 * uVar4);
      uStack_39 = 4;
      uStack_3c = (undefined1)(iVar11 * uVar10);
      local_48 = &this->TexCoordVertexBuffer;
      uStack_3a = uVar7;
      if ((0xff < iVar11 * uVar4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InStride <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x39,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((0xff < iVar11 * uVar10) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOffset <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x3a,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((pTVar1 <= &local_48) && (&local_48 < (pTVar1->AllocatorInstance).InlineData + *piVar2))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (param_2->TextureCoordinates).ArrayNum;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                          (0x810,&pTVar1->AllocatorInstance,piVar2);
      }
      uVar10 = uVar10 + 1;
      (param_2->TextureCoordinates).ArrayNum = iVar9 + 1;
      pTVar3 = (pTVar1->AllocatorInstance).InlineData + iVar9;
      *(FTexcoordVertexBuffer **)pTVar3->Pad = local_48;
      *(ulonglong *)(pTVar3->Pad + 8) =
           CONCAT17(uStack_39,CONCAT16(uStack_3a,CONCAT15(uStack_3b,CONCAT14(uStack_3c,uStack_40))))
      ;
    } while (uVar10 < uVar12);
  }
  return;
}

// CleanUp @ 14845c3f0

void __thiscall FStaticMeshVertexBuffer::CleanUp(FStaticMeshVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->TangentsData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->TangentsData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = this->TexcoordData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->TexcoordData = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// ClearMetaData @ 14845c550

void __thiscall FStaticMeshVertexBuffer::ClearMetaData(FStaticMeshVertexBuffer *this)

{
  this->NumTexCoords = 0;
  this->NumVertices = 0;
  this->bUseFullPrecisionUVs = false;
  this->bUseHighPrecisionTangentBasis = false;
  this->TangentsStride = 0;
  this->TexcoordStride = 0;
  return;
}

// ConvertHalfTexcoordsToFloat @ 14845cf20

void __thiscall
FStaticMeshVertexBuffer::ConvertHalfTexcoordsToFloat(FStaticMeshVertexBuffer *this,uchar *param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FStaticMeshVertexDataInterface *pFVar5;
  uchar *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if (this->TexcoordData == (FStaticMeshVertexDataInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TexcoordData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->TexcoordData;
  this->bUseFullPrecisionUVs = true;
  pFVar5 = ::operator_new(0x28);
  if (pFVar5 == (FStaticMeshVertexDataInterface *)0x0) {
    pFVar5 = (FStaticMeshVertexDataInterface *)0x0;
  }
  else {
    uVar4 = (**(code **)((longlong)*pFVar1 + 0x58))(pFVar1);
    *(undefined1 *)(pFVar5 + 4) = uVar4;
    *pFVar5 = (FStaticMeshVertexDataInterface)
              &
              ___7__TStaticMeshVertexData_U__TStaticMeshVertexUVsDatum_U__TVector2_M_Math_UE______6B_
    ;
    pFVar5[1] = (FStaticMeshVertexDataInterface)
                &
                ___7__TResourceArray_U__TStaticMeshVertexUVsDatum_U__TVector2_M_Math_UE_____0A___6B_
    ;
    pFVar5[2] = (FStaticMeshVertexDataInterface)0x0;
    pFVar5[3] = (FStaticMeshVertexDataInterface)0x0;
  }
  uVar7 = 0;
  this->TexcoordData = pFVar5;
  (**(code **)((longlong)*pFVar5 + 8))(pFVar5,this->NumVertices * this->NumTexCoords,0);
  puVar6 = (uchar *)(**(code **)((longlong)*this->TexcoordData + 0x30))();
  this->TexcoordStride = 8;
  this->TexcoordDataPtr = puVar6;
  if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)(**(code **)((longlong)*pFVar1 + 0x30))(pFVar1);
  }
  if (this->NumTexCoords * this->NumVertices != 0) {
    do {
      fVar8 = FGenericPlatformMath::LoadHalf((ushort *)param_1);
      fVar9 = FGenericPlatformMath::LoadHalf((ushort *)((longlong)param_1 + 2));
      uVar7 = uVar7 + 1;
      *(ulonglong *)puVar6 = CONCAT44(fVar9,fVar8);
      param_1 = (uchar *)((longlong)param_1 + 4);
      puVar6 = puVar6 + 8;
    } while (uVar7 < this->NumTexCoords * this->NumVertices);
  }
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014845d0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// CreateTangentsRHIBuffer @ 14845f4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FStaticMeshVertexBuffer::CreateTangentsRHIBuffer
          (FStaticMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  FStaticMeshVertexDataInterface **in_R8;
  undefined4 in_stack_ffffffffffffffe4;
  
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,param_1,in_R8,(int)this + 0x70,this->NumVertices,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffe4,0x101));
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// CreateTexCoordRHIBuffer @ 14845f510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FStaticMeshVertexBuffer::CreateTexCoordRHIBuffer
          (FStaticMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  FStaticMeshVertexDataInterface **in_R8;
  undefined4 in_stack_ffffffffffffffe4;
  
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,param_1,in_R8,(int)this + 0x80,
             this->NumVertices * this->NumTexCoords,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffe4,0x101));
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetFriendlyName @ 14846c4a0

FString * __thiscall
FStaticMeshVertexBuffer::GetFriendlyName
          (FStaticMeshVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Static-mesh vertices");
  return __return_storage_ptr__;
}

// GetOrCreateTangentsSRV @ 14846cbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FStaticMeshVertexBuffer::GetOrCreateTangentsSRV
          (FStaticMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  FRHIShaderResourceView *this_00;
  FInitializer *pFVar1;
  FRHICommandListBase *in_R8;
  uchar *local_res8;
  
  this_00 = (this->TangentsSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (param_1->MemManager).Top = (uchar *)this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
  }
  pFVar1 = *(FInitializer **)&(this->TangentsVertexBuffer).field_0x20;
  if (pFVar1 == (FInitializer *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
    return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
  }
  FRHICommandListBase::CreateShaderResourceView(in_R8,(FRHIBuffer *)&local_res8,pFVar1);
  (param_1->MemManager).Top = local_res8;
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// GetOrCreateTexCoordsSRV @ 14846cc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FStaticMeshVertexBuffer::GetOrCreateTexCoordsSRV
          (FStaticMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  FRHIShaderResourceView *this_00;
  FInitializer *pFVar1;
  FRHICommandListBase *in_R8;
  uchar *local_res8;
  
  this_00 = (this->TextureCoordinatesSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (param_1->MemManager).Top = (uchar *)this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
    return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
  }
  pFVar1 = *(FInitializer **)&(this->TexCoordVertexBuffer).field_0x20;
  if (pFVar1 == (FInitializer *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
    return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
  }
  FRHICommandListBase::CreateShaderResourceView(in_R8,(FRHIBuffer *)&local_res8,pFVar1);
  (param_1->MemManager).Top = local_res8;
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// GetTangentSize @ 148470c40

int __thiscall FStaticMeshVertexBuffer::GetTangentSize(FStaticMeshVertexBuffer *this)

{
  if (this->bUseHighPrecisionTangentBasis != false) {
    this->TangentsStride = 0x10;
    return this->NumVertices << 4;
  }
  this->TangentsStride = 8;
  return this->NumVertices * 8;
}

// GetTexCoordSize @ 148470c80

int __thiscall FStaticMeshVertexBuffer::GetTexCoordSize(FStaticMeshVertexBuffer *this)

{
  int iVar1;
  
  iVar1 = this->NumVertices * this->NumTexCoords;
  if (this->bUseFullPrecisionUVs != false) {
    this->TexcoordStride = 8;
    return iVar1 * 8;
  }
  this->TexcoordStride = 4;
  return iVar1 * 4;
}

// Init @ 148474d70

void __thiscall
FStaticMeshVertexBuffer::Init
          (FStaticMeshVertexBuffer *this,FConstMeshBuildVertexView *param_1,
          FStaticMeshVertexBufferFlags *param_2)

{
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this_00;
  TStaticMeshVertexTangentDatum<FPackedNormal> *this_01;
  TVector2<float>_u_0 *pTVar1;
  FFloat16 *this_02;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_> FVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uchar *puVar13;
  TVector<float> *pTVar14;
  longlong lVar15;
  TVector2<float>_u_0_s_0 *pTVar16;
  int iVar17;
  ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_> FVar18;
  uchar *puVar19;
  uint uVar20;
  FConstMeshBuildVertexView *pFVar21;
  FFloat16 local_res8 [4];
  FConstMeshBuildVertexView *local_res10;
  FStaticMeshVertexBufferFlags *local_res18;
  FFloat16 local_res20 [4];
  uint local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_88 [6];
  
  bVar10 = param_2->bNeedsCPUAccess;
  uVar20 = (param_1->Position).NumElements;
  this->NumTexCoords = (param_1->UVs).ArrayNum;
  this->NumVertices = uVar20;
  this->NeedsCPUAccess = bVar10;
  local_res10 = param_1;
  local_res18 = param_2;
  AllocateData(this,bVar10);
  (**(code **)((longlong)*this->TangentsData + 8))(this->TangentsData,this->NumVertices,0);
  puVar19 = (uchar *)0x0;
  puVar13 = puVar19;
  if (this->NumVertices != 0) {
    puVar13 = (uchar *)(**(code **)((longlong)*this->TangentsData + 0x30))();
  }
  this->TangentsDataPtr = puVar13;
  (**(code **)((longlong)*this->TexcoordData + 8))
            (this->TexcoordData,this->NumVertices * this->NumTexCoords,0);
  puVar13 = puVar19;
  if (this->NumVertices != 0) {
    puVar13 = (uchar *)(**(code **)((longlong)*this->TexcoordData + 0x30))();
  }
  this->TexcoordDataPtr = puVar13;
  local_e8 = 0;
  if (0 < (param_1->Position).NumElements) {
    do {
      iVar17 = (int)puVar19;
      pTVar14 = TStridedView<UE::Math::TVector<float>_const_,int>::GetElementPtr
                          (&param_1->TangentZ,iVar17);
      uVar2 = *(undefined8 *)&pTVar14->field0_0x0;
      fVar5 = (pTVar14->field0_0x0)._s_0.Z;
      pTVar14 = TStridedView<UE::Math::TVector<float>_const_,int>::GetElementPtr
                          (&param_1->TangentY,iVar17);
      uVar3 = *(undefined8 *)&pTVar14->field0_0x0;
      fVar6 = (pTVar14->field0_0x0)._s_0.Z;
      pTVar14 = TStridedView<UE::Math::TVector<float>_const_,int>::GetElementPtr
                          (&param_1->TangentX,iVar17);
      uVar4 = *(undefined8 *)&pTVar14->field0_0x0;
      fVar7 = (pTVar14->field0_0x0)._s_0.Z;
      puVar13 = this->TangentsDataPtr;
      if (this->bUseHighPrecisionTangentBasis == false) {
        this_01 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar13 + (longlong)puVar19 * 8);
        lVar15 = (**(code **)((longlong)*this->TangentsData + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar13 + lVar15) < this_01 + 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x145,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((this_01 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)this->TangentsDataPtr) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x146,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_a8._0_8_ = uVar2;
        local_a8._s_0.Z = fVar5;
        local_98._0_8_ = uVar3;
        local_98._s_0.Z = fVar6;
        local_88[0]._0_8_ = uVar4;
        local_88[0]._8_4_ = fVar7;
        TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                  (this_01,(TVector<float> *)&local_88[0]._s_0,(TVector<float> *)&local_98._s_0,
                   (TVector<float> *)&local_a8._s_0);
      }
      else {
        this_00 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                  (puVar13 + (longlong)puVar19 * 0x10);
        lVar15 = (**(code **)((longlong)*this->TangentsData + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar13 + lVar15) < this_00 + 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13d,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((this_00 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)this->TangentsDataPtr) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13e,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_d8._0_8_ = uVar2;
        local_d8._s_0.Z = fVar5;
        local_c8._0_8_ = uVar3;
        local_c8._s_0.Z = fVar6;
        local_b8._0_8_ = uVar4;
        local_b8._s_0.Z = fVar7;
        TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                  (this_00,(TVector<float> *)&local_b8._s_0,(TVector<float> *)&local_c8._s_0,
                   (TVector<float> *)&local_d8._s_0);
      }
      uVar20 = 0;
      pFVar21 = param_1;
      if (0 < (param_1->UVs).ArrayNum) {
        do {
          bVar10 = local_res18->bUseBackwardsCompatibleF16TruncUVs;
          uVar12 = 0;
          if ((int)uVar20 < (param_1->UVs).ArrayNum) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar8 = (param_1->UVs).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>)
                   &param_1->UVs;
          if (FVar8 != (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>)0x0) {
            FVar18 = FVar8;
          }
          pTVar16 = (TVector2<float>_u_0_s_0 *)
                    TStridedView<UE::Math::TVector2<float>_const_,int>::GetElementPtr
                              ((TStridedView<UE::Math::TVector2<float>_const_,int> *)
                               ((longlong)(int)uVar20 * 0x10 + (longlong)FVar18),local_e8);
          lVar15 = (ulonglong)this->NumTexCoords * (longlong)puVar19;
          puVar13 = this->TexcoordDataPtr;
          if (this->bUseFullPrecisionUVs == false) {
            this_02 = (FFloat16 *)(puVar13 + ((ulonglong)uVar20 + lVar15) * 4);
            lVar15 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
            if (((FFloat16 *)(puVar13 + lVar15) < this_02 + 2) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((this_02 < (FFloat16 *)this->TexcoordDataPtr) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x167,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (bVar10 == false) {
              local_res8[0].Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_res8[0].Encoded,pTVar16->X);
              this_02->Encoded = local_res8[0].Encoded;
              local_res20[0].Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_res20[0].Encoded,pTVar16->Y);
              this_02[1].Encoded = local_res20[0].Encoded;
            }
            else {
              fVar5 = pTVar16->Y;
              FFloat16::SetTruncate(this_02,pTVar16->X);
              FFloat16::SetTruncate(this_02 + 1,fVar5);
            }
          }
          else {
            pTVar1 = (TVector2<float>_u_0 *)(puVar13 + (lVar15 + (ulonglong)uVar20) * 8);
            lVar15 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
            if (((TVector2<float>_u_0 *)(puVar13 + lVar15) < pTVar1 + 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((pTVar1 < (TVector2<float>_u_0 *)this->TexcoordDataPtr) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15e,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar1->_s_0 = *pTVar16;
          }
          uVar20 = uVar20 + 1;
          pFVar21 = local_res10;
        } while ((int)uVar20 < (local_res10->UVs).ArrayNum);
      }
      local_e8 = local_e8 + 1;
      puVar19 = (uchar *)(ulonglong)local_e8;
      param_1 = pFVar21;
    } while ((int)local_e8 < (pFVar21->Position).NumElements);
  }
  return;
}

// Init @ 148475280

void __thiscall
FStaticMeshVertexBuffer::Init
          (FStaticMeshVertexBuffer *this,FStaticMeshVertexBuffer *param_1,bool param_2)

{
  uint uVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  uchar *puVar8;
  
  this->NeedsCPUAccess = param_2;
  this->NumTexCoords = param_1->NumTexCoords;
  uVar1 = param_1->NumVertices;
  this->NumVertices = uVar1;
  this->bUseFullPrecisionUVs = param_1->bUseFullPrecisionUVs;
  this->bUseHighPrecisionTangentBasis = param_1->bUseHighPrecisionTangentBasis;
  if (uVar1 != 0) {
    AllocateData(this,param_2);
    pFVar2 = this->TangentsData;
    iVar5 = (**(code **)((longlong)*param_1->TangentsData + 0x20))();
    iVar6 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
    if (iVar6 != iVar5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TangentsData->GetStride() == InVertexBuffer.TangentsData->GetStride()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                         ,0x6e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)((longlong)*this->TangentsData + 8))(this->TangentsData,this->NumVertices,0);
    puVar7 = (uchar *)(**(code **)((longlong)*this->TangentsData + 0x30))();
    this->TangentsDataPtr = puVar7;
    puVar7 = param_1->TangentsDataPtr;
    iVar5 = (**(code **)((longlong)*this->TangentsData + 0x20))();
    memcpy(this->TangentsDataPtr,puVar7,(ulonglong)(iVar5 * this->NumVertices));
    pFVar2 = this->TexcoordData;
    iVar5 = (**(code **)((longlong)*param_1->TexcoordData + 0x20))();
    iVar6 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
    if (iVar6 != iVar5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TexcoordData->GetStride() == InVertexBuffer.TexcoordData->GetStride()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                         ,0x75,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this->NumTexCoords != param_1->NumTexCoords) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNumTexCoords() == InVertexBuffer.GetNumTexCoords()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                         ,0x76,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar7 = param_1->TexcoordDataPtr;
    (**(code **)((longlong)*this->TexcoordData + 8))
              (this->TexcoordData,this->NumVertices * this->NumTexCoords,0);
    puVar8 = (uchar *)(**(code **)((longlong)*this->TexcoordData + 0x30))();
    uVar1 = this->NumTexCoords;
    this->TexcoordDataPtr = puVar8;
    iVar5 = (**(code **)((longlong)*this->TexcoordData + 0x20))();
    memcpy(this->TexcoordDataPtr,puVar7,(ulonglong)(uVar1 * this->NumVertices * iVar5));
  }
  return;
}

// Init @ 148475480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshVertexBuffer::Init
          (FStaticMeshVertexBuffer *this,
          TArray<FStaticMeshBuildVertex,TSizedDefaultAllocator<32>_> *param_1,uint param_2,
          FStaticMeshVertexBufferFlags *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_d8 [32];
  TArrayView<FStaticMeshBuildVertex_const_,int> local_b8;
  FConstMeshBuildVertexView local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.DataPtr = (FStaticMeshBuildVertex *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_b8.ArrayNum = iVar1;
  MakeConstMeshBuildVertexView(&local_a8,&local_b8);
  Init(this,&local_a8,param_3);
  if (local_a8.UVs.AllocatorInstance.SecondaryData !=
      (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>)0x0) {
    FMemory::Free((void *)local_a8.UVs.AllocatorInstance.SecondaryData);
  }
  if (local_a8.BoneWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.BoneWeights.AllocatorInstance.Data);
  }
  if (local_a8.BoneIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.BoneIndices.AllocatorInstance.Data);
  }
  return;
}

// Init @ 148475560

void __thiscall
FStaticMeshVertexBuffer::Init(FStaticMeshVertexBuffer *this,uint param_1,uint param_2,bool param_3)

{
  uchar *puVar1;
  
  this->NumVertices = param_1;
  this->NumTexCoords = param_2;
  this->NeedsCPUAccess = param_3;
  AllocateData(this,param_3);
  (**(code **)((longlong)*this->TangentsData + 8))(this->TangentsData,this->NumVertices,0);
  if (this->NumVertices == 0) {
    puVar1 = (uchar *)0x0;
  }
  else {
    puVar1 = (uchar *)(**(code **)((longlong)*this->TangentsData + 0x30))();
  }
  this->TangentsDataPtr = puVar1;
  (**(code **)((longlong)*this->TexcoordData + 8))
            (this->TexcoordData,this->NumVertices * this->NumTexCoords,0);
  if (this->NumVertices != 0) {
    puVar1 = (uchar *)(**(code **)((longlong)*this->TexcoordData + 0x30))();
    this->TexcoordDataPtr = puVar1;
    return;
  }
  this->TexcoordDataPtr = (uchar *)0x0;
  return;
}

// InitRHI @ 148475e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffer::InitRHI(FStaticMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *pFVar3;
  FRHIShaderResourceView *pFVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  FRHIShaderResourceView *pFVar9;
  bool bVar10;
  FRHIShaderResourceView *local_res8;
  undefined4 in_stack_ffffffffffffff94;
  undefined1 local_58 [16];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  FRHICommandBase *pFStack_30;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId315,"FStaticMeshVertexBuffer::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
               ,0x13b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId315);
  }
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId316,"FStaticMeshVertexBuffer_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
               ,0x13c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId316);
  }
  if ((this->TangentsData == (FStaticMeshVertexDataInterface *)0x0) ||
     (cVar6 = (**(code **)((longlong)*this->TangentsData + 0x58))(), cVar6 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,(FRHICommandListBase *)local_58,
             (FStaticMeshVertexDataInterface **)param_1,(int)this + 0x70,this->NumVertices,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffff94,0x101));
  puVar1 = &(this->TangentsVertexBuffer).field_0x20;
  if (puVar1 != local_58) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = local_58._0_8_;
    local_58._0_8_ = pFVar3;
  }
  if ((FRHIResource *)local_58._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_58._0_8_);
  }
  if ((bVar7) || (bVar7 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform), bVar7)) {
    pFVar9 = (this->TangentsSRV).Reference;
    pTVar2 = &this->TangentsSRV;
    if (pFVar9 == (FRHIShaderResourceView *)0x0) {
      if (*(FInitializer **)puVar1 == (FInitializer *)0x0) {
        pFVar9 = (FRHIShaderResourceView *)0x0;
      }
      else {
        bVar8 = 0x3d;
        if (this->bUseHighPrecisionTangentBasis != false) {
          bVar8 = 0x3f;
        }
        pFStack_30 = (FRHICommandBase *)0x0;
        local_38._0_2_ = (ushort)bVar8 << 8;
        local_38._0_3_ = CONCAT12(1,(short)local_38);
        local_38 = (ulonglong)(uint3)local_38;
        FRHICommandListBase::CreateShaderResourceView
                  (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
        pFVar9 = local_res8;
      }
    }
    else {
      FRHIResource::AddRef((FRHIResource *)pFVar9);
    }
    if (pTVar2 != (TRefCountPtr<FRHIShaderResourceView> *)&local_48) {
      pFVar4 = pTVar2->Reference;
      pTVar2->Reference = pFVar9;
      pFVar9 = pFVar4;
    }
    if (pFVar9 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar9);
    }
  }
  if ((this->TexcoordData == (FStaticMeshVertexDataInterface *)0x0) ||
     (cVar6 = (**(code **)((longlong)*this->TexcoordData + 0x58))(), cVar6 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,(FRHICommandListBase *)(local_58 + 8),
             (FStaticMeshVertexDataInterface **)param_1,(int)this + 0x80,
             this->NumTexCoords * this->NumVertices,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffff94,0x101));
  puVar1 = &(this->TexCoordVertexBuffer).field_0x20;
  if (puVar1 != local_58 + 8) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = local_58._8_8_;
    local_58._8_8_ = pFVar3;
  }
  if ((FRHIResource *)local_58._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_58._8_8_);
  }
  if ((bVar7) || (bVar7 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform), bVar7)) {
    pTVar2 = &this->TextureCoordinatesSRV;
    pFVar9 = pTVar2->Reference;
    if (pFVar9 == (FRHIShaderResourceView *)0x0) {
      if (*(FInitializer **)puVar1 == (FInitializer *)0x0) {
        local_res8 = (FRHIShaderResourceView *)0x0;
      }
      else {
        bVar8 = 0xf;
        if (this->bUseFullPrecisionUVs != false) {
          bVar8 = 0x11;
        }
        pFStack_30 = (FRHICommandBase *)0x0;
        local_38._0_2_ = (ushort)bVar8 << 8;
        local_38._0_3_ = CONCAT12(1,(short)local_38);
        local_38 = (ulonglong)(uint3)local_38;
        FRHICommandListBase::CreateShaderResourceView
                  (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
      }
    }
    else {
      FRHIResource::AddRef((FRHIResource *)pFVar9);
      local_res8 = pFVar9;
    }
    if (pTVar2 != (TRefCountPtr<FRHIShaderResourceView> *)&local_40) {
      pFVar9 = pTVar2->Reference;
      pTVar2->Reference = local_res8;
      local_res8 = pFVar9;
    }
    if (local_res8 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_res8);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitRHIForStreaming @ 148476910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffer::InitRHIForStreaming
          (FStaticMeshVertexBuffer *this,FRHIBuffer *param_1,FRHIBuffer *param_2,
          FRHIResourceReplaceBatcher *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FRHIResourceReplaceInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if ((*(longlong *)&(this->TangentsVertexBuffer).field_0x20 == 0) ||
     (*(longlong *)&(this->TexCoordVertexBuffer).field_0x20 == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TangentsVertexBuffer.VertexBufferRHI && TexCoordVertexBuffer.VertexBufferRHI"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                       ,0x127,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = &param_3->Infos;
  if (param_1 != (FRHIBuffer *)0x0) {
    iVar5 = (param_3->Infos).ArrayNum;
    piVar1 = &(param_3->Infos).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar6->AllocatorInstance,piVar1);
    }
    (param_3->Infos).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
    *(undefined8 *)pFVar2 = *(undefined8 *)&(this->TangentsVertexBuffer).field_0x20;
    *(FRHIBuffer **)(pFVar2 + 8) = param_1;
    pFVar2[0x10] = (FScriptContainerElement)0x0;
  }
  if (param_2 != (FRHIBuffer *)0x0) {
    iVar5 = (param_3->Infos).ArrayNum;
    piVar1 = &(param_3->Infos).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar6->AllocatorInstance,piVar1);
      (param_3->Infos).ArrayNum = iVar5;
    }
    (param_3->Infos).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
    *(undefined8 *)pFVar2 = *(undefined8 *)&(this->TexCoordVertexBuffer).field_0x20;
    *(FRHIBuffer **)(pFVar2 + 8) = param_2;
    pFVar2[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// InitResource @ 148476a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffer::InitResource(FStaticMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  (**(code **)(*(longlong *)&this->TangentsVertexBuffer + 0x18))
            (&this->TangentsVertexBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148476a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->TexCoordVertexBuffer + 0x18))
            (&this->TexCoordVertexBuffer,param_1);
  return;
}

// InitTangentAndTexCoordStrides @ 148476a80

void __thiscall
FStaticMeshVertexBuffer::InitTangentAndTexCoordStrides(FStaticMeshVertexBuffer *this)

{
  uint uVar1;
  
  uVar1 = 8;
  if (this->bUseHighPrecisionTangentBasis != false) {
    uVar1 = 0x10;
  }
  this->TangentsStride = uVar1;
  uVar1 = 4;
  if (this->bUseFullPrecisionUVs != false) {
    uVar1 = 8;
  }
  this->TexcoordStride = uVar1;
  return;
}

// ReleaseRHI @ 148483530

void __thiscall FStaticMeshVertexBuffer::ReleaseRHI(FStaticMeshVertexBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  
  pFVar1 = (this->TangentsSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->TangentsSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TextureCoordinatesSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->TextureCoordinatesSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  (**(code **)(*(longlong *)&this->TangentsVertexBuffer + 0x10))(&this->TangentsVertexBuffer);
                    /* WARNING: Could not recover jumptable at 0x000148483583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->TexCoordVertexBuffer + 0x10))(&this->TexCoordVertexBuffer);
  return;
}

// ReleaseRHIForStreaming @ 148483860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffer::ReleaseRHIForStreaming
          (FStaticMeshVertexBuffer *this,FRHIResourceReplaceBatcher *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  puVar1 = &(this->TexCoordVertexBuffer).field_0x20;
  if ((*(longlong *)&(this->TangentsVertexBuffer).field_0x20 == 0) || (*(longlong *)puVar1 == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TangentsVertexBuffer.VertexBufferRHI && TexCoordVertexBuffer.VertexBufferRHI"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_1->Infos).ArrayNum;
  if (iVar6 == (param_1->Infos).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(param_1->Infos).AllocatorInstance,&(param_1->Infos).ArrayMax);
  }
  (param_1->Infos).ArrayNum = iVar6 + 1;
  pFVar2 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
  *(undefined8 *)pFVar2 = *(undefined8 *)&(this->TangentsVertexBuffer).field_0x20;
  *(undefined8 *)(pFVar2 + 8) = 0;
  pFVar2[0x10] = (FScriptContainerElement)0x0;
  iVar6 = (param_1->Infos).ArrayNum;
  if (iVar6 == (param_1->Infos).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(param_1->Infos).AllocatorInstance,&(param_1->Infos).ArrayMax);
  }
  (param_1->Infos).ArrayNum = iVar6 + 1;
  pFVar2 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
  uVar3 = *(undefined8 *)puVar1;
  *(undefined8 *)(pFVar2 + 8) = 0;
  *(undefined8 *)pFVar2 = uVar3;
  pFVar2[0x10] = (FScriptContainerElement)0x0;
  return;
}

// ReleaseResource @ 148484300

void __thiscall FStaticMeshVertexBuffer::ReleaseResource(FStaticMeshVertexBuffer *this)

{
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)(*(longlong *)&this->TangentsVertexBuffer + 0x20))(&this->TangentsVertexBuffer);
                    /* WARNING: Could not recover jumptable at 0x000148484326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->TexCoordVertexBuffer + 0x20))(&this->TexCoordVertexBuffer);
  return;
}

// Serialize @ 148491310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EUnrealEngineObjectUE4Version": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffer::Serialize(FStaticMeshVertexBuffer *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  FName FVar2;
  uint *puVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshVertexBuffer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_StaticMeshVertexBuffer_Serialize>
  FVar11;
  FPackageFileVersion FVar12;
  uchar *puVar13;
  uchar *puVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar15;
  ulonglong uVar16;
  FStripDataFlags local_res8 [4];
  LARGE_INTEGER local_res10;
  bool local_res18;
  FName local_res20;
  FName local_68;
  FStatMessage local_58;
  
  pvVar8 = ThreadLocalStoragePointer;
  uVar16 = (ulonglong)_tls_index;
  this->NeedsCPUAccess = param_2;
  puVar14 = (uchar *)0x0;
  local_res18 = param_2;
  if ((*(int *)(*(longlong *)((longlong)pvVar8 + uVar16 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_StaticMeshVertexBuffer_Serialize ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshVertexBuffer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_StaticMeshVertexBuffer_Serialize>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res10.s,"STAT_StaticMeshVertexBuffer_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshVertexBuffer_Serialize,
                 *pFVar10,L"FStaticMeshVertexBuffer::Serialize","STATGROUP_LoadTime",
                 "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_StaticMeshVertexBuffer_Serialize;
  if (StatPtr_STAT_StaticMeshVertexBuffer_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshVertexBuffer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_StaticMeshVertexBuffer_Serialize>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res20,"STAT_StaticMeshVertexBuffer_Serialize");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshVertexBuffer::Serialize(FArchive_&,bool)_::_2_::FStat_STAT_StaticMeshVertexBuffer_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshVertexBuffer_Serialize,*pFVar10,
                          L"FStaticMeshVertexBuffer::Serialize","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar15 = FVar2.ComparisonIndex.Value;
  uVar9 = FVar2.Number;
  if ((FVar15.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar15.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticMeshVertexBuffer.cpp"
                   ,0xcf);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar15.Value;
      local_res10.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar6 = true;
      local_68 = FVar2;
      goto LAB_1484914a3;
    }
  }
  bVar6 = false;
LAB_1484914a3:
  FVar12 = FPackageFileVersion::CreateUE4Version((EUnrealEngineObjectUE4Version)&local_res10);
  FStripDataFlags::FStripDataFlags(local_res8,param_1,'\0',(FPackageFileVersion *)FVar12);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumTexCoords,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->NumTexCoords);
    }
  }
  else {
    this->NumTexCoords = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumVertices);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->NumVertices);
    }
  }
  else {
    this->NumVertices = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bUseFullPrecisionUVs);
  ::operator<<(param_1,&this->bUseHighPrecisionTangentBasis);
  uVar9 = 8;
  if (this->bUseHighPrecisionTangentBasis != false) {
    uVar9 = 0x10;
  }
  this->TangentsStride = uVar9;
  uVar9 = 4;
  if (this->bUseFullPrecisionUVs != false) {
    uVar9 = 8;
  }
  this->TexcoordStride = uVar9;
  if ((param_1->field_0x28 & 1) != 0) {
    AllocateData(this,local_res18);
  }
  if (((local_res8[0].GlobalStripFlags & 2) == 0) || ((param_1->field_0x2b & 4) != 0)) {
    pFVar4 = this->TangentsData;
    if (pFVar4 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)((longlong)*pFVar4 + 0x40))(pFVar4,param_1);
      puVar13 = puVar14;
      if (this->NumVertices != 0) {
        puVar13 = (uchar *)(**(code **)((longlong)*this->TangentsData + 0x30))();
      }
      this->TangentsDataPtr = puVar13;
    }
    pFVar4 = this->TexcoordData;
    if (pFVar4 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)((longlong)*pFVar4 + 0x40))(pFVar4,param_1);
      if (this->NumVertices != 0) {
        puVar14 = (uchar *)(**(code **)((longlong)*this->TexcoordData + 0x30))();
      }
      this->TexcoordDataPtr = puVar14;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (local_68 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_68.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = local_68.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SerializeMetaData @ 148492e30

void __thiscall
FStaticMeshVertexBuffer::SerializeMetaData(FStaticMeshVertexBuffer *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = &this->NumTexCoords;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->NumVertices;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bUseFullPrecisionUVs);
  ::operator<<(param_1,&this->bUseHighPrecisionTangentBasis);
  uVar3 = 8;
  if (this->bUseHighPrecisionTangentBasis != false) {
    uVar3 = 0x10;
  }
  this->TangentsStride = uVar3;
  uVar3 = 4;
  if (this->bUseFullPrecisionUVs != false) {
    uVar3 = 8;
  }
  this->TexcoordStride = uVar3;
  return;
}

// SetMetaData @ 148493b40

void __thiscall
FStaticMeshVertexBuffer::SetMetaData
          (FStaticMeshVertexBuffer *this,uint param_1,uint param_2,bool param_3,bool param_4)

{
  this->bUseHighPrecisionTangentBasis = param_4;
  this->NumTexCoords = param_1;
  this->NumVertices = param_2;
  this->bUseFullPrecisionUVs = param_3;
  this->TangentsStride = (uint)param_4 * 8 + 8;
  this->TexcoordStride = (uint)param_3 * 4 + 4;
  return;
}

// GetVertexUV_Typed<1> @ 148603080

TVector2<float> __thiscall
FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
          (FStaticMeshVertexBuffer *this,uint param_1,uint param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TVector2<float> TVar6;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar7;
  ulonglong in_R9;
  
  TVar7._s_0.Y = (float)in_register_00000014;
  TVar7._s_0.X = (float)param_1;
  puVar2 = this->TexcoordDataPtr;
  puVar1 = puVar2 + ((ulonglong)this->NumTexCoords * (ulonglong)param_2 + (in_R9 & 0xffffffff)) * 8;
  lVar5 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
  if (puVar2 + lVar5 < puVar1 + 8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                       ,0x17b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
      return (TVector2<float>)TVar6.field0_0x0;
    }
  }
  if (puVar1 < this->TexcoordDataPtr) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
      return (TVector2<float>)TVar6.field0_0x0;
    }
  }
  *(undefined8 *)TVar7 = *(undefined8 *)puVar1;
  return (TVector2<float>)TVar7;
}

// GetVertexUV_Typed<0> @ 148603150

TVector2<float> __thiscall
FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
          (FStaticMeshVertexBuffer *this,uint param_1,uint param_2)

{
  ushort *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TVector2<float> TVar6;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar7;
  ulonglong in_R9;
  float fVar8;
  float fVar9;
  
  TVar7._s_0.Y = (float)in_register_00000014;
  TVar7._s_0.X = (float)param_1;
  puVar2 = this->TexcoordDataPtr;
  puVar1 = (ushort *)
           (puVar2 + ((ulonglong)this->NumTexCoords * (ulonglong)param_2 + (in_R9 & 0xffffffff)) * 4
           );
  lVar5 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
  if (puVar2 + lVar5 < puVar1 + 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                       ,0x17b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
      return (TVector2<float>)TVar6.field0_0x0;
    }
  }
  if (puVar1 < this->TexcoordDataPtr) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
      return (TVector2<float>)TVar6.field0_0x0;
    }
  }
  fVar8 = FGenericPlatformMath::LoadHalf(puVar1 + 1);
  fVar9 = FGenericPlatformMath::LoadHalf(puVar1);
  *(float *)((longlong)TVar7 + 4) = fVar8;
  *(float *)TVar7 = fVar9;
  return (TVector2<float>)TVar7;
}

// GetAllowCPUAccess @ 148645200

bool __thiscall FStaticMeshVertexBuffer::GetAllowCPUAccess(FStaticMeshVertexBuffer *this)

{
  char cVar1;
  
  if ((this->TangentsData != (FStaticMeshVertexDataInterface *)0x0) &&
     (this->TexcoordData != (FStaticMeshVertexDataInterface *)0x0)) {
    cVar1 = (**(code **)((longlong)*this->TangentsData + 0x58))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)((longlong)*this->TexcoordData + 0x58))();
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// VertexTangentZ @ 148673f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
FStaticMeshVertexBuffer::VertexTangentZ
          (FStaticMeshVertexBuffer *this,TVector4<float> *__return_storage_ptr__,uint param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TVector4<float> *pTVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = this->TangentsDataPtr;
  if (this->bUseHighPrecisionTangentBasis == false) {
    puVar1 = puVar2 + (ulonglong)param_1 * 8;
    lVar5 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if (puVar2 + lVar5 < puVar1 + 8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if (puVar1 < this->TangentsDataPtr) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    auVar7 = pmovsxbd(in_XMM1,*(undefined4 *)(puVar1 + 4));
    fVar8 = (float)auVar7._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar9 = (float)auVar7._4_4_ * _UNK_151040074;
    fVar10 = (float)auVar7._8_4_ * _UNK_151040078;
    fVar11 = (float)auVar7._12_4_ * _UNK_15104007c;
  }
  else {
    puVar1 = puVar2 + (ulonglong)param_1 * 0x10;
    lVar5 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if (puVar2 + lVar5 < puVar1 + 0x10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    if (puVar1 < this->TangentsDataPtr) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
    }
    auVar7 = pmovsxwd(in_XMM1,*(undefined8 *)(puVar1 + 8));
    fVar8 = (float)auVar7._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar9 = (float)auVar7._4_4_ * _UNK_150d565e4;
    fVar10 = (float)auVar7._8_4_ * _UNK_150d565e8;
    fVar11 = (float)auVar7._12_4_ * _UNK_150d565ec;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar11;
  return __return_storage_ptr__;
}

