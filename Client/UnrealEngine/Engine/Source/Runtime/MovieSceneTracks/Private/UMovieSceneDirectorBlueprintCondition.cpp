// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146591cb0

UClass * __cdecl UMovieSceneDirectorBlueprintCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDirectorBlueprintCondition",
               &Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneDirectorBlueprintCondition,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDirectorBlueprintCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneDirectorBlueprintCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.InnerSingleton;
}

// UMovieSceneDirectorBlueprintCondition @ 14661b040

UMovieSceneDirectorBlueprintCondition * __thiscall
UMovieSceneDirectorBlueprintCondition::UMovieSceneDirectorBlueprintCondition
          (UMovieSceneDirectorBlueprintCondition *this,FVTableHelper *param_1)

{
  UMovieSceneCondition::UMovieSceneCondition((UMovieSceneCondition *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDirectorBlueprintCondition__6B_;
  (this->DirectorBlueprintConditionData).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty = 0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty.field_0x8 = 0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty.field_0x10 = 0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty.field_0x18 = 0;
  this->Scope = Global;
  this->CheckFrequency = Once;
  return this;
}

// UMovieSceneDirectorBlueprintCondition @ 14661b090

UMovieSceneDirectorBlueprintCondition * __thiscall
UMovieSceneDirectorBlueprintCondition::UMovieSceneDirectorBlueprintCondition
          (UMovieSceneDirectorBlueprintCondition *this,FObjectInitializer *param_1)

{
  UMovieSceneCondition::UMovieSceneCondition((UMovieSceneCondition *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDirectorBlueprintCondition__6B_;
  (this->DirectorBlueprintConditionData).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty = 0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty.field_0x8 = 0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty.field_0x10 = 0;
  *(undefined8 *)&(this->DirectorBlueprintConditionData).ConditionContextProperty.field_0x18 = 0;
  this->Scope = Global;
  this->CheckFrequency = Once;
  return this;
}

// ~UMovieSceneDirectorBlueprintCondition @ 146621bf0

void __thiscall
UMovieSceneDirectorBlueprintCondition::~UMovieSceneDirectorBlueprintCondition
          (UMovieSceneDirectorBlueprintCondition *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneDirectorBlueprintCondition__6B_;
  pvVar1 = *(void **)&(this->DirectorBlueprintConditionData).ConditionContextProperty.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieSceneCondition::~UMovieSceneCondition((UMovieSceneCondition *)this);
  return;
}

// EvaluateConditionInternal @ 146668d40

bool __thiscall
UMovieSceneDirectorBlueprintCondition::EvaluateConditionInternal
          (UMovieSceneDirectorBlueprintCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  bool bVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  FGuid local_18;
  
  local_28.Object = param_3->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  bVar1 = FMovieSceneDirectorBlueprintConditionInvoker::EvaluateDirectorBlueprintCondition
                    (&local_18,param_2,&local_28,&this->DirectorBlueprintConditionData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// GetCheckFrequencyInternal @ 146689850

EMovieSceneConditionCheckFrequency __thiscall
UMovieSceneDirectorBlueprintCondition::GetCheckFrequencyInternal
          (UMovieSceneDirectorBlueprintCondition *this)

{
  return this->CheckFrequency;
}

// GetPrivateStaticClass @ 146696570

UClass * __cdecl UMovieSceneDirectorBlueprintCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDirectorBlueprintCondition",
               &Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneDirectorBlueprintCondition,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDirectorBlueprintCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneDirectorBlueprintCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.InnerSingleton;
}

// GetScopeInternal @ 1466973b0

EMovieSceneConditionScope __thiscall
UMovieSceneDirectorBlueprintCondition::GetScopeInternal(UMovieSceneDirectorBlueprintCondition *this)

{
  return this->Scope;
}

// StaticRegisterNativesUMovieSceneDirectorBlueprintCondition @ 1466fe7b0

void __cdecl
UMovieSceneDirectorBlueprintCondition::StaticRegisterNativesUMovieSceneDirectorBlueprintCondition
          (void)

{
  return;
}

