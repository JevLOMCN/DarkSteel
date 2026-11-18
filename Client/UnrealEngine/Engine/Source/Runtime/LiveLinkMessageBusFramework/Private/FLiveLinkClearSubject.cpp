// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// StaticStruct @ 14cfe7da0

UScriptStruct * __cdecl FLiveLinkClearSubject::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkClearSubject,(UObject *)pUVar1,
                         L"LiveLinkClearSubject");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton;
}

