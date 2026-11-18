// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 5

// StaticStruct @ 14a0266a0

UScriptStruct * __cdecl FWN_BGMSoundInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_BGMSoundInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UScriptStruct_FWN_BGMSoundInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_BGMSoundInfo,(UObject *)pUVar1,
                         L"WN_BGMSoundInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_BGMSoundInfo.OuterSingleton;
}

// FWN_BGMSoundInfo @ 14a02d8f0

FWN_BGMSoundInfo * __thiscall FWN_BGMSoundInfo::FWN_BGMSoundInfo(FWN_BGMSoundInfo *this)

{
  undefined1 *this_00;
  
  this->_padding_ = (longlong)&___7FWN_BGMSoundInfo__6B_;
  this_00 = &(this->BGM).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->BGM).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BGM).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BGM).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BGM).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->SoundFadeInTime = 0.0;
  this->SoundFadeOutTime = 0.0;
  this->SoundDelayTime = 0.0;
  return this;
}

// ~FWN_BGMSoundInfo @ 14a02eb30

void __thiscall FWN_BGMSoundInfo::~FWN_BGMSoundInfo(FWN_BGMSoundInfo *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)&(this->BGM).SoftObjectPtr.field_0x18;
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

// operator= @ 14a02f050

FWN_BGMSoundInfo * __thiscall
FWN_BGMSoundInfo::operator=(FWN_BGMSoundInfo *this,FWN_BGMSoundInfo *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)&(this->BGM).SoftObjectPtr = *(undefined8 *)&(param_1->BGM).SoftObjectPtr;
  uVar1 = *(undefined8 *)&(param_1->BGM).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->BGM).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->BGM).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->BGM).SoftObjectPtr.field_0x10 = uVar1;
  FUtf8String::operator=
            ((FUtf8String *)&(this->BGM).SoftObjectPtr.field_0x18,
             (FUtf8String *)&(param_1->BGM).SoftObjectPtr.field_0x18);
  this->SoundFadeInTime = param_1->SoundFadeInTime;
  this->SoundFadeOutTime = param_1->SoundFadeOutTime;
  this->SoundDelayTime = param_1->SoundDelayTime;
  return this;
}

// Serialize @ 14a039930

FArchive * __thiscall
FWN_BGMSoundInfo::Serialize(FWN_BGMSoundInfo *this,FArchive *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 in_register_00000084;
  
  (**(code **)(*(longlong *)param_1 + 0x148))
            (param_1,&this->BGM,CONCAT44(in_register_00000084,param_2));
  pfVar1 = &this->SoundFadeInTime;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->SoundFadeOutTime;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->SoundDelayTime;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

