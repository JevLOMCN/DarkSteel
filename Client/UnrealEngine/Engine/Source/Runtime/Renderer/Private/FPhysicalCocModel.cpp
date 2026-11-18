// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// Compile @ 14513b530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall DiaphragmDOF::FPhysicalCocModel::Compile(FPhysicalCocModel *this,FViewInfo *param_1)

{
  undefined8 uVar1;
  float fVar2;
  code *pcVar3;
  undefined4 uVar4;
  double dVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  FRHITexture *pFVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  dVar5 = __real_3ff0000000000000;
  this->FocusDistance = *(float *)&param_1->_padding_;
  fVar13 = *(float *)&param_1->_padding_;
  this->FStops = fVar13;
  fVar12 = *(float *)((longlong)&param_1->_padding_ + 4);
  if (__real_41200000 <= fVar12) {
    fVar12 = __real_41200000;
  }
  if (fVar12 <= __real_3dcccccd) {
    fVar12 = __real_3dcccccd;
  }
  this->Squeeze = fVar12;
  this->Petzval = *(float *)&param_1->_padding_;
  dVar10 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  if (__real_4059000000000000 <= dVar10) {
    dVar10 = __real_4059000000000000;
  }
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  this->PetzvalFalloffPower = (float)dVar10;
  (this->PetzvalExclusionBoxExtents).field0_0x0 = (TVector2<float>_u_0)param_1->_padding_;
  this->PetzvalExclusionBoxRadius = *(float *)&param_1->_padding_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  fVar2 = *(float *)&param_1->_padding_;
  (this->MatteBoxFlags).Elements[0].Pitch = (float)*(undefined4 *)&param_1->_padding_;
  (this->MatteBoxFlags).Elements[0].Roll = (float)uVar4;
  (this->MatteBoxFlags).Elements[0].Length = fVar2;
  uVar1 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
  (this->MatteBoxFlags).Elements[1].Pitch = (float)(int)uVar1;
  (this->MatteBoxFlags).Elements[1].Roll = (float)(int)((ulonglong)uVar1 >> 0x20);
  (this->MatteBoxFlags).Elements[1].Length = fVar2;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  fVar2 = *(float *)&param_1->_padding_;
  (this->MatteBoxFlags).Elements[2].Pitch = (float)*(undefined4 *)&param_1->_padding_;
  (this->MatteBoxFlags).Elements[2].Roll = (float)uVar4;
  (this->MatteBoxFlags).Elements[2].Length = fVar2;
  fVar11 = ((float)((int)param_1->_padding_ - (int)param_1->_padding_) /
           (float)(*(int *)((longlong)&param_1->_padding_ + 4) -
                  *(int *)((longlong)&param_1->_padding_ + 4))) *
           *(float *)((longlong)&param_1->_padding_ + 4);
  this->RenderingAspectRatio = fVar11;
  dVar10 = atan(dVar5 / (double)param_1->_padding_);
  fVar2 = __real_3f000000;
  fVar9 = *(float *)&param_1->_padding_ * __real_3dcccccd;
  this->SensorWidth = fVar9;
  fVar11 = (fVar12 * fVar9) / fVar11;
  this->SensorHeight = fVar11;
  fVar9 = tanf((float)dVar10);
  fVar12 = __real_3f800000;
  fVar9 = (fVar11 * fVar2) / fVar9;
  this->VerticalFocalLength = fVar9;
  fVar13 = (fVar9 / fVar13 + fVar12) * fVar2;
  if (fVar13 <= *(float *)&param_1->_padding_) {
    fVar13 = *(float *)&param_1->_padding_;
  }
  this->BarrelRadius = fVar13;
  this->BarrelLength = *(float *)((longlong)&param_1->_padding_ + 4);
  pTVar6 = CVarMaxForegroundRadius.Ref;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->MinForegroundCocRadius =
       (float)((uint)pTVar6->ShadowedValue[1] ^ __xmm_80000000800000008000000080000000);
  pTVar6 = CVarMaxBackgroundRadius.Ref;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->MaxBackgroundCocRadius = pTVar6->ShadowedValue[1];
  fVar13 = *(float *)&param_1->_padding_ * __real_3a088889;
  this->MaxDepthBlurRadius = fVar13 + fVar13;
  this->DepthBlurExponent = __real_3727c5ac / *(float *)((longlong)&param_1->_padding_ + 4);
  if ((this->FStops <= 0.0) || (fVar13 = this->FocusDistance, fVar13 <= 0.0)) {
    this->InfinityBackgroundCocRadius = 0.0;
    this->MinForegroundCocRadius = 0.0;
  }
  else {
    fVar9 = this->VerticalFocalLength;
    fVar11 = fVar12 / this->SensorHeight;
    dVar10 = (double)(this->RenderingAspectRatio / (fVar11 * this->SensorWidth * this->Squeeze));
    if (dVar10 <= dVar5) {
      dVar10 = dVar5;
    }
    fVar9 = (float)((double)(((fVar9 * fVar9) / ((fVar13 - fVar9) * this->FStops)) * fVar2 * fVar11)
                   * dVar10) / this->RenderingAspectRatio;
    this->InfinityBackgroundCocRadius = fVar9;
    fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
    if (0.0 < fVar2) {
      fVar9 = (fVar12 - fVar13 / fVar2) * fVar9;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      this->InFocusRadius = fVar9;
      this->bEnableDynamicOffset = SUB81(param_1->_padding_,0);
      if ((char)param_1->_padding_ == '\0') {
        pFVar8 = (FRHITexture *)0x0;
      }
      else {
        pFVar8 = (FRHITexture *)param_1->_padding_;
      }
      goto LAB_14513b875;
    }
  }
  pFVar8 = (FRHITexture *)0x0;
  this->bEnableDynamicOffset = false;
  this->InFocusRadius = 0.0;
LAB_14513b875:
  this->DynamicRadiusOffsetLUT = pFVar8;
  return;
}

