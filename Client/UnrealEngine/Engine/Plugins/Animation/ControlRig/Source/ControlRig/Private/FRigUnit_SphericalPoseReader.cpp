// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a47c1f0

UScriptStruct * __cdecl FRigUnit_SphericalPoseReader::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SphericalPoseReader.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SphericalPoseReader.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader,(UObject *)pUVar1,
                         L"RigUnit_SphericalPoseReader");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SphericalPoseReader.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SphericalPoseReader.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47c270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SphericalPoseReader::GetExecuteContextStruct(FRigUnit_SphericalPoseReader *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a47c900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SphericalPoseReader::Execute(FRigUnit_SphericalPoseReader *this)

{
  undefined1 auStackY_348 [32];
  undefined1 local_288 [592];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  if ((FRigVMNameCache *)local_288._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_288._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_288,&this->OutputParam,&this->DriverItem,
                &this->DriverAxis,&this->RotationOffset,this->ActiveRegionSize,
                &this->ActiveRegionScaleFactors,this->FalloffSize,&this->FalloffRegionScaleFactors,
                this->FlipWidthScaling,this->FlipHeightScaling,&this->OptionalParentItem,
                &this->Debug,&this->InnerRegion,&this->OuterRegion,&this->DriverNormal,
                &this->Driver2D,&this->DriverCache,&this->OptionalParentCache,
                &this->LocalDriverTransformInit,&this->CachedRotationOffset,
                &this->bCachedInitTransforms);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  return;
}

// FRigUnit_SphericalPoseReader @ 14a515fb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_SphericalPoseReader * __thiscall
FRigUnit_SphericalPoseReader::FRigUnit_SphericalPoseReader(FRigUnit_SphericalPoseReader *this)

{
  undefined8 uVar1;
  
  this->OutputParam = 0.0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_SphericalPoseReader__6B_;
  (this->DriverItem).Type = Bone;
  (this->DriverItem).Name.ComparisonIndex = 0;
  (this->DriverItem).Name.Number = 0;
  (this->DriverAxis).field0_0x0._s_0.X = 1.0;
  (this->RotationOffset).field0_0x0._s_0.X = 90.0;
  (this->DriverAxis).field0_0x0._s_0.Y = 0.0;
  (this->DriverAxis).field0_0x0._s_0.Z = 0.0;
  (this->RotationOffset).field0_0x0._s_0.Y = 0.0;
  (this->RotationOffset).field0_0x0._s_0.Z = 0.0;
  (this->ActiveRegionScaleFactors).PositiveWidth = 1.0;
  (this->ActiveRegionScaleFactors).NegativeWidth = 1.0;
  (this->ActiveRegionScaleFactors).PositiveHeight = 1.0;
  (this->ActiveRegionScaleFactors).NegativeHeight = 1.0;
  (this->FalloffRegionScaleFactors).PositiveWidth = 1.0;
  (this->FalloffRegionScaleFactors).NegativeWidth = 1.0;
  (this->FalloffRegionScaleFactors).PositiveHeight = 1.0;
  (this->FalloffRegionScaleFactors).NegativeHeight = 1.0;
  this->ActiveRegionSize = 0.1;
  this->FalloffSize = 0.2;
  this->FlipWidthScaling = false;
  this->FlipHeightScaling = false;
  (this->OptionalParentItem).Type = Bone;
  (this->OptionalParentItem).Name.ComparisonIndex = 0;
  (this->OptionalParentItem).Name.Number = 0;
  (this->Debug).bDrawDebug = true;
  (this->Debug).bDraw2D = false;
  (this->Debug).bDrawLocalAxes = false;
  (this->Debug).DebugScale = 25.0;
  (this->Debug).DebugSegments = 0x14;
  (this->Debug).DebugThickness = 0.25;
  (this->InnerRegion).RegionAngleRadians = 0.1;
  (this->InnerRegion).ScaleFactors.PositiveWidth = 1.0;
  (this->InnerRegion).ScaleFactors.NegativeWidth = 1.0;
  (this->InnerRegion).ScaleFactors.PositiveHeight = 1.0;
  (this->InnerRegion).ScaleFactors.NegativeHeight = 1.0;
  (this->OuterRegion).RegionAngleRadians = 0.1;
  (this->OuterRegion).ScaleFactors.PositiveWidth = 1.0;
  (this->OuterRegion).ScaleFactors.NegativeWidth = 1.0;
  (this->OuterRegion).ScaleFactors.PositiveHeight = 1.0;
  (this->OuterRegion).ScaleFactors.NegativeHeight = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DriverNormal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DriverNormal).field0_0x0._s_0.Y = (double)uVar1;
  (this->DriverNormal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Driver2D).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Driver2D).field0_0x0._s_0.Y = (double)uVar1;
  (this->Driver2D).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DriverCache).Key.Type = None;
  (this->DriverCache).Key.Name.ComparisonIndex = 0;
  (this->DriverCache).Key.Name.Number = 0;
  (this->DriverCache).Index = 0xffff;
  (this->DriverCache).ContainerVersion = -1;
  (this->DriverCache).Element = (FRigBaseElement *)0x0;
  (this->OptionalParentCache).Key.Type = None;
  (this->OptionalParentCache).Key.Name.ComparisonIndex = 0;
  (this->OptionalParentCache).Key.Name.Number = 0;
  (this->OptionalParentCache).Index = 0xffff;
  (this->OptionalParentCache).ContainerVersion = -1;
  (this->OptionalParentCache).Element = (FRigBaseElement *)0x0;
  *&(this->LocalDriverTransformInit).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalDriverTransformInit).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalDriverTransformInit).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalDriverTransformInit).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalDriverTransformInit).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalDriverTransformInit).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedRotationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedRotationOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->CachedRotationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bCachedInitTransforms = false;
  return this;
}

// CalcOutputParam @ 14a51ede0

float __cdecl
FRigUnit_SphericalPoseReader::CalcOutputParam(FEllipseQuery *param_1,FEllipseQuery *param_2)

