// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147365eb0

UScriptStruct * __cdecl FNavLinkAuxiliaryId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkAuxiliaryId.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavLinkAuxiliaryId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkAuxiliaryId,(UObject *)pUVar1,
                         L"NavLinkAuxiliaryId");
  }
  return Z_Registration_Info_UScriptStruct_FNavLinkAuxiliaryId.OuterSingleton;
}

// GenerateUniqueAuxiliaryId @ 147396b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNavLinkAuxiliaryId __cdecl
FNavLinkAuxiliaryId::GenerateUniqueAuxiliaryId(TStringView<wchar_t> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  FNavLinkAuxiliaryId FVar7;
  FGuid *pFVar8;
  wchar_t *pwVar9;
  undefined8 *in_RDX;
  undefined1 auStack_68 [32];
  TStringView<wchar_t> local_48;
  FGuid local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(int *)(in_RDX + 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PathName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationTypes.cpp"
                       ,0x1b7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar7.Id = (*pcVar5)();
      return (FNavLinkAuxiliaryId)FVar7.Id;
    }
  }
  local_48.DataPtr = (wchar_t *)*in_RDX;
  local_48._8_8_ = in_RDX[1];
  pFVar8 = FGuid::NewDeterministicGuid(&local_38,&local_48,0);
  uVar1 = pFVar8->A;
  uVar3 = pFVar8->B;
  uVar2 = pFVar8->C;
  uVar4 = pFVar8->D;
  local_28 = uVar1;
  local_24 = uVar3;
  local_20 = uVar2;
  local_1c = uVar4;
  pwVar9 = (wchar_t *)CityHash64((char *)&local_28,0x10);
  param_1->DataPtr = pwVar9;
  return (FNavLinkAuxiliaryId)(ulong64)param_1;
}

// GenerateUniqueAuxiliaryId @ 147396bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNavLinkAuxiliaryId __cdecl FNavLinkAuxiliaryId::GenerateUniqueAuxiliaryId(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  ulong64 *in_RCX;
  undefined1 auStack_58 [32];
  FGuid local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar5 = FGuid::NewGuid(&local_38);
  uVar1 = pFVar5->A;
  uVar3 = pFVar5->B;
  uVar2 = pFVar5->C;
  uVar4 = pFVar5->D;
  local_28 = uVar1;
  local_24 = uVar3;
  local_20 = uVar2;
  local_1c = uVar4;
  uVar6 = CityHash64((char *)&local_28,0x10);
  *in_RCX = uVar6;
  return (FNavLinkAuxiliaryId)(ulong64)in_RCX;
}

