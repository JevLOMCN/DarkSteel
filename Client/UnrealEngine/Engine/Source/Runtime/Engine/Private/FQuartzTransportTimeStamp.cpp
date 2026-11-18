// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147335e30

UScriptStruct * __cdecl FQuartzTransportTimeStamp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FQuartzTransportTimeStamp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FQuartzTransportTimeStamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp,(UObject *)pUVar1,
                         L"QuartzTransportTimeStamp");
  }
  return Z_Registration_Info_UScriptStruct_FQuartzTransportTimeStamp.OuterSingleton;
}

// IsZero @ 147351a70

bool __thiscall FQuartzTransportTimeStamp::IsZero(FQuartzTransportTimeStamp *this)

{
  if (((this->Bars == 0) && (this->Beat == 0)) &&
     ((float)((uint)this->BeatFraction & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
     ) {
    return true;
  }
  return false;
}

// Reset @ 147356010

void __thiscall FQuartzTransportTimeStamp::Reset(FQuartzTransportTimeStamp *this)

{
  this->Bars = 0;
  this->Beat = 0;
  this->BeatFraction = 0.0;
  return;
}

