// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FSceneCapturePhotoSetSampler @ 14ca66530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneCapturePhotoSetSampler * __thiscall
UE::Geometry::FSceneCapturePhotoSetSampler::FSceneCapturePhotoSetSampler
          (FSceneCapturePhotoSetSampler *this,FSceneCapturePhotoSet *param_1,float param_2,
          FDynamicMesh3 *param_3,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_4,
          TMeshTangents<double> *param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  ECaptureTypeStatus EVar7;
  FSceneCapturePhotoSetSampler *pFVar8;
  TAxisAlignedBox3<double> *pTVar9;
  longlong *plVar10;
  double dVar11;
  undefined1 auStackY_d8 [32];
  TAxisAlignedBox3<double> local_a8;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this->_padding_ = (longlong)param_3;
  this->ValidSampleDepthThreshold = param_2;
  this->_padding_ = (longlong)param_4;
  this->_padding_ = (longlong)param_5;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSceneCapturePhotoSetSampler_Geometry_UE__6B_;
  this->SceneCapture = param_1;
  *(undefined8 *)&this->VisibilityFunction = 0;
  *(undefined8 *)&(this->VisibilityFunction).field_0x28 = 0;
  if (param_1 == (FSceneCapturePhotoSet *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneCapture != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Baking\\RenderCaptureFunctions.cpp"
                       ,0x93,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FSceneCapturePhotoSetSampler *)(*pcVar1)();
      return pFVar8;
    }
  }
  if (param_3 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Baking\\RenderCaptureFunctions.cpp"
                       ,0x94,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FSceneCapturePhotoSetSampler *)(*pcVar1)();
      return pFVar8;
    }
  }
  if (param_4 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spatial != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Baking\\RenderCaptureFunctions.cpp"
                       ,0x95,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FSceneCapturePhotoSetSampler *)(*pcVar1)();
      return pFVar8;
    }
  }
  if (param_5 == (TMeshTangents<double> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tangents != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Baking\\RenderCaptureFunctions.cpp"
                       ,0x96,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FSceneCapturePhotoSetSampler *)(*pcVar1)();
      return pFVar8;
    }
  }
  EVar7 = FSceneCapturePhotoSet::GetCaptureTypeStatus(param_1,DeviceDepth);
  if ((EVar7 == Computed) && (param_2 <= 0.0)) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2503060283879063397>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Baking\\RenderCaptureFunctions.cpp"
                       ,0x9b,"ValidSampleDepthThreshold > 0");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FSceneCapturePhotoSetSampler *)(*pcVar1)();
      return pFVar8;
    }
  }
  pTVar9 = FDynamicMesh3::GetBounds(param_3,&local_a8,false);
  local_78 = *(longlong *)&this->VisibilityFunction;
  uVar5 = *(undefined8 *)&(this->VisibilityFunction).field_0x8;
  local_58 = *(undefined8 *)&(this->VisibilityFunction).field_0x20;
  plStack_50 = *(longlong **)&(this->VisibilityFunction).field_0x28;
  dVar3 = (pTVar9->Max).field0_0x0._s_0.Y - (pTVar9->Min).field0_0x0._s_0.Y;
  dVar4 = (pTVar9->Max).field0_0x0._s_0.X - (pTVar9->Min).field0_0x0._s_0.X;
  dVar11 = (pTVar9->Max).field0_0x0._s_0.Z - (pTVar9->Min).field0_0x0._s_0.Z;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  local_68 = *(longlong *)&(this->VisibilityFunction).field_0x10;
  uStack_60 = *(undefined8 *)&(this->VisibilityFunction).field_0x18;
  if (dVar3 <= dVar11) {
    dVar11 = dVar3;
  }
  *(code **)&this->VisibilityFunction =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSceneCapturePhotoSetSampler::FSceneCapturePhotoSetSampler'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  *(undefined8 *)&(this->VisibilityFunction).field_0x8 = uStack_70;
  if (dVar4 <= dVar11) {
    dVar11 = dVar4;
  }
  *(undefined4 *)&(this->VisibilityFunction).field_0x10 = 0x528fa738;
  *(undefined4 *)&(this->VisibilityFunction).field_0x14 = 1;
  *(FSceneCapturePhotoSetSampler **)&(this->VisibilityFunction).field_0x18 = this;
  if (dVar11 <= __real_3f847ae147ae147b) {
    dVar11 = __real_3f847ae147ae147b;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar11 * __real_3f1a36e2ea000000;
  *(undefined1 (*) [16])&(this->VisibilityFunction).field_0x20 = auVar2;
  if (local_78 != 0) {
    plVar10 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar10 = plStack_50;
    }
    uStack_70 = uVar5;
    (**(code **)(*plVar10 + 0x10))();
  }
  return this;
}

