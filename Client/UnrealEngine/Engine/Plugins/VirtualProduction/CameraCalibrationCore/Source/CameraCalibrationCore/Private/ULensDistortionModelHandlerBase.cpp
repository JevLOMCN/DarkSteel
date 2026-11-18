// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 33

// StaticClass @ 14d678620

UClass * __cdecl ULensDistortionModelHandlerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensDistortionModelHandlerBase",
               &Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton,
               StaticRegisterNativesULensDistortionModelHandlerBase,0xd0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULensDistortionModelHandlerBase>,
               InternalVTableHelperCtorCaller<ULensDistortionModelHandlerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton;
}

// ULensDistortionModelHandlerBase @ 14d6aaf20

ULensDistortionModelHandlerBase * __thiscall
ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
          (ULensDistortionModelHandlerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->OverscanFactor = 1.0;
  this->bIsDirty = true;
  this->_padding_ = (longlong)&___7ULensDistortionModelHandlerBase__6B_;
  (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  (this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  (this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  (this->LensModelClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DistortionPostProcessMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->CurrentState).DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentState).DistortionInfo.Parameters.ArrayNum = 0;
  (this->CurrentState).DistortionInfo.Parameters.ArrayMax = 0;
  (this->CameraFilmback).SensorWidth = 24.89;
  (this->CameraFilmback).SensorHeight = 18.67;
  (this->CameraFilmback).SensorHorizontalOffset = 0.0;
  (this->CameraFilmback).SensorVerticalOffset = 0.0;
  (this->CameraFilmback).SensorAspectRatio = 1.33;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->DistortionDisplacementMapMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->UndistortionDisplacementMapRT).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->DistortionDisplacementMapRT).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->DistortionProducerID).A = 0;
  (this->DistortionProducerID).B = 0;
  (this->DistortionProducerID).C = 0;
  (this->DistortionProducerID).D = 0;
  return this;
}

// ULensDistortionModelHandlerBase @ 14d6aaff0

ULensDistortionModelHandlerBase * __thiscall
ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
          (ULensDistortionModelHandlerBase *this)

{
  UObject::UObject((UObject *)this);
  this->OverscanFactor = 1.0;
  this->bIsDirty = true;
  this->_padding_ = (longlong)&___7ULensDistortionModelHandlerBase__6B_;
  (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  (this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  (this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  (this->LensModelClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DistortionPostProcessMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->CurrentState).DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentState).DistortionInfo.Parameters.ArrayNum = 0;
  (this->CurrentState).DistortionInfo.Parameters.ArrayMax = 0;
  (this->CameraFilmback).SensorWidth = 24.89;
  (this->CameraFilmback).SensorHeight = 18.67;
  (this->CameraFilmback).SensorHorizontalOffset = 0.0;
  (this->CameraFilmback).SensorVerticalOffset = 0.0;
  (this->CameraFilmback).SensorAspectRatio = 1.33;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->DistortionDisplacementMapMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->UndistortionDisplacementMapRT).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->DistortionDisplacementMapRT).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->DistortionProducerID).A = 0;
  (this->DistortionProducerID).B = 0;
  (this->DistortionProducerID).C = 0;
  (this->DistortionProducerID).D = 0;
  return this;
}

// ~ULensDistortionModelHandlerBase @ 14d6ace70

void __thiscall
ULensDistortionModelHandlerBase::~ULensDistortionModelHandlerBase
          (ULensDistortionModelHandlerBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULensDistortionModelHandlerBase__6B_;
  pFVar1 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentState).DistortionInfo.Parameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ComputeDistortedUV @ 14d6bb690

