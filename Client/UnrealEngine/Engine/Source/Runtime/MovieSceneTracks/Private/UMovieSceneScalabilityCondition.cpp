// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146591bf0

UClass * __cdecl UMovieSceneScalabilityCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneScalabilityCondition",
               &Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneScalabilityCondition,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScalabilityCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneScalabilityCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.InnerSingleton;
}

// UMovieSceneScalabilityCondition @ 14661b980

UMovieSceneScalabilityCondition * __thiscall
UMovieSceneScalabilityCondition::UMovieSceneScalabilityCondition
          (UMovieSceneScalabilityCondition *this,FVTableHelper *param_1)

{
  UMovieSceneCondition::UMovieSceneCondition((UMovieSceneCondition *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScalabilityCondition__6B_;
  return this;
}

// UMovieSceneScalabilityCondition @ 14661b9b0

UMovieSceneScalabilityCondition * __thiscall
UMovieSceneScalabilityCondition::UMovieSceneScalabilityCondition
          (UMovieSceneScalabilityCondition *this,FObjectInitializer *param_1)

{
  UMovieSceneCondition::UMovieSceneCondition((UMovieSceneCondition *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScalabilityCondition__6B_;
  return this;
}

// ~UMovieSceneScalabilityCondition @ 146621d90

void __thiscall
UMovieSceneScalabilityCondition::~UMovieSceneScalabilityCondition
          (UMovieSceneScalabilityCondition *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneScalabilityCondition__6B_;
  UMovieSceneCondition::~UMovieSceneCondition((UMovieSceneCondition *)this);
  return;
}

// EvaluateConditionInternal @ 146668e60

bool __thiscall
UMovieSceneScalabilityCondition::EvaluateConditionInternal
          (UMovieSceneScalabilityCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  EMovieSceneScalabilityConditionOperator EVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FQualityLevels local_68;
  
  Scalability::GetQualityLevels(&local_68);
  uVar3 = 0;
  switch(this->Group) {
  case ViewDistance:
    uVar3 = local_68.ViewDistanceQuality;
    break;
  case AntiAliasing:
    uVar3 = local_68.AntiAliasingQuality;
    break;
  case Shadow:
    uVar3 = local_68.ShadowQuality;
    break;
  case GlobalIllumination:
    uVar3 = local_68.GlobalIlluminationQuality;
    break;
  case Reflection:
    uVar3 = local_68.ReflectionQuality;
    break;
  case PostProcess:
    uVar3 = local_68.PostProcessQuality;
    break;
  case Texture:
    uVar3 = local_68.TextureQuality;
    break;
  case Effects:
    uVar3 = local_68.EffectsQuality;
    break;
  case Foliage:
    uVar3 = local_68.FoliageQuality;
    break;
  case Shading:
    uVar3 = local_68.ShadingQuality;
    break;
  case Landscape:
    uVar3 = local_68.LandscapeQuality;
  }
  EVar1 = this->Operator;
  uVar2 = (uint)this->Level;
  if (EVar1 == LessThan) {
    bVar4 = (int)uVar3 < (int)uVar2;
  }
  else if (EVar1 == LessThanOrEqualTo) {
    bVar4 = (int)uVar3 <= (int)uVar2;
  }
  else if (EVar1 == EqualTo) {
    bVar4 = uVar3 == uVar2;
  }
  else if (EVar1 == GreaterThanOrEqualTo) {
    bVar4 = (int)uVar2 <= (int)uVar3;
  }
  else {
    if (EVar1 != GreaterThan) {
      if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
      }
      if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return false;
    }
    bVar4 = (int)(uint)this->Level < (int)uVar3;
  }
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar4;
}

// GetCheckFrequencyInternal @ 146689870

EMovieSceneConditionCheckFrequency __thiscall
UMovieSceneScalabilityCondition::GetCheckFrequencyInternal(UMovieSceneScalabilityCondition *this)

{
  return Once;
}

// GetPrivateStaticClass @ 146696b70

UClass * __cdecl UMovieSceneScalabilityCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneScalabilityCondition",
               &Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneScalabilityCondition,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScalabilityCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneScalabilityCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.InnerSingleton;
}

// GetScopeInternal @ 1466973d0

EMovieSceneConditionScope __thiscall
UMovieSceneScalabilityCondition::GetScopeInternal(UMovieSceneScalabilityCondition *this)

{
  return Global;
}

// StaticRegisterNativesUMovieSceneScalabilityCondition @ 1466fe860

void __cdecl
UMovieSceneScalabilityCondition::StaticRegisterNativesUMovieSceneScalabilityCondition(void)

{
  return;
}

