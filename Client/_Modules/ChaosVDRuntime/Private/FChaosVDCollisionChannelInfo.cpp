// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c7260

UScriptStruct * __cdecl FChaosVDCollisionChannelInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionChannelInfo,(UObject *)pUVar1,
                         L"ChaosVDCollisionChannelInfo");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelInfo.OuterSingleton;
}

// ~FChaosVDCollisionChannelInfo @ 1436d5780

void __thiscall
FChaosVDCollisionChannelInfo::~FChaosVDCollisionChannelInfo(FChaosVDCollisionChannelInfo *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Serialize @ 1436db5b0

bool __thiscall
FChaosVDCollisionChannelInfo::Serialize(FChaosVDCollisionChannelInfo *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  ::operator<<(param_1,&this->DisplayName);
  piVar1 = &this->CollisionChannel;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bIsTraceType);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