TVector2<double> * __thiscall
ULensDistortionModelHandlerBase::ComputeDistortedUV
          (ULensDistortionModelHandlerBase *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\LensDistortionModelHandlerBase.h"
             ,0x9b,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// ComputeInverseOverscanFactor @ 14d6bb8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
ULensDistortionModelHandlerBase::ComputeInverseOverscanFactor(ULensDistortionModelHandlerBase *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [4];
  float local_164;
  ForAnyElementType local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  int local_13c;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  
  dVar13 = _UNK_1528cb7e8;
  dVar12 = ___xmm_3fe00000000000003ff0000000000000;
  dVar11 = _UNK_150978bb8;
  dVar10 = ___xmm_00000000000000003fe0000000000000;
  dVar9 = _UNK_15076b7e8;
  dVar8 = ___xmm_3ff00000000000003fe0000000000000;
  dVar7 = _UNK_15076b778;
  dVar6 = ___xmm_3fe00000000000000000000000000000;
  dVar5 = _UNK_150689688;
  dVar4 = ___xmm_3ff00000000000003ff0000000000000;
  dVar22 = _UNK_150689518;
  dVar23 = ___xmm_00000000000000003ff0000000000000;
  dVar3 = _UNK_15061cbc8;
  dVar2 = ___xmm_3ff00000000000000000000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar20 = (FScriptContainerElement *)0x0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,8,0,&local_148,8,&local_13c);
  local_108 = dVar23;
  dStack_100 = dVar22;
  local_f8 = dVar12;
  dStack_f0 = dVar13;
  local_e8 = dVar4;
  dStack_e0 = dVar5;
  *(double *)local_148.Data = 0.0;
  *(double *)(local_148.Data + 8) = 0.0;
  *(double *)(local_148.Data + 0x10) = dVar10;
  *(double *)(local_148.Data + 0x18) = dVar11;
  *(double *)(local_148.Data + 0x20) = dVar23;
  *(double *)(local_148.Data + 0x28) = dVar22;
  *(double *)(local_148.Data + 0x30) = dVar12;
  *(double *)(local_148.Data + 0x38) = dVar13;
  *(double *)(local_148.Data + 0x40) = dVar4;
  *(double *)(local_148.Data + 0x48) = dVar5;
  *(double *)(local_148.Data + 0x50) = dVar8;
  *(double *)(local_148.Data + 0x58) = dVar9;
  *(double *)(local_148.Data + 0x60) = dVar2;
  *(double *)(local_148.Data + 0x68) = dVar3;
  *(double *)(local_148.Data + 0x70) = dVar6;
  *(double *)(local_148.Data + 0x78) = dVar7;
  uVar17 = (ulonglong)local_140;
  local_d8 = dVar8;
  dStack_d0 = dVar9;
  local_c8 = dVar2;
  dStack_c0 = dVar3;
  local_b8 = dVar6;
  dStack_b0 = dVar7;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = dVar10;
  dStack_110 = dVar11;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  if ((int)local_140 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar17);
  }
  if (0 < (int)local_140) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_140,&local_160,0,(int *)((longlong)&local_158 + 4));
    uVar17 = (ulonglong)local_140;
  }
  dVar3 = __real_3fe0000000000000;
  dVar2 = __real_3ff0000000000000;
  iVar15 = (int)uVar17;
  pFVar19 = local_148.Data + (longlong)iVar15 * 0x10;
  FVar18.Data = local_148.Data;
  while( true ) {
    if ((int)uVar17 != iVar15) {
      local_168[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_168);
    }
    fVar21 = __real_3f800000;
    if (FVar18.Data == pFVar19) break;
    (**(code **)(this->_padding_ + 0x2d0))(this,&local_138,FVar18.Data);
    dVar23 = dVar2;
    if (*(double *)FVar18.Data != dVar3) {
      dVar23 = (local_138 - dVar3) / (*(double *)FVar18.Data - dVar3);
    }
    dVar22 = dVar2;
    if (*(double *)(FVar18.Data + 8) != dVar3) {
      dVar22 = (local_130 - dVar3) / (*(double *)(FVar18.Data + 8) - dVar3);
    }
    local_164 = (float)dVar22;
    if ((float)dVar22 <= (float)dVar23) {
      local_164 = (float)dVar23;
    }
    if (((local_160.Data <= (FScriptContainerElement *)&local_164) &&
        ((FScriptContainerElement *)&local_164 < local_160.Data + (longlong)local_158._4_4_ * 4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar1 = (code *)swi(3);
      fVar21 = (float)(*pcVar1)();
      return fVar21;
    }
    iVar16 = (int)local_158;
    if ((int)local_158 == local_158._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_160,(int *)((longlong)&local_158 + 4));
    }
    FVar18.Data = FVar18.Data + 0x10;
    local_158 = CONCAT44(local_158._4_4_,iVar16 + 1);
    *(float *)(local_160.Data + (longlong)iVar16 * 4) = local_164;
    uVar17 = (ulonglong)local_140;
  }
  iVar15 = (int)local_158;
  pFVar19 = local_160.Data + (longlong)(int)local_158 * 4;
  FVar18.Data = local_160.Data;
  while( true ) {
    if ((int)local_158 != iVar15) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_150);
    }
    if (FVar18.Data == pFVar19) break;
    if ((pFVar20 == (FScriptContainerElement *)0x0) ||
       (*(float *)pFVar20 <= *(float *)FVar18.Data && *(float *)FVar18.Data != *(float *)pFVar20)) {
      pFVar20 = FVar18.Data;
    }
    FVar18.Data = FVar18.Data + 4;
  }
  fVar24 = fVar21;
  if ((pFVar20 != (FScriptContainerElement *)0x0) &&
     (fVar24 = *(float *)pFVar20, *(float *)pFVar20 <= fVar21)) {
    fVar24 = fVar21;
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  return fVar24;
}

