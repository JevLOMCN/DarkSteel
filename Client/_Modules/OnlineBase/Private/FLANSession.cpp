// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineBase
// Functions: 9

// BroadcastPacket @ 14eb1f930

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLANSession::BroadcastPacket(FLANSession *this,uchar *param_1,int param_2)

{
  bool bVar1;
  FName *pFVar2;
  ISocketSubsystem *pIVar3;
  FName local_res8 [4];
  
  if (this->LanBeacon != (FLanBeacon *)0x0) {
    bVar1 = FLanBeacon::BroadcastPacket(this->LanBeacon,param_1,param_2);
    if ((!bVar1) && (2 < (byte)LogTemp._0_1_)) {
      pFVar2 = ::FName::FName(local_res8,L"WINDOWS");
      pIVar3 = ISocketSubsystem::Get(pFVar2);
      (**(code **)(pIVar3->_padding_ + 0xb8))(pIVar3);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return bVar1;
  }
  return false;
}

// CreateClientQueryPacket @ 14eb1fad0

void __thiscall
FLANSession::CreateClientQueryPacket
          (FLANSession *this,FNboSerializeToBuffer *param_1,ulong64 param_2)

{
  uint *puVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  bool *pbVar9;
  
  piVar7 = &(param_1->Data).ArrayNum;
  puVar1 = &param_1->NumBytes;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb1fb6b;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0xc;
  }
  else {
LAB_14eb1fb6b:
    param_1->bHasOverflowed = true;
  }
  pbVar9 = &param_1->bHasOverflowed;
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb1fbe7;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x1;
  }
  else {
LAB_14eb1fbe7:
    *pbVar9 = true;
  }
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 4) goto LAB_14eb1fdb0;
    FVar2 = *(FScriptContainerElement *)((longlong)&this->LanGameUniqueId + 3);
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
    uVar8 = *puVar1 + 1;
    FVar2 = *(FScriptContainerElement *)((longlong)&this->LanGameUniqueId + 2);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 2;
    FVar2 = *(FScriptContainerElement *)((longlong)&this->LanGameUniqueId + 1);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 3;
    FVar2 = *(FScriptContainerElement *)&this->LanGameUniqueId;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    *puVar1 = *puVar1 + 4;
  }
  else {
LAB_14eb1fdb0:
    *pbVar9 = true;
  }
  pbVar9 = &param_1->bHasOverflowed;
  piVar7 = &(param_1->Data).ArrayNum;
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb1fe27;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x53;
  }
  else {
LAB_14eb1fe27:
    *pbVar9 = true;
  }
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb1fea1;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x51;
  }
  else {
LAB_14eb1fea1:
    *pbVar9 = true;
  }
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 8) goto LAB_14eb202e6;
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = SUB81(param_2 >> 0x38,0);
    uVar8 = *puVar1 + 1;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x30,0);
    uVar8 = *puVar1 + 2;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x28,0);
    uVar8 = *puVar1 + 3;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x20,0);
    uVar8 = *puVar1 + 4;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x18,0);
    uVar8 = *puVar1 + 5;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x10,0);
    uVar8 = *puVar1 + 6;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 8,0);
    uVar8 = *puVar1 + 7;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2,0);
    *puVar1 = *puVar1 + 8;
  }
  else {
LAB_14eb202e6:
    *pbVar9 = true;
  }
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 4) goto LAB_14eb204b3;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).A + 3);
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
    uVar8 = *puVar1 + 1;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).A + 2);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 2;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).A + 1);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 3;
    FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).A;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    *puVar1 = *puVar1 + 4;
  }
  else {
LAB_14eb204b3:
    param_1->bHasOverflowed = true;
  }
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 4) goto LAB_14eb20680;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).B + 3);
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
    uVar8 = *puVar1 + 1;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).B + 2);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 2;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).B + 1);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 3;
    FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).B;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    *puVar1 = *puVar1 + 4;
  }
  else {
LAB_14eb20680:
    param_1->bHasOverflowed = true;
  }
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if (uVar6 + 4 <= (uint)*piVar7) {
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).C + 3);
      uVar8 = 0;
      if ((int)uVar6 < *piVar7) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
      uVar8 = *puVar1 + 1;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).C + 2);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 2;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).C + 1);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 3;
      FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).C;
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      *puVar1 = *puVar1 + 4;
      goto LAB_14eb20849;
    }
  }
  param_1->bHasOverflowed = true;
