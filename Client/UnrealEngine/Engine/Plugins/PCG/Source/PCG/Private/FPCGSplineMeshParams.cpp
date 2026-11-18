// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticStruct @ 149c39f50

UScriptStruct * __cdecl FPCGSplineMeshParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineMeshParams,(UObject *)pUVar1,
                         L"PCGSplineMeshParams");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton;
}

// operator()<enum_EPCGSplineMeshForwardAxis,bool,bool,UE::Math::TVector<double>,float,float,float,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>_> @ 149c3c3e0

uint __thiscall
`FPCGSplineMeshParams::ComputeHash'::__l2::<lambda_1>::
operator()<enum_EPCGSplineMeshForwardAxis,bool,bool,UE::Math::TVector<double>,float,float,float,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>_>
          (void *this,EPCGSplineMeshForwardAxis param_1,bool param_2,bool param_3,
          TVector<double> *param_4,float param_5,float param_6,float param_7,bool param_8,
          TVector<double> *param_9,TVector<double> *param_10,float param_11,
          TVector2<double> *param_12,TVector<double> *param_13,TVector<double> *param_14,
          float param_15,TVector2<double> *param_16)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 >> 0xd ^ -param_1;
  uVar1 = (-0x61c88647 - uVar4) - param_1 ^ uVar4 << 8;
  uVar5 = (param_1 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar1 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 0xf;
  iVar2 = uVar1 - param_2;
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar5 = (param_2 - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar1 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar4 >> 5;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xf;
  iVar2 = uVar1 - param_3;
  uVar5 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar4 = (param_3 - uVar5) - iVar2 ^ uVar5 >> 0xd;
  uVar1 = (iVar2 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar3 = (uVar5 - uVar1) - uVar4 ^ uVar1 << 0x10;
  uVar5 = (uVar4 - uVar1) - uVar3 ^ uVar3 >> 5;
  uVar4 = (uVar1 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_4,0x18,0);
  uVar5 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar1 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar5 = ((uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf) - (int)param_5 ^ (uint)param_5 >> 0xd;
  uVar1 = (-0x61c88647 - uVar5) - (int)param_5 ^ uVar5 << 8;
  uVar4 = ((int)param_5 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar4 = ((uVar4 - uVar1) - uVar5 ^ uVar1 >> 0xf) - (int)param_6 ^ (uint)param_6 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - (int)param_6 ^ uVar4 << 8;
  uVar5 = ((int)param_6 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar5 = ((uVar5 - uVar1) - uVar4 ^ uVar1 >> 0xf) - (int)param_7 ^ (uint)param_7 >> 0xd;
  uVar1 = (-0x61c88647 - uVar5) - (int)param_7 ^ uVar5 << 8;
  uVar4 = ((int)param_7 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar1 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 0xf;
  iVar2 = uVar1 - param_8;
  uVar5 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar4 = (param_8 - uVar5) - iVar2 ^ uVar5 >> 0xd;
  uVar1 = (iVar2 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar3 = (uVar5 - uVar1) - uVar4 ^ uVar1 << 0x10;
  uVar5 = (uVar4 - uVar1) - uVar3 ^ uVar3 >> 5;
  uVar4 = (uVar1 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_9,0x18,0);
  uVar3 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar5 = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar1 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_10,0x18,0);
  uVar5 = ((uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar1 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar5 = ((uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf) - (int)param_11 ^ (uint)param_11 >> 0xd;
  uVar1 = (-0x61c88647 - uVar5) - (int)param_11 ^ uVar5 << 8;
  uVar4 = ((int)param_11 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar3 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar5 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_12,0x10,0);
  uVar5 = ((uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar1 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar4 = (uVar1 - uVar5) - uVar3 ^ uVar5 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_13,0x18,0);
  uVar3 = ((uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar5 = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar1 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_14,0x18,0);
  uVar3 = ((uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar5 = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar1 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar4 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar5 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar4 = ((uVar4 - uVar1) - uVar5 ^ uVar1 >> 0xf) - (int)param_15 ^ (uint)param_15 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - (int)param_15 ^ uVar4 << 8;
  uVar5 = ((int)param_15 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar1 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar3 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar5 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar4 = (uVar1 - uVar5) - uVar3 ^ uVar5 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_16,0x10,0);
  uVar4 = ((uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar5 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 0xd;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 << 0x10;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 << 10;
  return (uVar1 - uVar5) - uVar4 ^ uVar5 >> 0xf;
}

// FPCGSplineMeshParams @ 149c4a5c0

FPCGSplineMeshParams * __thiscall
FPCGSplineMeshParams::FPCGSplineMeshParams(FPCGSplineMeshParams *this)

{
  undefined8 uVar1;
  
  this->NaniteClusterBoundsScale = 1.0;
  this->SplineBoundaryMin = 0.0;
  (this->SplineUpDir).field0_0x0._s_0.X = 0.0;
  (this->SplineUpDir).field0_0x0._s_0.Z = 1.0;
  (this->SplineUpDir).field0_0x0._s_0.Y = 0.0;
  this->ForwardAxis = X;
  this->bScaleMeshToBounds = false;
  this->bScaleMeshToLandscapeSplineFullWidth = false;
  this->SplineBoundaryMax = 0.0;
  this->bSmoothInterpRollScale = true;
  (this->StartOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->EndOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartTangent).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartRollDegrees = 0.0;
  (this->StartScale).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndTangent).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->EndRollDegrees = 0.0;
  (this->EndScale).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Hash).bIsSet = false;
  return this;
}

// operator= @ 149c4ebc0

FPCGSplineMeshParams * __thiscall
FPCGSplineMeshParams::operator=(FPCGSplineMeshParams *this,FPCGSplineMeshParams *param_1)

{
  double dVar1;
  
  this->ForwardAxis = param_1->ForwardAxis;
  this->bScaleMeshToBounds = param_1->bScaleMeshToBounds;
  this->bScaleMeshToLandscapeSplineFullWidth = param_1->bScaleMeshToLandscapeSplineFullWidth;
  dVar1 = (param_1->SplineUpDir).field0_0x0._s_0.Y;
  (this->SplineUpDir).field0_0x0._s_0.X = (param_1->SplineUpDir).field0_0x0._s_0.X;
  (this->SplineUpDir).field0_0x0._s_0.Y = dVar1;
  (this->SplineUpDir).field0_0x0._s_0.Z = (param_1->SplineUpDir).field0_0x0._s_0.Z;
  this->NaniteClusterBoundsScale = param_1->NaniteClusterBoundsScale;
  this->SplineBoundaryMin = param_1->SplineBoundaryMin;
  this->SplineBoundaryMax = param_1->SplineBoundaryMax;
  this->bSmoothInterpRollScale = param_1->bSmoothInterpRollScale;
  dVar1 = (param_1->StartOffset).field0_0x0._s_0.Y;
  (this->StartOffset).field0_0x0._s_0.X = (param_1->StartOffset).field0_0x0._s_0.X;
  (this->StartOffset).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->EndOffset).field0_0x0._s_0.Y;
  (this->EndOffset).field0_0x0._s_0.X = (param_1->EndOffset).field0_0x0._s_0.X;
  (this->EndOffset).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->StartPosition).field0_0x0._s_0.Y;
  (this->StartPosition).field0_0x0._s_0.X = (param_1->StartPosition).field0_0x0._s_0.X;
  (this->StartPosition).field0_0x0._s_0.Y = dVar1;
  (this->StartPosition).field0_0x0._s_0.Z = (param_1->StartPosition).field0_0x0._s_0.Z;
  dVar1 = (param_1->StartTangent).field0_0x0._s_0.Y;
  (this->StartTangent).field0_0x0._s_0.X = (param_1->StartTangent).field0_0x0._s_0.X;
  (this->StartTangent).field0_0x0._s_0.Y = dVar1;
  (this->StartTangent).field0_0x0._s_0.Z = (param_1->StartTangent).field0_0x0._s_0.Z;
  this->StartRollDegrees = param_1->StartRollDegrees;
  dVar1 = (param_1->StartScale).field0_0x0._s_0.Y;
  (this->StartScale).field0_0x0._s_0.X = (param_1->StartScale).field0_0x0._s_0.X;
  (this->StartScale).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->EndPosition).field0_0x0._s_0.Y;
  (this->EndPosition).field0_0x0._s_0.X = (param_1->EndPosition).field0_0x0._s_0.X;
  (this->EndPosition).field0_0x0._s_0.Y = dVar1;
  (this->EndPosition).field0_0x0._s_0.Z = (param_1->EndPosition).field0_0x0._s_0.Z;
  dVar1 = (param_1->EndTangent).field0_0x0._s_0.Y;
  (this->EndTangent).field0_0x0._s_0.X = (param_1->EndTangent).field0_0x0._s_0.X;
  (this->EndTangent).field0_0x0._s_0.Y = dVar1;
  (this->EndTangent).field0_0x0._s_0.Z = (param_1->EndTangent).field0_0x0._s_0.Z;
  this->EndRollDegrees = param_1->EndRollDegrees;
  dVar1 = (param_1->EndScale).field0_0x0._s_0.Y;
  (this->EndScale).field0_0x0._s_0.X = (param_1->EndScale).field0_0x0._s_0.X;
  (this->EndScale).field0_0x0._s_0.Y = dVar1;
  if (&param_1->Hash != &this->Hash) {
    if ((param_1->Hash).bIsSet == false) {
      if ((this->Hash).bIsSet != false) {
        (this->Hash).bIsSet = false;
        return this;
      }
    }
    else {
      (this->Hash).TypedValue = (param_1->Hash).TypedValue;
      (this->Hash).bIsSet = true;
    }
  }
  return this;
}

// operator== @ 149c4f250

bool __thiscall
FPCGSplineMeshParams::operator==(FPCGSplineMeshParams *this,FPCGSplineMeshParams *param_1)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_38 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  if ((((this->ForwardAxis == param_1->ForwardAxis) &&
       (this->bScaleMeshToBounds == param_1->bScaleMeshToBounds)) &&
      (this->bScaleMeshToLandscapeSplineFullWidth == param_1->bScaleMeshToLandscapeSplineFullWidth))
     && (this->bSmoothInterpRollScale == param_1->bSmoothInterpRollScale)) {
    if ((((float)((uint)(this->NaniteClusterBoundsScale - param_1->NaniteClusterBoundsScale) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
        ((float)((uint)(this->SplineBoundaryMin - param_1->SplineBoundaryMin) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
       (((float)((uint)(this->SplineBoundaryMax - param_1->SplineBoundaryMax) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 &&
        (((float)((uint)(this->StartRollDegrees - param_1->StartRollDegrees) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 &&
         ((float)((uint)(this->EndRollDegrees - param_1->EndRollDegrees) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))))) {
      local_38[0]._0_8_ =
           (this->StartPosition).field0_0x0._s_0.X - (param_1->StartPosition).field0_0x0._s_0.X;
      local_38[0]._8_8_ =
           (this->StartPosition).field0_0x0._s_0.Y - (param_1->StartPosition).field0_0x0._s_0.Y;
      local_38[0]._16_8_ =
           (this->StartPosition).field0_0x0._s_0.Z - (param_1->StartPosition).field0_0x0._s_0.Z;
      bVar2 = UE::Math::TVector<double>::IsNearlyZero
                        ((TVector<double> *)&local_38[0]._s_0,__real_3f1a36e2e0000000);
      if (bVar2) {
        local_38[0]._0_8_ =
             (this->StartTangent).field0_0x0._s_0.X - (param_1->StartTangent).field0_0x0._s_0.X;
        local_38[0]._8_8_ =
             (this->StartTangent).field0_0x0._s_0.Y - (param_1->StartTangent).field0_0x0._s_0.Y;
        local_38[0]._16_8_ =
             (this->StartTangent).field0_0x0._s_0.Z - (param_1->StartTangent).field0_0x0._s_0.Z;
        bVar2 = UE::Math::TVector<double>::IsNearlyZero((TVector<double> *)&local_38[0]._s_0,dVar1);
        if (bVar2) {
          local_38[0]._0_8_ =
               (this->EndPosition).field0_0x0._s_0.X - (param_1->EndPosition).field0_0x0._s_0.X;
          local_38[0]._8_8_ =
               (this->EndPosition).field0_0x0._s_0.Y - (param_1->EndPosition).field0_0x0._s_0.Y;
          local_38[0]._16_8_ =
               (this->EndPosition).field0_0x0._s_0.Z - (param_1->EndPosition).field0_0x0._s_0.Z;
          bVar2 = UE::Math::TVector<double>::IsNearlyZero
                            ((TVector<double> *)&local_38[0]._s_0,dVar1);
          if (bVar2) {
            local_38[0]._0_8_ =
                 (this->EndTangent).field0_0x0._s_0.X - (param_1->EndTangent).field0_0x0._s_0.X;
            local_38[0]._8_8_ =
                 (this->EndTangent).field0_0x0._s_0.Y - (param_1->EndTangent).field0_0x0._s_0.Y;
            local_38[0]._16_8_ =
                 (this->EndTangent).field0_0x0._s_0.Z - (param_1->EndTangent).field0_0x0._s_0.Z;
            bVar2 = UE::Math::TVector<double>::IsNearlyZero
                              ((TVector<double> *)&local_38[0]._s_0,dVar1);
            if (bVar2) {
              dVar3 = (this->StartScale).field0_0x0._s_0.X - (param_1->StartScale).field0_0x0._s_0.X
              ;
              dVar4 = (this->StartScale).field0_0x0._s_0.Y - (param_1->StartScale).field0_0x0._s_0.Y
              ;
              if (((((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                     <= dVar1) &&
                   ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    <= dVar1)) &&
                  (dVar3 = (this->EndScale).field0_0x0._s_0.X -
                           (param_1->EndScale).field0_0x0._s_0.X,
                  dVar4 = (this->EndScale).field0_0x0._s_0.Y - (param_1->EndScale).field0_0x0._s_0.Y
                  , (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    <= dVar1)) &&
                 ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  dVar1)) {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// ComputeHash @ 149c5e9c0

uint __thiscall FPCGSplineMeshParams::ComputeHash(FPCGSplineMeshParams *this)

{
  uint uVar1;
  undefined1 local_res8 [32];
  TVector2<double>_u_0 local_c8;
  TVector2<double>_u_0 local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_c8._s_0.X = (this->EndScale).field0_0x0._s_0.X;
  local_c8._s_0.Y = (this->EndScale).field0_0x0._s_0.Y;
  local_a8._s_0.X = (this->EndTangent).field0_0x0._s_0.X;
  local_a8._s_0.Y = (this->EndTangent).field0_0x0._s_0.Y;
  local_a8._s_0.Z = (this->EndTangent).field0_0x0._s_0.Z;
  local_88._s_0.Z = (this->EndPosition).field0_0x0._s_0.Z;
  local_88._s_0.X = (this->EndPosition).field0_0x0._s_0.X;
  local_88._s_0.Y = (this->EndPosition).field0_0x0._s_0.Y;
  local_b8._s_0.X = (this->StartScale).field0_0x0._s_0.X;
  local_b8._s_0.Y = (this->StartScale).field0_0x0._s_0.Y;
  local_68._s_0.X = (this->StartTangent).field0_0x0._s_0.X;
  local_68._s_0.Y = (this->StartTangent).field0_0x0._s_0.Y;
  local_68._s_0.Z = (this->StartTangent).field0_0x0._s_0.Z;
  local_48._s_0.X = (this->StartPosition).field0_0x0._s_0.X;
  local_48._s_0.Y = (this->StartPosition).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->StartPosition).field0_0x0._s_0.Z;
  local_28._s_0.X = (this->SplineUpDir).field0_0x0._s_0.X;
  local_28._s_0.Y = (this->SplineUpDir).field0_0x0._s_0.Y;
  local_28._s_0.Z = (this->SplineUpDir).field0_0x0._s_0.Z;
  uVar1 = `FPCGSplineMeshParams::ComputeHash'::__l2::<lambda_1>::
          operator()<enum_EPCGSplineMeshForwardAxis,bool,bool,UE::Math::TVector<double>,float,float,float,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>_>
                    (local_res8,this->ForwardAxis,this->bScaleMeshToBounds,
                     this->bScaleMeshToLandscapeSplineFullWidth,(TVector<double> *)&local_28._s_0,
                     this->NaniteClusterBoundsScale,this->SplineBoundaryMin,this->SplineBoundaryMax,
                     this->bSmoothInterpRollScale,(TVector<double> *)&local_48._s_0,
                     (TVector<double> *)&local_68._s_0,this->StartRollDegrees,
                     (TVector2<double> *)&local_b8._s_0,(TVector<double> *)&local_88._s_0,
                     (TVector<double> *)&local_a8._s_0,this->EndRollDegrees,
                     (TVector2<double> *)&local_c8._s_0);
  return uVar1;
}

