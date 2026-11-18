// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149079720

UScriptStruct * __cdecl FNDCMapEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCMapEntry.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCMapEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntry,(UObject *)pUVar1,L"NDCMapEntry");
  }
  return Z_Registration_Info_UScriptStruct_FNDCMapEntry.OuterSingleton;
}

// Get<FNDCMapEntryBase> @ 149097ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNDCMapEntryBase * __thiscall FNDCMapEntry::Get<FNDCMapEntryBase>(FNDCMapEntry *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FNDCMapEntryBase *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FNDCMapEntryBase *)(this->EntryData).StructMemory;
  pUVar2 = (this->EntryData).ScriptStruct.field0_0x0.DebugPtr;
  if ((pFVar5 == (FNDCMapEntryBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCMapEntryBase *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNDCMapEntryBase *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar6,
                         L"NDCMapEntryBase");
    if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_1490980ae;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_1490980ae:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FNDCMapEntryBase *)(*pcVar3)();
  return pFVar5;
}

