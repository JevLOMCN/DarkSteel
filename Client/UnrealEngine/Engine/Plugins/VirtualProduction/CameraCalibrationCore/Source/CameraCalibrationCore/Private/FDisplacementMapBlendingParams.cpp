// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 4

// FDisplacementMapBlendingParams @ 14d6a7230

FDisplacementMapBlendingParams * __thiscall
FDisplacementMapBlendingParams::FDisplacementMapBlendingParams
          (FDisplacementMapBlendingParams *this,FDisplacementMapBlendingParams *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->BlendType = param_1->BlendType;
  this->EvalFocus = param_1->EvalFocus;
  this->EvalZoom = param_1->EvalZoom;
  fVar2 = param_1->PatchCorners[0].Y;
  fVar3 = param_1->PatchCorners[0].TangentX;
  fVar4 = param_1->PatchCorners[0].TangentY;
  this->PatchCorners[0].X = param_1->PatchCorners[0].X;
  this->PatchCorners[0].Y = fVar2;
  this->PatchCorners[0].TangentX = fVar3;
  this->PatchCorners[0].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[1].Y;
  fVar3 = param_1->PatchCorners[1].TangentX;
  fVar4 = param_1->PatchCorners[1].TangentY;
  this->PatchCorners[1].X = param_1->PatchCorners[1].X;
  this->PatchCorners[1].Y = fVar2;
  this->PatchCorners[1].TangentX = fVar3;
  this->PatchCorners[1].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[2].Y;
  fVar3 = param_1->PatchCorners[2].TangentX;
  fVar4 = param_1->PatchCorners[2].TangentY;
  this->PatchCorners[2].X = param_1->PatchCorners[2].X;
  this->PatchCorners[2].Y = fVar2;
  this->PatchCorners[2].TangentX = fVar3;
  this->PatchCorners[2].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[3].Y;
  fVar3 = param_1->PatchCorners[3].TangentX;
  fVar4 = param_1->PatchCorners[3].TangentY;
  this->PatchCorners[3].X = param_1->PatchCorners[3].X;
  this->PatchCorners[3].Y = fVar2;
  this->PatchCorners[3].TangentX = fVar3;
  this->PatchCorners[3].TangentY = fVar4;
  this->States[0].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[0].DistortionInfo.Parameters.AllocatorInstance.Data =
       param_1->States[0].DistortionInfo.Parameters.AllocatorInstance.Data;
  param_1->States[0].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->States[0].DistortionInfo.Parameters.ArrayNum =
       param_1->States[0].DistortionInfo.Parameters.ArrayNum;
  this->States[0].DistortionInfo.Parameters.ArrayMax =
       param_1->States[0].DistortionInfo.Parameters.ArrayMax;
  param_1->States[0].DistortionInfo.Parameters.ArrayNum = 0;
  param_1->States[0].DistortionInfo.Parameters.ArrayMax = 0;
  dVar1 = param_1->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  this->States[1].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[1].DistortionInfo.Parameters.AllocatorInstance.Data =
       param_1->States[1].DistortionInfo.Parameters.AllocatorInstance.Data;
  param_1->States[1].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->States[1].DistortionInfo.Parameters.ArrayNum =
       param_1->States[1].DistortionInfo.Parameters.ArrayNum;
  this->States[1].DistortionInfo.Parameters.ArrayMax =
       param_1->States[1].DistortionInfo.Parameters.ArrayMax;
  param_1->States[1].DistortionInfo.Parameters.ArrayNum = 0;
  param_1->States[1].DistortionInfo.Parameters.ArrayMax = 0;
  dVar1 = param_1->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  this->States[2].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[2].DistortionInfo.Parameters.AllocatorInstance.Data =
       param_1->States[2].DistortionInfo.Parameters.AllocatorInstance.Data;
  param_1->States[2].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->States[2].DistortionInfo.Parameters.ArrayNum =
       param_1->States[2].DistortionInfo.Parameters.ArrayNum;
  this->States[2].DistortionInfo.Parameters.ArrayMax =
       param_1->States[2].DistortionInfo.Parameters.ArrayMax;
  param_1->States[2].DistortionInfo.Parameters.ArrayNum = 0;
  param_1->States[2].DistortionInfo.Parameters.ArrayMax = 0;
  dVar1 = param_1->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  this->States[3].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[3].DistortionInfo.Parameters.AllocatorInstance.Data =
       param_1->States[3].DistortionInfo.Parameters.AllocatorInstance.Data;
  param_1->States[3].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->States[3].DistortionInfo.Parameters.ArrayNum =
       param_1->States[3].DistortionInfo.Parameters.ArrayNum;
  this->States[3].DistortionInfo.Parameters.ArrayMax =
       param_1->States[3].DistortionInfo.Parameters.ArrayMax;
  param_1->States[3].DistortionInfo.Parameters.ArrayNum = 0;
  param_1->States[3].DistortionInfo.Parameters.ArrayMax = 0;
  dVar1 = param_1->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->FxFyScale).field0_0x0._s_0.Y;
  (this->FxFyScale).field0_0x0._s_0.X = (param_1->FxFyScale).field0_0x0._s_0.X;
  (this->FxFyScale).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->PrincipalPoint).field0_0x0._s_0.Y;
  (this->PrincipalPoint).field0_0x0._s_0.X = (param_1->PrincipalPoint).field0_0x0._s_0.X;
  (this->PrincipalPoint).field0_0x0._s_0.Y = dVar1;
  return this;
}

