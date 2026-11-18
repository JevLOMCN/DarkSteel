// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 1

// EnableDuckingOptOut @ 14ec3dda0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl FAudioDuckingWindows::EnableDuckingOptOut(IMMDevice *param_1,bool param_2)

{
  int iVar1;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_18 [2];
  
  local_res18 = (longlong *)0x0;
  iVar1 = (**(code **)((longlong)*param_1 + 0x18))
                    (param_1,&_GUID_77aa99a0_1bd6_484f_8bc7_2c654c9a9b6f,1,0,&local_res18);
  local_res20 = (longlong *)0x0;
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_res18 + 0x18))(local_res18,0,0,&local_res20);
    (**(code **)(*local_res18 + 0x10))();
    local_res18 = (longlong *)0x0;
  }
  local_18[0] = (longlong *)0x0;
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_res20)
                      (local_res20,&_GUID_bfb7ff88_7239_4fc9_8fa2_07c950be9c6d,local_18);
    (**(code **)(*local_res20 + 0x10))();
    local_res20 = (longlong *)0x0;
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_18[0] + 0x80))(local_18[0],param_2);
      if ((iVar1 < 0) && (3 < (byte)LogVoiceCapture._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_static_long___cdecl_FAudioDuckingWindows::EnableDuckingOptOut(IMMDevice*___ptr64,bool)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      }
      (**(code **)(*local_18[0] + 0x10))();
    }
  }
  return iVar1;
}

