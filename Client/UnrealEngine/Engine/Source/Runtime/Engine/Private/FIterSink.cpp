// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// HandleShowFlag @ 147c62e90

bool __thiscall
`UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
          (void *this,uint param_1,FString *param_2)

{
  FString local_18;
  
  FEngineShowFlags::GetSingleFlag((FEngineShowFlags *)((longlong)this + 8),param_1);
  ::FString::PrintfImpl(&local_18,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this,
             (FString *)&stack0x00000008,(bool *)&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// HandleShowFlag @ 1485cc2e0

bool __thiscall
`FEngineShowFlags::ToString'::__l2::FIterSink::HandleShowFlag
          (void *this,uint param_1,FString *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FPlatformRWLock *SRWLock;
  TArray<FCustomShowFlagData,TSizedDefaultAllocator<32>_> *pTVar6;
  wchar_t *pwVar7;
  uint uVar8;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar5 = FEngineShowFlags::FindIndexByName(pwVar7,(wchar_t *)0x0);
  if (iVar5 < 0xe5) {
    switch(iVar5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
      break;
    case 0x7a:
    case 0x89:
    case 0x96:
      goto switchD_1485cc430_caseD_7a;
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShowFlags.h"
                         ,0xae,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  else {
    uVar1 = iVar5 - 0xe5;
    SRWLock = CustomShowFlagsInternal::GetLock();
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pTVar6 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
    if (((int)uVar1 < 0) || (pTVar6->ArrayNum <= (int)uVar1)) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      iVar5 = 0;
    }
    else {
      pTVar6 = CustomShowFlagsInternal::GetRegisteredCustomShowFlags();
      uVar8 = 0;
      if ((int)uVar1 < pTVar6->ArrayNum) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = *(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x30 + 0x20);
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    if (iVar5 == 0xc) {
      return true;
    }
  }
  if (1 < *(int *)((longlong)this + 8)) {
    ::FString::AppendChar(this,L',');
  }
  FEngineShowFlags::AddNameByIndex(param_1,this);
  ::FString::AppendChar(this,L'=');
  bVar3 = FEngineShowFlags::GetSingleFlag((FEngineShowFlags *)((longlong)this + 0x10),param_1);
  ::FString::AppendChar(this,(ushort)bVar3 + L'0');
switchD_1485cc430_caseD_7a:
  return true;
}

// OnEngineShowFlag @ 14884b980

bool __thiscall
`FSystemSettings::RegisterShowFlagConsoleVariables'::__l2::FIterSink::OnEngineShowFlag
          (void *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FString local_38;
  FString local_28;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar6 = FEngineShowFlags::FindIndexByName(pwVar9,(wchar_t *)0x0);
  if (iVar6 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShowFlagIndex != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SystemSettings.cpp"
                       ,0x87,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  pIVar3 = IConsoleManager::Singleton;
  lVar1 = *(longlong *)this;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x50);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FString::FString(&local_28,"ShowFlag.");
  ::FString::ConcatFF(&local_38,pFVar7,param_2);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar3,FVar8.Data,pwVar9,iVar6,lVar1 + 0x10,lVar1 + 0x50,
            L"Allows to override a specific showflag (works in editor and game, \"show\" only works in game and UI only in editor)\nUseful to run a build many time with the same showflags (when put in consolevariables.ini like \"showflag.abc=0\")\n 0: force the showflag to be OFF\n 1: force the showflag to be ON\n 2: do not override this showflag (default)"
            ,1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// HandleShowFlag @ 14895fe00

bool __thiscall
`UConsole::BuildRuntimeAutoCompleteList'::__l54::FIterSink::HandleShowFlag
          (void *this,uint param_1,FString *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  UClass *this_00;
  FString *pFVar12;
  uint uVar13;
  FString local_48;
  FString local_38;
  FText local_28;
  
  FText::FText(&local_28);
  FEngineShowFlags::FindShowFlagDisplayName(param_2,&local_28);
  pFVar4 = *(ForAnyElementType **)this;
  puVar1 = (uint *)((longlong)&pFVar4[1].Data + 4);
  uVar10 = *(uint *)&pFVar4[1].Data;
  if (uVar10 == *puVar1) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,pFVar4,(int *)puVar1);
  }
  *(uint *)&pFVar4[1].Data = uVar10 + 1;
  lVar2 = (longlong)(int)uVar10 * 0x28;
  DefaultConstructItems<FAutoCompleteCommand,int>(pFVar4->Data + lVar2,1);
  ::FString::ConcatCF(&local_48,L"show ",param_2);
  plVar5 = *(longlong **)this;
  uVar13 = ~uVar10 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar10 < (int)plVar5[1]) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar12 = (FString *)(*plVar5 + lVar2);
  if (pFVar12 != &local_48) {
    pFVar6 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar12->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar12->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_28);
  ::FString::PrintfImpl(&local_38,L"(toggles the %s showflag)");
  plVar5 = *(longlong **)this;
  uVar11 = 0;
  if ((int)uVar10 < (int)plVar5[1]) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar12 = (FString *)(*plVar5 + 0x10 + lVar2);
  if (pFVar12 != &local_38) {
    pFVar6 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar12->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar12->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this_00 = Z_Construct_UClass_UConsoleSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  plVar5 = *(longlong **)this;
  uVar3 = *(undefined4 *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x10;
  uVar11 = 0;
  if ((int)uVar10 < (int)plVar5[1]) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  *(undefined4 *)(*plVar5 + 0x20 + lVar2) = uVar3;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return true;
}

