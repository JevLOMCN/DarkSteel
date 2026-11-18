// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetDelayLengthSeconds @ 14b0738b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
Metasound::DelayNodePrivate::TDelay<Metasound::FAudioBuffer>::GetDelayLengthSeconds
          (TDataReadReference<Metasound::FAudioBuffer> *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (-1 < param_2) {
    lVar1 = *(longlong *)&param_1->field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    if (param_2 < *(int *)(lVar1 + 8)) {
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      return *(float *)(*plVar2 + (longlong)param_2 * 4);
    }
  }
  return 0.0;
}

