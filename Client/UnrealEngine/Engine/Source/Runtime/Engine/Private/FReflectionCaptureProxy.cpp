// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FReflectionCaptureProxy @ 147929370

FReflectionCaptureProxy * __thiscall
FReflectionCaptureProxy::FReflectionCaptureProxy
          (FReflectionCaptureProxy *this,UReflectionCaptureComponent *param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UReflectionCaptureComponent *pUVar8;
  FReflectionCaptureProxy *pFVar9;
  FReflectionCaptureMapBuildData *pFVar10;
  TMatrix<double> *pTVar11;
  FString *pFVar12;
  UReflectionCaptureComponent *pUVar13;
  int iVar14;
  wchar_t *pwVar16;
  UReflectionCaptureComponent *pUVar17;
  float fVar18;
  FString local_a8;
  TMatrix<double> local_98;
  UReflectionCaptureComponent *pUVar15;
  
  pUVar15 = (UReflectionCaptureComponent *)0x0;
  iVar14 = 0;
  this->MobileUniformBuffer = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0;
  *(undefined8 *)&(this->Position).High.field0_0x0 = 0;
  (this->Position).High.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->Position).Low.field0_0x0 = 0;
  (this->Position).Low.field0_0x0._s_0.Z = 0.0;
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.W = 1.0;
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.X = 0.0;
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.Y = 0.0;
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.Z = 0.0;
  this->PackedIndex = -1;
  this->SortedCaptureIndex = -1;
  dVar1 = (param_1->CaptureOffset).field0_0x0._s_0.Z;
  *(ulonglong *)&(this->CaptureOffset).field0_0x0 =
       CONCAT44((float)(param_1->CaptureOffset).field0_0x0._s_0.Y,
                (float)(param_1->CaptureOffset).field0_0x0._s_0.X);
  (this->CaptureOffset).field0_0x0._s_0.Z = (float)dVar1;
  if (param_1 == (UReflectionCaptureComponent *)0x0) {
LAB_147929449:
    pUVar13 = pUVar15;
    if (param_1 != (UReflectionCaptureComponent *)0x0) goto LAB_147929451;
LAB_14792947c:
    pUVar17 = pUVar15;
    if (param_1 != (UReflectionCaptureComponent *)0x0) goto LAB_147929484;
  }
  else {
    pUVar7 = Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister();
    lVar3 = *(longlong *)&param_1->field_0x10;
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       (pUVar13 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar7->_padding_)) goto LAB_147929449;
LAB_147929451:
    pUVar7 = Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister();
    lVar3 = *(longlong *)&param_1->field_0x10;
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       (pUVar17 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar7->_padding_)) goto LAB_14792947c;
LAB_147929484:
    pUVar7 = Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar8 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar7->_padding_)) goto LAB_1479294ac;
  }
  pUVar8 = pUVar15;
LAB_1479294ac:
  this->Shape = Num;
  pwVar16 = L"";
  this->BoxTransitionDistance = 0.0;
  if (pUVar13 == (UReflectionCaptureComponent *)0x0) {
    if (pUVar17 == (UReflectionCaptureComponent *)0x0) {
      if (pUVar8 == (UReflectionCaptureComponent *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ReflectionCaptureComponent.cpp"
                           ,0x4f9,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FReflectionCaptureProxy *)(*pcVar4)();
          return pFVar9;
        }
      }
      else {
        this->Shape = Plane;
      }
    }
    else {
      this->Shape = Box;
      this->BoxTransitionDistance = *(float *)&pUVar17->field_0x2b8;
    }
  }
  else {
    this->Shape = Sphere;
  }
  this->Component = param_1;
  pFVar10 = UReflectionCaptureComponent::GetMapBuildData(param_1);
  this->EncodedHDRCubemap = (FTexture *)this->Component->EncodedHDRCubemapTexture;
  this->EncodedHDRAverageBrightness = this->Component->CachedAverageBrightness;
  pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale
                      ((TTransform<double> *)&param_1->field_0x1f0,&local_98);
  SetTransform(this,pTVar11);
  fVar18 = (float)(**(code **)(*(longlong *)param_1 + 0x648))(param_1);
  this->InfluenceRadius = fVar18;
  this->Brightness = param_1->Brightness;
  pFVar12 = UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)this->Component,&local_a8,(UObject *)0x0);
  iVar2 = (pFVar12->Data).ArrayNum;
  if (iVar2 != 0) {
    pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    iVar14 = iVar2 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar16);
  this->Guid = uVar6;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  this->bUsingPreviewCaptureData = pFVar10 == (FReflectionCaptureMapBuildData *)0x0;
  return this;
}

