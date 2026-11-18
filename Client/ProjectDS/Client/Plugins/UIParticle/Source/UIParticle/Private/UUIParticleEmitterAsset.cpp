// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 8

// StaticClass @ 14ac8d4b0

UClass * __cdecl UUIParticleEmitterAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleEmitterAsset",
               &Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton,
               StaticRegisterNativesUUIParticleEmitterAsset,0xd8f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIParticleEmitterAsset>,
               InternalVTableHelperCtorCaller<UUIParticleEmitterAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton;
}

// UUIParticleEmitterAsset @ 14ac902d0

UUIParticleEmitterAsset * __thiscall
UUIParticleEmitterAsset::UUIParticleEmitterAsset
          (UUIParticleEmitterAsset *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUIParticleEmitterAsset__6B_;
  FUIParticleProperty::FUIParticleProperty(&this->MaxParticleCount);
  FUIParticleProperty::FUIParticleProperty(&this->SpawnParticlePerSecond);
  FUIParticleProperty::FUIParticleProperty(&this->ParticleEmitAngle);
  (this->EmitPosRange).Min.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->EmitPosRange).RandomKey_X_Y = false;
  (this->EmitPosRange).Max.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  FUIParticleProperty::FUIParticleProperty(&(this->EmitPosition).X);
  FUIParticleProperty::FUIParticleProperty(&(this->EmitPosition).Y);
  FUIParticleProperty::FUIParticleProperty(&this->LifeSpan);
  FUIParticleProperty::FUIParticleProperty(&this->Size);
  FUIParticleProperty::FUIParticleProperty(&this->Pivot);
  FUIParticleProperty::FUIParticleProperty(&this->RotationStart);
  FUIParticleProperty::FUIParticleProperty(&this->RotationSpeed);
  FUIParticleProperty::FUIParticleProperty(&this->Color);
  FUIParticleProperty::FUIParticleProperty(&this->Gravity);
  FUIParticleProperty::FUIParticleProperty(&this->StartSpeed);
  FUIParticleProperty::FUIParticleProperty(&this->AirResistance);
  FUIParticleProperty::FUIParticleProperty(&this->RadialAcceleration);
  FUIParticleProperty::FUIParticleProperty(&this->TangentialAcceleration);
  FUIParticleProperty::FUIParticleProperty(&this->Radius);
  FUIParticleProperty::FUIParticleProperty(&this->DegreePerSecond);
  FUIParticleProperty::FUIParticleProperty(&this->PositionX);
  FUIParticleProperty::FUIParticleProperty(&this->PositionY);
  (this->ChildrenEmitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenEmitters).ArrayNum = 0;
  (this->ChildrenEmitters).ArrayMax = 0;
  (this->ScalarParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParams).ArrayNum = 0;
  (this->ScalarParams).ArrayMax = 0;
  (this->ScalarParamsWhenStart).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParamsWhenStart).ArrayNum = 0;
  (this->ScalarParamsWhenStart).ArrayMax = 0;
  FUIParticleProperty::FUIParticleProperty(&this->ScaleFollowSpeedDirection);
  FUIParticleProperty::FUIParticleProperty(&this->ScaleFollowSpeedVertical);
  FUIParticleProperty::FUIParticleProperty(&this->DirectionScale);
  FUIParticleProperty::FUIParticleProperty(&this->VerticalDirectionScale);
  FUIParticleProperty::FUIParticleProperty(&this->SineDirectionStart);
  FUIParticleProperty::FUIParticleProperty(&this->SineDirectionSpeed);
  FUIParticleProperty::FUIParticleProperty(&this->SineDirectionRange);
  (this->LevelOfDetail).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelOfDetail).ArrayNum = 0;
  (this->LevelOfDetail).ArrayMax = 0;
  return this;
}

// UUIParticleEmitterAsset @ 14ac904a0