// ComputeOverscanFactor @ 14d6bc050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
ULensDistortionModelHandlerBase::ComputeOverscanFactor(ULensDistortionModelHandlerBase *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [4];
  float local_164;
  ForAnyElementType local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  int local_13c;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  
  dVar13 = _UNK_1528cb7e8;
  dVar12 = ___xmm_3fe00000000000003ff0000000000000;
  dVar11 = _UNK_150978bb8;
  dVar10 = ___xmm_00000000000000003fe0000000000000;
  dVar9 = _UNK_15076b7e8;
  dVar8 = ___xmm_3ff00000000000003fe0000000000000;
  dVar7 = _UNK_15076b778;
  dVar6 = ___xmm_3fe00000000000000000000000000000;
  dVar5 = _UNK_150689688;
  dVar4 = ___xmm_3ff00000000000003ff0000000000000;
  dVar22 = _UNK_150689518;
  dVar23 = ___xmm_00000000000000003ff0000000000000;
  dVar3 = _UNK_15061cbc8;
  dVar2 = ___xmm_3ff00000000000000000000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar20 = (FScriptContainerElement *)0x0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,8,0,&local_148,8,&local_13c);
  local_108 = dVar23;
  dStack_100 = dVar22;
  local_f8 = dVar12;
  dStack_f0 = dVar13;
  local_e8 = dVar4;
  dStack_e0 = dVar5;
  *(double *)local_148.Data = 0.0;
  *(double *)(local_148.Data + 8) = 0.0;
  *(double *)(local_148.Data + 0x10) = dVar10;
  *(double *)(local_148.Data + 0x18) = dVar11;
  *(double *)(local_148.Data + 0x20) = dVar23;
  *(double *)(local_148.Data + 0x28) = dVar22;
  *(double *)(local_148.Data + 0x30) = dVar12;
  *(double *)(local_148.Data + 0x38) = dVar13;
  *(double *)(local_148.Data + 0x40) = dVar4;
  *(double *)(local_148.Data + 0x48) = dVar5;
  *(double *)(local_148.Data + 0x50) = dVar8;
  *(double *)(local_148.Data + 0x58) = dVar9;
  *(double *)(local_148.Data + 0x60) = dVar2;
  *(double *)(local_148.Data + 0x68) = dVar3;
  *(double *)(local_148.Data + 0x70) = dVar6;
  *(double *)(local_148.Data + 0x78) = dVar7;
  uVar17 = (ulonglong)local_140;
  local_d8 = dVar8;
  dStack_d0 = dVar9;
  local_c8 = dVar2;
  dStack_c0 = dVar3;
  local_b8 = dVar6;
  dStack_b0 = dVar7;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = dVar10;
  dStack_110 = dVar11;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  if ((int)local_140 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar17);
  }
  if (0 < (int)local_140) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_140,&local_160,0,(int *)((longlong)&local_158 + 4));
    uVar17 = (ulonglong)local_140;
  }
  dVar3 = __real_3fe0000000000000;
  dVar2 = __real_3ff0000000000000;
  iVar15 = (int)uVar17;
  pFVar19 = local_148.Data + (longlong)iVar15 * 0x10;
  FVar18.Data = local_148.Data;
  while( true ) {
    if ((int)uVar17 != iVar15) {
      local_168[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_168);
    }
    fVar21 = __real_3f800000;
    if (FVar18.Data == pFVar19) break;
    (**(code **)(this->_padding_ + 0x2d8))(this,&local_138,FVar18.Data);
    dVar23 = dVar2;
    if (*(double *)FVar18.Data != dVar3) {
      dVar23 = (local_138 - dVar3) / (*(double *)FVar18.Data - dVar3);
    }
    dVar22 = dVar2;
    if (*(double *)(FVar18.Data + 8) != dVar3) {
      dVar22 = (local_130 - dVar3) / (*(double *)(FVar18.Data + 8) - dVar3);
    }
    local_164 = (float)dVar22;
    if ((float)dVar22 <= (float)dVar23) {
      local_164 = (float)dVar23;
    }
    if (((local_160.Data <= (FScriptContainerElement *)&local_164) &&
        ((FScriptContainerElement *)&local_164 < local_160.Data + (longlong)local_158._4_4_ * 4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar1 = (code *)swi(3);
      fVar21 = (float)(*pcVar1)();
      return fVar21;
    }
    iVar16 = (int)local_158;
    if ((int)local_158 == local_158._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_160,(int *)((longlong)&local_158 + 4));
    }
    FVar18.Data = FVar18.Data + 0x10;
    local_158 = CONCAT44(local_158._4_4_,iVar16 + 1);
    *(float *)(local_160.Data + (longlong)iVar16 * 4) = local_164;
    uVar17 = (ulonglong)local_140;
  }
  iVar15 = (int)local_158;
  pFVar19 = local_160.Data + (longlong)(int)local_158 * 4;
  FVar18.Data = local_160.Data;
  while( true ) {
    if ((int)local_158 != iVar15) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_150);
    }
    if (FVar18.Data == pFVar19) break;
    if ((pFVar20 == (FScriptContainerElement *)0x0) ||
       (*(float *)pFVar20 <= *(float *)FVar18.Data && *(float *)FVar18.Data != *(float *)pFVar20)) {
      pFVar20 = FVar18.Data;
    }
    FVar18.Data = FVar18.Data + 4;
  }
  fVar24 = fVar21;
  if ((pFVar20 != (FScriptContainerElement *)0x0) &&
     (fVar24 = *(float *)pFVar20, *(float *)pFVar20 <= fVar21)) {
    fVar24 = fVar21;
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  return fVar24;
}

