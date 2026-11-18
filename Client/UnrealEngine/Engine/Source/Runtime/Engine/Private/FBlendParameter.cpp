// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1475162f0

UScriptStruct * __cdecl FBlendParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendParameter.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlendParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendParameter,(UObject *)pUVar1,
                         L"BlendParameter");
  }
  return Z_Registration_Info_UScriptStruct_FBlendParameter.OuterSingleton;
}

// FBlendParameter @ 147531110

FBlendParameter * __thiscall FBlendParameter::FBlendParameter(FBlendParameter *this)

{
  ::FString::FString(&this->DisplayName,L"None");
  this->Min = 0.0;
  this->Max = 100.0;
  this->GridNum = 4;
  this->bSnapToGrid = false;
  this->bWrapInput = false;
  return this;
}

// ~FBlendParameter @ 147533220

void __thiscall FBlendParameter::~FBlendParameter(FBlendParameter *this)

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

