// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// EvaluateSampleMulti @ 14c8e1950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Geometry::FMeshMultiResampleImageEvaluator::EvaluateSampleMulti
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  TImageBuilder<UE::Math::TVector4<float>_> *this;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_res8;
  float local_resc;
  TVector4<float>_u_0 local_88;
  TVector2<double>_u_0 local_78;
  TVector4<float>_u_0 local_68 [5];
  
  uVar14 = __real_3f800000;
  iVar1 = param_2->DetailTriID;
  pvVar2 = param_2->DetailMesh;
  uVar11 = 0.0;
  uVar12 = 0.0;
  uVar13 = 0.0;
  uVar6 = (**(code **)(**(longlong **)((longlong)param_3 + 0x20) + 0xb0))
                    (*(longlong **)((longlong)param_3 + 0x20),pvVar2,iVar1);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)param_3 + 0x3c))) {
    uVar7 = 0;
    if ((int)uVar6 < *(int *)((longlong)param_3 + 0x30)) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this = *(TImageBuilder<UE::Math::TVector4<float>_> **)
            (*(longlong *)((longlong)param_3 + 0x28) + (longlong)(int)uVar6 * 0x10);
    if (this != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_3 + 0x20) + 0xf0))
                (*(longlong **)((longlong)param_3 + 0x20),pvVar2,iVar1,&param_2->DetailBaryCoords,
                 *(undefined4 *)((longlong)param_3 + 0x38),&local_res8);
      dVar8 = (double)local_res8;
      local_68[0]._0_8_ = ___xmm_3f800000000000000000000000000000;
      local_68[0]._8_8_ = _UNK_150689648;
      dVar10 = (double)local_resc;
      if (0.0 <= dVar8) {
        if (__real_3ff0000000000000 <= dVar8) {
          dVar8 = __real_3ff0000000000000;
        }
      }
      else {
        dVar8 = 0.0;
      }
      dVar9 = 0.0;
      if ((0.0 <= dVar10) && (dVar9 = dVar10, __real_3ff0000000000000 <= dVar10)) {
        dVar9 = __real_3ff0000000000000;
      }
      local_78._s_0.X = (double)(this->Dimensions).Width * dVar8;
      local_78._s_0.Y = (double)(this->Dimensions).Height * dVar9;
      TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
                (this,(TVector4<float> *)&local_88._s_0,(TVector2<double> *)&local_78._s_0,
                 (TVector4<float> *)&local_68[0]._s_0);
      uVar11 = local_88._s_0.X;
      uVar12 = local_88._s_0.Y;
      uVar13 = local_88._s_0.Z;
      uVar14 = local_88._s_0.W;
    }
  }
  pfVar3 = *param_1;
  *pfVar3 = (float)uVar11;
  pfVar3[1] = (float)uVar12;
  pfVar3[2] = (float)uVar13;
  pfVar3[3] = (float)uVar14;
  *param_1 = pfVar3 + 4;
  return;
}

// ImageSampleFunction @ 14c8fa350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
UE::Geometry::FMeshMultiResampleImageEvaluator::ImageSampleFunction
          (FMeshMultiResampleImageEvaluator *this,TVector4<float> *__return_storage_ptr__,
          FCorrespondenceSample *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  TImageBuilder<UE::Math::TVector4<float>_> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector4<float> *pTVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_res8;
  float local_resc;
  TVector2<double>_u_0 local_58;
  TVector4<float>_u_0 local_48;
  TVector4<float>_u_0 local_38;
  
  pvVar2 = param_1->DetailMesh;
  plVar3 = (longlong *)this->_padding_;
  iVar1 = param_1->DetailTriID;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  lVar4 = *plVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  uVar7 = (**(code **)(lVar4 + 0xb0))(plVar3,pvVar2,iVar1);
  if ((-1 < (int)uVar7) && ((int)uVar7 < this->NumMultiTextures)) {
    uVar9 = 0;
    if ((int)uVar7 < (this->MultiTextures).ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector4<float> *)(*pcVar5)();
        return pTVar8;
      }
    }
    this_00 = *(TImageBuilder<UE::Math::TVector4<float>_> **)
               ((this->MultiTextures).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10);
    if (this_00 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
      (**(code **)(*(longlong *)this->_padding_ + 0xf0))
                ((longlong *)this->_padding_,pvVar2,iVar1,&param_1->DetailBaryCoords,
                 this->DetailUVLayer,&local_res8);
      dVar10 = (double)local_res8;
      local_48._0_8_ = ___xmm_3f800000000000000000000000000000;
      local_48._8_8_ = _UNK_150689648;
      dVar12 = (double)local_resc;
      if (0.0 <= dVar10) {
        if (__real_3ff0000000000000 <= dVar10) {
          dVar10 = __real_3ff0000000000000;
        }
      }
      else {
        dVar10 = 0.0;
      }
      dVar11 = 0.0;
      if ((0.0 <= dVar12) && (dVar11 = dVar12, __real_3ff0000000000000 <= dVar12)) {
        dVar11 = __real_3ff0000000000000;
      }
      local_58._s_0.X = (double)(this_00->Dimensions).Width * dVar10;
      local_58._s_0.Y = (double)(this_00->Dimensions).Height * dVar11;
      TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
                (this_00,(TVector4<float> *)&local_38._s_0,(TVector2<double> *)&local_58._s_0,
                 (TVector4<float> *)&local_48._s_0);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_38._0_8_;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_38._8_8_;
    }
  }
  return __return_storage_ptr__;
}

// Setup @ 14c917d00

void __thiscall
UE::Geometry::FMeshMultiResampleImageEvaluator::Setup
          (FMeshMultiResampleImageEvaluator *this,FMeshBaseBaker *param_1,
          FEvaluationContext *param_2)

{
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSampleMulti;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = FMeshResampleImageEvaluator::EvaluateDefault;
  param_2->EvaluateColor = FMeshResampleImageEvaluator::EvaluateColor;
  param_2->EvaluateChannel = FMeshResampleImageEvaluator::EvaluateChannel;
  pTVar1 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar1);
  this->_padding_ = (longlong)param_1->DetailSampler;
  this->NumMultiTextures = (this->MultiTextures).ArrayNum;
  return;
}