// ComputeUndistortedUV @ 14d6bd180

TVector2<double> * __thiscall
ULensDistortionModelHandlerBase::ComputeUndistortedUV
          (ULensDistortionModelHandlerBase *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\LensDistortionModelHandlerBase.h"
             ,0x9e,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// CreateDisplacementMaps @ 14d6bf520

void __thiscall
ULensDistortionModelHandlerBase::CreateDisplacementMaps
          (ULensDistortionModelHandlerBase *this,TIntPoint<int> param_1)

{
  UMaterialInstanceDynamic *pUVar1;
  FLinearColor FVar2;
  FName *pFVar3;
  FName FVar4;
  FName FVar5;
  UTextureRenderTarget2D *pUVar6;
  FName local_res8;
  TIntPoint<int>_u_0 local_res10;
  TIntPoint<int>_u_0 local_res18;
  
  local_res10 = param_1.field0_0x0;
  pFVar3 = ::FName::FName(&local_res8,L"UndistortionDisplacementMapRT");
  FVar5 = *pFVar3;
  FVar4 = (FName)Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FVar5 = MakeUniqueObjectName
                    ((UObject *)&local_res18._s_0,(UClass *)this,FVar4,
                     FVar5.ComparisonIndex.Value.Value);
  pUVar6 = NewObject<UTextureRenderTarget2D>
                     ((UObject *)this,*(FName *)FVar5,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->UndistortionDisplacementMapRT).field0_0x0.DebugPtr = pUVar6;
  (pUVar6->RenderTargetFormat).Value = '\x05';
  FVar2 = FLinearColor::Black;
  pUVar6->bAutoGenerateMips = '\0';
  *(undefined1 *)((longlong)&pUVar6->_padding_ + 1) = 1;
  (pUVar6->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pUVar6->AddressX = '\x01';
  pUVar6->AddressY = '\x01';
  UTextureRenderTarget2D::InitAutoFormat(pUVar6,param_1.field0_0x0._0_4_,local_res10._s_0.Y);
  UTextureRenderTarget2D::UpdateResourceImmediate(pUVar6,true);
  pFVar3 = ::FName::FName(&local_res8,L"DistortionDisplacementMapRT");
  FVar5 = *pFVar3;
  FVar4 = (FName)Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FVar5 = MakeUniqueObjectName
                    ((UObject *)&local_res18._s_0,(UClass *)this,FVar4,
                     FVar5.ComparisonIndex.Value.Value);
  pUVar6 = NewObject<UTextureRenderTarget2D>
                     ((UObject *)this,*(FName *)FVar5,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->DistortionDisplacementMapRT).field0_0x0.DebugPtr = pUVar6;
  (pUVar6->RenderTargetFormat).Value = '\x05';
  FVar2 = FLinearColor::Black;
  pUVar6->bAutoGenerateMips = '\0';
  *(undefined1 *)((longlong)&pUVar6->_padding_ + 1) = 1;
  (pUVar6->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pUVar6->AddressX = '\x01';
  pUVar6->AddressY = '\x01';
  UTextureRenderTarget2D::InitAutoFormat(pUVar6,param_1.field0_0x0._0_4_,local_res10._s_0.Y);
  UTextureRenderTarget2D::UpdateResourceImmediate(pUVar6,true);
  pUVar1 = (this->DistortionPostProcessMID).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
    pUVar6 = (this->UndistortionDisplacementMapRT).field0_0x0.DebugPtr;
    pFVar3 = ::FName::FName((FName *)&local_res10._s_0,"UndistortionDisplacementMap");
    UMaterialInstanceDynamic::SetTextureParameterValue(pUVar1,*pFVar3,(UTexture *)pUVar6);
    pUVar1 = (this->DistortionPostProcessMID).field0_0x0.DebugPtr;
    pUVar6 = (this->DistortionDisplacementMapRT).field0_0x0.DebugPtr;
    pFVar3 = ::FName::FName((FName *)&local_res10._s_0,"DistortionDisplacementMap");
    UMaterialInstanceDynamic::SetTextureParameterValue(pUVar1,*pFVar3,(UTexture *)pUVar6);
  }
  return;
}

// DrawDistortionDisplacementMap @ 14d6c1190

bool __thiscall
ULensDistortionModelHandlerBase::DrawDistortionDisplacementMap
          (ULensDistortionModelHandlerBase *this,UTextureRenderTarget2D *param_1)

{
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    return false;
  }
  if (((this->DistortionPostProcessMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0) ||
     ((this->DistortionDisplacementMapMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0))
  {
    (**(code **)(this->_padding_ + 0x2e0))();
  }
  (**(code **)(this->_padding_ + 0x2e8))(this);
  UKismetRenderingLibrary::DrawMaterialToRenderTarget
            ((UObject *)this,param_1,
             (UMaterialInterface *)(this->DistortionDisplacementMapMID).field0_0x0.DebugPtr);
  return true;
}

// DrawUndistortionDisplacementMap @ 14d6c1210

bool __thiscall
ULensDistortionModelHandlerBase::DrawUndistortionDisplacementMap
          (ULensDistortionModelHandlerBase *this,UTextureRenderTarget2D *param_1)

{
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    return false;
  }
  if (((this->DistortionPostProcessMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0) ||
     ((this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0)
     ) {
    (**(code **)(this->_padding_ + 0x2e0))();
  }
  (**(code **)(this->_padding_ + 0x2e8))(this);
  UKismetRenderingLibrary::DrawMaterialToRenderTarget
            ((UObject *)this,param_1,
             (UMaterialInterface *)(this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr);
  return true;
}

// ExecuteDistortionShader @ 14d6c8190

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ULensDistortionModelHandlerBase::ExecuteDistortionShader
          (ULensDistortionModelHandlerBase *this,FRDGBuilder *param_1,FLensDistortionState *param_2,
          float param_3,float param_4,TVector2<double> *param_5,FRDGTexture **param_6)

{
  return;
}

// GetDistortedUVs @ 14d6d3840

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __thiscall
ULensDistortionModelHandlerBase::GetDistortedUVs
          (ULensDistortionModelHandlerBase *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  TVector2<double> *pTVar8;
  TVector2<double> *pTVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar2 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pTVar9 = param_1->DataPtr;
  pTVar8 = pTVar9 + (int)uVar2;
  while( true ) {
    if (pTVar9 == pTVar8) {
      return __return_storage_ptr__;
    }
    (**(code **)(this->_padding_ + 0x2d0))(this,&local_18,pTVar9);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pTVar9 = pTVar9 + 1;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar3 = local_18;
    *(undefined8 *)(pFVar3 + 8) = uStack_10;
  }
  pcVar4 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar7;
}

// GetDistortionShaderPath @ 14d6d3a80

FString * __thiscall
ULensDistortionModelHandlerBase::GetDistortionShaderPath
          (ULensDistortionModelHandlerBase *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPreferredRenderingMode @ 14d6d7a20

EDistortionRenderingMode __thiscall
ULensDistortionModelHandlerBase::GetPreferredRenderingMode(ULensDistortionModelHandlerBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2b8))();
  return cVar1 != '\0';
}

// GetPrivateStaticClass @ 14d6d8600

UClass * __cdecl ULensDistortionModelHandlerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensDistortionModelHandlerBase",
               &Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton,
               StaticRegisterNativesULensDistortionModelHandlerBase,0xd0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULensDistortionModelHandlerBase>,
               InternalVTableHelperCtorCaller<ULensDistortionModelHandlerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton;
}

// InitDistortionMaterials @ 14d6de600

void __thiscall
ULensDistortionModelHandlerBase::InitDistortionMaterials(ULensDistortionModelHandlerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\LensDistortionModelHandlerBase.h"
             ,0xa1,L"Pure virtual not implemented (%s)");
  return;
}

// InitializeHandler @ 14d6dec10

void __thiscall
ULensDistortionModelHandlerBase::InitializeHandler(ULensDistortionModelHandlerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\LensDistortionModelHandlerBase.h"
             ,0x98,L"Pure virtual not implemented (%s)");
  return;
}

// InterpretDistortionParameters @ 14d6e1010

void __thiscall
ULensDistortionModelHandlerBase::InterpretDistortionParameters
          (ULensDistortionModelHandlerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\LensDistortionModelHandlerBase.h"
             ,0xa7,L"Pure virtual not implemented (%s)");
  return;
}

