// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 2

// RegisterStructConverter @ 14462f2c0

void __cdecl
FJsonObjectStructInterfaceRegistry::RegisterStructConverter
          (UScriptStruct *param_1,IJsonObjectStructConverter *param_2)

{
  UScriptStruct *local_res8;
  IJsonObjectStructConverter *local_res10;
  TPairInitializer<UScriptStruct_const_*_const_&,IJsonObjectStructConverter_const_*_const_&>
  local_res18;
  UScriptStruct **local_18;
  IJsonObjectStructConverter **local_10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&JsonObjectStructInterface::GStructConvertersMapCriticalSection);
  local_18 = &local_res8;
  local_10 = &local_res10;
  TSet<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,IJsonObjectStructConverter_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UScriptStruct_const_*_const_&,IJsonObjectStructConverter_const_*_const_&>_>
            ((TSet<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,IJsonObjectStructConverter_const_*,0>,FDefaultSetAllocator>
              *)&JsonObjectStructInterface::GStructConvertersMap,&local_res18,(bool *)&local_18);
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&JsonObjectStructInterface::GStructConvertersMapCriticalSection);
  return;
}

// UnregisterStructConverter @ 1446303a0

void __cdecl FJsonObjectStructInterfaceRegistry::UnregisterStructConverter(UScriptStruct *param_1)

{
  uint uVar1;
  UScriptStruct *local_res8 [4];
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&JsonObjectStructInterface::GStructConvertersMapCriticalSection);
  local_res8[0] = param_1;
  if (JsonObjectStructInterface::GStructConvertersMap._8_4_ !=
      JsonObjectStructInterface::GStructConvertersMap._52_4_) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,IJsonObjectStructConverter_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<UScriptStruct_const_*>
              ((TSet<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,IJsonObjectStructConverter_const_*,0>,FDefaultSetAllocator>
                *)&JsonObjectStructInterface::GStructConvertersMap,uVar1 >> 0x10 ^ uVar1,local_res8)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00014463040e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&JsonObjectStructInterface::GStructConvertersMapCriticalSection);
  return;
}

