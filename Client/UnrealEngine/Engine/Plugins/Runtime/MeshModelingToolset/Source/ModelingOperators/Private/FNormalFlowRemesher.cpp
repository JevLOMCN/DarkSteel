// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// FNormalFlowRemesher @ 14c946ab0

FNormalFlowRemesher * __thiscall
UE::Geometry::FNormalFlowRemesher::FNormalFlowRemesher
          (FNormalFlowRemesher *this,FDynamicMesh3 *param_1)

{
  FQueueRemesher::FQueueRemesher((FQueueRemesher *)this,param_1);
  this->FaceProjectionPassesPerRemeshIteration = 1;
  *(undefined ***)this = &___7FNormalFlowRemesher_Geometry_UE__6B_;
  this->SurfaceProjectionSpeed = 0.2;
  this->NormalAlignmentSpeed = 0.2;
  (this->TempWeightBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempWeightBuffer).ArrayNum = 0;
  (this->TempWeightBuffer).ArrayMax = 0;
  (this->ProjectionWeightBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectionWeightBuffer).ArrayNum = 0;
  (this->ProjectionWeightBuffer).ArrayMax = 0;
  (this->ProjectionVertexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectionVertexBuffer).ArrayNum = 0;
  (this->ProjectionVertexBuffer).ArrayMax = 0;
  this->NumExtraProjectionIterations = 5;
  this->bSmoothInFillAreas = true;
  this->FillAreaDistanceMultiplier = 0.25;
  *(undefined1 **)&this->FillAreaSmoothMultiplier = &DAT_3e800000;
  this->bEnableParallelEdgeFlipPass = true;
  return this;
}

// BasicRemeshPass @ 14c95eb60

void __thiscall UE::Geometry::FNormalFlowRemesher::BasicRemeshPass(FNormalFlowRemesher *this)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackX_8 [8];
  double dStackX_10;
  double dStackX_18;
  code *pcStack_68;
  undefined1 *puStack_60;
  
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) != 0) {
    iVar8 = 0;
    *(undefined4 *)&this->field_0x214 = 0;
    FQueueRemesher::ResetQueue((FQueueRemesher *)this);
    dVar3 = __real_3f847ae147ae147b;
    iVar9 = iVar8;
    if (0 < *(int *)&this->field_0x260) {
      do {
        cVar5 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar5 != '\0') {
          return;
        }
        iVar7 = FQueueRemesher::FastSplitIteration((FQueueRemesher *)this);
      } while ((dVar3 <= (double)iVar7 / (double)*(int *)(*(longlong *)&this->field_0x8 + 0x200)) &&
              (iVar9 = iVar9 + 1, iVar9 < *(int *)&this->field_0x260));
    }
    FQueueRemesher::ResetQueue((FQueueRemesher *)this);
    dVar4 = __real_3feccccccccccccd;
    dVar3 = *(double *)&this->field_0x158 * __real_3fb999999999999a;
    uVar1 = *(undefined8 *)&this->field_0x168;
    iVar9 = iVar8;
    while (cVar5 = (**(code **)(*(longlong *)this + 8))(this), cVar5 == '\0') {
      puStack_60 = auStackX_8;
      pcStack_68 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FNormalFlowRemesher::RemeshWithFaceProjection'::__l15::<lambda_1>,bool>
                   ::Call;
      FQueueRemesher::RemeshIteration
                ((FQueueRemesher *)this,(TFunctionRef<bool___cdecl(void)> *)&pcStack_68);
      if (*(int *)&this->field_0x264 / 2 < iVar9) {
        *(double *)&this->field_0x168 = *(double *)&this->field_0x168 * dVar4;
      }
      dStackX_10 = 0.0;
      if (this->field_0x210 == '\0') {
        TrackedFaceProjectionPass_Serial(this,&dStackX_10,false);
      }
      else {
        TrackedFaceProjectionPass(this,&dStackX_10,false);
      }
      iVar7 = iVar9 + 1;
      if (*(int *)&this->field_0x264 <= iVar9) break;
      if ((*(int *)&this->field_0x27c == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)&this->field_0x278 - *(int *)&this->field_0x2a4 < 1) && (dStackX_10 <= dVar3))
         || ((iVar9 = iVar7, this->MaxTriangleCount != 0 &&
             (this->MaxTriangleCount <= *(int *)(*(longlong *)&this->field_0x8 + 0x170))))) break;
    }
    *(undefined8 *)&this->field_0x168 = uVar1;
    if ((*(longlong *)&this->field_0xd0 != 0) && (0 < this->NumExtraProjectionIterations)) {
      do {
        cVar5 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar5 != '\0') {
          return;
        }
        dStackX_18 = 0.0;
        if (this->field_0x210 == '\0') {
          TrackedFaceProjectionPass_Serial(this,&dStackX_18,true);
        }
        else {
          TrackedFaceProjectionPass(this,&dStackX_18,true);
        }
        if (dStackX_18 == 0.0) {
          return;
        }
        TrackedEdgeFlipPass(this);
        iVar8 = iVar8 + 1;
      } while (iVar8 < this->NumExtraProjectionIterations);
    }
  }
  return;
}

// TrackedFullProjectionPass @ 14c986e70

void __thiscall
UE::Geometry::FNormalFlowRemesher::TrackedFullProjectionPass(FNormalFlowRemesher *this,bool param_1)

{
  int iVar1;
  double local_res8;
  
  iVar1 = 0;
  if (0 < this->FaceProjectionPassesPerRemeshIteration) {
    do {
      if (param_1) {
        TrackedFaceProjectionPass(this,&local_res8,false);
      }
      else {
        TrackedFaceProjectionPass_Serial(this,&local_res8,false);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this->FaceProjectionPassesPerRemeshIteration);
  }
  return;
}

