// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// ModifyCpuData @ 148ec8e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(FNDIInstanceData_GameThread *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CpuDataGuard;
  this->bHasChanged = true;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->IndexData,this->NumTriangles * 0xc,Default);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
              (&this->VertexData,this->VertexBufferSize,Default);
                    /* WARNING: Could not recover jumptable at 0x000148ec8e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetVertexColor @ 148ed17c0

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexColor
          (FNDIInstanceData_GameThread *this,uint param_1,FLinearColor *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((this->NumVertices <= param_1) || (this->ColorOffset == 0xffffffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Vertex >= 0 && Vertex < NumVertices && ColorOffset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                         ,0x130,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar3 = (param_2->field0_0x0)._s_0.B;
  fVar6 = (param_2->field0_0x0)._s_0.R;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  fVar4 = (param_2->field0_0x0)._s_0.G;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  fVar5 = (param_2->field0_0x0)._s_0.A;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  *(uint *)((this->VertexData).AllocatorInstance.Data +
           (ulonglong)this->ColorOffset + (ulonglong)param_1 * 4) =
       CONCAT13((char)(int)(fVar5 * __real_437f0000 + __real_3f000000),
                CONCAT12((char)(int)(fVar6 * __real_437f0000 + __real_3f000000),
                         CONCAT11((char)(int)(fVar4 * __real_437f0000 + __real_3f000000),
                                  (char)(int)(fVar3 * __real_437f0000 + __real_3f000000))));
  return;
}

// SetVertexTangentBasis @ 148ed18d0

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexTangentBasis
          (FNDIInstanceData_GameThread *this,uint param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (((this->NumVertices <= param_1) || (this->TangentBasisOffset == 0xffffffff)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Vertex >= 0 && Vertex < NumVertices && TangentBasisOffset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                         ,0x117,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar7 = __real_42feff7d;
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  pFVar5 = (this->VertexData).AllocatorInstance.Data;
  uVar10 = (ulonglong)this->TangentBasisOffset;
  fVar4 = (param_4->field0_0x0)._s_0.X;
  uVar9 = 0x7f000000;
  if ((fVar4 * fVar2 - fVar1 * (param_4->field0_0x0)._s_0.Z) * (param_3->field0_0x0)._s_0.Y +
      (fVar3 * (param_4->field0_0x0)._s_0.Z - fVar2 * (param_4->field0_0x0)._s_0.Y) *
      (param_3->field0_0x0)._s_0.X +
      (fVar1 * (param_4->field0_0x0)._s_0.Y - fVar4 * fVar3) * (param_3->field0_0x0)._s_0.Z < 0.0) {
    uVar9 = 0x80000000;
  }
  *(uint *)(pFVar5 + uVar10 + (ulonglong)param_1 * 8) =
       (((int)(fVar2 * __real_42feff7d) & 0xffU) << 8 | (int)(fVar3 * __real_42feff7d) & 0xffU) << 8
       | (int)(fVar1 * __real_42feff7d) & 0xffU | uVar9;
  *(uint *)(pFVar5 + uVar10 + (ulonglong)param_1 * 8 + 4) =
       (((int)((param_4->field0_0x0)._s_0.Z * fVar7) & 0xffU) << 8 |
       (int)((param_4->field0_0x0)._s_0.Y * fVar7) & 0xffU) << 8 |
       (int)((param_4->field0_0x0)._s_0.X * fVar7) & 0xffU | uVar9;
  return;
}

// UpdateCpuBuffer @ 148ed5510

void __thiscall
NDIMemoryBufferLocal::FNDIInstanceData_GameThread::UpdateCpuBuffer
          (FNDIInstanceData_GameThread *this)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (this->bUsedWithCpu != false) {
    uVar7 = (this->CpuBuffer).ArrayNum;
    uVar6 = this->NumElements + 4;
    if (uVar6 != uVar7) {
      pTVar1 = &this->CpuBuffer;
      if ((int)uVar7 < (int)uVar6) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar6 - uVar7,&pTVar1->AllocatorInstance,&(this->CpuBuffer).ArrayNum,
                           &(this->CpuBuffer).ArrayMax);
        memset((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4,0,
               (longlong)(int)(uVar6 - uVar7) << 2);
        return;
      }
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < (int)uVar7) {
        uVar7 = uVar7 - uVar6;
        if (((int)(uVar7 | uVar6) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != 0) {
          _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 4;
          iVar5 = ((this->CpuBuffer).ArrayNum - uVar7) - uVar6;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 4,(longlong)iVar5 << 2);
          }
          piVar2 = &(this->CpuBuffer).ArrayNum;
          *piVar2 = *piVar2 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar1->AllocatorInstance,(this->CpuBuffer).ArrayNum,
                     &(this->CpuBuffer).ArrayMax);
        }
      }
    }
  }
  return;
}

// UpdateMesh @ 148ed6e30

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_GameThread::UpdateMesh
          (FNDIInstanceData_GameThread *this,uint param_1,uint param_2,bool param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  UpdateMesh(this);
  this->NumVertices = param_1;
  this->NumTexCoords = param_2;
  this->PositionOffset = 0;
  this->VertexBufferSize = param_1 * 0xc;
  if (param_3) {
    iVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x180))(GDynamicRHI,0x3d);
    uVar2 = (this->VertexBufferSize - 1) + iVar1 & -iVar1;
    uVar3 = (ulonglong)uVar2;
    this->VertexBufferSize = uVar2 + this->NumVertices * 8;
  }
  else {
    uVar3 = 0xffffffff;
  }
  this->TangentBasisOffset = (uint)uVar3;
  if (this->NumTexCoords == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x180))
                      (GDynamicRHI,CONCAT71((int7)(uVar3 >> 8),0x11));
    uVar2 = (this->VertexBufferSize - 1) + iVar1 & -iVar1;
    uVar3 = (ulonglong)uVar2;
    this->VertexBufferSize = uVar2 + this->NumVertices * this->NumTexCoords * 8;
  }
  this->TexCoordOffset = (uint)uVar3;
  if (param_4) {
    iVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x180))
                      (GDynamicRHI,CONCAT71((int7)(uVar3 >> 8),0x25));
    uVar2 = (this->VertexBufferSize - 1) + iVar1 & -iVar1;
    this->VertexBufferSize = uVar2 + this->NumVertices * 4;
    this->ColorOffset = uVar2;
  }
  else {
    this->ColorOffset = 0xffffffff;
  }
  return;
}

// UpdateMesh @ 148ed6f30

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_GameThread::UpdateMesh(FNDIInstanceData_GameThread *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->bHasChanged = true;
  this->NumTriangles = 0;
  iVar2 = (this->Sections).ArrayNum;
  pFVar4 = (this->Sections).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<NDIDynamicMeshLocal::FNDIInstanceSection,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    *(uint *)pFVar4 = this->NumTriangles;
    uVar3 = 0;
    if (this->bClearTrianglesPerFrame == false) {
      uVar3 = *(undefined4 *)(pFVar4 + 4);
    }
    *(undefined4 *)(pFVar4 + 8) = uVar3;
    this->NumTriangles = this->NumTriangles + *(int *)(pFVar4 + 4);
    pFVar4 = pFVar4 + 0x10;
  }
  piVar1 = &(this->IndexData).ArrayMax;
  (this->IndexData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->IndexData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->VertexData).ArrayMax;
  (this->VertexData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->VertexData).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateTransformData @ 148ed7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
NDISceneCapture2DLocal::FNDIInstanceData_GameThread::UpdateTransformData
          (FNDIInstanceData_GameThread *this,float param_1,FNiagaraSystemInstance *param_2,
          USceneCaptureComponent2D *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  UTextureRenderTarget2D *pUVar6;
  float fVar7;
  TVector<float> *pTVar8;
  TMatrix<double> *pTVar9;
  TMatrix<float> *pTVar10;
  TQuat<double> *pTVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_d88 [32];
  float local_d68;
  float fStack_d64;
  float fStack_d60;
  float fStack_d5c;
  undefined4 uStack_d4c;
  undefined4 uStack_d3c;
  undefined4 uStack_d2c;
  undefined4 uStack_d1c;
  TVector<float>_u_0 local_d18;
  TVector<double>_u_0 local_d08;
  FNiagaraLWCConverter local_ce8;
  TQuat<double> local_cc8;
  TMatrix<float> local_ca8;
  TMatrix<float> local_c68;
  TMatrix<float> local_c28;
  TMatrix<float> local_be8;
  TMatrix<float> local_ba8;
  TMatrix<float> local_b68;
  TMatrix<float> local_b28;
  TMatrix<float> local_ae8;
  TMatrix<float> local_aa8;
  TMatrix<float> local_a68;
  TVector<double>_u_0 local_a28;
  TRotator<double> local_a10;
  float local_9f8;
  float local_9e8;
  byte local_9bc;
  void *local_250;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_d88;
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_a28._s_0);
  (**(code **)(*(longlong *)param_3 + 0x668))(param_3);
  FNiagaraSystemInstance::GetLWCConverter(param_2,&local_ce8,false);
  fVar16 = 0.0;
  local_d08._s_0.X = local_a28._s_0.X;
  local_d08._s_0.Y = local_a28._s_0.Y;
  local_d08._16_4_ = local_a28._16_4_;
  local_d08._20_4_ = local_a28._20_4_;
  uVar14 = local_a28._16_4_;
  uVar15 = local_a28._20_4_;
  pTVar8 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                     (&local_ce8,(TVector<float> *)&local_d18._s_0,
                      (TVector<double> *)&local_d08._s_0);
  fVar12 = (pTVar8->field0_0x0)._s_0.X;
  fVar13 = (pTVar8->field0_0x0)._s_0.Y;
  local_d18._0_8_ = (undefined8)(pTVar8->field0_0x0)._s_0.Z;
  local_a28._s_0.X = (double)(pTVar8->field0_0x0)._s_0.X;
  local_a28._s_0.Y = (double)(pTVar8->field0_0x0)._s_0.Y;
  local_a28._s_0.Z = (double)local_d18._0_8_;
  __vdecl_sincosf4();
  fVar7 = __real_3f800000;
  uStack_d4c = 0;
  uStack_d3c = 0;
  local_ca8.M[0][0] = (float)uVar15 * (float)uVar14;
  local_ca8.M[1][2] =
       (float)((uint)((float)uVar14 * extraout_XMM0_Dc) ^ __xmm_80000000800000008000000080000000);
  local_ca8.M[1][0] =
       (float)uVar15 * extraout_XMM0_Dc * extraout_XMM0_Da - fVar16 * extraout_XMM0_Db;
  local_ca8.M[0][1] = (float)uVar14 * extraout_XMM0_Db;
  local_ca8.M[1][1] =
       fVar16 * (float)uVar15 + extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da;
  uStack_d2c = 0;
  uStack_d1c = 0x3f800000;
  local_ca8.M[2][0] =
       (float)((uint)(extraout_XMM0_Dc * extraout_XMM0_Db +
                     (float)uVar15 * fVar16 * extraout_XMM0_Da) ^
              __xmm_80000000800000008000000080000000);
  local_d68 = (float)uVar15 * extraout_XMM0_Dc - extraout_XMM0_Db * fVar16 * extraout_XMM0_Da;
  local_ca8.M[2][2] = fVar16 * (float)uVar14;
  local_ca8.M[1][3] = 0.0;
  local_ca8.M[0][3] = 0.0;
  local_ca8.M[2][3] = 0.0;
  local_ca8.M[3][2] = (float)(double)local_d18._0_8_;
  local_b68.M[0][0] = ___xmm_000000003f8000000000000000000000;
  local_b68.M[0][1] = _UNK_150689534;
  local_b68.M[0][2] = _UNK_150689538;
  local_b68.M[0][3] = _UNK_15068953c;
  local_b68.M[2][0] = ___xmm_00000000000000003f80000000000000;
  local_b68.M[2][1] = _UNK_150689504;
  local_b68.M[2][2] = _UNK_150689508;
  local_b68.M[2][3] = _UNK_15068950c;
  local_ca8.M[3][3] = 1.0;
  local_b68.M[1][0] = ___xmm_0000000000000000000000003f800000;
  local_b68.M[1][1] = _UNK_1506894f4;
  local_b68.M[1][2] = _UNK_1506894f8;
  local_b68.M[1][3] = _UNK_1506894fc;
  local_b68.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_b68.M[3][1] = _UNK_150689644;
  local_b68.M[3][2] = _UNK_150689648;
  local_b68.M[3][3] = _UNK_15068964c;
  fStack_d64 = (float)uVar15;
  fStack_d60 = (float)uVar15;
  fStack_d5c = (float)uVar15;
  local_ca8.M[0][2] = extraout_XMM0_Da;
  local_ca8.M[2][1] = local_d68;
  local_ca8.M[3][0] = fVar12;
  local_ca8.M[3][1] = fVar13;
  pTVar9 = FMinimalViewInfo::CalculateProjectionMatrix
                     ((FMinimalViewInfo *)&local_a28._s_0,&local_158);
  local_be8.M[0][0] = (float)pTVar9->M[0][0];
  local_be8.M[0][1] = (float)pTVar9->M[0][1];
  local_be8.M[0][2] = (float)pTVar9->M[0][2];
  local_be8.M[0][3] = (float)pTVar9->M[0][3];
  local_be8.M[1][0] = (float)pTVar9->M[1][0];
  local_be8.M[1][1] = (float)pTVar9->M[1][1];
  local_be8.M[1][2] = (float)pTVar9->M[1][2];
  local_be8.M[1][3] = (float)pTVar9->M[1][3];
  local_be8.M[2][2] = (float)pTVar9->M[2][2];
  local_be8.M[2][3] = (float)pTVar9->M[2][3];
  local_be8.M[2][0] = (float)pTVar9->M[2][0];
  local_be8.M[2][1] = (float)pTVar9->M[2][1];
  local_be8.M[3][0] = (float)pTVar9->M[3][0];
  local_be8.M[3][1] = (float)pTVar9->M[3][1];
  local_be8.M[3][2] = (float)pTVar9->M[3][2];
  local_be8.M[3][3] = (float)pTVar9->M[3][3];
  if ((((((__real_322bcc77 <
           (float)((uint)local_ca8.M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
         (__real_322bcc77 <
          (float)((uint)local_ca8.M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
        (__real_322bcc77 < (float)((uint)local_ca8.M[0][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
        )) || ((__real_322bcc77 <
                (float)((uint)local_ca8.M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
               (__real_322bcc77 <
                (float)((uint)local_ca8.M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))))) ||
      ((__real_322bcc77 < (float)((uint)local_ca8.M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
       || ((__real_322bcc77 <
            (float)((uint)local_ca8.M[2][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
           (__real_322bcc77 <
            (float)((uint)local_ca8.M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))))))) ||
     (__real_322bcc77 < (float)((uint)local_ca8.M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    FMath::MatrixInverse(&local_ba8,&local_ca8);
    local_c28.M[0][0] = local_ba8.M[0][0];
    local_c28.M[0][1] = local_ba8.M[0][1];
    local_c28.M[0][2] = local_ba8.M[0][2];
    local_c28.M[0][3] = local_ba8.M[0][3];
    local_c28.M[1][0] = local_ba8.M[1][0];
    local_c28.M[1][1] = local_ba8.M[1][1];
    local_c28.M[1][2] = local_ba8.M[1][2];
    local_c28.M[1][3] = local_ba8.M[1][3];
    local_c28.M[2]._0_8_ = local_ba8.M[2]._0_8_;
    local_c28.M[2]._8_8_ = local_ba8.M[2]._8_8_;
    local_c28.M[3]._0_8_ = local_ba8.M[3]._0_8_;
    local_c28.M[3]._8_8_ = local_ba8.M[3]._8_8_;
  }
  else {
    local_c28.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_c28.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_c28.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_c28.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_c28.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_c28.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_c28.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_c28.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_c28.M[2]._0_8_ = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    local_c28.M[2]._8_8_ = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    local_c28.M[3]._0_8_ = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    local_c28.M[3]._8_8_ = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  }
  VectorMatrixMultiply(&local_b28,&local_c28,&local_b68);
  *(float *)&this->field_0x10 = local_b28.M[0][0];
  *(float *)&this->field_0x14 = local_b28.M[0][1];
  *(float *)&this->field_0x18 = local_b28.M[0][2];
  *(float *)&this->field_0x1c = local_b28.M[0][3];
  *(float *)&this->field_0x20 = local_b28.M[1][0];
  *(float *)&this->field_0x24 = local_b28.M[1][1];
  *(float *)&this->field_0x28 = local_b28.M[1][2];
  *(float *)&this->field_0x2c = local_b28.M[1][3];
  *(float *)&this->field_0x30 = local_b28.M[2][0];
  *(float *)&this->field_0x34 = local_b28.M[2][1];
  *(float *)&this->field_0x38 = local_b28.M[2][2];
  *(float *)&this->field_0x3c = local_b28.M[2][3];
  *(float *)&this->field_0x40 = local_b28.M[3][0];
  *(float *)&this->field_0x44 = local_b28.M[3][1];
  *(float *)&this->field_0x48 = local_b28.M[3][2];
  *(float *)&this->field_0x4c = local_b28.M[3][3];
  VectorMatrixMultiply(&local_ae8,(TMatrix<float> *)&this->field_0x10,&local_be8);
  *(float *)&this->field_0x50 = local_ae8.M[0][0];
  *(float *)&this->field_0x54 = local_ae8.M[0][1];
  *(float *)&this->field_0x58 = local_ae8.M[0][2];
  *(float *)&this->field_0x5c = local_ae8.M[0][3];
  *(float *)&this->field_0x60 = local_ae8.M[1][0];
  *(float *)&this->field_0x64 = local_ae8.M[1][1];
  *(float *)&this->field_0x68 = local_ae8.M[1][2];
  *(float *)&this->field_0x6c = local_ae8.M[1][3];
  *(float *)&this->field_0x70 = local_ae8.M[2][0];
  *(float *)&this->field_0x74 = local_ae8.M[2][1];
  *(float *)&this->field_0x78 = local_ae8.M[2][2];
  *(float *)&this->field_0x7c = local_ae8.M[2][3];
  *(float *)&this->field_0x80 = local_ae8.M[3][0];
  *(float *)&this->field_0x84 = local_ae8.M[3][1];
  *(float *)&this->field_0x88 = local_ae8.M[3][2];
  *(float *)&this->field_0x8c = local_ae8.M[3][3];
  if (local_9bc == 0) {
    local_c68.M[3][3] = 0.0;
    local_c68.M[2][3] = fVar7;
  }
  else {
    local_c68.M[2][3] = 0.0;
    local_c68.M[3][3] = fVar7;
  }
  local_c68.M[0][0] = ___xmm_0000000000000000000000003f800000;
  local_c68.M[0][1] = _UNK_1506894f4;
  local_c68.M[0][2] = _UNK_1506894f8;
  local_c68.M[0][3] = _UNK_1506894fc;
  local_c68.M[2][2] = local_be8.M[2][2];
  local_c68.M[3][2] = local_be8.M[3][2];
  local_c68.M[1][0] = ___xmm_00000000000000003f80000000000000;
  local_c68.M[1][1] = _UNK_150689504;
  local_c68.M[1][2] = _UNK_150689508;
  local_c68.M[1][3] = _UNK_15068950c;
  local_c68.M[2][0] = 0.0;
  local_c68.M[2][1] = 0.0;
  local_c68.M[3][0] = 0.0;
  local_c68.M[3][1] = 0.0;
  pTVar10 = UE::Math::TMatrix<float>::Inverse((TMatrix<float> *)&this->field_0x50,&local_a68);
  VectorMatrixMultiply(&local_aa8,&local_c68,pTVar10);
  *(float *)&this->field_0x90 = local_aa8.M[0][0];
  *(float *)&this->field_0x94 = local_aa8.M[0][1];
  *(float *)&this->field_0x98 = local_aa8.M[0][2];
  *(float *)&this->field_0x9c = local_aa8.M[0][3];
  *(float *)&this->field_0xa0 = local_aa8.M[1][0];
  *(float *)&this->field_0xa4 = local_aa8.M[1][1];
  *(float *)&this->field_0xa8 = local_aa8.M[1][2];
  *(float *)&this->field_0xac = local_aa8.M[1][3];
  *(float *)&this->field_0xb0 = local_aa8.M[2][0];
  *(float *)&this->field_0xb4 = local_aa8.M[2][1];
  *(float *)&this->field_0xb8 = local_aa8.M[2][2];
  *(float *)&this->field_0xbc = local_aa8.M[2][3];
  *(float *)&this->field_0xc0 = local_aa8.M[3][0];
  *(float *)&this->field_0xc4 = local_aa8.M[3][1];
  *(float *)&this->field_0xc8 = local_aa8.M[3][2];
  *(float *)&this->field_0xcc = local_aa8.M[3][3];
  pUVar6 = (param_3->TextureTarget).field0_0x0.DebugPtr;
  iVar5 = pUVar6->NumMips;
  fVar12 = (float)(**(code **)(pUVar6->_padding_ + 0x370))(pUVar6);
  fVar13 = (float)(**(code **)(pUVar6->_padding_ + 0x368))(pUVar6);
  *(int *)this = (int)fVar13;
  *(int *)&this->field_0x4 = (int)fVar12;
  *(int *)&this->field_0x8 = iVar5;
  (this->CaptureLocation).field0_0x0._s_0.X = (float)local_a28._s_0.X;
  (this->CaptureLocation).field0_0x0._s_0.Y = (float)local_a28._s_0.Y;
  (this->CaptureLocation).field0_0x0._s_0.Z = (float)local_a28._s_0.Z;
  pTVar11 = UE::Math::TRotator<double>::Quaternion(&local_a10,&local_cc8);
  dVar1 = pTVar11->X;
  dVar2 = pTVar11->Y;
  dVar3 = pTVar11->Z;
  dVar4 = pTVar11->W;
  *(uint *)&this->field_0xd0 = (uint)local_9bc;
  this->FOV = local_9f8;
  this->OrthoWidth = local_9e8;
  (this->CaptureRotation).X = (float)dVar1;
  (this->CaptureRotation).Y = (float)dVar2;
  (this->CaptureRotation).Z = (float)dVar3;
  (this->CaptureRotation).W = (float)dVar4;
  if (local_250 != (void *)0x0) {
    FMemory::Free(local_250);
  }
  return;
}

