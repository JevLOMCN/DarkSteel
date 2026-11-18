// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Build @ 147d897b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceSceneShaderData::Build
          (FInstanceSceneShaderData *this,uint param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,float param_6,FRenderTransform *param_7,FRenderTransform *param_8,
          bool param_9)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  FRenderTransform local_48;
  
  FRenderTransform::operator*(param_7,&local_48,param_8);
  FRenderTransform::Orthogonalize(&local_48);
  uVar3 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BuildInternal(this,param_1,param_2,param_3,param_4,param_5,param_6,&local_48,param_9,
                FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].
                bSupportsSceneDataCompressedTransforms);
  return;
}

// Build @ 147d898c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceSceneShaderData::Build
          (FInstanceSceneShaderData *this,uint param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,float param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BuildInternal(this,param_1,param_2,param_3,param_4,param_5,param_6,&FRenderTransform::Identity,
                param_7,FGenericDataDrivenShaderPlatformInfo::Infos[uVar3].
                        bSupportsSceneDataCompressedTransforms);
  return;
}

// BuildInternal @ 147d8b2f0

void __thiscall
FInstanceSceneShaderData::BuildInternal
          (FInstanceSceneShaderData *this,uint param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,float param_6,FRenderTransform *param_7,bool param_8,bool param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  TVector<float>_u_0 local_58;
  undefined8 local_4c;
  undefined8 uStack_44;
  
  fVar11 = param_7->TransformRows[1].field0_0x0._s_0.Y;
  fVar1 = param_7->TransformRows[1].field0_0x0._s_0.Z;
  fVar2 = param_7->TransformRows[0].field0_0x0._s_0.Y;
  fVar3 = param_7->TransformRows[0].field0_0x0._s_0.Z;
  fVar11 = ((fVar11 * param_7->TransformRows[2].field0_0x0._s_0.Z -
            fVar1 * param_7->TransformRows[2].field0_0x0._s_0.Y) *
            param_7->TransformRows[0].field0_0x0._s_0.X -
           (fVar2 * param_7->TransformRows[2].field0_0x0._s_0.Z -
           fVar3 * param_7->TransformRows[2].field0_0x0._s_0.Y) *
           param_7->TransformRows[1].field0_0x0._s_0.X) +
           (fVar2 * fVar1 - fVar3 * fVar11) * param_7->TransformRows[2].field0_0x0._s_0.X;
  uVar10 = param_3 | 1;
  if (0.0 <= fVar11) {
    uVar10 = param_3 & 0xfffffffe;
  }
  if ((!param_8) || (fVar11 == 0.0)) {
    uVar10 = uVar10 | 0x400;
  }
  (this->Data).Elements[0].field0_0x0._s_0.X = (float)(uVar10 << 0x14 | param_1);
  (this->Data).Elements[0].field0_0x0._s_0.Y = (float)(param_5 << 0x18 | param_2);
  (this->Data).Elements[0].field0_0x0._s_0.Z = (float)param_4;
  (this->Data).Elements[0].field0_0x0._s_0.W = param_6;
  if (param_9) {
    FCompressedTransform::FCompressedTransform((FCompressedTransform *)&local_58._s_0,param_7);
    *(undefined8 *)&(this->Data).Elements[1].field0_0x0 = local_4c;
    *(undefined8 *)((longlong)&(this->Data).Elements[1].field0_0x0 + 8) = uStack_44;
    (this->Data).Elements[2].field0_0x0._s_0.X = local_58._s_0.X;
    (this->Data).Elements[2].field0_0x0._s_0.Y = local_58._s_0.Y;
    (this->Data).Elements[2].field0_0x0._s_0.Z = local_58._s_0.Z;
    (this->Data).Elements[2].field0_0x0._s_0.W = 1.0;
  }
  else {
    fVar1 = param_7->TransformRows[0].field0_0x0._s_0.Y;
    fVar2 = param_7->TransformRows[0].field0_0x0._s_0.Z;
    fVar3 = param_7->TransformRows[2].field0_0x0._s_0.X;
    fVar5 = param_7->TransformRows[2].field0_0x0._s_0.Y;
    fVar6 = param_7->TransformRows[2].field0_0x0._s_0.Z;
    fVar7 = param_7->TransformRows[1].field0_0x0._s_0.X;
    fVar8 = param_7->TransformRows[1].field0_0x0._s_0.Y;
    fVar9 = param_7->TransformRows[1].field0_0x0._s_0.Z;
    fVar11 = (param_7->Origin).field0_0x0._s_0.Z;
    uVar4 = *(undefined8 *)&(param_7->Origin).field0_0x0;
    (this->Data).Elements[1].field0_0x0._s_0.X = param_7->TransformRows[0].field0_0x0._s_0.X;
    (this->Data).Elements[1].field0_0x0._s_0.Y = fVar7;
    (this->Data).Elements[1].field0_0x0._s_0.Z = fVar3;
    (this->Data).Elements[1].field0_0x0._s_0.W = (float)uVar4;
    (this->Data).Elements[2].field0_0x0._s_0.X = fVar1;
    (this->Data).Elements[2].field0_0x0._s_0.Y = fVar8;
    (this->Data).Elements[2].field0_0x0._s_0.Z = fVar5;
    (this->Data).Elements[2].field0_0x0._s_0.W = (float)((ulonglong)uVar4 >> 0x20);
    (this->Data).Elements[3].field0_0x0._s_0.X = fVar2;
    (this->Data).Elements[3].field0_0x0._s_0.Y = fVar9;
    (this->Data).Elements[3].field0_0x0._s_0.Z = fVar6;
    (this->Data).Elements[3].field0_0x0._s_0.W = fVar11;
  }
  return;
}

// GetDataStrideInFloat4s @ 147da5420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl FInstanceSceneShaderData::GetDataStrideInFloat4s(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 4 - (FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].
              bSupportsSceneDataCompressedTransforms != 0);
}

// SupportsCompressedTransforms @ 147dc43f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FInstanceSceneShaderData::SupportsCompressedTransforms(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bSupportsSceneDataCompressedTransforms;
}

