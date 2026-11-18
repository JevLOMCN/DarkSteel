// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// Send @ 147a85120

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
UE::Net::TNetControlMessageImpl<6,FString>::Send(UNetConnection *param_1,FString *param_2)

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
      FOutBunch::FOutBunch
                (&local_168,*(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_168.bReliable = '\x01';
      local_168._padding_ = (longlong)&___7FControlChannelOutBunch__6B_;
      local_178[0] = 6;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        FBitWriter::Serialize((FBitWriter *)&local_168,local_178,1);
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
      local_168._padding_ = (longlong)&___7FOutBunch__6B_;
      FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_168._padding_);
      if (local_168.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.DebugString.Data.AllocatorInstance.Data);
      }
      if (local_168.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)local_168.NetTokensPendingExport.AllocatorInstance.SecondaryData);
      }
      if (local_168.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.NetFieldExports.AllocatorInstance.Data);
      }
      if (local_168.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.ExportNetGUIDs.AllocatorInstance.Data);
      }
      FBitWriter::~FBitWriter((FBitWriter *)&local_168);
    }
  }
  return;
}

// Send @ 147a85390

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

void __cdecl UE::Net::TNetControlMessageImpl<16,int>::Send(UNetConnection *param_1,int *param_2)

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
      FOutBunch::FOutBunch
                (&local_168,*(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_168.bReliable = '\x01';
      local_168._padding_ = (longlong)&___7FControlChannelOutBunch__6B_;
      local_178[0] = 0x10;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        FBitWriter::Serialize((FBitWriter *)&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      if (*(int **)(local_168._padding_ + 8) < *(int **)local_168._padding_ + 1) {
        if ((local_168._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_168._padding_ + 0x188))(&local_168,param_2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_168,(uint *)param_2);
        }
      }
      else {
        *param_2 = **(int **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 4;
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
      local_168._padding_ = (longlong)&___7FOutBunch__6B_;
      FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_168._padding_);
      if (local_168.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.DebugString.Data.AllocatorInstance.Data);
      }
      if (local_168.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)local_168.NetTokensPendingExport.AllocatorInstance.SecondaryData);
      }
      if (local_168.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.NetFieldExports.AllocatorInstance.Data);
      }
      if (local_168.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.ExportNetGUIDs.AllocatorInstance.Data);
      }
      FBitWriter::~FBitWriter((FBitWriter *)&local_168);
    }
  }
  return;
}

// Send @ 147ed8f60

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
UE::Net::TNetControlMessageImpl<10,FString,FUniqueNetIdRepl>::Send
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
      local_188[0] = 10;
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

// Send @ 147ed9160

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
UE::Net::TNetControlMessageImpl<32,FString,FUniqueNetIdRepl>::Send
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
      local_188[0] = 0x20;
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

// Send @ 147ff0620

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
UE::Net::TNetControlMessageImpl<3,FString>::Send(UNetConnection *param_1,FString *param_2)

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
      local_178[0] = 3;
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

// Send @ 147ff0820

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

void __cdecl UE::Net::TNetControlMessageImpl<21>::Send(UNetConnection *param_1)

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
      local_178[0] = 0x15;
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

// Send @ 147ff0a00

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
UE::Net::TNetControlMessageImpl<23,FString>::Send(UNetConnection *param_1,FString *param_2)

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
      local_178[0] = 0x17;
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

// Send @ 147ff0c00

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