// FDisplacementMapBlendingParams @ 14d6a73c0

FDisplacementMapBlendingParams * __thiscall
FDisplacementMapBlendingParams::FDisplacementMapBlendingParams
          (FDisplacementMapBlendingParams *this,FDisplacementMapBlendingParams *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->BlendType = param_1->BlendType;
  this->EvalFocus = param_1->EvalFocus;
  this->EvalZoom = param_1->EvalZoom;
  fVar2 = param_1->PatchCorners[0].Y;
  fVar3 = param_1->PatchCorners[0].TangentX;
  fVar4 = param_1->PatchCorners[0].TangentY;
  this->PatchCorners[0].X = param_1->PatchCorners[0].X;
  this->PatchCorners[0].Y = fVar2;
  this->PatchCorners[0].TangentX = fVar3;
  this->PatchCorners[0].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[1].Y;
  fVar3 = param_1->PatchCorners[1].TangentX;
  fVar4 = param_1->PatchCorners[1].TangentY;
  this->PatchCorners[1].X = param_1->PatchCorners[1].X;
  this->PatchCorners[1].Y = fVar2;
  this->PatchCorners[1].TangentX = fVar3;
  this->PatchCorners[1].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[2].Y;
  fVar3 = param_1->PatchCorners[2].TangentX;
  fVar4 = param_1->PatchCorners[2].TangentY;
  this->PatchCorners[2].X = param_1->PatchCorners[2].X;
  this->PatchCorners[2].Y = fVar2;
  this->PatchCorners[2].TangentX = fVar3;
  this->PatchCorners[2].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[3].Y;
  fVar3 = param_1->PatchCorners[3].TangentX;
  fVar4 = param_1->PatchCorners[3].TangentY;
  this->PatchCorners[3].X = param_1->PatchCorners[3].X;
  this->PatchCorners[3].Y = fVar2;
  this->PatchCorners[3].TangentX = fVar3;
  this->PatchCorners[3].TangentY = fVar4;
  FDistortionInfo::FDistortionInfo
            (&this->States[0].DistortionInfo,&param_1->States[0].DistortionInfo);
  dVar1 = param_1->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  FDistortionInfo::FDistortionInfo
            (&this->States[1].DistortionInfo,&param_1->States[1].DistortionInfo);
  dVar1 = param_1->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  FDistortionInfo::FDistortionInfo
            (&this->States[2].DistortionInfo,&param_1->States[2].DistortionInfo);
  dVar1 = param_1->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  FDistortionInfo::FDistortionInfo
            (&this->States[3].DistortionInfo,&param_1->States[3].DistortionInfo);
  dVar1 = param_1->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->FxFyScale).field0_0x0._s_0.Y;
  (this->FxFyScale).field0_0x0._s_0.X = (param_1->FxFyScale).field0_0x0._s_0.X;
  (this->FxFyScale).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->PrincipalPoint).field0_0x0._s_0.Y;
  (this->PrincipalPoint).field0_0x0._s_0.X = (param_1->PrincipalPoint).field0_0x0._s_0.X;
  (this->PrincipalPoint).field0_0x0._s_0.Y = dVar1;
  return this;
}

// FDisplacementMapBlendingParams @ 14d6a7500

FDisplacementMapBlendingParams * __thiscall
FDisplacementMapBlendingParams::FDisplacementMapBlendingParams(FDisplacementMapBlendingParams *this)