LAB_14eb20849:
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if (uVar6 + 4 <= (uint)*piVar7) {
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).D + 3);
      uVar8 = 0;
      if ((int)uVar6 < *piVar7) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
      uVar8 = *puVar1 + 1;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).D + 2);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 2;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).D + 1);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 3;
      FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).D;
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      *puVar1 = *puVar1 + 4;
      return;
    }
  }
  param_1->bHasOverflowed = true;
  return;
}

// CreateHostResponsePacket @ 14eb20a20

void __thiscall
FLANSession::CreateHostResponsePacket
          (FLANSession *this,FNboSerializeToBuffer *param_1,ulong64 param_2)

{
  uint *puVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  bool *pbVar9;
  
  piVar7 = &(param_1->Data).ArrayNum;
  puVar1 = &param_1->NumBytes;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb20abb;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0xc;
  }
  else {
LAB_14eb20abb:
    param_1->bHasOverflowed = true;
  }
  pbVar9 = &param_1->bHasOverflowed;
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb20b37;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x1;
  }
  else {
LAB_14eb20b37:
    *pbVar9 = true;
  }
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 4) goto LAB_14eb20d00;
    FVar2 = *(FScriptContainerElement *)((longlong)&this->LanGameUniqueId + 3);
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
    uVar8 = *puVar1 + 1;
    FVar2 = *(FScriptContainerElement *)((longlong)&this->LanGameUniqueId + 2);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 2;
    FVar2 = *(FScriptContainerElement *)((longlong)&this->LanGameUniqueId + 1);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 3;
    FVar2 = *(FScriptContainerElement *)&this->LanGameUniqueId;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    *puVar1 = *puVar1 + 4;
  }
  else {
LAB_14eb20d00:
    *pbVar9 = true;
  }
  pbVar9 = &param_1->bHasOverflowed;
  piVar7 = &(param_1->Data).ArrayNum;
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb20d77;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x53;
  }
  else {
LAB_14eb20d77:
    *pbVar9 = true;
  }
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    uVar8 = *piVar7;
    if (uVar8 < uVar6 + 1) goto LAB_14eb20df1;
    *puVar1 = uVar6 + 1;
    uVar5 = 0;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x52;
  }
  else {
LAB_14eb20df1:
    *pbVar9 = true;
  }
  if (*pbVar9 == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 8) goto LAB_14eb21236;
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = SUB81(param_2 >> 0x38,0);
    uVar8 = *puVar1 + 1;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x30,0);
    uVar8 = *puVar1 + 2;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x28,0);
    uVar8 = *puVar1 + 3;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x20,0);
    uVar8 = *puVar1 + 4;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x18,0);
    uVar8 = *puVar1 + 5;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 0x10,0);
    uVar8 = *puVar1 + 6;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2 >> 8,0);
    uVar8 = *puVar1 + 7;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = SUB81(param_2,0);
    *puVar1 = *puVar1 + 8;
  }
  else {
LAB_14eb21236:
    *pbVar9 = true;
  }
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 4) goto LAB_14eb21403;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).A + 3);
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
    uVar8 = *puVar1 + 1;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).A + 2);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 2;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).A + 1);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 3;
    FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).A;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    *puVar1 = *puVar1 + 4;
  }
  else {
LAB_14eb21403:
    param_1->bHasOverflowed = true;
  }
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if ((uint)*piVar7 < uVar6 + 4) goto LAB_14eb215d0;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).B + 3);
    uVar8 = 0;
    if ((int)uVar6 < *piVar7) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
    uVar8 = *puVar1 + 1;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).B + 2);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 2;
    FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).B + 1);
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    uVar8 = *puVar1 + 3;
    FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).B;
    uVar6 = 0;
    if ((int)uVar8 < *piVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
    *puVar1 = *puVar1 + 4;
  }
  else {
LAB_14eb215d0:
    param_1->bHasOverflowed = true;
  }
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if (uVar6 + 4 <= (uint)*piVar7) {
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).C + 3);
      uVar8 = 0;
      if ((int)uVar6 < *piVar7) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
      uVar8 = *puVar1 + 1;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).C + 2);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 2;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).C + 1);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 3;
      FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).C;
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      *puVar1 = *puVar1 + 4;
      goto LAB_14eb21799;
    }
  }
  param_1->bHasOverflowed = true;