{
  float fVar1;
  
  if (param_1->IsInside != false) {
    return __real_3f800000;
  }
  if (param_2->IsInside != false) {
    fVar1 = SQRT(param_2->DistSq) + SQRT(param_1->DistSq);
    if (__real_38d1b717 <= fVar1) {
      return __real_3f800000 - SQRT(param_1->DistSq) / fVar1;
    }
  }
  return 0.0;
}

// DistanceToEllipse @ 14a520e70

void __cdecl
FRigUnit_SphericalPoseReader::DistanceToEllipse
          (float param_1,float param_2,float param_3,float param_4,FEllipseQuery *param_5)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar11 = __real_38d1b717;
  if ((param_3 <= __real_38d1b717) || (param_4 <= __real_38d1b717)) {
    param_5->ClosestX = 0.0;
    fVar12 = 0.0;
    fVar3 = param_1 * param_1 + param_2 * param_2;
    bVar2 = fVar3 <= fVar11;
  }
  else {
    fVar11 = __real_3f800000 / param_3;
    fVar12 = __real_3f800000 / param_4;
    fVar10 = param_3 * param_3 - param_4 * param_4;
    fVar13 = param_4 * param_4 - param_3 * param_3;
    fVar7 = fVar10 * __real_3eb504f2 * fVar11;
    fVar9 = fVar13 * __real_3eb504f2 * fVar12;
    fVar4 = param_3 * __real_3f3504f3 - fVar7;
    fVar5 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar7;
    fVar3 = param_4 * __real_3f3504f3 - fVar9;
    fVar6 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar9;
    fVar8 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    fVar4 = __real_3f800000 / SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    fVar3 = (fVar8 * fVar5 * fVar4 + fVar7) * fVar11;
    fVar4 = (fVar8 * fVar6 * fVar4 + fVar9) * fVar12;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    fVar5 = __real_3f800000 / SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    fVar4 = fVar5 * fVar4;
    fVar5 = fVar5 * fVar3;
    fVar6 = fVar10 * fVar11 * fVar5 * fVar5 * fVar5;
    fVar7 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar6;
    fVar8 = fVar13 * fVar12 * fVar4 * fVar4 * fVar4;
    fVar3 = fVar5 * param_3 - fVar6;
    fVar5 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar8;
    fVar4 = fVar4 * param_4 - fVar8;
    fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    fVar3 = __real_3f800000 / SQRT(fVar5 * fVar5 + fVar7 * fVar7);
    fVar12 = (fVar4 * fVar5 * fVar3 + fVar8) * fVar12;
    fVar11 = (fVar4 * fVar7 * fVar3 + fVar6) * fVar11;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    fVar4 = __real_3f800000 / SQRT(fVar12 * fVar12 + fVar11 * fVar11);
    fVar12 = fVar4 * fVar12;
    fVar4 = fVar4 * fVar11;
    if (param_1 < 0.0) {
      fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
    }
    fVar4 = fVar4 * param_3;
    param_5->ClosestX = fVar4;
    if (param_2 < 0.0) {
      fVar12 = (float)((uint)fVar12 ^ uVar1);
    }
    fVar12 = fVar12 * param_4;
    fVar3 = (fVar4 - param_1) * (fVar4 - param_1) + (fVar12 - param_2) * (fVar12 - param_2);
    bVar2 = param_1 * param_1 + param_2 * param_2 < fVar12 * fVar12 + fVar4 * fVar4;
  }
  param_5->ClosestY = fVar12;
  param_5->DistSq = fVar3;
  param_5->IsInside = bVar2;
  return;
}

// Execute @ 14a52e3f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SphericalPoseReader::Execute
          (FRigUnit_SphericalPoseReader *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->OutputParam,&this->DriverItem,&this->DriverAxis,&this->RotationOffset
                ,this->ActiveRegionSize,&this->ActiveRegionScaleFactors,this->FalloffSize,
                &this->FalloffRegionScaleFactors,this->FlipWidthScaling,this->FlipHeightScaling,
                &this->OptionalParentItem,&this->Debug,&this->InnerRegion,&this->OuterRegion,
                &this->DriverNormal,&this->Driver2D,&this->DriverCache,&this->OptionalParentCache,
                &this->LocalDriverTransformInit,&this->CachedRotationOffset,
                &this->bCachedInitTransforms);
  return;
}

// RemapAndConvertInputs @ 14a533db0

