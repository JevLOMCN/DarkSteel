// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147b98a30

UScriptStruct * __cdecl FRootMotionSourceStatus::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSourceStatus.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSourceStatus.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceStatus,(UObject *)pUVar1,
                         L"RootMotionSourceStatus");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSourceStatus.OuterSingleton;
}

// FRootMotionSourceStatus @ 147bb97f0

FRootMotionSourceStatus * __thiscall
FRootMotionSourceStatus::FRootMotionSourceStatus(FRootMotionSourceStatus *this)

{
  this->Flags = '\0';
  return this;
}

// Clear @ 147bcc250

void __thiscall FRootMotionSourceStatus::Clear(FRootMotionSourceStatus *this)

{
  this->Flags = '\0';
  return;
}

// HasFlag @ 147bee360

bool __thiscall
FRootMotionSourceStatus::HasFlag(FRootMotionSourceStatus *this,ERootMotionSourceStatusFlags param_1)

{
  return (this->Flags & param_1) != 0;
}

// SetFlag @ 147c01130

void __thiscall
FRootMotionSourceStatus::SetFlag(FRootMotionSourceStatus *this,ERootMotionSourceStatusFlags param_1)

{
  this->Flags = this->Flags | param_1;
  return;
}

// UnSetFlag @ 147c08ce0

void __thiscall
FRootMotionSourceStatus::UnSetFlag
          (FRootMotionSourceStatus *this,ERootMotionSourceStatusFlags param_1)

{
  this->Flags = this->Flags & ~param_1;
  return;
}