LAB_14eb21799:
  piVar7 = &(param_1->Data).ArrayNum;
  if (param_1->bHasOverflowed == false) {
    uVar6 = *puVar1;
    if (uVar6 + 4 <= (uint)*piVar7) {
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).D + 3);
      uVar8 = 0;
      if ((int)uVar6 < *piVar7) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar6] = FVar2;
      uVar8 = *puVar1 + 1;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).D + 2);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 2;
      FVar2 = *(FScriptContainerElement *)((longlong)&(this->LanBeaconGuid).D + 1);
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      uVar8 = *puVar1 + 3;
      FVar2 = *(FScriptContainerElement *)&(this->LanBeaconGuid).D;
      uVar6 = 0;
      if ((int)uVar8 < *piVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar8] = FVar2;
      *puVar1 = *puVar1 + 4;
      return;
    }
  }
  param_1->bHasOverflowed = true;
  return;
}

// Host @ 14eb21980

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLANSession::Host(FLANSession *this,
                 TDelegate<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
                 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FGuid *pFVar5;
  FLanBeacon *this_00;
  FName *pFVar6;
  ISocketSubsystem *pIVar7;
  FName local_res8;
  FGuid local_18;
  
  if (this->LanBeacon != (FLanBeacon *)0x0) {
    StopLANSession(this);
  }
  pFVar5 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar5->B;
  uVar2 = pFVar5->C;
  uVar3 = pFVar5->D;
  (this->LanBeaconGuid).A = pFVar5->A;
  (this->LanBeaconGuid).B = uVar1;
  (this->LanBeaconGuid).C = uVar2;
  (this->LanBeaconGuid).D = uVar3;
  this_00 = ::operator_new(0x38);
  if (this_00 != (FLanBeacon *)0x0) {
    (this_00->BroadcastAddr).Object = (FInternetAddr *)0x0;
    (this_00->BroadcastAddr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this_00->ListenSocket = (FSocket *)0x0;
    (this_00->ListenAddr).Object = (FInternetAddr *)0x0;
    (this_00->ListenAddr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6 = ::FName::FName(&local_res8,L"WINDOWS");
    pIVar7 = ISocketSubsystem::Get(pFVar6);
    (**(code **)(pIVar7->_padding_ + 0x90))(pIVar7,&this_00->SockAddr);
  }
  this->LanBeacon = this_00;
  bVar4 = FLanBeacon::Init(this_00,this->LanAnnouncePort);
  if (!bVar4) {
    if (2 < (byte)LogTemp._0_1_) {
      pFVar6 = ::FName::FName(&local_res8,L"WINDOWS");
      pIVar7 = ISocketSubsystem::Get(pFVar6);
      ISocketSubsystem::GetSocketError(pIVar7,SE_GET_LAST_ERROR_CODE);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  TMulticastDelegateRegistration<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
         *)&this->OnValidQueryPacketDelegates,
        (TDelegate<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy> *)
        &local_res8);
  this->LanBeaconState = Hosting;
  if (5 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  return true;
}

// IsValidLanQueryPacket @ 14eb21ed0

bool __thiscall
FLANSession::IsValidLanQueryPacket(FLANSession *this,uchar *param_1,uint param_2,ulong64 *param_3)

{
  bool bVar1;
  
  *param_3 = 0;
  if ((((param_2 == 0x20) && (*param_1 == '\f')) &&
      (((byte)this->LanPacketPlatformMask & param_1[1]) != 0)) &&
     (CONCAT31(CONCAT21(CONCAT11(param_1[2],param_1[3]),param_1[4]),param_1[5]) ==
      this->LanGameUniqueId)) {
    if ((param_1[6] == 'S') && (param_1[7] == 'Q')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    *param_3 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9])
                                                                     ,param_1[10]),param_1[0xb]),
                                                   param_1[0xc]),param_1[0xd]),param_1[0xe]),
                        param_1[0xf]);
    return bVar1;
  }
  return false;
}

// IsValidLanResponsePacket @ 14eb21fa0

