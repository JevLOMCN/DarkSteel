// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// StaticStruct @ 14cfe7de0

UScriptStruct * __cdecl FLiveLinkSubjectDataMessage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage,(UObject *)pUVar1,
                         L"LiveLinkSubjectDataMessage");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.OuterSingleton;
}

