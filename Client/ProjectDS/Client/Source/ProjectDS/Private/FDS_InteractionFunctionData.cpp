// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Init @ 14ba52420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_InteractionFunctionData::Init(FDS_InteractionFunctionData *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_InteractionTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  void *pvVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStackY_2b8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  lVar8 = (longlong)param_2;
  pFVar4 = FDS_InteractionTableRow::Get((longlong)param_1,true);
  if (pFVar4 == (FDS_InteractionTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"FDS_InteractionFunctionData::Init",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_278.Ptr,0x195,
               L"Not Exist InteractionTableRow. InteractionID : %d");
    pvVar6 = (void *)local_278._padding_;
  }
  else {
    if ((-1 < param_2) && (param_2 < (pFVar4->FunctionType).ArrayNum)) {
      uVar7 = (uint)~param_2 >> 0x1f;
      uVar3 = 0;
      if (param_2 < (pFVar4->FunctionType).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->InteractionFunctionType =
           (EDS_InteractionFunctionType)(pFVar4->FunctionType).AllocatorInstance.Data[lVar8];
      uVar3 = 0;
      if (param_2 < (pFVar4->FunctionValue1).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->FunctionValue1 = *(int *)((pFVar4->FunctionValue1).AllocatorInstance.Data + lVar8 * 4);
      uVar3 = 0;
      if (param_2 < (pFVar4->FunctionValue2).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->FunctionValue2 = *(int *)((pFVar4->FunctionValue2).AllocatorInstance.Data + lVar8 * 4);
      uVar3 = 0;
      if (param_2 < (pFVar4->ID_DialogueName).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->NameID = *(long64 *)((pFVar4->ID_DialogueName).AllocatorInstance.Data + lVar8 * 8);
      uVar3 = 0;
      if (param_2 < (pFVar4->ID_DialogueIcon).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->IconID = *(int *)((pFVar4->ID_DialogueIcon).AllocatorInstance.Data + lVar8 * 4);
      uVar3 = 0;
      if (param_2 < (pFVar4->ID_DialogueNpcCamera).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->CameraID = *(int *)((pFVar4->ID_DialogueNpcCamera).AllocatorInstance.Data + lVar8 * 4);
      uVar3 = 0;
      if (param_2 < (pFVar4->ID_DialogueNpcFrame).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->NpcFrameID =
           (longlong)*(int *)((pFVar4->ID_DialogueNpcFrame).AllocatorInstance.Data + lVar8 * 4);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_InteractionFunctionData::Init",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_158.Ptr,0x19b,
               L"Invalid Dialog Index. InteractionID : %d, DialogIndex : %d");
    pvVar6 = (void *)local_158._padding_;
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return;
}