bool __thiscall
FLANSession::IsValidLanResponsePacket(FLANSession *this,uchar *param_1,uint param_2,FGuid *param_3)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  bool bVar11;
  byte bVar12;
  uchar uVar13;
  uint uVar14;
  uchar *puVar15;
  uchar *puVar16;
  uchar uVar17;
  int iVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  ulong64 uVar22;
  
  bVar19 = false;
  if (param_2 < 0x21) {
    return false;
  }
  if ((int)param_2 < 1) {
    return false;
  }
  if (*param_1 != '\f') {
    return false;
  }
  bVar12 = 0xff;
  if (1 < (int)param_2) {
    bVar12 = param_1[1];
  }
  uVar22 = 0;
  uVar14 = (1 < (int)param_2) + 1;
  if (((byte)this->LanPacketPlatformMask & bVar12) == 0) {
    return false;
  }
  iVar18 = -1;
  if (((int)param_2 < 2) || (uVar21 = (1 < (int)param_2) + 5, (int)param_2 < (int)uVar21)) {
    bVar11 = true;
  }
  else {
    puVar15 = param_1 + uVar14;
    iVar18 = CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),puVar15[3]);
    bVar11 = false;
    uVar14 = uVar21;
  }
  if (iVar18 != this->LanGameUniqueId) {
    return false;
  }
  uVar17 = '\0';
  if (!bVar11) {
    uVar21 = uVar14 + 1;
    if ((int)uVar21 <= (int)param_2) {
      uVar20 = uVar14 + 2;
      uVar17 = param_1[uVar14];
      uVar14 = uVar21;
      if ((int)uVar20 <= (int)param_2) {
        uVar13 = param_1[uVar21];
        bVar11 = false;
        uVar14 = uVar20;
        goto LAB_14eb2207b;
      }
    }
  }
  uVar13 = '\0';
  bVar11 = true;
LAB_14eb2207b:
  if ((uVar17 == 'S') && (uVar13 == 'R')) {
    if ((bVar11) || ((int)param_2 < (int)(uVar14 + 8))) {
      bVar11 = true;
    }
    else {
      puVar15 = param_1 + uVar14;
      uVar22 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),
                                                                     puVar15[2]),puVar15[3]),
                                                   puVar15[4]),puVar15[5]),puVar15[6]),puVar15[7]);
      bVar11 = false;
      uVar14 = uVar14 + 8;
    }
    if (((uVar22 == this->LanNonce) && (!bVar11)) && (iVar18 = uVar14 + 4, iVar18 <= (int)param_2))
    {
      puVar15 = param_1 + uVar14;
      if ((int)(uVar14 + 8) <= (int)param_2) {
        uVar17 = param_1[(ulonglong)uVar14 + 4];
        uVar13 = param_1[(ulonglong)uVar14 + 5];
        uVar1 = param_1[(ulonglong)uVar14 + 6];
        uVar2 = param_1[(ulonglong)uVar14 + 7];
        if (((int)(uVar14 + 0xc) <= (int)param_2) &&
           (uVar3 = param_1[(longlong)iVar18 + 4], uVar4 = param_1[(longlong)iVar18 + 5],
           uVar5 = param_1[(longlong)iVar18 + 6], uVar6 = param_1[(longlong)iVar18 + 7],
           (int)(uVar14 + 0x10) <= (int)param_2)) {
          bVar19 = true;
          puVar16 = param_1 + (int)(uVar14 + 0xc);
          uVar7 = *puVar16;
          uVar8 = puVar16[1];
          uVar9 = puVar16[2];
          uVar10 = puVar16[3];
          param_3->A = CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),puVar15[3]);
          param_3->B = CONCAT31(CONCAT21(CONCAT11(uVar17,uVar13),uVar1),uVar2);
          param_3->C = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
          param_3->D = CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),uVar10);
        }
      }
    }
  }
  return bVar19;
}

