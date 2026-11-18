// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 5

// StaticStruct @ 1494814d0

UScriptStruct * __cdecl FWN_AmbientSoundInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_AmbientSoundInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UScriptStruct_FWN_AmbientSoundInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_AmbientSoundInfo,(UObject *)pUVar1,
                         L"WN_AmbientSoundInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_AmbientSoundInfo.OuterSingleton;
}

// FWN_AmbientSoundInfo @ 14948cb80

FWN_AmbientSoundInfo * __thiscall
FWN_AmbientSoundInfo::FWN_AmbientSoundInfo(FWN_AmbientSoundInfo *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  undefined1 *this_00;
  FGuid local_18;
  
  this->_padding_ = (longlong)&___7FWN_AmbientSoundInfo__6B_;
  this_00 = &(this->AmbientSound).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->AmbientSound).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AmbientSound).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AmbientSound).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AmbientSound).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->SoundFadeInTime = 0.0;
  this->SoundFadeOutTime = 0.0;
  this->SoundDelayTime = 0.0;
  this->AmbientSoundPriority = 0;
  FGuid::NewGuid(&this->Guid);
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  return this;
}

// ~FWN_AmbientSoundInfo @ 14948fef0

void __thiscall FWN_AmbientSoundInfo::~FWN_AmbientSoundInfo(FWN_AmbientSoundInfo *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)&(this->AmbientSound).SoftObjectPtr.field_0x18;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Reset @ 1494ac7f0

void __thiscall FWN_AmbientSoundInfo::Reset(FWN_AmbientSoundInfo *this)

{
  *(undefined8 *)&(this->AmbientSound).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AmbientSound).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AmbientSound).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->AmbientSound).SoftObjectPtr.field_0x18,0);
  this->SoundFadeInTime = 0.0;
  this->SoundFadeOutTime = 0.0;
  this->SoundDelayTime = 0.0;
  this->AmbientSoundPriority = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  return;
}

// Serialize @ 1494ad380

FArchive * __thiscall
FWN_AmbientSoundInfo::Serialize(FWN_AmbientSoundInfo *this,FArchive *param_1,int param_2)

{
  float *pfVar1;
  int *piVar2;
  undefined1 *puVar3;
  float *pfVar4;
  int *piVar5;
  undefined4 in_register_00000084;
  
  (**(code **)(*(longlong *)param_1 + 0x148))
            (param_1,&this->AmbientSound,CONCAT44(in_register_00000084,param_2));
  pfVar1 = &this->SoundFadeInTime;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->SoundFadeOutTime;
  puVar3 = &param_1->field_0x2a;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->SoundDelayTime;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->AmbientSoundPriority;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->Guid);
  return param_1;
}