// IsDisplacementMapMaterialReady @ 14d6e1830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
ULensDistortionModelHandlerBase::IsDisplacementMapMaterialReady
          (ULensDistortionModelHandlerBase *this,UMaterialInstanceDynamic *param_1)

{
  longlong lVar1;
  EShaderPlatform EVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  EVar2 = GMaxRHIShaderPlatform;
  if (lVar1 != 0) {
    lVar1 = (**(code **)(this->_padding_ + 0x180))(this);
    if (*(byte *)(lVar1 + 0x188) == 5) {
      EVar2 = SP_NumPlatforms;
    }
    else {
      EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(byte *)(lVar1 + 0x188)];
    }
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x390))(param_1,EVar2,4);
  if (lVar1 == 0) {
    return false;
  }
  if (*(char *)(lVar1 + 0x2c) == '\0') {
    return (bool)*(undefined1 *)(lVar1 + 0x2c);
  }
  return true;
}

// IsForwardDistorting @ 14d6e1b80

bool __thiscall
ULensDistortionModelHandlerBase::IsForwardDistorting(ULensDistortionModelHandlerBase *this)

{
  return true;
}

// IsModelSupported @ 14d6e1bb0

bool __thiscall
ULensDistortionModelHandlerBase::IsModelSupported
          (ULensDistortionModelHandlerBase *this,TSubclassOf<ULensModel> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  pUVar2 = (this->LensModelClass).Class.field0_0x0.DebugPtr;
  pUVar5 = (UClass *)0x0;
  pUVar6 = pUVar5;
  if ((pUVar2 != (UClass *)0x0) && (pUVar4 = ULensModel::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (this->LensModelClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) && (pUVar4 = ULensModel::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
    }
  }
  return pUVar6 == pUVar5;
}

// PostInitProperties @ 14d6e5460

void __thiscall
ULensDistortionModelHandlerBase::PostInitProperties(ULensDistortionModelHandlerBase *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  ULensModel *this_00;
  UClass *pUVar4;
  
  UObject::PostInitProperties((UObject *)this);
  if ((*(byte *)(this->_padding_ + 0xd4) & 1) == 0) {
    (**(code **)(this->_padding_ + 0x2c8))();
  }
  if ((this->_padding_ & 0x30) != 0) {
    return;
  }
  pUVar4 = (this->LensModelClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 == (UClass *)0x0) || (pUVar3 = ULensModel::StaticClass(), pUVar3 == (UClass *)0x0))
  goto LAB_14d6e551e;
  iVar1 = (int)pUVar3->_padding_;
  if (((int)pUVar4->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) ||
     (pUVar4 = (this->LensModelClass).Class.field0_0x0.DebugPtr, pUVar4 == (UClass *)0x0))
  goto LAB_14d6e551e;
  pUVar3 = ULensModel::StaticClass();
  if (pUVar3 == (UClass *)0x0) {
LAB_14d6e550b:
    pUVar4 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14d6e550b;
    pUVar4 = (this->LensModelClass).Class.field0_0x0.DebugPtr;
  }
  this_00 = UClass::GetDefaultObject<ULensModel>(pUVar4);
  ULensModel::GetDefaultParameterArray
            (this_00,(TArray<float,TSizedDefaultAllocator<32>_> *)&this->CurrentState);
LAB_14d6e551e:
  pUVar4 = UCameraCalibrationSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  CreateDisplacementMaps
            (this,(TIntPoint<int>)
                  *(TIntPoint<int>_u_0 *)
                   &(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x10);
  return;
}

// ProcessCurrentDistortion @ 14d6e5690

void __thiscall
ULensDistortionModelHandlerBase::ProcessCurrentDistortion(ULensDistortionModelHandlerBase *this)

{
  UMaterialInstanceDynamic *pUVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = true;
  if (((this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0
      ) || ((this->DistortionDisplacementMapMID).field0_0x0.DebugPtr ==
            (UMaterialInstanceDynamic *)0x0)) {
    (**(code **)(this->_padding_ + 0x2e0))();
  }
  pUVar1 = (this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMaterialInstanceDynamic *)0x0) &&
     (bVar3 = IsDisplacementMapMaterialReady(this,pUVar1), !bVar3)) {
    bVar2 = false;
  }
  pUVar1 = (this->DistortionDisplacementMapMID).field0_0x0.DebugPtr;
  if ((pUVar1 == (UMaterialInstanceDynamic *)0x0) ||
     (bVar3 = IsDisplacementMapMaterialReady(this,pUVar1), bVar3)) {
    if ((bVar2) && (this->bIsDirty != false)) {
      this->bIsDirty = false;
      (**(code **)(this->_padding_ + 0x2f0))(this);
      (**(code **)(this->_padding_ + 0x2e8))(this);
      pUVar1 = (this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr;
      if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
        UKismetRenderingLibrary::DrawMaterialToRenderTarget
                  ((UObject *)this,(this->UndistortionDisplacementMapRT).field0_0x0.DebugPtr,
                   (UMaterialInterface *)pUVar1);
      }
      pUVar1 = (this->DistortionDisplacementMapMID).field0_0x0.DebugPtr;
      if (pUVar1 != (UMaterialInstanceDynamic *)0x0) {
        UKismetRenderingLibrary::DrawMaterialToRenderTarget
                  ((UObject *)this,(this->DistortionDisplacementMapRT).field0_0x0.DebugPtr,
                   (UMaterialInterface *)pUVar1);
      }
    }
  }
  return;
}

