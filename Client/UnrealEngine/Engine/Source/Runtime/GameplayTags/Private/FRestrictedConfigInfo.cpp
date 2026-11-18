// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 3

// StaticStruct @ 146ac01f0

UScriptStruct * __cdecl FRestrictedConfigInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedConfigInfo,(UObject *)pUVar1,
                         L"RestrictedConfigInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton;
}

// operator== @ 146ace630

bool __thiscall
FRestrictedConfigInfo::operator==(FRestrictedConfigInfo *this,FRestrictedConfigInfo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar7 = (this->RestrictedConfigName).Data.ArrayNum;
  iVar1 = (param_1->RestrictedConfigName).Data.ArrayNum;
  if (iVar7 == iVar1) {
    if (iVar7 < 2) goto LAB_146ace682;
    iVar7 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->RestrictedConfigName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->RestrictedConfigName).Data.AllocatorInstance.Data);
    bVar10 = iVar7 == 0;
  }
  else {
    bVar10 = iVar7 + iVar1 == 1;
  }
  if (!bVar10) {
    return false;
  }
LAB_146ace682:
  iVar7 = (this->Owners).ArrayNum;
  if (iVar7 != (param_1->Owners).ArrayNum) {
    return false;
  }
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (param_1->Owners).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      pFVar2 = (param_1->Owners).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Owners).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      pFVar3 = (this->Owners).AllocatorInstance.Data;
      iVar7 = *(int *)(pFVar2 + lVar9 + 8);
      iVar1 = *(int *)(pFVar3 + lVar9 + 8);
      if (iVar1 == iVar7) {
        if (1 < iVar1) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar3 + lVar9),*(wchar_t **)(pFVar2 + lVar9));
          bVar10 = iVar7 == 0;
          goto LAB_146ace75e;
        }
      }
      else {
        bVar10 = iVar1 + iVar7 == 1;
LAB_146ace75e:
        if (!bVar10) {
          return false;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->Owners).ArrayNum);
  }
  return true;
}

// operator!= @ 146ace900

bool __thiscall
FRestrictedConfigInfo::operator!=(FRestrictedConfigInfo *this,FRestrictedConfigInfo *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

