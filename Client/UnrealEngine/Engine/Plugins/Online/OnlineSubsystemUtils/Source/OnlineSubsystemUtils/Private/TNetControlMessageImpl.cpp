// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 4

// Send @ 14ec93e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Net::TNetControlMessageImpl<25>::Send(UNetConnection *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [4];
  undefined1 local_174 [12];
  FOutBunch local_168;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_188 = 0;
    local_180 = (longlong)iVar1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(param_1->Channels).AllocatorInstance.Data != 0) {
    iVar1 = (param_1->Channels).ArrayNum;
    if (iVar1 < 1) {
      local_188 = 0;
      local_180 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(byte *)(*(longlong *)(param_1->Channels).AllocatorInstance.Data + 0x30) & 2) == 0) {
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_188 = 0;
        local_180 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FControlChannelOutBunch::FControlChannelOutBunch
                ((FControlChannelOutBunch *)&local_168,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_178[0] = 0x19;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        (**(code **)(local_168._padding_ + 0x188))(&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_188 = 0;
        local_180 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)(param_1->Channels).AllocatorInstance.Data;
      (**(code **)(*plVar2 + 0x318))(plVar2,local_174,&local_168,1);
      FOutBunch::~FOutBunch(&local_168);
    }
  }
  return;
}

// Send @ 14ec93ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::TNetControlMessageImpl<26,FString,FUniqueNetIdRepl>::Send
          (UNetConnection *param_1,FString *param_2,FUniqueNetIdRepl *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  undefined1 local_188 [4];
  undefined1 local_184 [12];
  FOutBunch local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_198 = 0;
    local_190 = (longlong)iVar1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(param_1->Channels).AllocatorInstance.Data != 0) {
    iVar1 = (param_1->Channels).ArrayNum;
    if (iVar1 < 1) {
      local_198 = 0;
      local_190 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(byte *)(*(longlong *)(param_1->Channels).AllocatorInstance.Data + 0x30) & 2) == 0) {
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_198 = 0;
        local_190 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FControlChannelOutBunch::FControlChannelOutBunch
                ((FControlChannelOutBunch *)&local_178,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_188[0] = 0x1a;
      if (*(undefined1 **)(local_178._padding_ + 8) < *(undefined1 **)local_178._padding_ + 1) {
        (**(code **)(local_178._padding_ + 0x188))(&local_178,local_188,1);
      }
      else {
        local_188[0] = **(undefined1 **)local_178._padding_;
        *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 1;
      }
      ::operator<<((FArchive *)&local_178,param_2);
      ::operator<<((FArchive *)&local_178,param_3);
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_198 = 0;
        local_190 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)(param_1->Channels).AllocatorInstance.Data;
      (**(code **)(*plVar2 + 0x318))(plVar2,local_184,&local_178,1);
      FOutBunch::~FOutBunch(&local_178);
    }
  }
  return;
}

// Send @ 14ec941f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::TNetControlMessageImpl<27,UE::Net::FNetIDVariant>::Send
          (UNetConnection *param_1,FNetIDVariant *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [4];
  undefined1 local_174 [12];
  FOutBunch local_168;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_188 = 0;
    local_180 = (longlong)iVar1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(param_1->Channels).AllocatorInstance.Data != 0) {
    iVar1 = (param_1->Channels).ArrayNum;
    if (iVar1 < 1) {
      local_188 = 0;
      local_180 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(byte *)(*(longlong *)(param_1->Channels).AllocatorInstance.Data + 0x30) & 2) == 0) {
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_188 = 0;
        local_180 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FControlChannelOutBunch::FControlChannelOutBunch
                ((FControlChannelOutBunch *)&local_168,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_178[0] = 0x1b;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        (**(code **)(local_168._padding_ + 0x188))(&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      Net::operator<<((FArchive *)&local_168,param_2);
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_188 = 0;
        local_180 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)(param_1->Channels).AllocatorInstance.Data;
      (**(code **)(*plVar2 + 0x318))(plVar2,local_174,&local_168,1);
      FOutBunch::~FOutBunch(&local_168);
    }
  }
  return;
}

// Send @ 14ec943f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::TNetControlMessageImpl<28,FString>::Send(UNetConnection *param_1,FString *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [4];
  undefined1 local_174 [12];
  FOutBunch local_168;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_188 = 0;
    local_180 = (longlong)iVar1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(param_1->Channels).AllocatorInstance.Data != 0) {
    iVar1 = (param_1->Channels).ArrayNum;
    if (iVar1 < 1) {
      local_188 = 0;
      local_180 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(byte *)(*(longlong *)(param_1->Channels).AllocatorInstance.Data + 0x30) & 2) == 0) {
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_188 = 0;
        local_180 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FControlChannelOutBunch::FControlChannelOutBunch
                ((FControlChannelOutBunch *)&local_168,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_178[0] = 0x1c;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        (**(code **)(local_168._padding_ + 0x188))(&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      ::operator<<((FArchive *)&local_168,param_2);
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_188 = 0;
        local_180 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)(param_1->Channels).AllocatorInstance.Data;
      (**(code **)(*plVar2 + 0x318))(plVar2,local_174,&local_168,1);
      FOutBunch::~FOutBunch(&local_168);
    }
  }
  return;
}