// SetCameraFilmback @ 14d6eb9a0

void __thiscall
ULensDistortionModelHandlerBase::SetCameraFilmback
          (ULensDistortionModelHandlerBase *this,FCameraFilmbackSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((param_1->SensorWidth != (this->CameraFilmback).SensorWidth) ||
       (param_1->SensorHeight != (this->CameraFilmback).SensorHeight)) ||
      (param_1->SensorHorizontalOffset != (this->CameraFilmback).SensorHorizontalOffset)) ||
     (param_1->SensorVerticalOffset != (this->CameraFilmback).SensorVerticalOffset)) {
    fVar1 = param_1->SensorHeight;
    fVar2 = param_1->SensorHorizontalOffset;
    fVar3 = param_1->SensorVerticalOffset;
    (this->CameraFilmback).SensorWidth = param_1->SensorWidth;
    (this->CameraFilmback).SensorHeight = fVar1;
    (this->CameraFilmback).SensorHorizontalOffset = fVar2;
    (this->CameraFilmback).SensorVerticalOffset = fVar3;
    (this->CameraFilmback).SensorAspectRatio = param_1->SensorAspectRatio;
    (**(code **)(this->_padding_ + 0x2f0))();
    this->bIsDirty = true;
  }
  return;
}

// SetDistortionState @ 14d6eba50

