// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// StaticStruct @ 146f84080

UScriptStruct * __cdecl FActorPerceptionUpdateInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorPerceptionUpdateInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FActorPerceptionUpdateInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo,(UObject *)pUVar1,
                         L"ActorPerceptionUpdateInfo");
  }
  return Z_Registration_Info_UScriptStruct_FActorPerceptionUpdateInfo.OuterSingleton;
}

// FActorPerceptionUpdateInfo @ 146f90f60

FActorPerceptionUpdateInfo * __thiscall
FActorPerceptionUpdateInfo::FActorPerceptionUpdateInfo
          (FActorPerceptionUpdateInfo *this,int param_1,
          TWeakObjectPtr<AActor,FWeakObjectPtr> *param_2,FAIStimulus *param_3)

{
  double dVar1;
  uint uVar2;
  
  this->TargetId = param_1;
  (this->Target).WeakPtr = param_2->WeakPtr;
  (this->Stimulus).Age = param_3->Age;
  (this->Stimulus).ExpirationAge = param_3->ExpirationAge;
  (this->Stimulus).Strength = param_3->Strength;
  dVar1 = (param_3->StimulusLocation).field0_0x0._s_0.Y;
  (this->Stimulus).StimulusLocation.field0_0x0._s_0.X =
       (param_3->StimulusLocation).field0_0x0._s_0.X;
  (this->Stimulus).StimulusLocation.field0_0x0._s_0.Y = dVar1;
  (this->Stimulus).StimulusLocation.field0_0x0._s_0.Z =
       (param_3->StimulusLocation).field0_0x0._s_0.Z;
  dVar1 = (param_3->ReceiverLocation).field0_0x0._s_0.Y;
  (this->Stimulus).ReceiverLocation.field0_0x0._s_0.X =
       (param_3->ReceiverLocation).field0_0x0._s_0.X;
  (this->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar1;
  (this->Stimulus).ReceiverLocation.field0_0x0._s_0.Z =
       (param_3->ReceiverLocation).field0_0x0._s_0.Z;
  (this->Stimulus).Tag = param_3->Tag;
  (this->Stimulus).Type.Index = (param_3->Type).Index;
  (this->Stimulus).Type.Name = (param_3->Type).Name;
  uVar2 = ((this->Stimulus).bWantsToNotifyOnlyOnValueChange ^
          param_3->bWantsToNotifyOnlyOnValueChange) & 1 ^ *(uint *)&(this->Stimulus).field_0x54;
  *(uint *)&(this->Stimulus).field_0x54 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_3->field_0x54) & 2 ^ uVar2;
  *(uint *)&(this->Stimulus).field_0x54 = uVar2;
  *(uint *)&(this->Stimulus).field_0x54 = (uVar2 ^ *(uint *)&param_3->field_0x54) & 4 ^ uVar2;
  return this;
}

