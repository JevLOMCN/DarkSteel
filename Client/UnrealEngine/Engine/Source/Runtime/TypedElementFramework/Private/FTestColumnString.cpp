// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// StaticStruct @ 142c87500

UScriptStruct * __cdecl FTestColumnString::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnString.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTestColumnString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnString,(UObject *)pUVar1,
                         L"TestColumnString");
  }
  return Z_Registration_Info_UScriptStruct_FTestColumnString.OuterSingleton;
}

// FTestColumnString @ 142ce30c0

FTestColumnString * __thiscall FTestColumnString::FTestColumnString(FTestColumnString *this)

{
  (this->TestString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestString).Data.ArrayNum = 0;
  (this->TestString).Data.ArrayMax = 0;
  return this;
}

// ~FTestColumnString @ 142ce5760

void __thiscall FTestColumnString::~FTestColumnString(FTestColumnString *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->TestString).Data.AllocatorInstance.Data;
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