void __cdecl UE::Net::TNetControlMessageImpl<34,int>::Send(UNetConnection *param_1,int *param_2)

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
      local_178[0] = 0x22;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        (**(code **)(local_168._padding_ + 0x188))(&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      if (*(int **)(local_168._padding_ + 8) < *(int **)local_168._padding_ + 1) {
        if ((local_168._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_168._padding_ + 0x188))(&local_168,param_2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_168,(uint *)param_2);
        }
      }
      else {
        *param_2 = **(int **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 4;
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

// Send @ 147ff0e30

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

void __cdecl UE::Net::TNetControlMessageImpl<15,int>::Send(UNetConnection *param_1,int *param_2)

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
      local_178[0] = 0xf;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        (**(code **)(local_168._padding_ + 0x188))(&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      if (*(int **)(local_168._padding_ + 8) < *(int **)local_168._padding_ + 1) {
        if ((local_168._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_168._padding_ + 0x188))(&local_168,param_2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_168,(uint *)param_2);
        }
      }
      else {
        *param_2 = **(int **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 4;
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

// Send @ 148054fe0

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

void __cdecl UE::Net::TNetControlMessageImpl<4,int>::Send(UNetConnection *param_1,int *param_2)

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
      local_178[0] = 4;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        (**(code **)(local_168._padding_ + 0x188))(&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      if (*(int **)(local_168._padding_ + 8) < *(int **)local_168._padding_ + 1) {
        if ((local_168._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_168._padding_ + 0x188))(&local_168,param_2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_168,(uint *)param_2);
        }
      }
      else {
        *param_2 = **(int **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 4;
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

// Send @ 148055210

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
UE::Net::TNetControlMessageImpl<17,FString>::Send(UNetConnection *param_1,FString *param_2)

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
      local_178[0] = 0x11;
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

// Send @ 148055410

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
UE::Net::TNetControlMessageImpl<29,unsigned___int64>::Send(UNetConnection *param_1,ulong64 *param_2)

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
      local_178[0] = 0x1d;
      if (*(undefined1 **)(local_168._padding_ + 8) < *(undefined1 **)local_168._padding_ + 1) {
        (**(code **)(local_168._padding_ + 0x188))(&local_168,local_178,1);
      }
      else {
        local_178[0] = **(undefined1 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 1;
      }
      if (*(ulong64 **)(local_168._padding_ + 8) < *(ulong64 **)local_168._padding_ + 1) {
        if ((local_168._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_168._padding_ + 0x188))(&local_168,param_2,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_168,param_2);
        }
      }
      else {
        *param_2 = **(ulong64 **)local_168._padding_;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 8;
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

// Send @ 148055640

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
UE::Net::
TNetControlMessageImpl<30,enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::Send(UNetConnection *param_1,ENetRefHandleError *param_2,ulong64 *param_3,
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [12];
  FOutBunch local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_1a8 = 0;
    local_1a0 = (longlong)iVar1;
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
      local_1a8 = 0;
      local_1a0 = (longlong)iVar1;
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
        local_1a8 = 0;
        local_1a0 = (longlong)iVar1;
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
                ((FControlChannelOutBunch *)&local_188,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_198[0] = 0x1e;
      if (*(undefined1 **)(local_188._padding_ + 8) < *(undefined1 **)local_188._padding_ + 1) {
        (**(code **)(local_188._padding_ + 0x188))(&local_188,local_198,1);
      }
      else {
        local_198[0] = **(undefined1 **)local_188._padding_;
        *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 1;
      }
      if (*(ENetRefHandleError **)(local_188._padding_ + 8) <
          *(ENetRefHandleError **)local_188._padding_ + 1) {
        if ((local_188._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_188._padding_ + 0x188))(&local_188,param_2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_188,param_2);
        }
      }
      else {
        *param_2 = **(ENetRefHandleError **)local_188._padding_;
        *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 4;
      }
      if (*(ulong64 **)(local_188._padding_ + 8) < *(ulong64 **)local_188._padding_ + 1) {
        if ((local_188._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_188._padding_ + 0x188))(&local_188,param_3,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_188,param_3);
        }
      }
      else {
        *param_3 = **(ulong64 **)local_188._padding_;
        *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 8;
      }
      TArrayPrivateFriend::Serialize<unsigned___int64,TSizedDefaultAllocator<32>_>
                ((FArchive *)&local_188,param_4);
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_1a8 = 0;
        local_1a0 = (longlong)iVar1;
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
      (**(code **)(*plVar2 + 0x318))(plVar2,local_194,&local_188,1);
      FOutBunch::~FOutBunch(&local_188);
    }
  }
  return;
}

// Send @ 1480cd900

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
/* WARNING: Enum "ENetPingControlMessage": Some values do not have unique names */

void __cdecl
UE::Net::TNetControlMessageImpl<24,enum_ENetPingControlMessage,FString>::Send
          (UNetConnection *param_1,ENetPingControlMessage *param_2,FString *param_3)

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
      local_188[0] = 0x18;
      if (*(undefined1 **)(local_178._padding_ + 8) < *(undefined1 **)local_178._padding_ + 1) {
        (**(code **)(local_178._padding_ + 0x188))(&local_178,local_188,1);
      }
      else {
        local_188[0] = **(undefined1 **)local_178._padding_;
        *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 1;
      }
      if (*(ENetPingControlMessage **)(local_178._padding_ + 8) <
          *(ENetPingControlMessage **)local_178._padding_ + 1) {
        (**(code **)(local_178._padding_ + 0x188))(&local_178,param_2,1);
      }
      else {
        *param_2 = **(ENetPingControlMessage **)local_178._padding_;
        *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 1;
      }
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

// Send @ 148214a90

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
UE::Net::TNetControlMessageImpl<5,FString,FString,FUniqueNetIdRepl,FString>::Send
          (UNetConnection *param_1,FString *param_2,FString *param_3,FUniqueNetIdRepl *param_4,
          FString *param_5)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [12];
  FOutBunch local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_1b8 = 0;
    local_1b0 = (longlong)iVar1;
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
      local_1b8 = 0;
      local_1b0 = (longlong)iVar1;
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
        local_1b8 = 0;
        local_1b0 = (longlong)iVar1;
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
                ((FControlChannelOutBunch *)&local_198,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_1a8[0] = 5;
      if (*(undefined1 **)(local_198._padding_ + 8) < *(undefined1 **)local_198._padding_ + 1) {
        (**(code **)(local_198._padding_ + 0x188))(&local_198,local_1a8,1);
      }
      else {
        local_1a8[0] = **(undefined1 **)local_198._padding_;
        *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 1;
      }
      ::operator<<((FArchive *)&local_198,param_2);
      ::operator<<((FArchive *)&local_198,param_3);
      ::operator<<((FArchive *)&local_198,param_4);
      ::operator<<((FArchive *)&local_198,param_5);
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_1b8 = 0;
        local_1b0 = (longlong)iVar1;
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
      (**(code **)(*plVar2 + 0x318))(plVar2,local_1a4,&local_198,1);
      FOutBunch::~FOutBunch(&local_198);
    }
  }
  return;
}

// Send @ 148214cc0

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

void __cdecl UE::Net::TNetControlMessageImpl<9>::Send(UNetConnection *param_1)

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
      local_178[0] = 9;
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

// Send @ 148214ea0

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
UE::Net::
TNetControlMessageImpl<0,unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>::
Send(UNetConnection *param_1,uchar *param_2,uint *param_3,FString *param_4,
    EEngineNetworkRuntimeFeatures *param_5)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [12];
  FOutBunch local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_1b8 = 0;
    local_1b0 = (longlong)iVar1;
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
      local_1b8 = 0;
      local_1b0 = (longlong)iVar1;
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
        local_1b8 = 0;
        local_1b0 = (longlong)iVar1;
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
                ((FControlChannelOutBunch *)&local_198,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_1a8[0] = 0;
      if (*(undefined1 **)(local_198._padding_ + 8) < *(undefined1 **)local_198._padding_ + 1) {
        (**(code **)(local_198._padding_ + 0x188))(&local_198,local_1a8,1);
      }
      else {
        local_1a8[0] = **(undefined1 **)local_198._padding_;
        *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 1;
      }
      if (*(uchar **)(local_198._padding_ + 8) < *(uchar **)local_198._padding_ + 1) {
        (**(code **)(local_198._padding_ + 0x188))(&local_198,param_2,1);
      }
      else {
        *param_2 = **(uchar **)local_198._padding_;
        *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 1;
      }
      if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
        if ((local_198._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_198._padding_ + 0x188))(&local_198,param_3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,param_3);
        }
      }
      else {
        *param_3 = **(uint **)local_198._padding_;
        *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
      }
      ::operator<<((FArchive *)&local_198,param_4);
      if (*(EEngineNetworkRuntimeFeatures **)(local_198._padding_ + 8) <
          *(EEngineNetworkRuntimeFeatures **)local_198._padding_ + 1) {
        if ((local_198._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_198._padding_ + 0x188))(&local_198,param_5,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,param_5);
        }
      }
      else {
        *param_5 = **(EEngineNetworkRuntimeFeatures **)local_198._padding_;
        *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 2;
      }
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_1b8 = 0;
        local_1b0 = (longlong)iVar1;
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
      (**(code **)(*plVar2 + 0x318))(plVar2,local_1a4,&local_198,1);
      FOutBunch::~FOutBunch(&local_198);
    }
  }
  return;
}