// operator() @ 14ca6d930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::FSceneCapturePhotoSetSampler::FSceneCapturePhotoSetSampler'::__l2::<lambda_1>::
operator()(void *this,TVector<double> *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  TVector<double>_u_0 local_c0;
  double local_98;
  double local_88 [2];
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c0._s_0.X = 0.0;
  dVar9 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  auVar6._0_8_ = dVar9 * dVar9;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar2 * dVar2 + auVar6._0_8_ + dVar3 * dVar3;
  auVar7 = sqrtpd(auVar6,auVar7);
  local_88[0] = auVar7._0_8_;
  if (local_88[0] <= 0.0) {
    local_c0._s_0.Z = 0.0;
    local_c0._s_0.Y = 0.0;
    local_88[0] = 0.0;
  }
  else {
    dVar8 = __real_3ff0000000000000 / local_88[0];
    local_c0._s_0.X = dVar8 * dVar9;
    local_c0._s_0.Y = dVar8 * dVar2;
    local_c0._s_0.Z = dVar8 * dVar3;
  }
  dVar2 = *(double *)((longlong)this + 8);
  plVar5 = *(longlong **)(*(longlong *)this + 0x10);
  local_d0 = dVar2 * local_c0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  pcVar1 = *(code **)(*plVar5 + 0x40);
  local_78 = 0;
  local_d8 = dVar2 * local_c0._s_0.X + (param_1->field0_0x0)._s_0.X;
  local_c8 = dVar2 * local_c0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_98 = local_c0._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_c0._s_0,__real_3e45798ee0000000);
  iVar4 = (*pcVar1)(plVar5,&local_d8,local_88);
  if (local_78 != 0) {
    plVar5 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar5 = local_50;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return iVar4 == -1;
}

// ComputeCustomCorrespondence @ 14ca80d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Geometry::FSceneCapturePhotoSetSampler::ComputeCustomCorrespondence
          (FSceneCapturePhotoSetSampler *this,FMeshUVSampleInfo *param_1,
          FCorrespondenceSample *param_2)

{
  FSceneCapturePhotoSet *this_00;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  int local_res8 [2];
  code *local_28;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *local_20;
  TVector2<double>_u_0 local_18;
  
  this_00 = this->SceneCapture;
  if (*(longlong *)&this->VisibilityFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  local_28 = Core::Private::Function::
             TFunctionRefCaller<TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>_const_,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
             ::Call;
  local_20 = &this->VisibilityFunction;
  FSceneCapturePhotoSet::ComputeSampleLocation
            (this_00,&(param_2->BaseSample).SurfacePoint,&param_2->BaseNormal,
             this->ValidSampleDepthThreshold,
             (TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
              *)&local_28,local_res8,(TVector2<double> *)&local_18._s_0);
  param_2->DetailMesh = this->SceneCapture;
  param_2->DetailTriID = local_res8[0];
  (param_2->DetailBaryCoords).field0_0x0._s_0.X = local_18._s_0.X;
  (param_2->DetailBaryCoords).field0_0x0._s_0.Y = local_18._s_0.Y;
  return this->SceneCapture;
}

// IsValidCorrespondence @ 14ca97980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSceneCapturePhotoSetSampler::IsValidCorrespondence
          (FSceneCapturePhotoSetSampler *this,FCorrespondenceSample *param_1)

{
  return param_1->DetailTriID != -1;
}

// SupportsCustomCorrespondence @ 14caa7370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSceneCapturePhotoSetSampler::SupportsCustomCorrespondence
          (FSceneCapturePhotoSetSampler *this)

{
  return true;
}