// SetTransform @ 14796c750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FReflectionCaptureProxy::SetTransform(FReflectionCaptureProxy *this,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_248 [36];
  float fStack_224;
  float local_220;
  float local_218 [4];
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  ulonglong local_b8;
  
  fVar4 = __real_322bcc77;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_248;
  dVar1 = param_1->M[3][0];
  dVar2 = param_1->M[3][1];
  dVar3 = param_1->M[3][2];
  local_208 = (float)dVar1;
  fStack_204 = (float)dVar2;
  fStack_200 = (float)dVar3;
  fStack_1fc = (float)(dVar1 - (double)local_208);
  fStack_1f4 = (float)(dVar3 - (double)fStack_200);
  fStack_1f8 = (float)(dVar2 - (double)fStack_204);
  (this->Position).High.field0_0x0._s_0.X = local_208;
  (this->Position).High.field0_0x0._s_0.Y = fStack_204;
  (this->Position).High.field0_0x0._s_0.Z = fStack_200;
  (this->Position).Low.field0_0x0._s_0.X = fStack_1fc;
  *(ulonglong *)((longlong)&(this->Position).Low.field0_0x0 + 4) = CONCAT44(fStack_1f4,fStack_1f8);
  local_138.M[0][0] = (float)param_1->M[0][0];
  local_138.M[0][1] = (float)param_1->M[0][1];
  fStack_1c0 = (float)param_1->M[0][2];
  fStack_1bc = (float)param_1->M[0][3];
  local_138.M[1][0] = (float)param_1->M[1][0];
  local_138.M[1][1] = (float)param_1->M[1][1];
  local_138.M[2][0] = (float)param_1->M[2][0];
  local_138.M[2][1] = (float)param_1->M[2][1];
  local_138.M[1][2] = (float)param_1->M[1][2];
  local_138.M[1][3] = (float)param_1->M[1][3];
  local_138.M[2][2] = (float)param_1->M[2][2];
  local_138.M[2][3] = (float)param_1->M[2][3];
  local_218 = (float  [4])(ZEXT416((uint)(float)param_1->M[3][3]) << 0x60);
  if ((((((fVar4 < (float)((uint)local_138.M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
         (fVar4 < (float)((uint)local_138.M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
        (local_208 = fStack_1c0, fStack_204 = fStack_1c0, fStack_200 = fStack_1c0,
        fStack_1fc = fStack_1c0,
        fVar4 < (float)((uint)fStack_1c0 & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
       ((fVar4 < (float)((uint)local_138.M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
        (fVar4 < (float)((uint)local_138.M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))))) ||
      ((fVar4 < (float)((uint)local_138.M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
       ((fVar4 < (float)((uint)local_138.M[2][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
        (fVar4 < (float)((uint)local_138.M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))))))) ||
     (fVar14 = UE::Math::TMatrix<float>::Identity.M[3][0],
     fVar5 = UE::Math::TMatrix<float>::Identity.M[3][1],
     fVar23 = UE::Math::TMatrix<float>::Identity.M[3][2],
     fVar17 = UE::Math::TMatrix<float>::Identity.M[3][3],
     uVar8 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_,
     uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_,
     uVar15 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_,
     uVar16 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_,
     uVar19 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_,
     uVar20 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_,
     fVar4 < (float)((uint)local_138.M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    local_1c8 = local_138.M[0][0];
    fStack_1c4 = local_138.M[0][1];
    local_138.M[0][2] = fStack_1c0;
    local_138.M[0][3] = fStack_1bc;
    local_138.M[3] = local_218;
    FMath::MatrixInverse(&local_f8,&local_138);
    local_218._0_12_ = local_138.M[3]._0_12_;
    local_208 = local_138.M[0][2];
    fVar14 = local_f8.M[3][0];
    fVar5 = local_f8.M[3][1];
    fVar23 = local_f8.M[3][2];
    fVar17 = local_f8.M[3][3];
    uVar8 = local_f8.M[0]._0_8_;
    uVar11 = local_f8.M[0]._8_8_;
    uVar15 = local_f8.M[1]._0_8_;
    uVar16 = local_f8.M[1]._8_8_;
    uVar19 = local_f8.M[2]._0_8_;
    uVar20 = local_f8.M[2]._8_8_;
  }
  *(undefined8 *)(this->BoxTransform).M[0] = uVar8;
  *(undefined8 *)((this->BoxTransform).M[0] + 2) = uVar11;
  *(undefined8 *)(this->BoxTransform).M[1] = uVar15;
  *(undefined8 *)((this->BoxTransform).M[1] + 2) = uVar16;
  fVar21 = _UNK_1506894fc;
  fVar22 = _UNK_1506894f4;
  fVar12 = ___xmm_0000000000000000000000003f800000;
  fVar6 = _UNK_1506894f8 * local_138.M[2][0];
  fVar9 = _UNK_1506894f8 * local_138.M[2][1];
  fVar10 = _UNK_1506894f8 * local_138.M[2][2];
  *(undefined8 *)(this->BoxTransform).M[2] = uVar19;
  *(undefined8 *)((this->BoxTransform).M[2] + 2) = uVar20;
  (this->BoxTransform).M[3][0] = fVar14;
  (this->BoxTransform).M[3][1] = fVar5;
  (this->BoxTransform).M[3][2] = fVar23;
  (this->BoxTransform).M[3][3] = fVar17;
  fVar17 = _UNK_1517f6fdc;
  fVar23 = _UNK_1517f6fd8;
  fVar5 = _UNK_1517f6fd4;
  fVar14 = ___xmm_0000000000000000bf80000000000000;
  fVar6 = fVar22 * local_138.M[1][0] + fVar12 * local_138.M[0][0] + fVar6 + fVar21 * local_218[0];
  fVar9 = fVar22 * local_138.M[1][1] + fVar12 * local_138.M[0][1] + fVar9 + fVar21 * local_218[1];
  fVar22 = fVar22 * local_138.M[1][2] + fVar12 * local_208 + fVar10 + fVar21 * local_218[2];
  fVar12 = fVar9 * fVar9 + fVar6 * fVar6 + fVar22 * fVar22;
  uVar18 = fVar22;
  uVar7 = fVar6;
  uVar13 = fVar9;
  if ((fVar12 != __real_3f800000) &&
     (uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
     uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, fVar4 <= fVar12)) {
    fVar12 = __real_3f800000 / SQRT(fVar12);
    uVar18 = fVar12 * fVar22;
    uVar7 = fVar12 * fVar6;
    uVar13 = fVar12 * fVar9;
  }
  fVar22 = (float)uVar18 * UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar12 = (float)uVar13 * UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  fVar21 = (float)uVar7 * UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  *(undefined4 *)&(this->LocalReflectionPlane)._padding_ = uVar7;
  *(undefined4 *)((longlong)&(this->LocalReflectionPlane)._padding_ + 4) = uVar13;
  (this->LocalReflectionPlane)._padding_ = uVar18;
  (this->LocalReflectionPlane).W = fVar12 + fVar21 + fVar22;
  fVar12 = __real_3f800000;
  uVar18 = fVar5 * local_138.M[1][0] + fVar14 * local_138.M[0][0] + fVar23 * local_138.M[2][0] +
           fVar17 * local_218[0];
  fStack_224 = fVar5 * local_138.M[1][1] + fVar14 * local_138.M[0][1] + fVar23 * local_138.M[2][1] +
               fVar17 * local_218[1];
  local_220 = fVar5 * local_138.M[1][2] + fVar14 * local_208 + fVar23 * local_138.M[2][2] +
              fVar17 * local_218[2];
  fVar14 = 0.0;
  fVar23 = local_138.M[0][1] * local_138.M[0][1] + local_138.M[0][0] * local_138.M[0][0] +
           local_208 * local_208;
  fVar5 = 0.0;
  if (fVar4 < fVar23) {
    fVar5 = SQRT(fVar23);
  }
  fVar23 = local_138.M[1][1] * local_138.M[1][1] + local_138.M[1][0] * local_138.M[1][0] +
           local_138.M[1][2] * local_138.M[1][2];
  if (fVar23 <= fVar4) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = SQRT(fVar23);
  }
  fVar17 = local_138.M[2][1] * local_138.M[2][1] + local_138.M[2][0] * local_138.M[2][0] +
           local_138.M[2][2] * local_138.M[2][2];
  if (fVar4 < fVar17) {
    fVar14 = SQRT(fVar17);
  }
  *(ulonglong *)&(this->BoxScales).field0_0x0 = CONCAT44(fVar23,fVar5);
  (this->BoxScales).field0_0x0._s_0.Z = fVar14;
  fVar5 = fStack_224 * fStack_224 + (float)uVar18 * (float)uVar18 + local_220 * local_220;
  if (fVar5 != fVar12) {
    if (fVar5 < fVar4) {
      fStack_224 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      local_220 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    }
    else {
      fVar12 = fVar12 / SQRT(fVar5);
      fStack_224 = fStack_224 * fVar12;
      local_220 = local_220 * fVar12;
      uVar18 = (float)uVar18 * fVar12;
    }
  }
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.X = (double)((float)uVar18 * fVar23);
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.Y = (double)(fStack_224 * fVar23);
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.Z = (double)(local_220 * fVar23);
  (this->ReflectionXAxisAndYScale).field0_0x0._s_0.W = (double)(fVar23 / fVar14);
  return;
}

// UpdateMobileUniformBuffer @ 147978e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReflectionCaptureProxy::UpdateMobileUniformBuffer
          (FReflectionCaptureProxy *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> this_00;
  code *pcVar2;
  bool bVar3;
  FTexture *pFVar4;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> TVar5;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> *pTVar6;
  undefined8 local_res8;
  float local_38 [4];
  FRHITexture *local_28;
  FRHISamplerState *pFStack_20;
  FRHITexture *local_18;
  FRHISamplerState *local_10;
  
  pFVar4 = GBlackTextureCube;
  if (this->EncodedHDRCubemap != (FTexture *)0x0) {
    if ((int)this->EncodedHDRCubemap->_padding_ == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EncodedHDRCubemap->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ReflectionCaptureComponent.cpp"
                         ,0x529,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = this->EncodedHDRCubemap;
  }
  local_38[0] = this->EncodedHDRAverageBrightness;
  TVar5 = this->MobileUniformBuffer;
  local_38[3] = this->Brightness;
  pTVar6 = &this->MobileUniformBuffer;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_28 = (pFVar4->TextureRHI).Reference;
  pFStack_20 = (pFVar4->SamplerStateRHI).Reference;
  local_18 = local_28;
  local_10 = pFStack_20;
  if (TVar5 == (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
    TVar5 = TUniformBufferRef<FMobileReflectionCaptureShaderParameters>::
            CreateUniformBufferImmediate
                      ((FMobileReflectionCaptureShaderParameters *)&stack0x00000008,
                       (EUniformBufferUsage)local_38,2);
    if ((TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)pTVar6 != TVar5) {
      this_00 = *pTVar6;
      *pTVar6 = *(TUniformBufferRef<FMobileReflectionCaptureShaderParameters> *)TVar5;
      *(undefined8 *)TVar5 = 0;
      if (this_00 != (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if ((FRHIResource *)local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_res8);
    }
    return;
  }
  EVar1 = param_1->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,TVar5,local_38);
    FRHICommandListBase::SwitchPipeline(param_1,None);
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,TVar5,local_38);
  return;
}

// UpdateMobileUniformBuffer @ 147978fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FReflectionCaptureProxy::UpdateMobileUniformBuffer(FReflectionCaptureProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateMobileUniformBuffer(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

