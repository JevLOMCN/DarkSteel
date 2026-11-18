// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// FCameraPolyLasso @ 14cac8c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCameraPolyLasso * __thiscall
FCameraPolyLasso::FCameraPolyLasso(FCameraPolyLasso *this,FViewCameraState *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  double dVar6;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  this->bCameraIsOrthographic = false;
  (this->Polyline).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polyline).ArrayNum = 0;
  (this->Polyline).ArrayMax = 0;
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  local_78._s_0.Z = 0.0;
  (this->CameraOrigin).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->CameraOrigin).field0_0x0._s_0.Y = dVar1;
  local_78._s_0.Y = _UNK_150689518;
  local_78._s_0.X = ___xmm_00000000000000003ff0000000000000;
  (this->CameraOrigin).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&param_1->Orientation,(TVector<double> *)&local_38[0]._s_0,
             (TVector<double> *)&local_78._s_0);
  local_58._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_58._s_0.Y = _UNK_150689518;
  local_58._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&param_1->Orientation,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_58._s_0);
  uVar4 = local_38[0]._s_0.Z;
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  auVar3._4_8_ = extraout_XMM0_Qb;
  auVar3._0_4_ = (int)((ulonglong)local_38[0]._0_8_ >> 0x20);
  auVar5._0_8_ = auVar3._0_8_ << 0x20;
  auVar5._8_4_ = (int)local_38[0]._s_0.Y;
  auVar5._12_4_ = (int)((ulonglong)local_38[0]._8_8_ >> 0x20);
  dVar6 = (param_1->Position).field0_0x0._s_0.X;
  local_38[0]._s_0.Z = 0.0;
  dVar2 = (param_1->Position).field0_0x0._s_0.Z;
  (this->CameraPlane)._padding_ = local_38[0]._0_8_;
  (this->CameraPlane)._padding_ = local_38[0]._8_8_;
  dVar6 = (local_78._s_0.X + dVar6) * (double)local_38[0]._0_8_;
  local_38[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_38[0]._s_0.Y = _UNK_15061cbc8;
  (this->CameraPlane)._padding_ = uVar4;
  (this->CameraPlane).W =
       (local_78._s_0.Y + dVar1) * auVar5._8_8_ + dVar6 + (local_78._s_0.Z + dVar2) * (double)uVar4;
  this->bCameraIsOrthographic = param_1->bIsOrthographic;
  UE::Math::TQuat<double>::RotateVector
            (&param_1->Orientation,(TVector<double> *)&local_58._s_0,
             (TVector<double> *)&local_38[0]._s_0);
  (this->UBasisVector).field0_0x0._s_0.X = local_58._s_0.X;
  (this->UBasisVector).field0_0x0._s_0.Y = local_58._s_0.Y;
  (this->UBasisVector).field0_0x0._s_0.Z = local_58._s_0.Z;
  local_38[0]._s_0.Z = __real_3ff0000000000000;
  local_38[0]._s_0.X = 0.0;
  local_38[0]._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&param_1->Orientation,(TVector<double> *)&local_58._s_0,
             (TVector<double> *)&local_38[0]._s_0);
  (this->VBasisVector).field0_0x0._s_0.X = local_58._s_0.X;
  (this->VBasisVector).field0_0x0._s_0.Y = local_58._s_0.Y;
  (this->VBasisVector).field0_0x0._s_0.Z = local_58._s_0.Z;
  return this;
}

// AddPoint @ 14cae68c0