void __cdecl
FRigUnit_SphericalPoseReader::RemapAndConvertInputs
          (FSphericalRegion *param_1,FSphericalRegion *param_2,float param_3,
          FRegionScaleFactors *param_4,float param_5,FRegionScaleFactors *param_6,bool param_7,
          bool param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = __real_3f800000;
  fVar4 = param_3 * __real_43340000;
  if (param_3 * __real_43340000 <= __real_3f000000) {
    fVar4 = __real_3f000000;
  }
  if (__real_43320000 <= fVar4) {
    fVar4 = __real_43320000;
  }
  fVar5 = fVar4 + __real_3f800000;
  param_1->RegionAngleRadians = fVar4 * __real_3c8efa35;
  fVar4 = param_4->NegativeWidth;
  fVar2 = param_4->PositiveHeight;
  fVar3 = param_4->NegativeHeight;
  (param_1->ScaleFactors).PositiveWidth = param_4->PositiveWidth;
  (param_1->ScaleFactors).NegativeWidth = fVar4;
  (param_1->ScaleFactors).PositiveHeight = fVar2;
  (param_1->ScaleFactors).NegativeHeight = fVar3;
  if (fVar5 <= param_5 * __real_43340000) {
    fVar5 = param_5 * __real_43340000;
  }
  if (__real_43330000 <= fVar5) {
    fVar5 = __real_43330000;
  }
  fVar5 = fVar5 * __real_3c8efa35;
  param_2->RegionAngleRadians = fVar5;
  fVar5 = fVar1 / fVar5;
  fVar4 = param_4->PositiveWidth * param_1->RegionAngleRadians * fVar5;
  (param_2->ScaleFactors).PositiveWidth = (fVar1 - fVar4) * param_6->PositiveWidth + fVar4;
  fVar4 = param_4->NegativeWidth * param_1->RegionAngleRadians * fVar5;
  (param_2->ScaleFactors).NegativeWidth = (fVar1 - fVar4) * param_6->NegativeWidth + fVar4;
  fVar4 = param_4->PositiveHeight * param_1->RegionAngleRadians * fVar5;
  (param_2->ScaleFactors).PositiveHeight = (fVar1 - fVar4) * param_6->PositiveHeight + fVar4;
  fVar5 = param_4->NegativeHeight * param_1->RegionAngleRadians * fVar5;
  (param_2->ScaleFactors).NegativeHeight = (fVar1 - fVar5) * param_6->NegativeHeight + fVar5;
  if (param_7) {
    fVar1 = (param_1->ScaleFactors).NegativeWidth;
    (param_1->ScaleFactors).NegativeWidth = (param_1->ScaleFactors).PositiveWidth;
    (param_1->ScaleFactors).PositiveWidth = fVar1;
    fVar1 = (param_2->ScaleFactors).NegativeWidth;
    (param_2->ScaleFactors).NegativeWidth = (param_2->ScaleFactors).PositiveWidth;
    (param_2->ScaleFactors).PositiveWidth = fVar1;
  }
  if (param_8) {
    fVar1 = (param_1->ScaleFactors).NegativeHeight;
    (param_1->ScaleFactors).NegativeHeight = (param_1->ScaleFactors).PositiveHeight;
    (param_1->ScaleFactors).PositiveHeight = fVar1;
    fVar1 = (param_2->ScaleFactors).NegativeHeight;
    (param_2->ScaleFactors).NegativeHeight = (param_2->ScaleFactors).PositiveHeight;
    (param_2->ScaleFactors).PositiveHeight = fVar1;
  }
  return;
}

// RemapRange @ 14a533f00

