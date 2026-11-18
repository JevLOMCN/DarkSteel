// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147365ef0

UScriptStruct * __cdecl FNavLinkId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkId.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavLinkId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkId,(UObject *)pUVar1,L"NavLinkId");
  }
  return Z_Registration_Info_UScriptStruct_FNavLinkId.OuterSingleton;
}

// GenerateUniqueId @ 147396c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNavLinkId __cdecl FNavLinkId::GenerateUniqueId(FNavLinkAuxiliaryId param_1,FGuid *param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  undefined8 *in_R8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28 = (undefined4)*in_R8;
  local_24 = (undefined4)((ulonglong)*in_R8 >> 0x20);
  local_20 = (undefined4)in_R8[1];
  local_1c = (undefined4)((ulonglong)in_R8[1] >> 0x20);
  uVar1 = CityHash64((char *)&local_28,0x10);
  uVar2 = (uVar1 ^ (ulonglong)param_2) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ uVar2 ^ uVar1) * -0x622015f714c7d297;
  if (6 < (byte)LogNavLink._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
  }
  *(ulonglong *)param_1.Id = (uVar2 >> 0x2f ^ uVar2) * 0x1ddfea08eb382d69 | 0x8000000000000000;
  return (FNavLinkId)param_1.Id;
}

// GenerateUniqueId @ 147396d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNavLinkId __cdecl FNavLinkId::GenerateUniqueId(void)

{
  FGuid *pFVar1;
  ulong64 uVar2;
  ulonglong *in_RCX;
  undefined1 auStack_58 [32];
  FGuid local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = FGuid::NewGuid(&local_38);
  local_28 = pFVar1->A;
  local_24 = pFVar1->B;
  local_20 = pFVar1->C;
  local_1c = pFVar1->D;
  uVar2 = CityHash64((char *)&local_28,0x10);
  if (6 < (byte)LogNavLink._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
  }
  *in_RCX = uVar2 | 0x8000000000000000;
  return (FNavLinkId)(ulong64)in_RCX;
}