void __thiscall
ULensDistortionModelHandlerBase::SetDistortionState
          (ULensDistortionModelHandlerBase *this,FLensDistortionState *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  int iVar5;
  
  iVar5 = (this->CurrentState).DistortionInfo.Parameters.ArrayNum;
  if (((iVar5 == (param_1->DistortionInfo).Parameters.ArrayNum) &&
      (((iVar5 == 0 ||
        (iVar5 = memcmp((this->CurrentState).DistortionInfo.Parameters.AllocatorInstance.Data,
                        (param_1->DistortionInfo).Parameters.AllocatorInstance.Data,
                        (longlong)iVar5 << 2), iVar5 == 0)) &&
       ((param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.X ==
        (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.X)))) &&
     ((((param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.Y ==
        (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y &&
       ((param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.X ==
        (this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0._s_0.X)) &&
      ((param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y ==
       (this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0._s_0.Y)))) {
    return;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->CurrentState,
             (TArray<float,TSizedDefaultAllocator<32>_> *)param_1);
  dVar4 = (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.Y;
  (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.X;
  (this->CurrentState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dVar4;
  uVar1 = *(undefined4 *)((longlong)&(param_1->ImageCenter).PrincipalPoint.field0_0x0 + 4);
  uVar2 = *(undefined4 *)((longlong)&(param_1->ImageCenter).PrincipalPoint.field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&(param_1->ImageCenter).PrincipalPoint.field0_0x0 + 0xc);
  *(undefined4 *)&(this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0 =
       *(undefined4 *)&(param_1->ImageCenter).PrincipalPoint.field0_0x0;
  *(undefined4 *)((longlong)&(this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0 + 4) = uVar1
  ;
  *(undefined4 *)((longlong)&(this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0 + 8) = uVar2
  ;
  *(undefined4 *)((longlong)&(this->CurrentState).ImageCenter.PrincipalPoint.field0_0x0 + 0xc) =
       uVar3;
  (**(code **)(this->_padding_ + 0x2f0))(this);
  this->bIsDirty = true;
  return;
}

// SetOverscanFactor @ 14d6ebdb0

void __thiscall
ULensDistortionModelHandlerBase::SetOverscanFactor
          (ULensDistortionModelHandlerBase *this,float param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  FName local_res8 [4];
  
  if ((((this->DistortionPostProcessMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0) ||
      ((this->UndistortionDisplacementMapMID).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0
      )) || ((this->DistortionDisplacementMapMID).field0_0x0.DebugPtr ==
             (UMaterialInstanceDynamic *)0x0)) {
    (**(code **)(this->_padding_ + 0x2e0))();
  }
  this->OverscanFactor = param_1;
  this_00 = (this->DistortionPostProcessMID).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    pFVar1 = ::FName::FName(local_res8,"overscan_factor");
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar1,param_1);
  }
  return;
}

// StaticRegisterNativesULensDistortionModelHandlerBase @ 14d6f01c0

void __cdecl
ULensDistortionModelHandlerBase::StaticRegisterNativesULensDistortionModelHandlerBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateMaterialParameters @ 14d6f5380

void __thiscall
ULensDistortionModelHandlerBase::UpdateMaterialParameters(ULensDistortionModelHandlerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\LensDistortionModelHandlerBase.h"
             ,0xa4,L"Pure virtual not implemented (%s)");
  return;
}

// execGetDistortionDisplacementMap @ 14d6f8b20

void __cdecl
ULensDistortionModelHandlerBase::execGetDistortionDisplacementMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x10;
  return;
}

// execGetUndistortionDisplacementMap @ 14d6f9c10

void __cdecl
ULensDistortionModelHandlerBase::execGetUndistortionDisplacementMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x8;
  return;
}

// execIsModelSupported @ 14d6fa1c0

void __cdecl
ULensDistortionModelHandlerBase::execIsModelSupported
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TObjectPtr<UClass>_u_0 *pTVar3;
  TObjectPtr<UClass>_u_0 local_res10;
  
  local_res10.DebugPtr = (UClass *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar3 = &local_res10;
  if ((TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress != (TObjectPtr<UClass>_u_0 *)0x0)
  {
    pTVar3 = (TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsModelSupported((ULensDistortionModelHandlerBase *)param_1,
                           (TSubclassOf<ULensModel> *)&pTVar3->ObjectPtr);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetDistortionState @ 14d6fa7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ULensDistortionModelHandlerBase::execSetDistortionState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLensDistortionState *pFVar2;
  FLensDistortionState local_38;
  
  local_38.ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
  local_38.ImageCenter.PrincipalPoint.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_38.DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DistortionInfo.Parameters.ArrayNum = 0;
  local_38.DistortionInfo.Parameters.ArrayMax = 0;
  local_38.FocalLengthInfo.FxFy.field0_0x0._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_38.FocalLengthInfo.FxFy.field0_0x0._s_0.Y = _UNK_152bc18c8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FLensDistortionState *)param_2->MostRecentPropertyAddress != (FLensDistortionState *)0x0) {
    pFVar2 = (FLensDistortionState *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDistortionState((ULensDistortionModelHandlerBase *)param_1,pFVar2);
  if (local_38.DistortionInfo.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DistortionInfo.Parameters.AllocatorInstance.Data);
  }
  return;
}