float __cdecl
FRigUnit_SphericalPoseReader::RemapRange
          (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((float)((uint)(param_3 - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::Abs(AEnd - AStart) > 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_SphericalPoseReader.cpp"
                       ,0x120,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return ((param_1 - param_2) * (param_5 - param_4)) / (param_3 - param_2) + param_4;
}

// RigVMExecute @ 14a5574a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SphericalPoseReader::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  FRigElementKey *pFVar8;
  TVector<double> *pTVar9;
  FRigVMMemoryHandle *pFVar10;
  TVector<double> *pTVar11;
  float *pfVar12;
  FRegionScaleFactors *pFVar13;
  FRegionScaleFactors *pFVar14;
  uchar *puVar15;
  FRigElementKey *pFVar16;
  FSphericalPoseReaderDebugSettings *pFVar17;
  FRigVMSlice *pFVar18;
  FSphericalRegion *pFVar19;
  FSphericalRegion *pFVar20;
  TVector<double> *pTVar21;
  TVector<double> *pTVar22;
  FCachedRigElement *pFVar23;
  FCachedRigElement *pFVar24;
  TTransform<double> *pTVar25;
  TVector<double> *pTVar26;
  bool *pbVar27;
  FControlRigExecuteContext *pFVar28;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar5 = (float *)param_2->DataPtr->Ptr;
  if (iVar4 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FRigElementKey *)pFVar10[1].Ptr;
  }
  else {
    pFVar8 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  if (iVar4 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar9 = (TVector<double> *)pFVar10[2].Ptr;
  }
  else {
    pTVar9 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar11 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar1 = *pfVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar13 = (FRegionScaleFactors *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar14 = (FRegionScaleFactors *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar7 = (bool)*puVar15;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar3 = (bool)*puVar15;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar16 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar17 = (FSphericalPoseReaderDebugSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar19 = (FSphericalRegion *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar20 = (FSphericalRegion *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar21 = (TVector<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xf);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar22 = (TVector<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x10);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar23 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x11);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar24 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x12);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar25 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x13);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar26 = (TVector<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x14);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar27 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar10,false,pFVar18->Offset + pFVar18->Index);
  pFVar28 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar28,pfVar5,pFVar8,pTVar9,pTVar11,fVar1,pFVar13,fVar2,pFVar14,bVar7,bVar3,pFVar16
                ,pFVar17,pFVar19,pFVar20,pTVar21,pTVar22,pFVar23,pFVar24,pTVar25,pTVar26,pbVar27);
  return;
}

// StaticExecute @ 14a598830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SphericalPoseReader::StaticExecute
          (FControlRigExecuteContext *param_1,float *param_2,FRigElementKey *param_3,
          TVector<double> *param_4,TVector<double> *param_5,float param_6,
          FRegionScaleFactors *param_7,float param_8,FRegionScaleFactors *param_9,bool param_10,
          bool param_11,FRigElementKey *param_12,FSphericalPoseReaderDebugSettings *param_13,
          FSphericalRegion *param_14,FSphericalRegion *param_15,TVector<double> *param_16,
          TVector<double> *param_17,FCachedRigElement *param_18,FCachedRigElement *param_19,
          TTransform<double> *param_20,TVector<double> *param_21,bool *param_22)

{
  URigHierarchy *this;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  FSphericalRegion *pFVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  TVector<double> *pTVar22;
  float *pfVar23;
  TVector<double>_u_0 *pTVar24;
  URigHierarchy *pUVar25;
  FCachedRigElement *pFVar26;
  longlong lVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStackY_8b8 [32];
  TVector<double>_u_0 *pTVar55;
  float fVar56;
  FRigElementKey *local_878;
  float local_870;
  bool local_86c;
  bool *local_868;
  float local_860;
  bool local_85c;
  TVector<double> *local_858;
  FCachedRigElement *local_850;
  TTransform<double> *local_848;
  float *local_840;
  FControlRigExecuteContext *local_838;
  FSphericalPoseReaderDebugSettings *local_830;
  TVector<double> *local_828;
  TVector<double> *local_820;
  TTransform<double> local_818;
  TTransform<double> local_7b8;
  TVector<double>_u_0 local_758;
  TVector<double>_u_0 local_738;
  TVector<double>_u_0 local_720;
  TVector<double>_u_0 local_708;
  TVector<double>_u_0 local_6e8;
  TVector<double>_u_0 local_6c8;
  TVector<double>_u_0 local_6a8;
  TVector<double>_u_0 local_688;
  TVector<double>_u_0 local_668;
  TQuat<double> local_648;
  TQuat<double> local_628;
  double local_608;
  double dStack_600;
  double local_5f8;
  TTransform<double> local_5e8;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TVector<double> local_4c8;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  this = param_1->Hierarchy;
  local_848 = param_20;
  local_828 = param_21;
  local_878 = param_12;
  local_830 = param_13;
  local_868 = param_22;
  local_858 = param_5;
  local_850 = param_18;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  local_840 = param_2;
  local_838 = param_1;
  local_820 = param_4;
  bVar18 = FCachedRigElement::UpdateCache(param_18,param_3,this);
  fVar56 = __real_3f800000;
  if (!bVar18) {
    return;
  }
  fVar32 = param_6 * __real_43340000;
  if (param_6 * __real_43340000 <= __real_3f000000) {
    fVar32 = __real_3f000000;
  }
  if (__real_43320000 <= fVar32) {
    fVar32 = __real_43320000;
  }
  fVar42 = fVar32 + __real_3f800000;
  param_14->RegionAngleRadians = fVar32 * __real_3c8efa35;
  fVar32 = param_7->NegativeWidth;
  fVar33 = param_7->PositiveHeight;
  fVar29 = param_7->NegativeHeight;
  (param_14->ScaleFactors).PositiveWidth = param_7->PositiveWidth;
  (param_14->ScaleFactors).NegativeWidth = fVar32;
  (param_14->ScaleFactors).PositiveHeight = fVar33;
  (param_14->ScaleFactors).NegativeHeight = fVar29;
  if (fVar42 <= param_8 * __real_43340000) {
    fVar42 = param_8 * __real_43340000;
  }
  if (__real_43330000 <= fVar42) {
    fVar42 = __real_43330000;
  }
  fVar42 = fVar42 * __real_3c8efa35;
  param_15->RegionAngleRadians = fVar42;
  fVar42 = fVar56 / fVar42;
  fVar32 = param_14->RegionAngleRadians * param_7->PositiveWidth * fVar42;
  (param_15->ScaleFactors).PositiveWidth = (fVar56 - fVar32) * param_9->PositiveWidth + fVar32;
  fVar32 = param_7->NegativeWidth * param_14->RegionAngleRadians * fVar42;
  (param_15->ScaleFactors).NegativeWidth = (fVar56 - fVar32) * param_9->NegativeWidth + fVar32;
  fVar32 = param_7->PositiveHeight * param_14->RegionAngleRadians * fVar42;
  (param_15->ScaleFactors).PositiveHeight = (fVar56 - fVar32) * param_9->PositiveHeight + fVar32;
  fVar42 = param_7->NegativeHeight * param_14->RegionAngleRadians * fVar42;
  (param_15->ScaleFactors).NegativeHeight = (fVar56 - fVar42) * param_9->NegativeHeight + fVar42;
  if (param_10) {
    fVar32 = (param_14->ScaleFactors).NegativeWidth;
    (param_14->ScaleFactors).NegativeWidth = (param_14->ScaleFactors).PositiveWidth;
    (param_14->ScaleFactors).PositiveWidth = fVar32;
    fVar32 = (param_15->ScaleFactors).NegativeWidth;
    (param_15->ScaleFactors).NegativeWidth = (param_15->ScaleFactors).PositiveWidth;
    (param_15->ScaleFactors).PositiveWidth = fVar32;
  }
  if (param_11) {
    fVar32 = (param_14->ScaleFactors).NegativeHeight;
    (param_14->ScaleFactors).NegativeHeight = (param_14->ScaleFactors).PositiveHeight;
    (param_14->ScaleFactors).PositiveHeight = fVar32;
    fVar32 = (param_15->ScaleFactors).NegativeHeight;
    (param_15->ScaleFactors).NegativeHeight = (param_15->ScaleFactors).PositiveHeight;
    (param_15->ScaleFactors).PositiveHeight = fVar32;
  }
  local_4a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_4a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_4a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_4a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_4a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_4a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_4a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_4a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FCachedRigElement::UpdateCache(param_19,local_878,this);
  if ((((param_19->Index == 0xffff) ||
       (bVar18 = ::FName::IsWithinBounds((FNameEntryId)(param_19->Key).Name.ComparisonIndex.Value),
       !bVar18)) || ((param_19->Key).Name == (FName)0x0)) || ((param_19->Key).Type == None)) {
    uVar19 = 0xffffffff;
    if (param_18->Index != 0xffff) {
      uVar19 = (uint)param_18->Index;
    }
    pTVar21 = URigHierarchy::GetParentTransformByIndex(this,&local_208,uVar19,false);
  }
  else {
    uVar19 = 0xffffffff;
    if (param_19->Index != 0xffff) {
      uVar19 = (uint)param_19->Index;
    }
    pTVar21 = URigHierarchy::GetGlobalTransformByIndex(this,&local_268,uVar19,false);
  }
  uVar19 = 0xffffffff;
  local_4a8.Rotation.XY.m128d_f64 = *&(pTVar21->Rotation).XY.m128d_f64;
  local_4a8.Rotation.ZW.m128d_f64 = *&(pTVar21->Rotation).ZW.m128d_f64;
  local_4a8.Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
  local_4a8.Translation.XY.m128d_f64[1] = (pTVar21->Translation).XY.m128d_f64[1];
  local_4a8.Translation.ZW.m128d_f64 = *&(pTVar21->Translation).ZW.m128d_f64;
  local_4a8.Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
  local_4a8.Scale3D.XY.m128d_f64[1] = (pTVar21->Scale3D).XY.m128d_f64[1];
  local_4a8.Scale3D.ZW.m128d_f64 = *&(pTVar21->Scale3D).ZW.m128d_f64;
  if (((*local_868 == false) ||
      (dVar3 = (local_828->field0_0x0)._s_0.X - (local_858->field0_0x0)._s_0.X,
      uVar28 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar30 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar30,uVar28) &&
      (double)CONCAT44(uVar30,uVar28) != __real_3f1a36e2e0000000)) ||
     ((dVar3 = (local_828->field0_0x0)._s_0.Y - (local_858->field0_0x0)._s_0.Y,
      uVar28 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar30 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar30,uVar28) &&
      (double)CONCAT44(uVar30,uVar28) != __real_3f1a36e2e0000000 ||
      (dVar3 = (local_828->field0_0x0)._s_0.Z - (local_858->field0_0x0)._s_0.Z,
      uVar28 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar30 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      pFVar26 = local_850,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar30,uVar28) &&
      (double)CONCAT44(uVar30,uVar28) != __real_3f1a36e2e0000000)))) {
    *local_868 = true;
    dVar3 = (local_858->field0_0x0)._s_0.Y;
    (local_828->field0_0x0)._s_0.X = (local_858->field0_0x0)._s_0.X;
    (local_828->field0_0x0)._s_0.Y = dVar3;
    (local_828->field0_0x0)._s_0.Z = (local_858->field0_0x0)._s_0.Z;
    if (((param_19->Index == 0xffff) ||
        (bVar18 = ::FName::IsWithinBounds((FNameEntryId)(param_19->Key).Name.ComparisonIndex.Value),
        !bVar18)) || (((param_19->Key).Name == (FName)0x0 || ((param_19->Key).Type == None)))) {
      pFVar26 = local_850;
      uVar28 = 0xffffffff;
      if (local_850->Index != 0xffff) {
        uVar28 = (uint)local_850->Index;
      }
      pUVar25 = this;
      pTVar21 = URigHierarchy::GetParentTransformByIndex(this,&local_148,uVar28,true);
      auVar44._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(pTVar21->Scale3D).ZW.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar44._8_4_ = *(uint *)((pTVar21->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
      auVar44._12_4_ = *(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
      auVar48._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(pTVar21->Scale3D).XY.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar48._8_4_ = *(uint *)((pTVar21->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
      auVar48._12_4_ = *(uint *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
      auVar50._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar44._8_8_);
      auVar50._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar44._0_8_);
      uVar28 = movmskpd((int)pUVar25,auVar50);
      lVar27 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar48._8_8_);
      auVar36._8_4_ = (int)lVar27;
      auVar36._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar48._0_8_);
      auVar36._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      iVar20 = movmskpd((int)pTVar21,auVar36);
      if ((uVar28 & 0x3fffffff) == 0 && iVar20 == 0) {
        local_3e8.Rotation.XY.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        local_3e8.Scale3D.XY.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        local_7b8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_7b8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_7b8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_7b8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_7b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_7b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        local_3e8.Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
        local_3e8.Translation.XY = UE::Math::TTransform<double>::Identity.Translation.XY;
        local_3e8.Translation.ZW = UE::Math::TTransform<double>::Identity.Translation.ZW;
        local_3e8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(pTVar21,&local_7b8);
        local_3e8.Rotation.XY.m128d_f64[0]._0_4_ = local_7b8.Rotation.XY.m128d_f64[0]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[0]._4_4_ = local_7b8.Rotation.XY.m128d_f64[0]._4_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = local_7b8.Rotation.XY.m128d_f64[1]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = local_7b8.Rotation.XY.m128d_f64[1]._4_4_;
        local_3e8.Rotation.ZW.m128d_f64 = local_7b8.Rotation.ZW.m128d_f64;
        local_3e8.Translation.XY.m128d_f64 = local_7b8.Translation.XY.m128d_f64;
        local_3e8.Translation.ZW.m128d_f64 = local_7b8.Translation.ZW.m128d_f64;
        local_3e8.Scale3D.XY.m128d_f64[0]._0_4_ = local_7b8.Scale3D.XY.m128d_f64[0]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[0]._4_4_ = local_7b8.Scale3D.XY.m128d_f64[0]._4_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ = local_7b8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ = local_7b8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_3e8.Scale3D.ZW.m128d_f64 = local_7b8.Scale3D.ZW.m128d_f64;
      }
    }
    else {
      uVar28 = 0xffffffff;
      if (param_19->Index != 0xffff) {
        uVar28 = (uint)param_19->Index;
      }
      pUVar25 = this;
      pTVar21 = URigHierarchy::GetGlobalTransformByIndex(this,&local_1a8,uVar28,true);
      auVar43._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(pTVar21->Scale3D).ZW.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar43._8_4_ = *(uint *)((pTVar21->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
      auVar43._12_4_ = *(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
      auVar47._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(pTVar21->Scale3D).XY.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar47._8_4_ = *(uint *)((pTVar21->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
      auVar47._12_4_ = *(uint *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
      auVar34._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar43._8_8_);
      auVar34._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar43._0_8_);
      uVar28 = movmskpd((int)pUVar25,auVar34);
      lVar27 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar47._8_8_);
      auVar1._8_4_ = (int)lVar27;
      auVar1._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar47._0_8_);
      auVar1._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      iVar20 = movmskpd((int)pTVar21,auVar1);
      if ((uVar28 & 0x3fffffff) == 0 && iVar20 == 0) {
        local_3e8.Rotation.XY.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        local_3e8.Scale3D.XY.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        local_818.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_818.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_818.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_818.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_818.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_818.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        pFVar26 = local_850;
        local_3e8.Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
        local_3e8.Translation.XY = UE::Math::TTransform<double>::Identity.Translation.XY;
        local_3e8.Translation.ZW = UE::Math::TTransform<double>::Identity.Translation.ZW;
        local_3e8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(pTVar21,&local_818);
        pFVar26 = local_850;
        local_3e8.Rotation.XY.m128d_f64[0]._0_4_ = local_818.Rotation.XY.m128d_f64[0]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[0]._4_4_ = local_818.Rotation.XY.m128d_f64[0]._4_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = local_818.Rotation.XY.m128d_f64[1]._0_4_;
        local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = local_818.Rotation.XY.m128d_f64[1]._4_4_;
        local_3e8.Rotation.ZW.m128d_f64 = local_818.Rotation.ZW.m128d_f64;
        local_3e8.Translation.XY.m128d_f64 = local_818.Translation.XY.m128d_f64;
        local_3e8.Translation.ZW.m128d_f64 = local_818.Translation.ZW.m128d_f64;
        local_3e8.Scale3D.XY.m128d_f64[0]._0_4_ = local_818.Scale3D.XY.m128d_f64[0]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[0]._4_4_ = local_818.Scale3D.XY.m128d_f64[0]._4_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ = local_818.Scale3D.XY.m128d_f64[1]._0_4_;
        local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ = local_818.Scale3D.XY.m128d_f64[1]._4_4_;
        local_3e8.Scale3D.ZW.m128d_f64 = local_818.Scale3D.ZW.m128d_f64;
      }
    }
    uVar28 = 0xffffffff;
    if (pFVar26->Index != 0xffff) {
      uVar28 = (uint)pFVar26->Index;
    }
    URigHierarchy::GetGlobalTransformByIndex(this,&local_2c8,uVar28,true);
    local_388.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_388.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_388.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_388.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_388.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_388.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_388,&local_2c8,&local_3e8);
    (local_848->Rotation).XY.m128d_f64[0] = local_388.Rotation.XY.m128d_f64[0];
    (local_848->Rotation).XY.m128d_f64[1] = local_388.Rotation.XY.m128d_f64[1];
    (local_848->Rotation).ZW.m128d_f64[0] = local_388.Rotation.ZW.m128d_f64[0];
    (local_848->Rotation).ZW.m128d_f64[1] = local_388.Rotation.ZW.m128d_f64[1];
    (local_848->Translation).XY.m128d_f64[0] = local_388.Translation.XY.m128d_f64[0];
    (local_848->Translation).XY.m128d_f64[1] = local_388.Translation.XY.m128d_f64[1];
    (local_848->Translation).ZW.m128d_f64[0] = local_388.Translation.ZW.m128d_f64[0];
    (local_848->Translation).ZW.m128d_f64[1] = local_388.Translation.ZW.m128d_f64[1];
    (local_848->Scale3D).XY.m128d_f64[0] = local_388.Scale3D.XY.m128d_f64[0];
    (local_848->Scale3D).XY.m128d_f64[1] = local_388.Scale3D.XY.m128d_f64[1];
    (local_848->Scale3D).ZW.m128d_f64[0] = local_388.Scale3D.ZW.m128d_f64[0];
    (local_848->Scale3D).ZW.m128d_f64[1] = local_388.Scale3D.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::MakeFromEuler(&local_648,local_858);
    auVar36 = *(undefined1 (*) [16])(local_848->Rotation).XY.m128d_f64;
    dVar15 = (local_848->Rotation).ZW.m128d_f64[0];
    dVar16 = (local_848->Rotation).ZW.m128d_f64[1];
    dVar12 = auVar36._0_8_;
    dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    dVar13 = auVar36._8_8_;
    auVar35._8_4_ = auVar36._8_4_;
    auVar35._0_8_ = dVar13;
    auVar35._12_4_ = auVar36._12_4_;
    dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar7 = dVar12 * local_648.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar16 * local_648.W +
            auVar35._8_8_ * local_648.Y *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar15 * local_648.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    (local_848->Rotation).XY.m128d_f64[0] =
         dVar12 * local_648.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar16 * local_648.X +
         dVar13 * local_648.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar15 * local_648.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    (local_848->Rotation).XY.m128d_f64[1] =
         dVar12 * local_648.Z * dVar8 + dVar16 * local_648.Y + dVar13 * local_648.W * dVar10 +
         dVar15 * local_648.X * dVar11;
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = dVar12 * local_648.Y * dVar3 + dVar16 * local_648.Z +
                   dVar13 * local_648.X * dVar4 + dVar15 * local_648.W * dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(local_848->Rotation).ZW.m128d_f64 = auVar5;
  }
  if (pFVar26->Index != 0xffff) {
    uVar19 = (uint)pFVar26->Index;
  }
  URigHierarchy::GetGlobalTransformByIndex(this,&local_328,uVar19,false);
  local_448.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_448.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_448.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_448.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_448.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_448.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_448.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_448.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_448.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_448,local_848,&local_4a8);
  local_5f8 = local_328.Translation.ZW.m128d_f64[0];
  local_448.Translation.ZW.m128d_f64[1] = 0.0;
  local_448.Translation.ZW.m128d_f64[0] = local_328.Translation.ZW.m128d_f64[0];
  local_628.X = local_328.Rotation.XY.m128d_f64[0];
  local_628.Y = local_328.Rotation.XY.m128d_f64[1];
  local_758._s_0.X = (local_820->field0_0x0)._s_0.X;
  local_758._s_0.Y = (local_820->field0_0x0)._s_0.Y;
  local_628.Z = local_328.Rotation.ZW.m128d_f64[0];
  local_628.W = local_328.Rotation.ZW.m128d_f64[1];
  local_758._s_0.Z = (local_820->field0_0x0)._s_0.Z;
  local_608 = local_328.Translation.XY.m128d_f64[0];
  dStack_600 = local_328.Translation.XY.m128d_f64[1];
  local_448.Translation.XY.m128d_f64[0] = local_328.Translation.XY.m128d_f64[0];
  local_448.Translation.XY.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
  UE::Math::TQuat<double>::RotateVector
            (&local_628,(TVector<double> *)&local_738._s_0,(TVector<double> *)&local_758._s_0);
  dVar7 = __real_3e45798ee0000000;
  dVar12 = local_448.Rotation.XY.m128d_f64[0];
  dVar13 = local_448.Rotation.XY.m128d_f64[1];
  dVar15 = local_448.Rotation.ZW.m128d_f64[0];
  dVar16 = local_448.Rotation.ZW.m128d_f64[1];
  dVar6 = local_448.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar8 = local_448.Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar54 = local_738._8_8_;
  dVar10 = local_448.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = local_448.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar51 = (undefined4)((ulonglong)dVar11 >> 0x20);
  auVar39._8_4_ = SUB84(dVar8,0);
  auVar39._0_8_ = dVar6;
  auVar39._12_4_ = uVar31;
  auVar49._8_4_ = SUB84(dVar8,0);
  auVar49._0_8_ = dVar6;
  auVar49._12_4_ = uVar31;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_738._s_0.Z;
  auVar36 = blendpd(local_738._0_16_,auVar14,2);
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = uVar51;
  auVar50 = blendpd(auVar49,auVar9,2);
  auVar52._0_8_ = dVar54 * dVar6 - auVar39._8_8_ * local_738._0_8_;
  auVar52._8_8_ = local_738._s_0.Z * dVar8 - dVar10 * dVar54;
  auVar37._0_8_ = auVar36._0_8_ * dVar10 - auVar50._0_8_ * local_738._s_0.Z;
  auVar37._8_8_ = auVar36._8_8_ * dVar11 - auVar50._8_8_ * 0.0;
  dVar3 = auVar52._8_8_ + auVar52._8_8_;
  dVar4 = auVar37._0_8_ + auVar37._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar36 = blendpd(auVar52,auVar37,2);
  auVar53._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar53._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  auVar45._8_4_ = SUB84(dVar4,0);
  auVar45._0_8_ = dVar3;
  auVar45._12_4_ = uVar31;
  auVar38._8_4_ = SUB84(dVar11,0);
  auVar38._0_8_ = dVar11;
  auVar38._12_4_ = uVar51;
  auVar46._0_8_ = auVar45._8_8_ * dVar6 - auVar39._8_8_ * dVar3;
  auVar46._8_8_ = auVar53._0_8_ * dVar8 - dVar10 * dVar4;
  auVar40._8_4_ = SUB84(dVar4,0);
  auVar40._0_8_ = dVar3;
  auVar40._12_4_ = uVar31;
  auVar36 = blendpd(auVar40,auVar53,2);
  auVar41._0_8_ = auVar36._0_8_ * dVar10 - auVar50._0_8_ * auVar53._0_8_;
  auVar41._8_8_ = auVar36._8_8_ * dVar11 - auVar50._8_8_ * auVar53._8_8_;
  auVar36 = blendpd(auVar46,auVar41,2);
  local_720._s_0.X = dVar11 * dVar3 + local_738._0_8_ + auVar46._8_8_;
  local_720._s_0.Y = auVar38._8_8_ * dVar4 + dVar54 + auVar41._0_8_;
  local_720._s_0.Z = dVar11 * auVar53._0_8_ + local_738._s_0.Z + auVar36._0_8_;
  pTVar22 = UE::Math::TVector<double>::GetSafeNormal
                      ((TVector<double> *)&local_720._s_0,&local_4c8,__real_3e45798ee0000000,
                       &UE::Math::TVector<double>::ZeroVector);
  fVar32 = __real_38d1b717;
  dVar3 = (pTVar22->field0_0x0)._s_0.Y;
  (param_16->field0_0x0)._s_0.X = (pTVar22->field0_0x0)._s_0.X;
  (param_16->field0_0x0)._s_0.Y = dVar3;
  (param_16->field0_0x0)._s_0.Z = (pTVar22->field0_0x0)._s_0.Z;
  fVar42 = (float)(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y *
                   (param_16->field0_0x0)._s_0.Y +
                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X *
                   (param_16->field0_0x0)._s_0.X +
                  UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z *
                  (param_16->field0_0x0)._s_0.Z);
  if ((float)((uint)(fVar42 - __real_bf800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar32)
  {
    pTVar21 = &local_5e8;
    local_5e8.Rotation.XY.m128d_f64[0] = dVar12;
    local_5e8.Rotation.XY.m128d_f64[1] = dVar13;
    local_5e8.Rotation.ZW.m128d_f64[0] = dVar15;
    local_5e8.Rotation.ZW.m128d_f64[1] = dVar16;
    local_5e8.Translation.XY.m128d_f64[0] = local_328.Translation.XY.m128d_f64[0];
    local_5e8.Translation.XY.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
    *local_840 = 0.0;
    pTVar55 = &local_708;
    local_708._s_0.X = (param_17->field0_0x0)._s_0.X;
    local_708._s_0.Y = (param_17->field0_0x0)._s_0.Y;
    local_708._s_0.Z = (param_17->field0_0x0)._s_0.Z;
    local_6e8._s_0.X = (param_16->field0_0x0)._s_0.X;
    local_6e8._s_0.Y = (param_16->field0_0x0)._s_0.Y;
    local_6e8._s_0.Z = (param_16->field0_0x0)._s_0.Z;
    local_5e8.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
    local_5e8.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
    fVar56 = 0.0;
    pTVar24 = &local_6e8;
    local_5e8.Translation.ZW.m128d_f64[0] = local_328.Translation.ZW.m128d_f64[0];
    local_5e8.Translation.ZW.m128d_f64[1] = 0.0;
    local_5e8.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
    local_5e8.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
    goto LAB_14a599680;
  }
  fVar33 = __real_bf800000;
  if ((__real_bf800000 <= fVar42) && (fVar33 = fVar42, fVar56 <= fVar42)) {
    fVar33 = fVar56;
  }
  fVar29 = acosf(fVar33);
  fVar33 = __real_3ea2f983;
  fVar42 = __real_322bcc77;
  fVar29 = fVar29 * __real_3ea2f983;
  if ((float)((uint)fVar29 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    pTVar21 = &local_588;
    local_588.Rotation.XY.m128d_f64[0] = dVar12;
    local_588.Rotation.XY.m128d_f64[1] = dVar13;
    local_588.Rotation.ZW.m128d_f64[0] = dVar15;
    local_588.Rotation.ZW.m128d_f64[1] = dVar16;
    *local_840 = 1.0;
    pTVar55 = &local_6c8;
    local_6c8._s_0.X = (param_17->field0_0x0)._s_0.X;
    local_6c8._s_0.Y = (param_17->field0_0x0)._s_0.Y;
    pTVar24 = &local_6a8;
    local_6c8._s_0.Z = (param_17->field0_0x0)._s_0.Z;
    local_6a8._s_0.X = (param_16->field0_0x0)._s_0.X;
    local_6a8._s_0.Y = (param_16->field0_0x0)._s_0.Y;
    local_6a8._s_0.Z = (param_16->field0_0x0)._s_0.Z;
    local_588.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
    local_588.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
    local_588.Translation.XY.m128d_f64[0] = local_328.Translation.XY.m128d_f64[0];
    local_588.Translation.XY.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
    local_588.Translation.ZW.m128d_f64[0] = local_328.Translation.ZW.m128d_f64[0];
    local_588.Translation.ZW.m128d_f64[1] = 0.0;
    local_588.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
    local_588.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
    goto LAB_14a599680;
  }
  dVar3 = (param_16->field0_0x0)._s_0.Y;
  (param_17->field0_0x0)._s_0.X = (param_16->field0_0x0)._s_0.X;
  (param_17->field0_0x0)._s_0.Y = dVar3;
  (param_17->field0_0x0)._s_0.Z = (param_16->field0_0x0)._s_0.Z;
  if (fVar42 < fVar29) {
    (param_17->field0_0x0)._s_0.Z = 0.0;
    UE::Math::TVector<double>::Normalize(param_17,dVar7);
    dVar3 = (param_17->field0_0x0)._s_0.Y * (double)fVar29;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (param_17->field0_0x0)._s_0.X * (double)fVar29;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&param_17->field0_0x0 = auVar2;
  }
  (param_17->field0_0x0)._s_0.Z = -1.0;
  fVar42 = (float)(param_17->field0_0x0)._s_0.X;
  fVar29 = (float)(param_17->field0_0x0)._s_0.Y;
  pFVar17 = param_14;
  if (fVar42 <= 0.0) {
    pFVar17 = (FSphericalRegion *)&param_14->ScaleFactors;
  }
  pfVar23 = &(param_14->ScaleFactors).PositiveHeight;
  if (fVar29 <= 0.0) {
    pfVar23 = &(param_14->ScaleFactors).NegativeHeight;
  }
  local_868 = (bool *)0x0;
  local_860 = 0.0;
  local_85c = false;
  DistanceToEllipse(fVar42,fVar29,
                    param_14->RegionAngleRadians * (pFVar17->ScaleFactors).PositiveWidth * fVar33,
                    param_14->RegionAngleRadians * *pfVar23 * fVar33,(FEllipseQuery *)&local_868);
  pFVar17 = param_15;
  if (fVar42 <= 0.0) {
    pFVar17 = (FSphericalRegion *)&param_15->ScaleFactors;
  }
  pfVar23 = &(param_15->ScaleFactors).PositiveHeight;
  if (fVar29 <= 0.0) {
    pfVar23 = &(param_15->ScaleFactors).NegativeHeight;
  }
  local_878 = (FRigElementKey *)0x0;
  local_870 = 0.0;
  local_86c = false;
  DistanceToEllipse(fVar42,fVar29,
                    param_15->RegionAngleRadians * (pFVar17->ScaleFactors).PositiveWidth * fVar33,
                    param_15->RegionAngleRadians * *pfVar23 * fVar33,(FEllipseQuery *)&local_878);
  if (local_85c == false) {
    if (local_86c != false) {
      fVar42 = SQRT(local_870) + SQRT(local_860);
      if (fVar32 <= fVar42) {
        fVar56 = fVar56 - SQRT(local_860) / fVar42;
        goto LAB_14a5995e9;
      }
    }
    fVar56 = 0.0;
  }
LAB_14a5995e9:
  pTVar21 = &local_528;
  local_528.Rotation.XY.m128d_f64[0] = dVar12;
  local_528.Rotation.XY.m128d_f64[1] = dVar13;
  local_528.Rotation.ZW.m128d_f64[0] = dVar15;
  local_528.Rotation.ZW.m128d_f64[1] = dVar16;
  *local_840 = fVar56;
  pTVar55 = &local_688;
  local_688._s_0.X = (param_17->field0_0x0)._s_0.X;
  local_688._s_0.Y = (param_17->field0_0x0)._s_0.Y;
  pTVar24 = &local_668;
  local_688._s_0.Z = (param_17->field0_0x0)._s_0.Z;
  local_668._s_0.X = (param_16->field0_0x0)._s_0.X;
  local_668._s_0.Y = (param_16->field0_0x0)._s_0.Y;
  local_668._s_0.Z = (param_16->field0_0x0)._s_0.Z;
  local_528.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
  local_528.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
  local_528.Translation.XY.m128d_f64[0] = local_328.Translation.XY.m128d_f64[0];
  local_528.Translation.XY.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
  local_528.Translation.ZW.m128d_f64[0] = local_328.Translation.ZW.m128d_f64[0];
  local_528.Translation.ZW.m128d_f64[1] = 0.0;
  local_528.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
  local_528.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
LAB_14a599680:
  FSphericalPoseReaderDebugSettings::DrawDebug
            (local_830,pTVar21,*(FRigVMDrawInterface **)&local_838->field_0x58,param_14,param_15,
             (TVector<double> *)&pTVar24->_s_0,(TVector<double> *)&pTVar55->_s_0,fVar56);
  return;
}

