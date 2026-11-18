// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 1

// StaticStruct @ 1441bde70

UScriptStruct * __cdecl FFieldNotificationId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldNotificationId.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FieldNotification();
    Z_Registration_Info_UScriptStruct_FFieldNotificationId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldNotificationId,(UObject *)pUVar1,
                         L"FieldNotificationId");
  }
  return Z_Registration_Info_UScriptStruct_FFieldNotificationId.OuterSingleton;
}

