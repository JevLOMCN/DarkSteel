// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FShaderDataType @ 147cc8d40

void __thiscall FGPUBaseSkinVertexFactory::FShaderDataType::~FShaderDataType(FShaderDataType *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *this_00;
  FVertexBufferAndSRV *pFVar2;
  longlong lVar3;
  
  pFVar2 = (FVertexBufferAndSRV *)&this->CurrentBuffer;
  lVar3 = 2;
  do {
    pFVar1 = pFVar2[-1].VertexBufferSRV.Reference;
    pFVar2 = pFVar2 + -1;
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    this_00 = (pFVar2->VertexBufferRHI).Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  } while (lVar3 != 0);
  pFVar1 = (this->InputWeightStream).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// AllocateBoneBuffer @ 147cd4960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FGPUBaseSkinVertexFactory::FShaderDataType::AllocateBoneBuffer
          (FRHICommandList *param_1,uint param_2,FVertexBufferAndSRV *param_3)

{
  code *pcVar1;
  bool bVar2;
  FVertexBufferAndSRV local_28;
  
  bVar2 = IsInParallelRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x119,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x11a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_3->VertexBufferRHI).Reference != (FRHIBuffer *)0x0) &&
     (bVar2 = SupportsNoOverwriteBuffers(), !bVar2)) {
    return;
  }
  if ((GBoneBufferPool._416_4_ == -1) ||
     (TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::ReleasePooledResource
                ((TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)
                 &GBoneBufferPool,param_3), GBoneBufferPool._416_4_ == -1)) {
    local_28.Size = 0;
    local_28._20_4_ = 0;
    local_28.VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
    local_28.VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  }
  else {
    TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::CreatePooledResource
              ((TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)
               &GBoneBufferPool,&local_28,(FRHICommandListBase *)param_1,param_2);
  }
  FVertexBufferAndSRV::operator=(param_3,&local_28);
  if (local_28.VertexBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.VertexBufferSRV.Reference);
  }
  if (local_28.VertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.VertexBufferRHI.Reference);
  }
  return;
}

// GetBoneBufferForReading @ 147cfac20