// Send @ 148215170

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

void __cdecl UE::Net::TNetControlMessageImpl<31>::Send(UNetConnection *param_1)

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
      local_178[0] = 0x1f;
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

// Receive @ 148a04590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UE::Net::TNetControlMessageImpl<34,int>::Receive(FInBunch *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1->_padding_;
  if (piVar1 + 1 <= (int *)((undefined8 *)param_1->_padding_)[1]) {
    *param_2 = *piVar1;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    return (bool)((byte)~*(byte *)((longlong)&param_1->_padding_ + 1) >> 1 & 1);
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,param_2,4);
    return (bool)((byte)~*(byte *)((longlong)&param_1->_padding_ + 1) >> 1 & 1);
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)param_2);
  return (bool)((byte)~*(byte *)((longlong)&param_1->_padding_ + 1) >> 1 & 1);
}

// Send @ 148a10a40

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
UE::Net::TNetControlMessageImpl<1,FString,FString,FString>::Send
          (UNetConnection *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [12];
  FOutBunch local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar1 = (param_1->Channels).ArrayNum;
  if (iVar1 < 1) {
    local_1a8 = 0;
    local_1a0 = (longlong)iVar1;
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
      local_1a8 = 0;
      local_1a0 = (longlong)iVar1;
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
        local_1a8 = 0;
        local_1a0 = (longlong)iVar1;
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
                ((FControlChannelOutBunch *)&local_188,
                 *(UChannel **)(param_1->Channels).AllocatorInstance.Data,false);
      local_198[0] = 1;
      if (*(undefined1 **)(local_188._padding_ + 8) < *(undefined1 **)local_188._padding_ + 1) {
        (**(code **)(local_188._padding_ + 0x188))(&local_188,local_198,1);
      }
      else {
        local_198[0] = **(undefined1 **)local_188._padding_;
        *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 1;
      }
      ::operator<<((FArchive *)&local_188,param_2);
      ::operator<<((FArchive *)&local_188,param_3);
      ::operator<<((FArchive *)&local_188,param_4);
      iVar1 = (param_1->Channels).ArrayNum;
      if (iVar1 < 1) {
        local_1a8 = 0;
        local_1a0 = (longlong)iVar1;
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
      (**(code **)(*plVar2 + 0x318))(plVar2,local_194,&local_188,1);
      FOutBunch::~FOutBunch(&local_188);
    }
  }
  return;
}