UUIParticleEmitterAsset * __thiscall
UUIParticleEmitterAsset::UUIParticleEmitterAsset
          (UUIParticleEmitterAsset *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUIParticleEmitterAsset__6B_;
  FUIParticleProperty::FUIParticleProperty(&this->MaxParticleCount);
  FUIParticleProperty::FUIParticleProperty(&this->SpawnParticlePerSecond);
  FUIParticleProperty::FUIParticleProperty(&this->ParticleEmitAngle);
  (this->EmitPosRange).Min.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->EmitPosRange).RandomKey_X_Y = false;
  (this->EmitPosRange).Max.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  FUIParticleProperty::FUIParticleProperty(&(this->EmitPosition).X);
  FUIParticleProperty::FUIParticleProperty(&(this->EmitPosition).Y);
  FUIParticleProperty::FUIParticleProperty(&this->LifeSpan);
  FUIParticleProperty::FUIParticleProperty(&this->Size);
  FUIParticleProperty::FUIParticleProperty(&this->Pivot);
  FUIParticleProperty::FUIParticleProperty(&this->RotationStart);
  FUIParticleProperty::FUIParticleProperty(&this->RotationSpeed);
  FUIParticleProperty::FUIParticleProperty(&this->Color);
  FUIParticleProperty::FUIParticleProperty(&this->Gravity);
  FUIParticleProperty::FUIParticleProperty(&this->StartSpeed);
  FUIParticleProperty::FUIParticleProperty(&this->AirResistance);
  FUIParticleProperty::FUIParticleProperty(&this->RadialAcceleration);
  FUIParticleProperty::FUIParticleProperty(&this->TangentialAcceleration);
  FUIParticleProperty::FUIParticleProperty(&this->Radius);
  FUIParticleProperty::FUIParticleProperty(&this->DegreePerSecond);
  FUIParticleProperty::FUIParticleProperty(&this->PositionX);
  FUIParticleProperty::FUIParticleProperty(&this->PositionY);
  (this->ChildrenEmitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenEmitters).ArrayNum = 0;
  (this->ChildrenEmitters).ArrayMax = 0;
  (this->ScalarParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParams).ArrayNum = 0;
  (this->ScalarParams).ArrayMax = 0;
  (this->ScalarParamsWhenStart).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParamsWhenStart).ArrayNum = 0;
  (this->ScalarParamsWhenStart).ArrayMax = 0;
  FUIParticleProperty::FUIParticleProperty(&this->ScaleFollowSpeedDirection);
  FUIParticleProperty::FUIParticleProperty(&this->ScaleFollowSpeedVertical);
  FUIParticleProperty::FUIParticleProperty(&this->DirectionScale);
  FUIParticleProperty::FUIParticleProperty(&this->VerticalDirectionScale);
  FUIParticleProperty::FUIParticleProperty(&this->SineDirectionStart);
  FUIParticleProperty::FUIParticleProperty(&this->SineDirectionSpeed);
  FUIParticleProperty::FUIParticleProperty(&this->SineDirectionRange);
  (this->LevelOfDetail).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelOfDetail).ArrayNum = 0;
  (this->LevelOfDetail).ArrayMax = 0;
  this->AutoPlay = false;
  this->StartTimeOffset = 0.0;
  this->SamplingTimes = 2;
  this->EmitSeconds = 1.0;
  (this->MaxParticleCount).Type = Float;
  (this->MaxParticleCount).FloatValue = 50.0;
  (this->SpawnParticlePerSecond).Type = Float;
  (this->SpawnParticlePerSecond).FloatValue = 10.0;
  (this->DirectionScale).Type = Float;
  (this->DirectionScale).FloatValue = 1.0;
  (this->VerticalDirectionScale).Type = Float;
  (this->VerticalDirectionScale).FloatValue = 1.0;
  (this->ParticleEmitAngle).Type = FloatRange;
  (this->ParticleEmitAngle).FloatRangeValue.Min = 0.0;
  (this->ParticleEmitAngle).FloatRangeValue.Max = 720.0;
  (this->StartSpeed).Type = FloatRange;
  (this->StartSpeed).FloatRangeValue.Min = 10.0;
  (this->StartSpeed).FloatRangeValue.Max = 50.0;
  this->AutoEmitPosRange = false;
  this->AutoScale = false;
  this->ScaleByX = true;
  this->RotationFollowSpeed = false;
  this->UseSeparateSize = false;
  this->UseScaleFollowSpeedVertical = false;
  this->UseScaleFollowSpeedDirection = false;
  (this->DesignSize).field0_0x0._s_0.X = 200.0;
  (this->DesignSize).field0_0x0._s_0.Y = 200.0;
  (this->Pivot).Type = Vector2D;
  (this->Pivot).Vector2DValue.field0_0x0._s_0.X = 0.5;
  (this->Pivot).Vector2DValue.field0_0x0._s_0.Y = 0.5;
  (this->Color).Type = LinearColorCurveRange;
  (this->LifeSpan).Type = Float;
  (this->LifeSpan).FloatValue = 1.0;
  (this->LifeSpan).FloatRangeValue.Min = 1.0;
  (this->LifeSpan).FloatRangeValue.Max = 1.5;
  (this->Gravity).Type = Vector2D;
  (this->Gravity).Vector2DValue.field0_0x0._s_0.X = 0.0;
  (this->Gravity).Vector2DValue.field0_0x0._s_0.Y = 0.0;
  (this->Size).Type = FloatRange;
  (this->Size).FloatRangeValue.Min = 20.0;
  (this->Size).FloatRangeValue.Max = 50.0;
  (this->Radius).Type = FloatRange;
  (this->Radius).FloatRangeValue.Min = 20.0;
  (this->Radius).FloatRangeValue.Max = 50.0;
  (this->DegreePerSecond).Type = FloatRange;
  (this->DegreePerSecond).FloatRangeValue.Min = 20.0;
  (this->DegreePerSecond).FloatRangeValue.Max = 50.0;
  (this->ScaleFollowSpeedDirection).Type = Float;
  (this->ScaleFollowSpeedDirection).FloatValue = 1.0;
  (this->ScaleFollowSpeedVertical).Type = Float;
  (this->ScaleFollowSpeedVertical).FloatValue = 1.0;
  (this->SineDirectionStart).Type = Float;
  (this->SineDirectionStart).FloatValue = 0.0;
  (this->SineDirectionSpeed).Type = Float;
  (this->SineDirectionSpeed).FloatValue = 0.0;
  (this->SineDirectionRange).Type = Float;
  (this->SineDirectionRange).FloatValue = 0.0;
  (this->RadialAcceleration).Type = Float;
  (this->RadialAcceleration).FloatValue = 0.0;
  (this->TangentialAcceleration).Type = Float;
  (this->TangentialAcceleration).FloatValue = 0.0;
  (this->AirResistance).Type = Float;
  (this->AirResistance).FloatValue = 0.0;
  (this->EmitPosition).X.FloatCurveValue.CurveType = EmitLifeTime;
  (this->EmitPosition).X.FloatCurveValue.Loop = true;
  (this->EmitPosition).X.FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->EmitPosition).X.FloatCurveRangeValue.Min.Loop = true;
  (this->EmitPosition).X.FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  (this->EmitPosition).X.FloatCurveRangeValue.Max.Loop = true;
  (this->EmitPosition).Y.FloatCurveValue.CurveType = EmitLifeTime;
  (this->EmitPosition).Y.FloatCurveValue.Loop = true;
  (this->EmitPosition).Y.FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->EmitPosition).Y.FloatCurveRangeValue.Min.Loop = true;
  (this->EmitPosition).Y.FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  (this->EmitPosition).Y.FloatCurveRangeValue.Max.Loop = true;
  (this->EmitPosition).X.FloatValue = 0.0;
  (this->EmitPosition).Y.FloatValue = 0.0;
  (this->SpawnParticlePerSecond).FloatCurveValue.CurveType = EmitLifeTime;
  (this->SpawnParticlePerSecond).FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->SpawnParticlePerSecond).FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  (this->MaxParticleCount).FloatCurveValue.CurveType = EmitLifeTime;
  (this->MaxParticleCount).FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->MaxParticleCount).FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  (this->RotationStart).FloatCurveValue.CurveType = EmitLifeTime;
  (this->RotationStart).FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->RotationStart).FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  (this->SineDirectionStart).FloatCurveValue.CurveType = EmitLifeTime;
  (this->SineDirectionStart).FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->SineDirectionStart).FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  (this->ParticleEmitAngle).FloatCurveValue.CurveType = EmitLifeTime;
  (this->ParticleEmitAngle).FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->ParticleEmitAngle).FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  (this->StartSpeed).FloatCurveValue.CurveType = EmitLifeTime;
  (this->StartSpeed).FloatCurveRangeValue.Min.CurveType = EmitLifeTime;
  (this->StartSpeed).FloatCurveRangeValue.Max.CurveType = EmitLifeTime;
  this->EmitAngleByWidgetAngle = false;
  return this;
}

