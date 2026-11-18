// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// StaticStruct @ 14cfe7d20

UScriptStruct * __cdecl FLiveLinkConnectMessage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkConnectMessage,(UObject *)pUVar1,
                         L"LiveLinkConnectMessage");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.OuterSingleton;
}