// DepthToResCocRadius @ 14513efd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
DiaphragmDOF::FPhysicalCocModel::DepthToResCocRadius
          (FPhysicalCocModel *this,float param_1,float param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  fVar5 = ((param_1 - this->FocusDistance) / param_1) * this->InfinityBackgroundCocRadius;
  if (this->bEnableDynamicOffset != false) {
    fVar4 = this->InFocusRadius;
    dVar2 = pow((double)fVar4,__real_bffe3f8769ec2ce4);
    dVar3 = exp((double)((float)(dVar2 * ___real_401f9613d31b9b67 + ___real_3fddef8055fbb518) *
                        (fVar4 - fVar5)));
    dVar2 = __real_3ff0000000000000;
    dVar3 = pow(dVar3 + __real_3ff0000000000000,
                (double)(float)(__real_c004932b55ef1fde - (double)fVar4 * ___real_3fc232441fea8113))
    ;
    fVar4 = (float)((dVar2 - dVar3) *
                   (double)(float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000));
  }
  fVar4 = fVar4 + fVar5;
  fVar5 = powf(__real_40000000,
               (float)((uint)(param_1 * this->DepthBlurExponent) ^
                      __xmm_80000000800000008000000080000000));
  fVar1 = (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar5 = (__real_3f800000 - fVar5) * this->MaxDepthBlurRadius;
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  if (fVar4 < 0.0) {
    fVar5 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
  }
  fVar4 = this->MaxBackgroundCocRadius;
  if (fVar5 <= this->MaxBackgroundCocRadius) {
    fVar4 = fVar5;
  }
  if (fVar4 <= this->MinForegroundCocRadius) {
    fVar4 = this->MinForegroundCocRadius;
  }
  return fVar4 * param_2;
}

// GetCocOffset @ 14514ad70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
DiaphragmDOF::FPhysicalCocModel::GetCocOffset(FPhysicalCocModel *this,float param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  if (this->bEnableDynamicOffset != false) {
    fVar1 = this->InFocusRadius;
    dVar2 = pow((double)fVar1,__real_bffe3f8769ec2ce4);
    dVar3 = exp((double)((float)(dVar2 * ___real_401f9613d31b9b67 + ___real_3fddef8055fbb518) *
                        (fVar1 - param_1)));
    dVar2 = __real_3ff0000000000000;
    dVar3 = pow(dVar3 + __real_3ff0000000000000,
                (double)(float)(__real_c004932b55ef1fde - (double)fVar1 * ___real_3fc232441fea8113))
    ;
    return (float)((dVar2 - dVar3) *
                  (double)(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
  }
  return 0.0;
}

// GetLensRadius @ 14514d820

TVector2<float> __thiscall DiaphragmDOF::FPhysicalCocModel::GetLensRadius(FPhysicalCocModel *this)

{
  TVector2<float>_u_0 in_RDX;
  float fVar1;
  
  fVar1 = (this->VerticalFocalLength / this->FStops) * __real_3f000000;
  *(float *)((longlong)in_RDX + 4) = fVar1;
  *(float *)in_RDX = fVar1 / this->Squeeze;
  return (TVector2<float>)in_RDX;
}