FVertexBufferAndSRV * __thiscall
FGPUBaseSkinVertexFactory::FShaderDataType::GetBoneBufferForReading
          (FShaderDataType *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FVertexBufferAndSRV *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  bVar2 = false;
  if (this->CurrentRevisionNumber - this->PreviousRevisionNumber < 2) {
    bVar2 = param_1;
  }
  uVar4 = (ulonglong)bVar2 ^ (ulonglong)this->CurrentBuffer;
  lVar5 = uVar4 + 1;
  if ((this->BoneBuffer).Elements[uVar4].VertexBufferRHI.Reference == (FRHIBuffer *)0x0) {
    if ((bVar2 == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bPrevious",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                           ,0xfe,
                           L"Trying to access current bone buffer for reading, but it is null. BoneBuffer[0] = %p, BoneBuffer[1] = %p, CurrentRevisionNumber = %u, PreviousRevisionNumber = %u"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVertexBufferAndSRV *)(*pcVar1)();
      return pFVar3;
    }
    lVar5 = (ulonglong)this->CurrentBuffer + 1;
    if (((this->BoneBuffer).Elements[this->CurrentBuffer].VertexBufferRHI.Reference ==
         (FRHIBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Output->VertexBufferRHI.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                           ,0x101,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVertexBufferAndSRV *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (this->BoneBuffer).Elements + lVar5 + -1;
}

// ReleaseBoneData @ 147d20bd0

void __thiscall FGPUBaseSkinVertexFactory::FShaderDataType::ReleaseBoneData(FShaderDataType *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  FVertexBufferAndSRV *pFVar1;
  
  for (pFVar1 = (this->BoneBuffer).Elements; pFVar1 != (FVertexBufferAndSRV *)&this->CurrentBuffer;
      pFVar1 = pFVar1 + 1) {
    if ((((pFVar1->VertexBufferRHI).Reference != (FRHIBuffer *)0x0) &&
        ((pFVar1->VertexBufferSRV).Reference != (FRHIShaderResourceView *)0x0)) &&
       (GBoneBufferPool._416_4_ != -1)) {
      TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::ReleasePooledResource
                ((TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)
                 &GBoneBufferPool,pFVar1);
    }
    this_00 = (pFVar1->VertexBufferRHI).Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      (pFVar1->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = (pFVar1->VertexBufferSRV).Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      (pFVar1->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    pFVar1->Size = 0;
  }
  return;
}

// UpdateBoneData @ 147d35630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FGPUBaseSkinVertexFactory::FShaderDataType::UpdateBoneData
          (FRHICommandList *param_1,FName *param_2,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *param_3,
          TArrayView<unsigned_short_const_,int> *param_4,FRHIBuffer *param_5)

{
  uint uVar1;
  TMatrix<float> *pTVar2;
  code *pcVar3;
  float fVar4;
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
  float (*pafVar15) [4];
  bool bVar16;
  void *pvVar17;
  TMatrix<float> *pTVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  
  uVar1 = param_4->ArrayNum;
  bVar16 = IsInParallelRenderingThread();
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                          ,0x137,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((MaxGPUSkinBones < uVar1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBones <= MaxGPUSkinBones",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                          ,0x138,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((uVar1 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBones > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                          ,0x139,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_5 == (FRHIBuffer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertexBufferRHI",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                          ,0x13b,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_5->_padding_ = (longlong)*param_2;
  bVar16 = SupportsNoOverwriteBuffers();
  pvVar17 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_1,param_5,0,uVar1 * 0x30,bVar16 + RLM_WriteOnly)
  ;
  if (bGPUSkin_CopyBones_ISPC_Enabled == false) {
    uVar20 = 0;
    if (uVar1 != 0) {
      pfVar21 = (float *)((longlong)pvVar17 + 0x20);
      do {
        uVar19 = 0;
        if ((int)uVar20 < param_4->ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar19 = (uint)param_4->DataPtr[(int)uVar20];
        if ((param_3->ArrayNum <= (int)uVar19) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = param_3->DataPtr;
        uVar20 = uVar20 + 1;
        pTVar18 = pTVar2 + uVar19;
        fVar4 = pTVar18->M[0][1];
        fVar5 = pTVar18->M[0][2];
        pafVar15 = pTVar2[uVar19].M;
        fVar6 = pafVar15[2][0];
        fVar7 = pafVar15[2][1];
        fVar8 = pafVar15[2][2];
        pafVar15 = pTVar2[uVar19].M;
        fVar9 = pafVar15[1][0];
        fVar10 = pafVar15[1][1];
        fVar11 = pafVar15[1][2];
        pafVar15 = pTVar2[uVar19].M;
        fVar12 = pafVar15[3][0];
        fVar13 = pafVar15[3][1];
        fVar14 = pafVar15[3][2];
        pfVar21[-8] = pTVar18->M[0][0];
        pfVar21[-7] = fVar9;
        pfVar21[-6] = fVar6;
        pfVar21[-5] = fVar12;
        pfVar21[-4] = fVar4;
        pfVar21[-3] = fVar10;
        pfVar21[-2] = fVar7;
        pfVar21[-1] = fVar13;
        *pfVar21 = fVar5;
        pfVar21[1] = fVar11;
        pfVar21[2] = fVar8;
        pfVar21[3] = fVar14;
        pfVar21 = pfVar21 + 0xc;
      } while (uVar20 < uVar1);
    }
  }
  else {
    pTVar18 = TArrayView<UE::Math::TMatrix<float>_const_,int>::operator[](param_3,0);
    UpdateBoneData_CopyBones(pvVar17,pTVar18,param_4->DataPtr,uVar1);
  }
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,param_5);
  return;
}

