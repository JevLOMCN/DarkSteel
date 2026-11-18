// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// LogReference @ 142cb01a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTypedElementReference::LogReference(FTypedElementReference *this)

{
  size_t sVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStackY_1168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1138;
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142cb01b0;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1168;
  uVar3 = 1;
  if (1 < this->CallstackDepth) {
    do {
      local_1018[0] = '\0';
      FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                ((int)uVar3 + -1,this->Callstack[uVar3],local_1018,0x1000,
                 (FGenericCrashContext *)0x0);
      if (1 < (byte)LogCore._0_1_) {
        local_1138._padding_ = 0;
        sVar1 = strlen(local_1018);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1138,local_1018,(int)sVar1,Yes);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FTypedElementReference::LogReference(void)const___ptr64'::
                    __l5::LOG_Static,(FLogCategoryBase *)&LogCore);
        if ((void *)local_1138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_1138._padding_);
        }
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < this->CallstackDepth);
  }
  return;
}