// ~UUIParticleEmitterAsset @ 14ac910b0

void __thiscall UUIParticleEmitterAsset::~UUIParticleEmitterAsset(UUIParticleEmitterAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UUIParticleEmitterAsset__6B_;
  pFVar1 = (this->LevelOfDetail).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUIParticleProperty::~FUIParticleProperty(&this->SineDirectionRange);
  FUIParticleProperty::~FUIParticleProperty(&this->SineDirectionSpeed);
  FUIParticleProperty::~FUIParticleProperty(&this->SineDirectionStart);
  FUIParticleProperty::~FUIParticleProperty(&this->VerticalDirectionScale);
  FUIParticleProperty::~FUIParticleProperty(&this->DirectionScale);
  FUIParticleProperty::~FUIParticleProperty(&this->ScaleFollowSpeedVertical);
  FUIParticleProperty::~FUIParticleProperty(&this->ScaleFollowSpeedDirection);
  DestructItems<FScalarParamCurve,int>
            ((FScalarParamCurve *)(this->ScalarParamsWhenStart).AllocatorInstance.Data,
             (this->ScalarParamsWhenStart).ArrayNum);
  pFVar1 = (this->ScalarParamsWhenStart).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FScalarParamCurve,int>
            ((FScalarParamCurve *)(this->ScalarParams).AllocatorInstance.Data,
             (this->ScalarParams).ArrayNum);
  pFVar1 = (this->ScalarParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildrenEmitters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUIParticleProperty::~FUIParticleProperty(&this->PositionY);
  FUIParticleProperty::~FUIParticleProperty(&this->PositionX);
  FUIParticleProperty::~FUIParticleProperty(&this->DegreePerSecond);
  FUIParticleProperty::~FUIParticleProperty(&this->Radius);
  FUIParticleProperty::~FUIParticleProperty(&this->TangentialAcceleration);
  FUIParticleProperty::~FUIParticleProperty(&this->RadialAcceleration);
  FUIParticleProperty::~FUIParticleProperty(&this->AirResistance);
  FUIParticleProperty::~FUIParticleProperty(&this->StartSpeed);
  FUIParticleProperty::~FUIParticleProperty(&this->Gravity);
  FUIParticleProperty::~FUIParticleProperty(&this->Color);
  FUIParticleProperty::~FUIParticleProperty(&this->RotationSpeed);
  FUIParticleProperty::~FUIParticleProperty(&this->RotationStart);
  FUIParticleProperty::~FUIParticleProperty(&this->Pivot);
  FUIParticleProperty::~FUIParticleProperty(&this->Size);
  FUIParticleProperty::~FUIParticleProperty(&this->LifeSpan);
  FUIParticleProperty::~FUIParticleProperty(&(this->EmitPosition).Y);
  FUIParticleProperty::~FUIParticleProperty(&(this->EmitPosition).X);
  FUIParticleProperty::~FUIParticleProperty(&this->ParticleEmitAngle);
  FUIParticleProperty::~FUIParticleProperty(&this->SpawnParticlePerSecond);
  FUIParticleProperty::~FUIParticleProperty(&this->MaxParticleCount);
  UObject::~UObject((UObject *)this);
  return;
}

// GetLODAsset @ 14ac98490

UUIParticleEmitterAsset * __thiscall
UUIParticleEmitterAsset::GetLODAsset(UUIParticleEmitterAsset *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UUIParticleEmitterAsset *pUVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = (this->LevelOfDetail).ArrayNum;
  uVar7 = (ulonglong)param_1;
  if (((0 < iVar1) && (-1 < param_1)) && (param_1 < iVar1)) {
    lVar8 = uVar7 * 8;
    uVar9 = 0;
    if (*(longlong *)((this->LevelOfDetail).AllocatorInstance.Data + lVar8) == 0) {
      do {
        uVar6 = (uint)uVar7;
        uVar4 = uVar9;
        if ((int)uVar6 < (this->LevelOfDetail).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UUIParticleEmitterAsset *)(*pcVar2)();
          return pUVar5;
        }
        if (*(longlong *)((this->LevelOfDetail).AllocatorInstance.Data + lVar8) != 0) {
          if ((int)uVar6 < (this->LevelOfDetail).ArrayNum) {
            uVar9 = ~uVar6 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pUVar5 = (UUIParticleEmitterAsset *)(*pcVar2)();
            return pUVar5;
          }
          return *(UUIParticleEmitterAsset **)
                  ((this->LevelOfDetail).AllocatorInstance.Data + (uVar7 & 0xffffffff) * 8);
        }
        lVar8 = lVar8 + -8;
        uVar7 = (ulonglong)(uVar6 - 1);
      } while (-1 < (int)(uVar6 - 1));
    }
    else {
      if (param_1 < (this->LevelOfDetail).ArrayNum) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UUIParticleEmitterAsset *)(*pcVar2)();
        return pUVar5;
      }
      this = *(UUIParticleEmitterAsset **)((this->LevelOfDetail).AllocatorInstance.Data + lVar8);
    }
  }
  return this;
}