// Send @ 148a10c50

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
UE::Net::TNetControlMessageImpl<2,unsigned_int,enum_EEngineNetworkRuntimeFeatures>::Send
          (UNetConnection *param_1,uint *param_2,EEngineNetworkRuntimeFeatures *param_3)

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
      local_188[0] = 2;
      if (*(undefined1 **)(local_178._padding_ + 8) < *(undefined1 **)local_178._padding_ + 1) {
        (**(code **)(local_178._padding_ + 0x188))(&local_178,local_188,1);
      }
      else {
        local_188[0] = **(undefined1 **)local_178._padding_;
        *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 1;
      }
      if (*(uint **)(local_178._padding_ + 8) < *(uint **)local_178._padding_ + 1) {
        if ((local_178._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_178._padding_ + 0x188))(&local_178,param_2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_178,param_2);
        }
      }
      else {
        *param_2 = **(uint **)local_178._padding_;
        *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 4;
      }
      if (*(EEngineNetworkRuntimeFeatures **)(local_178._padding_ + 8) <
          *(EEngineNetworkRuntimeFeatures **)local_178._padding_ + 1) {
        if ((local_178._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_178._padding_ + 0x188))(&local_178,param_3,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_178,param_3);
        }
      }
      else {
        *param_3 = **(EEngineNetworkRuntimeFeatures **)local_178._padding_;
        *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 2;
      }
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

