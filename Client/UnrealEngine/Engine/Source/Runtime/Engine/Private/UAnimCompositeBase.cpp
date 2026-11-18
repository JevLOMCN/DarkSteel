// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1473c7880

UClass * __cdecl UAnimCompositeBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompositeBase",
               &Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton,
               StaticRegisterNativesUAnimCompositeBase,0xb8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompositeBase>,
               InternalVTableHelperCtorCaller<UAnimCompositeBase>,local_res8,
               UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton;
}

// UAnimCompositeBase @ 1473d8620

UAnimCompositeBase * __thiscall
UAnimCompositeBase::UAnimCompositeBase(UAnimCompositeBase *this,FVTableHelper *param_1)

{
  UAnimSequenceBase::UAnimSequenceBase((UAnimSequenceBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->CommonTargetFrameRate).Numerator = 60000;
  (this->CommonTargetFrameRate).Denominator = 1;
  return this;
}

// UAnimCompositeBase @ 1473d8680

UAnimCompositeBase * __thiscall
UAnimCompositeBase::UAnimCompositeBase(UAnimCompositeBase *this,FObjectInitializer *param_1)

{
  UAnimSequenceBase::UAnimSequenceBase((UAnimSequenceBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->CommonTargetFrameRate).Numerator = 60000;
  (this->CommonTargetFrameRate).Denominator = 1;
  return this;
}

// ~UAnimCompositeBase @ 1473db430

void __thiscall UAnimCompositeBase::~UAnimCompositeBase(UAnimCompositeBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  return;
}

// ContainRecursive @ 1473f2990

bool __thiscall
UAnimCompositeBase::ContainRecursive
          (UAnimCompositeBase *this,
          TArray<UAnimCompositeBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimCompositeBase.h"
             ,0x151,L"Pure virtual not implemented (%s)");
  return false;
}

// ExtractRootMotionFromTrack @ 1473fab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimCompositeBase::ExtractRootMotionFromTrack
          (UAnimCompositeBase *this,FAnimTrack *param_1,float param_2,float param_3,
          FAnimExtractContext *param_4,FRootMotionMovementParams *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  TRotator<double> *this_00;
  longlong lVar7;
  uint uVar8;
  undefined1 auStackY_208 [32];
  TArray<FRootMotionExtractionStep,TSizedDefaultAllocator<32>_> local_1c8;
  FName local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TVector<double>_u_0 local_180;
  TQuat<double> local_168;
  TRotator<double> local_148;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  FAnimTrack::GetRootMotionExtractionStepsForTrackRange(param_1,&local_1c8,param_2,param_3);
  if (5 < (byte)LogRootMotion._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
  }
  uVar8 = 0;
  if (0 < local_1c8.ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < local_1c8.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar4.Data = local_1c8.AllocatorInstance.Data;
      if ((*(UAnimSequence **)(local_1c8.AllocatorInstance.Data + lVar7))->bEnableRootMotion !=
          false) {
        UAnimSequence::ExtractRootMotionFromRange
                  (*(UAnimSequence **)(local_1c8.AllocatorInstance.Data + lVar7),&local_c8,
                   (double)*(float *)(local_1c8.AllocatorInstance.Data + lVar7 + 8),
                   (double)*(float *)(local_1c8.AllocatorInstance.Data + lVar7 + 0xc),param_4);
        if (param_5->bHasRootMotion == false) {
          (param_5->RootMotionTransform).Rotation.XY.m128d_f64[0] =
               local_c8.Rotation.XY.m128d_f64[0];
          (param_5->RootMotionTransform).Rotation.XY.m128d_f64[1] =
               local_c8.Rotation.XY.m128d_f64[1];
          param_5->bHasRootMotion = true;
          (param_5->RootMotionTransform).Rotation.ZW.m128d_f64[0] =
               local_c8.Rotation.ZW.m128d_f64[0];
          (param_5->RootMotionTransform).Rotation.ZW.m128d_f64[1] =
               local_c8.Rotation.ZW.m128d_f64[1];
          (param_5->RootMotionTransform).Translation.XY.m128d_f64[0] =
               local_c8.Translation.XY.m128d_f64[0];
          (param_5->RootMotionTransform).Translation.XY.m128d_f64[1] =
               local_c8.Translation.XY.m128d_f64[1];
          (param_5->RootMotionTransform).Translation.ZW.m128d_f64[0] =
               local_c8.Translation.ZW.m128d_f64[0];
          (param_5->RootMotionTransform).Translation.ZW.m128d_f64[1] =
               local_c8.Translation.ZW.m128d_f64[1];
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[0] = local_c8.Scale3D.XY.m128d_f64[0];
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[1] = local_c8.Scale3D.XY.m128d_f64[1];
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = local_c8.Scale3D.ZW.m128d_f64[0];
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = local_c8.Scale3D.ZW.m128d_f64[1];
          uVar3 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
          uVar2 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
               FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar2;
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar3;
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
          param_5->BlendWeight = 1.0;
        }
        else {
          local_128.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_128.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_128.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_128.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_128.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_128.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_128.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_128.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_128,&local_c8,&param_5->RootMotionTransform)
          ;
          (param_5->RootMotionTransform).Rotation.XY.m128d_f64[0] =
               local_128.Rotation.XY.m128d_f64[0];
          (param_5->RootMotionTransform).Rotation.XY.m128d_f64[1] =
               local_128.Rotation.XY.m128d_f64[1];
          (param_5->RootMotionTransform).Rotation.ZW.m128d_f64[0] =
               local_128.Rotation.ZW.m128d_f64[0];
          (param_5->RootMotionTransform).Rotation.ZW.m128d_f64[1] =
               local_128.Rotation.ZW.m128d_f64[1];
          (param_5->RootMotionTransform).Translation.XY.m128d_f64[0] =
               local_128.Translation.XY.m128d_f64[0];
          (param_5->RootMotionTransform).Translation.XY.m128d_f64[1] =
               local_128.Translation.XY.m128d_f64[1];
          (param_5->RootMotionTransform).Translation.ZW.m128d_f64[0] =
               local_128.Translation.ZW.m128d_f64[0];
          (param_5->RootMotionTransform).Translation.ZW.m128d_f64[1] =
               local_128.Translation.ZW.m128d_f64[1];
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0]
          ;
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1]
          ;
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0]
          ;
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1]
          ;
          uVar3 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
          uVar2 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
               FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
          (param_5->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar2;
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar3;
          (param_5->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
        }
        if (4 < (byte)LogRootMotion._0_1_) {
          local_168.X = local_c8.Rotation.XY.m128d_f64[0];
          local_168.Y = local_c8.Rotation.XY.m128d_f64[1];
          local_168.Z = local_c8.Rotation.ZW.m128d_f64[0];
          local_168.W = local_c8.Rotation.ZW.m128d_f64[1];
          this_00 = UE::Math::TQuat<double>::Rotator(&local_168,&local_148);
          UE::Math::TRotator<double>::ToCompactString(this_00,&local_190);
          local_180._s_0.X = local_c8.Translation.XY.m128d_f64[0];
          local_180._s_0.Y = local_c8.Translation.XY.m128d_f64[1];
          local_180._s_0.Z = local_c8.Translation.ZW.m128d_f64[0];
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_180._s_0,&local_1a0);
          local_1b8 = *(FName *)(*(longlong *)(FVar4.Data + lVar7) + 0x18);
          ::FName::ToString(&local_1b8,&local_1b0);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar8 < local_1c8.ArrayNum);
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147403bc0

