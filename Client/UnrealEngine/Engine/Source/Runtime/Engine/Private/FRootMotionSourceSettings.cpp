// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147b98af0

UScriptStruct * __cdecl FRootMotionSourceSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSourceSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSourceSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceSettings,(UObject *)pUVar1,
                         L"RootMotionSourceSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSourceSettings.OuterSingleton;
}

// FRootMotionSourceSettings @ 147bb97e0

FRootMotionSourceSettings * __thiscall
FRootMotionSourceSettings::FRootMotionSourceSettings(FRootMotionSourceSettings *this)

{
  this->Flags = '\0';
  return this;
}

// operator+= @ 147bc4800

FRootMotionSourceSettings * __thiscall
FRootMotionSourceSettings::operator+=
          (FRootMotionSourceSettings *this,FRootMotionSourceSettings *param_1)

{
  this->Flags = this->Flags | param_1->Flags;
  return this;
}

// Clear @ 147bcc240

void __thiscall FRootMotionSourceSettings::Clear(FRootMotionSourceSettings *this)

{
  this->Flags = '\0';
  return;
}

// HasFlag @ 147bee350

bool __thiscall
FRootMotionSourceSettings::HasFlag
          (FRootMotionSourceSettings *this,ERootMotionSourceSettingsFlags param_1)

{
  return (this->Flags & param_1) != 0;
}

// SetFlag @ 147c01120

void __thiscall
FRootMotionSourceSettings::SetFlag
          (FRootMotionSourceSettings *this,ERootMotionSourceSettingsFlags param_1)

{
  this->Flags = this->Flags | param_1;
  return;
}

// UnSetFlag @ 147c08cd0

void __thiscall
FRootMotionSourceSettings::UnSetFlag
          (FRootMotionSourceSettings *this,ERootMotionSourceSettingsFlags param_1)

{
  this->Flags = this->Flags & ~param_1;
  return;
}

