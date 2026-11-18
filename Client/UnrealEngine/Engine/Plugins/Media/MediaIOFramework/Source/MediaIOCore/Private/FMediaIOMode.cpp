// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 5

// StaticStruct @ 14d77d600

UScriptStruct * __cdecl FMediaIOMode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOMode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UScriptStruct_FMediaIOMode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOMode,(UObject *)pUVar1,L"MediaIOMode");
  }
  return Z_Registration_Info_UScriptStruct_FMediaIOMode.OuterSingleton;
}

// FMediaIOMode @ 14d78a7b0

FMediaIOMode * __thiscall FMediaIOMode::FMediaIOMode(FMediaIOMode *this)

{
  (this->FrameRate).Numerator = 0x1e;
  (this->FrameRate).Denominator = 1;
  (this->Resolution).field0_0x0._s_0.X = 0x780;
  *(undefined8 *)((longlong)&(this->Resolution).field0_0x0 + 4) = 0x438;
  this->DeviceModeIdentifier = -1;
  return this;
}

// operator== @ 14d78dc40

bool __thiscall FMediaIOMode::operator==(FMediaIOMode *this,FMediaIOMode *param_1)

{
  return param_1->DeviceModeIdentifier == this->DeviceModeIdentifier;
}

// GetModeName @ 14d7abca0

FText * __thiscall FMediaIOMode::GetModeName(FMediaIOMode *this,FText *__return_storage_ptr__)

{
  FFrameRate local_res8 [4];
  
  if (this->DeviceModeIdentifier != -1) {
    local_res8[0] = this->FrameRate;
    if (this->Standard == Interlaced) {
      local_res8[0].Numerator = local_res8[0].Numerator / 2;
    }
    FMediaIOCommonDisplayModes::GetMediaIOCommonDisplayModeInfoName
              (__return_storage_ptr__,(this->Resolution).field0_0x0._s_0.X,
               (this->Resolution).field0_0x0._s_0.Y,local_res8,this->Standard);
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"MediaIOCoreDefinitions",L"InvalidMode",L"<Invalid>");
  return __return_storage_ptr__;
}

// IsValid @ 14d7b1a10

bool __thiscall FMediaIOMode::IsValid(FMediaIOMode *this)

{
  return this->DeviceModeIdentifier != -1;
}