UClass * __cdecl UAnimCompositeBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompositeBase",
               &Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton,
               StaticRegisterNativesUAnimCompositeBase,0xb8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompositeBase>,
               InternalVTableHelperCtorCaller<UAnimCompositeBase>,local_res8,
               UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton;
}

// GetSamplingFrameRate @ 147404ac0

FFrameRate __thiscall UAnimCompositeBase::GetSamplingFrameRate(UAnimCompositeBase *this)

{
  FFrameRate in_RDX;
  
  *(FFrameRate *)in_RDX = CompositeFrameRate;
  return in_RDX;
}

// InvalidateRecursiveAsset @ 147407510

void __thiscall UAnimCompositeBase::InvalidateRecursiveAsset(UAnimCompositeBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimCompositeBase.h"
             ,0x14c,L"Pure virtual not implemented (%s)");
  return;
}

// PostLoad @ 14740d990

void __thiscall UAnimCompositeBase::PostLoad(UAnimCompositeBase *this)

{
  UAnimSequenceBase::PostLoad((UAnimSequenceBase *)this);
                    /* WARNING: Could not recover jumptable at 0x00014740d9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3e0))(this);
  return;
}

// SetCompositeLength @ 1474192b0

void __thiscall UAnimCompositeBase::SetCompositeLength(UAnimCompositeBase *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimCompositeBase.h"
             ,0x153,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUAnimCompositeBase @ 147419bf0

void __cdecl UAnimCompositeBase::StaticRegisterNativesUAnimCompositeBase(void)

{
  return;
}

