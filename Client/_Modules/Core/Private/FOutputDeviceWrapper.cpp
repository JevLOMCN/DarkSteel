// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Serialize @ 141a91910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Name::Private::FOutputDeviceWrapper::Serialize
          (FOutputDeviceWrapper *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  bool bVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8;
  
  bVar1 = *(bool *)((longlong)&this->_padding_ + 1);
  lVar2 = this->_padding_;
  QueryPerformanceCounter(&local_res8);
  FOutputDeviceHelper::FormatCastAndSerializeLine
            (this->Ar,param_1,param_2,param_3,
             (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000,SUB81(lVar2,0),bVar1);
  return;
}