// Search @ 14eb22310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLANSession::Search(FLANSession *this,FNboSerializeToBuffer *param_1,
                   TDelegate<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy> *param_2,
                   TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FGuid *pFVar12;
  FLanBeacon *pFVar13;
  FName *pFVar14;
  ISocketSubsystem *pIVar15;
  FLanBeacon *this_00;
  FName local_res8;
  FName local_68;
  undefined1 local_60 [16];
  FName local_50;
  FGuid local_48;
  
  bVar6 = true;
  if (this->LanBeacon != (FLanBeacon *)0x0) {
    StopLANSession(this);
  }
  pFVar12 = FGuid::NewGuid(&local_48);
  uVar4 = pFVar12->B;
  uVar7 = pFVar12->C;
  uVar8 = pFVar12->D;
  (this->LanBeaconGuid).A = pFVar12->A;
  (this->LanBeaconGuid).B = uVar4;
  (this->LanBeaconGuid).C = uVar7;
  (this->LanBeaconGuid).D = uVar8;
  bVar9 = 1 < (this->CachedResponseGuids).HashSize;
  if (!bVar9) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements
              (&this->CachedResponseGuids);
  }
  this_00 = (FLanBeacon *)0x0;
  puVar1 = &(this->CachedResponseGuids).Elements.field_0xc;
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->CachedResponseGuids,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x34 = 0;
  iVar11 = *(int *)&(this->CachedResponseGuids).Elements.field_0x2c;
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CachedResponseGuids).Elements.field_0x10,0);
  }
  if (bVar9) {
    (this->CachedResponseGuids).HashSize = 1;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash(&this->CachedResponseGuids);
  }
  pFVar13 = ::operator_new(0x38);
  if (pFVar13 != (FLanBeacon *)0x0) {
    (pFVar13->BroadcastAddr).Object = (FInternetAddr *)0x0;
    (pFVar13->BroadcastAddr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar13->ListenSocket = (FSocket *)0x0;
    (pFVar13->ListenAddr).Object = (FInternetAddr *)0x0;
    (pFVar13->ListenAddr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar14 = ::FName::FName(&local_res8,L"WINDOWS");
    pIVar15 = ISocketSubsystem::Get(pFVar14);
    (**(code **)(pIVar15->_padding_ + 0x90))(pIVar15,&pFVar13->SockAddr);
    this_00 = pFVar13;
  }
  this->LanBeacon = this_00;
  bVar9 = FLanBeacon::Init(this_00,this->LanAnnouncePort);
  if (!bVar9) {
    if (2 < (byte)LogTemp._0_1_) {
      pFVar14 = ::FName::FName(&local_68,L"WINDOWS");
      pIVar15 = ISocketSubsystem::Get(pFVar14);
      ISocketSubsystem::GetSocketError(pIVar15,SE_GET_LAST_ERROR_CODE);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    bVar6 = false;
  }
  if ((this->LanBeacon != (FLanBeacon *)0x0) && (bVar6)) {
    bVar9 = FLanBeacon::BroadcastPacket
                      (this->LanBeacon,(uchar *)(param_1->Data).AllocatorInstance.Data,
                       param_1->NumBytes);
    if (!bVar9) {
      if (2 < (byte)LogTemp._0_1_) {
        pFVar14 = ::FName::FName(&local_50,L"WINDOWS");
        pIVar15 = ISocketSubsystem::Get(pFVar14);
        ISocketSubsystem::GetSocketError(pIVar15,SE_GET_LAST_ERROR_CODE);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      return false;
    }
    if (5 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    piVar2 = &(this->RetryData).ArrayMax;
    this->LanQueryTimeLeft = this->LanQueryTimeout;
    piVar3 = &(this->RetryData).ArrayNum;
    this->LanBeaconState = Searching;
    *piVar3 = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->RetryData).AllocatorInstance,0,piVar2);
    }
    uVar4 = param_1->NumBytes;
    _Src = (param_1->Data).AllocatorInstance.Data;
    if (((_Src == (FScriptContainerElement *)0x0) && (uVar4 != 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar4,&(this->RetryData).AllocatorInstance,piVar3,piVar2);
    if (uVar4 != 0) {
      memcpy((this->RetryData).AllocatorInstance.Data + iVar11,_Src,(longlong)(int)uVar4);
    }
    this->LanQueryRetryTimeLeft = this->LanQueryRetryTime;
    TMulticastDelegateRegistration<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>::
    Add((TMulticastDelegateRegistration<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>
         *)&this->OnValidResponsePacketDelegates,
        (TDelegate<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy> *)local_60);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnSearchTimeoutDelegates,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(local_60 + 8));
  }
  return bVar6;
}

// StopLANSession @ 14eb22660

void __thiscall FLANSession::StopLANSession(FLANSession *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FLanBeacon *pFVar4;
  bool bVar5;
  FName *pFVar6;
  ISocketSubsystem *pIVar7;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  FName local_res8;
  
  pFVar4 = this->LanBeacon;
  this->LanBeaconState = NotUsingLanBeacon;
  if (pFVar4 != (FLanBeacon *)0x0) {
    pFVar6 = ::FName::FName(&local_res8,L"WINDOWS");
    pIVar7 = ISocketSubsystem::Get(pFVar6);
    (**(code **)(pIVar7->_padding_ + 0x38))(pIVar7,pFVar4->ListenSocket);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->SockAddr).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->ListenAddr).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->BroadcastAddr).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar4,0x38);
    this->LanBeacon = (FLanBeacon *)0x0;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnValidQueryPacketDelegates);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnValidResponsePacketDelegates);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnSearchTimeoutDelegates);
  piVar1 = &(this->RetryData).ArrayMax;
  (this->RetryData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->RetryData).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->CachedResponseGuids;
  bVar5 = 1 < (this->CachedResponseGuids).HashSize;
  if (!bVar5) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar2 = &(this->CachedResponseGuids).Elements.field_0xc;
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->CachedResponseGuids).Elements.field_0x2c;
  *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CachedResponseGuids).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CachedResponseGuids).Elements.field_0x10,0);
  }
  if (bVar5) {
    (this->CachedResponseGuids).HashSize = 1;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// Tick @ 14eb227c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLANSession::Tick(FLANSession *this,float param_1)

{
  undefined1 *puVar1;
  Type TVar2;
  FLanBeacon *pFVar3;
  FSocket *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  FName *pFVar13;
  ISocketSubsystem *this_00;
  int iVar14;
  uint uVar15;
  ulong64 uVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  FInternetAddr *pFVar23;
  float fVar24;
  undefined1 auStack_528 [32];
  FInternetAddr *local_508;
  ulonglong local_500;
  char local_4f8;
  uint local_4f4;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  ulonglong local_4d8;
  ulonglong uStack_4d0;
  undefined1 local_4c8 [16];
  FMRSWRecursiveAccessDetector *local_4b8;
  char local_4b0;
  FDestructionSentinel local_4a8;
  FDestructionSentinel local_490;
  FName local_478;
  void *local_470 [3];
  char local_458 [32];
  undefined1 local_438 [992];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_528;
  if (this->LanBeaconState == NotUsingLanBeacon) {
    return;
  }
LAB_14eb22812:
  do {
LAB_14eb22820:
    pFVar3 = this->LanBeacon;
    local_4f4 = 0;
    pFVar4 = pFVar3->ListenSocket;
    if (pFVar4 != (FSocket *)0x0) {
      local_500 = local_500 & 0xffffffff00000000;
      local_508 = (pFVar3->SockAddr).Object;
      (**(code **)(pFVar4->_padding_ + 0x68))(pFVar4,local_458,0x400);
      if ((0 < (int)local_4f4) && (5 < (byte)LogTemp._0_1_)) {
        pFVar23 = (pFVar3->SockAddr).Object;
        (**(code **)((longlong)*pFVar23 + 0x80))(pFVar23,local_470,1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_470[0] != (void *)0x0) {
          FMemory::Free(local_470[0]);
        }
      }
    }
    uVar17 = local_4f4;
    TVar2 = this->LanBeaconState;
    if ((int)local_4f4 < 1) {
      if (TVar2 != Searching) {
        return;
      }
      fVar24 = this->LanQueryRetryTimeLeft - param_1;
      this->LanQueryRetryTimeLeft = fVar24;
      if (((this->LanBeacon != (FLanBeacon *)0x0) && (fVar24 <= 0.0)) &&
         (this->LanQueryRetryTime < this->LanQueryTimeLeft)) {
        bVar12 = FLanBeacon::BroadcastPacket
                           (this->LanBeacon,(uchar *)(this->RetryData).AllocatorInstance.Data,
                            (this->RetryData).ArrayNum);
        if (bVar12) {
          if (5 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
        }
        else if (2 < (byte)LogTemp._0_1_) {
          pFVar13 = ::FName::FName(&local_478,L"WINDOWS");
          this_00 = ISocketSubsystem::Get(pFVar13);
          ISocketSubsystem::GetSocketError(this_00,SE_GET_LAST_ERROR_CODE);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        this->LanQueryRetryTimeLeft = this->LanQueryRetryTime;
      }
      fVar24 = this->LanQueryTimeLeft - param_1;
      this->LanQueryTimeLeft = fVar24;
      if (0.0 < fVar24) {
        return;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnSearchTimeoutDelegates,(FWriteAccessScope *)&local_490);
      puVar1 = &(this->OnSearchTimeoutDelegates).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar12 = false;
      uVar17 = *(int *)&(this->OnSearchTimeoutDelegates).field_0x10 - 1;
      if (-1 < (int)uVar17) {
        pFVar23 = (FInternetAddr *)(longlong)(int)uVar17;
        lVar18 = (longlong)pFVar23 << 4;
        bVar12 = false;
        do {
          iVar14 = *(int *)&(this->OnSearchTimeoutDelegates).field_0x10;
          uVar21 = 0;
          if ((int)uVar17 < iVar14) {
            uVar21 = ~uVar17 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_508 = pFVar23, local_500 = (longlong)iVar14,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(this->OnSearchTimeoutDelegates).field_0x8;
          if (((*(int *)(lVar18 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar18 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar6 + 0x68))(), cVar9 == '\0')) {
            bVar12 = true;
          }
          pFVar23 = (FInternetAddr *)&pFVar23[-1].field_0x7;
          lVar18 = lVar18 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      puVar1 = &(this->OnSearchTimeoutDelegates).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar12) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnSearchTimeoutDelegates,false);
      }
      if (local_490.bDestroyed != false) {
        return;
      }
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_490.Accessor,&local_490);
      return;
    }
    if (TVar2 != Hosting) {
      if (TVar2 != Searching) goto LAB_14eb22820;
      local_4d8 = 0;
      uStack_4d0 = 0;
      if ((local_4f4 < 0x21) || (uVar20 = 1, local_458[0] != '\f')) goto LAB_14eb22820;
      bVar10 = 0xff;
      if ((int)local_4f4 >= 2) {
        uVar20 = 2;
        bVar10 = local_458[1];
      }
      if (((byte)this->LanPacketPlatformMask & bVar10) == 0) goto LAB_14eb22820;
      iVar14 = -1;
      if (((int)local_4f4 < 2) || (uVar21 = (int)uVar20 + 4, (int)local_4f4 < (int)uVar21)) {
        bVar12 = true;
      }
      else {
        iVar14 = CONCAT31(CONCAT21(CONCAT11(local_458[uVar20],local_458[uVar20 + 1]),
                                   local_458[uVar20 + 2]),local_458[uVar20 + 3]);
        bVar12 = false;
        uVar20 = (ulonglong)uVar21;
      }
      if (iVar14 != this->LanGameUniqueId) goto LAB_14eb22820;
      cVar9 = '\0';
      if (bVar12) {
LAB_14eb22b42:
        cVar11 = '\0';
        bVar12 = true;
      }
      else {
        uVar21 = (int)uVar20 + 1;
        if ((int)local_4f4 < (int)uVar21) goto LAB_14eb22b42;
        uVar15 = (int)uVar20 + 2;
        cVar9 = local_458[uVar20];
        uVar20 = (ulonglong)uVar21;
        if ((int)local_4f4 < (int)uVar15) goto LAB_14eb22b42;
        cVar11 = local_458[uVar21];
        uVar20 = (ulonglong)uVar15;
        bVar12 = false;
      }
      if ((cVar9 != 'S') || (cVar11 != 'R')) goto LAB_14eb22820;
      if ((bVar12) || (uVar21 = (int)uVar20 + 8, (int)local_4f4 < (int)uVar21)) {
        bVar12 = true;
        uVar16 = 0;
      }
      else {
        bVar12 = false;
        uVar16 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(local_458[uVar20],
                                                                                local_458[uVar20 + 1
                                                                                         ]),
                                                                       local_458[uVar20 + 2]),
                                                              local_458[uVar20 + 3]),
                                                     local_458[uVar20 + 4]),local_458[uVar20 + 5]),
                                   local_458[uVar20 + 6]),local_458[uVar20 + 7]);
        uVar20 = (ulonglong)uVar21;
      }
      if (uVar16 != this->LanNonce) goto LAB_14eb22820;
      local_4e8 = 0;
      uStack_4e0 = 0;
      if (bVar12) goto LAB_14eb22820;
      iVar14 = (int)uVar20;
      iVar22 = iVar14 + 4;
      if ((int)local_4f4 < iVar22) goto LAB_14eb22820;
      uVar21 = CONCAT31(CONCAT21(CONCAT11(local_458[uVar20],local_458[uVar20 + 1]),
                                 local_458[uVar20 + 2]),local_458[uVar20 + 3]);
      local_4e8 = (ulonglong)uVar21;
      if ((int)local_4f4 < iVar14 + 8) goto LAB_14eb22820;
      iVar19 = iVar14 + 0xc;
      local_4e8 = CONCAT44(CONCAT31(CONCAT21(CONCAT11(local_458[uVar20 + 4],local_458[uVar20 + 5]),
                                             local_458[uVar20 + 6]),local_458[uVar20 + 7]),uVar21);
      if ((int)local_4f4 < iVar19) goto LAB_14eb22820;
      uVar21 = CONCAT31(CONCAT21(CONCAT11(local_458[(longlong)iVar22 + 4],
                                          local_458[(longlong)iVar22 + 5]),
                                 local_458[(longlong)iVar22 + 6]),local_458[(longlong)iVar22 + 7]);
      uStack_4e0 = (ulonglong)uVar21;
      if ((int)local_4f4 < iVar14 + 0x10) goto LAB_14eb22820;
      local_4f8 = '\0';
      uStack_4e0 = CONCAT44(CONCAT31(CONCAT21(CONCAT11(local_458[iVar19],
                                                       local_458[(longlong)iVar19 + 1]),
                                              local_458[(longlong)iVar19 + 2]),
                                     local_458[(longlong)iVar19 + 3]),uVar21);
      local_4d8 = local_4e8;
      uStack_4d0 = uStack_4e0;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&this->CachedResponseGuids,(FGuid *)local_4c8,(bool *)&local_4d8);
      if (local_4f8 != '\0') goto LAB_14eb22820;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnValidResponsePacketDelegates,(FWriteAccessScope *)&local_4a8);
      puVar1 = &(this->OnValidResponsePacketDelegates).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar12 = false;
      uVar21 = *(int *)&(this->OnValidResponsePacketDelegates).field_0x10 - 1;
      if (-1 < (int)uVar21) {
        pFVar23 = (FInternetAddr *)(longlong)(int)uVar21;
        lVar18 = (longlong)pFVar23 << 4;
        do {
          iVar14 = *(int *)&(this->OnValidResponsePacketDelegates).field_0x10;
          uVar15 = 0;
          if ((int)uVar21 < iVar14) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_508 = pFVar23, local_500 = (longlong)iVar14,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(this->OnValidResponsePacketDelegates).field_0x8;
          if (((*(int *)(lVar18 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar18 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar6 + 0x68))(plVar6,local_438,uVar17 - 0x20), cVar9 == '\0'))
          {
            bVar12 = true;
          }
          pFVar23 = (FInternetAddr *)&pFVar23[-1].field_0x7;
          lVar18 = lVar18 + -0x10;
          uVar21 = uVar21 - 1;
        } while (-1 < (int)uVar21);
      }
      puVar1 = &(this->OnValidResponsePacketDelegates).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar12) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnValidResponsePacketDelegates,false);
      }
      if (local_4a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
      }
      goto LAB_14eb22812;
    }
    if (((local_4f4 != 0x20) || (local_458[0] != '\f')) ||
       (((byte)((byte)this->LanPacketPlatformMask & local_458[1]) == 0 ||
        (CONCAT31(CONCAT21(CONCAT11(local_458[2],local_458[3]),local_458[4]),local_458[5]) !=
         this->LanGameUniqueId)))) goto LAB_14eb22820;
    if ((local_458[6] == 'S') && (local_458[7] == 'Q')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (!bVar12) goto LAB_14eb22820;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnValidQueryPacketDelegates,(FWriteAccessScope *)(local_4c8 + 8));
    puVar1 = &(this->OnValidQueryPacketDelegates).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar12 = false;
    uVar17 = *(int *)&(this->OnValidQueryPacketDelegates).field_0x10 - 1;
    if (-1 < (int)uVar17) {
      pFVar23 = (FInternetAddr *)(longlong)(int)uVar17;
      lVar18 = (longlong)pFVar23 << 4;
      do {
        iVar14 = *(int *)&(this->OnValidQueryPacketDelegates).field_0x10;
        uVar21 = 0;
        if ((int)uVar17 < iVar14) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (local_508 = pFVar23, local_500 = (longlong)iVar14,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(this->OnValidQueryPacketDelegates).field_0x8;
        if (((*(int *)(lVar18 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar18 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar6 + 0x68))(plVar6,local_438,0), cVar9 == '\0')) {
          bVar12 = true;
        }
        pFVar23 = (FInternetAddr *)&pFVar23[-1].field_0x7;
        lVar18 = lVar18 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    puVar1 = &(this->OnValidQueryPacketDelegates).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar12) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnValidQueryPacketDelegates,false);
    }
    if (local_4b0 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_4b8,(FDestructionSentinel *)(local_4c8 + 8));
    }
  } while( true );
}

