// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FControlChannelOutBunch @ 147a24750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FControlChannelOutBunch * __thiscall
FControlChannelOutBunch::FControlChannelOutBunch
          (FControlChannelOutBunch *this,UChannel *param_1,bool param_2)

{
  FOutBunch::FOutBunch((FOutBunch *)this,param_1,param_2);
  this->field_0xfc = this->field_0xfc | 0x10;
  *(undefined ***)this = &___7FControlChannelOutBunch__6B_;
  return this;
}

// operator<< @ 147a2c1e0

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FControlChannelOutBunch::operator<<(FControlChannelOutBunch *this,UObject **param_1)

{
  UE::Logging::Private::BasicFatalLog
            (&`public:_virtual_class_FArchive&___ptr64___cdecl_FControlChannelOutBunch::operator<<(UObject*___ptr64&___ptr64)___ptr64'
              ::__l3::LOG_Static,(FLogCategoryBase *)&LogNet);
  FArchiveState::SetError((FArchiveState *)this);
  return (FArchive *)this;
}

// operator<< @ 147a2c220

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FControlChannelOutBunch::operator<<(FControlChannelOutBunch *this,FName *param_1)

{
  UE::Logging::Private::BasicFatalLog
            (&`public:_virtual_class_FArchive&___ptr64___cdecl_FControlChannelOutBunch::operator<<(FName&___ptr64)___ptr64'
              ::__l3::LOG_Static,(FLogCategoryBase *)&LogNet);
  FArchiveState::SetError((FArchiveState *)this);
  return (FArchive *)this;
}