{
  this->BlendType = OneFocusOneZoom;
  this->EvalFocus = 0.0;
  this->EvalZoom = 0.0;
  this->PatchCorners[0].X = 0.0;
  this->PatchCorners[0].Y = 0.0;
  this->PatchCorners[0].TangentX = 0.0;
  this->PatchCorners[0].TangentY = 0.0;
  this->PatchCorners[1].X = 0.0;
  this->PatchCorners[1].Y = 0.0;
  this->PatchCorners[1].TangentX = 0.0;
  this->PatchCorners[1].TangentY = 0.0;
  this->PatchCorners[2].X = 0.0;
  this->PatchCorners[2].Y = 0.0;
  this->PatchCorners[2].TangentX = 0.0;
  this->PatchCorners[2].TangentY = 0.0;
  this->PatchCorners[3].X = 0.0;
  this->PatchCorners[3].Y = 0.0;
  this->PatchCorners[3].TangentX = 0.0;
  this->PatchCorners[3].TangentY = 0.0;
  this->States[0].DistortionInfo.Parameters.ArrayNum = 0;
  this->States[0].DistortionInfo.Parameters.ArrayMax = 0;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  this->States[0].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[1].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[1].DistortionInfo.Parameters.ArrayNum = 0;
  this->States[1].DistortionInfo.Parameters.ArrayMax = 0;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  this->States[2].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[2].DistortionInfo.Parameters.ArrayNum = 0;
  this->States[2].DistortionInfo.Parameters.ArrayMax = 0;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  this->States[3].DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->States[3].DistortionInfo.Parameters.ArrayNum = 0;
  this->States[3].DistortionInfo.Parameters.ArrayMax = 0;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  (this->FxFyScale).field0_0x0._s_0.X = 1.0;
  (this->FxFyScale).field0_0x0._s_0.Y = 1.0;
  (this->PrincipalPoint).field0_0x0._s_0.X = 0.5;
  (this->PrincipalPoint).field0_0x0._s_0.Y = 0.5;
  return this;
}

// operator= @ 14d6ad570

FDisplacementMapBlendingParams * __thiscall
FDisplacementMapBlendingParams::operator=
          (FDisplacementMapBlendingParams *this,FDisplacementMapBlendingParams *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->BlendType = param_1->BlendType;
  this->EvalFocus = param_1->EvalFocus;
  this->EvalZoom = param_1->EvalZoom;
  fVar2 = param_1->PatchCorners[0].Y;
  fVar3 = param_1->PatchCorners[0].TangentX;
  fVar4 = param_1->PatchCorners[0].TangentY;
  this->PatchCorners[0].X = param_1->PatchCorners[0].X;
  this->PatchCorners[0].Y = fVar2;
  this->PatchCorners[0].TangentX = fVar3;
  this->PatchCorners[0].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[1].Y;
  fVar3 = param_1->PatchCorners[1].TangentX;
  fVar4 = param_1->PatchCorners[1].TangentY;
  this->PatchCorners[1].X = param_1->PatchCorners[1].X;
  this->PatchCorners[1].Y = fVar2;
  this->PatchCorners[1].TangentX = fVar3;
  this->PatchCorners[1].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[2].Y;
  fVar3 = param_1->PatchCorners[2].TangentX;
  fVar4 = param_1->PatchCorners[2].TangentY;
  this->PatchCorners[2].X = param_1->PatchCorners[2].X;
  this->PatchCorners[2].Y = fVar2;
  this->PatchCorners[2].TangentX = fVar3;
  this->PatchCorners[2].TangentY = fVar4;
  fVar2 = param_1->PatchCorners[3].Y;
  fVar3 = param_1->PatchCorners[3].TangentX;
  fVar4 = param_1->PatchCorners[3].TangentY;
  this->PatchCorners[3].X = param_1->PatchCorners[3].X;
  this->PatchCorners[3].Y = fVar2;
  this->PatchCorners[3].TangentX = fVar3;
  this->PatchCorners[3].TangentY = fVar4;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)this->States,
             (TArray<float,TSizedDefaultAllocator<32>_> *)param_1->States);
  dVar1 = param_1->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->States + 1),
             (TArray<float,TSizedDefaultAllocator<32>_> *)(param_1->States + 1));
  dVar1 = param_1->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->States + 2),
             (TArray<float,TSizedDefaultAllocator<32>_> *)(param_1->States + 2));
  dVar1 = param_1->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->States + 3),
             (TArray<float,TSizedDefaultAllocator<32>_> *)(param_1->States + 3));
  dVar1 = param_1->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       param_1->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X;
  this->States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       param_1->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X;
  this->States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->FxFyScale).field0_0x0._s_0.Y;
  (this->FxFyScale).field0_0x0._s_0.X = (param_1->FxFyScale).field0_0x0._s_0.X;
  (this->FxFyScale).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->PrincipalPoint).field0_0x0._s_0.Y;
  (this->PrincipalPoint).field0_0x0._s_0.X = (param_1->PrincipalPoint).field0_0x0._s_0.X;
  (this->PrincipalPoint).field0_0x0._s_0.Y = dVar1;
  return this;
}