void __thiscall FCameraPolyLasso::AddPoint(FCameraPolyLasso *this,TRay<double> *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double local_58;
  double dStack_50;
  
  dVar10 = (double)(this->CameraPlane)._padding_;
  pTVar1 = &this->Polyline;
  dVar11 = (double)(this->CameraPlane)._padding_;
  dVar3 = (this->CameraPlane).W;
  dVar6 = dVar3 * (double)(this->CameraPlane)._padding_;
  dVar7 = ((dVar3 * dVar10 - (param_1->Origin).field0_0x0._s_0.Y) * dVar10 +
           (dVar3 * dVar11 - (param_1->Origin).field0_0x0._s_0.X) * dVar11 +
          (dVar6 - (param_1->Origin).field0_0x0._s_0.Z) * (double)(this->CameraPlane)._padding_) /
          ((param_1->Direction).field0_0x0._s_0.Y * dVar10 +
           (param_1->Direction).field0_0x0._s_0.X * dVar11 +
          (param_1->Direction).field0_0x0._s_0.Z * (double)(this->CameraPlane)._padding_);
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  dVar10 = (dVar7 * (param_1->Direction).field0_0x0._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y) -
           dVar3 * dVar10;
  dVar11 = (dVar7 * (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X) -
           dVar3 * dVar11;
  dVar6 = (dVar7 * (param_1->Direction).field0_0x0._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z) -
          dVar6;
  local_58 = (double)(float)(dVar10 * (this->UBasisVector).field0_0x0._s_0.Y +
                             dVar11 * (this->UBasisVector).field0_0x0._s_0.X +
                            dVar6 * (this->UBasisVector).field0_0x0._s_0.Z);
  dStack_50 = (double)(float)(dVar10 * (this->VBasisVector).field0_0x0._s_0.Y +
                              dVar11 * (this->VBasisVector).field0_0x0._s_0.X +
                             dVar6 * (this->VBasisVector).field0_0x0._s_0.Z);
  if ((pFVar4 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)(this->Polyline).ArrayMax * 0x10)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->Polyline).ArrayNum;
  piVar2 = &(this->Polyline).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Polyline).ArrayNum = iVar9 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(double *)pFVar4 = local_58;
  *(double *)(pFVar4 + 8) = dStack_50;
  return;
}

// GetProjectedPoint @ 14cb13560

TVector2<double> * __thiscall
FCameraPolyLasso::GetProjectedPoint
          (FCameraPolyLasso *this,TVector2<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = (this->CameraPlane).W;
  dVar2 = (double)(this->CameraPlane)._padding_;
  dVar3 = (double)(this->CameraPlane)._padding_;
  dVar4 = (double)(this->CameraPlane)._padding_;
  if (this->bCameraIsOrthographic == false) {
    dVar8 = (param_1->field0_0x0)._s_0.X - (this->CameraOrigin).field0_0x0._s_0.X;
    dVar7 = (param_1->field0_0x0)._s_0.Y - (this->CameraOrigin).field0_0x0._s_0.Y;
    dVar6 = (param_1->field0_0x0)._s_0.Z - (this->CameraOrigin).field0_0x0._s_0.Z;
    dVar5 = ((dVar1 * dVar2 - (this->CameraOrigin).field0_0x0._s_0.X) * dVar2 +
             (dVar3 * dVar1 - (this->CameraOrigin).field0_0x0._s_0.Y) * dVar3 +
            (dVar4 * dVar1 - (this->CameraOrigin).field0_0x0._s_0.Z) * dVar4) /
            (dVar3 * dVar7 + dVar8 * dVar2 + dVar4 * dVar6);
    dVar8 = dVar5 * dVar8 + (this->CameraOrigin).field0_0x0._s_0.X;
    dVar7 = dVar5 * dVar7 + (this->CameraOrigin).field0_0x0._s_0.Y;
    dVar5 = dVar5 * dVar6 + (this->CameraOrigin).field0_0x0._s_0.Z;
  }
  else {
    dVar8 = (param_1->field0_0x0)._s_0.X;
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (dVar8 * dVar2 + dVar3 * dVar7 + dVar4 * dVar5) - dVar1;
    dVar8 = dVar8 - dVar6 * dVar2;
    dVar7 = dVar7 - dVar6 * dVar3;
    dVar5 = dVar5 - dVar6 * dVar4;
  }
  dVar8 = dVar8 - dVar1 * dVar2;
  dVar7 = dVar7 - dVar1 * dVar3;
  dVar2 = (this->VBasisVector).field0_0x0._s_0.X;
  dVar5 = dVar5 - dVar1 * dVar4;
  dVar1 = (this->VBasisVector).field0_0x0._s_0.Y;
  dVar3 = (this->VBasisVector).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)(dVar7 * (this->UBasisVector).field0_0x0._s_0.Y +
                       dVar8 * (this->UBasisVector).field0_0x0._s_0.X +
                      dVar5 * (this->UBasisVector).field0_0x0._s_0.Z);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(float)(dVar7 * dVar1 + dVar8 * dVar2 + dVar5 * dVar3);
  return __return_storage_ptr__;
}

