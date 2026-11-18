// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 6

// StaticStruct @ 1441c6fa0

UScriptStruct * __cdecl FStateStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateStruct,(UObject *)pUVar1,L"StateStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton;
}

// InitConfigDefaultsInternal @ 1441c6fe0

EInitStateDefaultsResult __thiscall FStateStruct::InitConfigDefaultsInternal(FStateStruct *this)

{
  return NotInitialized;
}

// ApplyImpliedValuesInternal @ 1441c6ff0

void __thiscall FStateStruct::ApplyImpliedValuesInternal(FStateStruct *this)

{
  return;
}

// ValidateConfigInternal @ 1441c7000

void __thiscall FStateStruct::ValidateConfigInternal(FStateStruct *this)

{
  return;
}

// ~FStateStruct @ 1441d43f0

void __thiscall FStateStruct::~FStateStruct(FStateStruct *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FStateStruct__6B_;
  pFVar1 = (this->StateName).Data.AllocatorInstance.Data;
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

// GetStateName @ 1441dd0c0

FString * __thiscall FStateStruct::GetStateName(FStateStruct *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->StateName);
  return __return_storage_ptr__;
}