// GetPrivateStaticClass @ 14ac98b50

UClass * __cdecl UUIParticleEmitterAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleEmitterAsset",
               &Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton,
               StaticRegisterNativesUUIParticleEmitterAsset,0xd8f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIParticleEmitterAsset>,
               InternalVTableHelperCtorCaller<UUIParticleEmitterAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton;
}

// Reset @ 14ac9ef20

void __thiscall UUIParticleEmitterAsset::Reset(UUIParticleEmitterAsset *this)

{
  int *piVar1;
  TVector2<double> TVar2;
  
  this->AutoPlay = false;
  this->StartTimeOffset = 0.0;
  this->EmitterType = Gravity;
  this->EmitSeconds = 0.0;
  this->SamplingTimes = 2;
  FUIParticleProperty::Reset(&this->MaxParticleCount);
  FUIParticleProperty::Reset(&this->SpawnParticlePerSecond);
  FUIParticleProperty::Reset(&this->ParticleEmitAngle);
  (this->EmitPosRange).Min.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  (this->EmitPosRange).RandomKey_X_Y = false;
  (this->EmitPosRange).Max.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  FUIParticleProperty::Reset(&(this->EmitPosition).X);
  FUIParticleProperty::Reset(&(this->EmitPosition).Y);
  this->AutoEmitPosRange = false;
  this->AutoScale = false;
  this->ScaleByX = false;
  (this->DesignSize).field0_0x0._s_0.X = 0.0;
  (this->DesignSize).field0_0x0._s_0.Y = 0.0;
  this->PositionType = UIPARTICLE_POSITIONTYPE_FREE;
  FUIParticleProperty::Reset(&this->LifeSpan);
  FUIParticleProperty::Reset(&this->Size);
  FUIParticleProperty::Reset(&this->Pivot);
  FUIParticleProperty::Reset(&this->RotationStart);
  FUIParticleProperty::Reset(&this->RotationSpeed);
  FUIParticleProperty::Reset(&this->Color);
  this->ResourceObject = (UObject *)0x0;
  this->RotationFollowSpeed = false;
  this->UseSeparateSize = false;
  FUIParticleProperty::Reset(&this->Gravity);
  FUIParticleProperty::Reset(&this->StartSpeed);
  FUIParticleProperty::Reset(&this->AirResistance);
  FUIParticleProperty::Reset(&this->RadialAcceleration);
  FUIParticleProperty::Reset(&this->TangentialAcceleration);
  FUIParticleProperty::Reset(&this->Radius);
  FUIParticleProperty::Reset(&this->DegreePerSecond);
  FUIParticleProperty::Reset(&this->PositionX);
  FUIParticleProperty::Reset(&this->PositionY);
  piVar1 = &(this->ChildrenEmitters).ArrayMax;
  (this->ChildrenEmitters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ChildrenEmitters).AllocatorInstance,0,piVar1);
  }
  DestructItems<FScalarParamCurve,int>
            ((FScalarParamCurve *)(this->ScalarParams).AllocatorInstance.Data,
             (this->ScalarParams).ArrayNum);
  piVar1 = &(this->ScalarParams).ArrayMax;
  (this->ScalarParams).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x808,8,0,&(this->ScalarParams).AllocatorInstance,0,piVar1);
  }
  DestructItems<FScalarParamCurve,int>
            ((FScalarParamCurve *)(this->ScalarParamsWhenStart).AllocatorInstance.Data,
             (this->ScalarParamsWhenStart).ArrayNum);
  piVar1 = &(this->ScalarParamsWhenStart).ArrayMax;
  (this->ScalarParamsWhenStart).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x808,8,0,&(this->ScalarParamsWhenStart).AllocatorInstance,0,piVar1);
  }
  this->DrawEffect = None;
  this->UseScaleFollowSpeedDirection = false;
  FUIParticleProperty::Reset(&this->ScaleFollowSpeedDirection);
  this->UseScaleFollowSpeedVertical = false;
  FUIParticleProperty::Reset(&this->ScaleFollowSpeedVertical);
  FUIParticleProperty::Reset(&this->DirectionScale);
  FUIParticleProperty::Reset(&this->VerticalDirectionScale);
  FUIParticleProperty::Reset(&this->SineDirectionStart);
  FUIParticleProperty::Reset(&this->SineDirectionSpeed);
  FUIParticleProperty::Reset(&this->SineDirectionRange);
  this->EmitAngleByWidgetAngle = false;
  piVar1 = &(this->LevelOfDetail).ArrayMax;
  (this->LevelOfDetail).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LevelOfDetail).AllocatorInstance,0,piVar1);
  }
  this->TrailSampleCount = 0x10;
  return;
}

// StaticRegisterNativesUUIParticleEmitterAsset @ 14aca0420

void __cdecl UUIParticleEmitterAsset::StaticRegisterNativesUUIParticleEmitterAsset(void)

{
  return;
}

