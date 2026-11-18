// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 5

// StartupModule @ 146ab39b0

void __thiscall FCinematicCameraModule::StartupModule(FCinematicCameraModule *this)

{
  FName FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  FName local_res10 [3];
  
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar3 = ::FName::FName(local_res10,0xf,L"CurrentAperture",FNAME_Add);
  FVar1 = *pFVar3;
  pUVar4 = UCineCameraComponent::StaticClass();
  UE::MovieScene::TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (&(pFVar2->Accessors).Float,pUVar4,FVar1,GetCurrentAperture,SetCurrentAperture);
  pFVar3 = ::FName::FName(local_res10,0x12,L"CurrentFocalLength",FNAME_Add);
  FVar1 = *pFVar3;
  pUVar4 = UCineCameraComponent::StaticClass();
  UE::MovieScene::TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (&(pFVar2->Accessors).Float,pUVar4,FVar1,GetCurrentFocalLength,SetCurrentFocalLength);
  return;
}

// GetCurrentAperture @ 146ab6b50

float __cdecl FCinematicCameraModule::GetCurrentAperture(UObject *param_1)

{
  UCineCameraComponent *pUVar1;
  
  pUVar1 = CastChecked<UCineCameraComponent_const_,UObject_const_>(param_1);
  return pUVar1->CurrentAperture;
}

// GetCurrentFocalLength @ 146ab6b70

float __cdecl FCinematicCameraModule::GetCurrentFocalLength(UObject *param_1)

{
  UCineCameraComponent *pUVar1;
  
  pUVar1 = CastChecked<UCineCameraComponent_const_,UObject_const_>(param_1);
  return pUVar1->CurrentFocalLength;
}

// SetCurrentAperture @ 146ab8980

void __cdecl FCinematicCameraModule::SetCurrentAperture(UObject *param_1,float param_2)

{
  UCineCameraComponent *this;
  
  this = CastChecked<UCineCameraComponent,UObject>(param_1);
  this->CurrentAperture = param_2;
  UCineCameraComponent::RecalcDerivedData(this);
  return;
}

// SetCurrentFocalLength @ 146ab89d0

void __cdecl FCinematicCameraModule::SetCurrentFocalLength(UObject *param_1,float param_2)

{
  UCineCameraComponent *this;
  
  this = CastChecked<UCineCameraComponent,UObject>(param_1);
  this->CurrentFocalLength = param_2;
  UCineCameraComponent::RecalcDerivedData(this);
  return;
}

