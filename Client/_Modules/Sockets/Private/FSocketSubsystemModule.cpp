// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 9

// ShutdownSocketSubsystem @ 1431088e0

void __thiscall FSocketSubsystemModule::ShutdownSocketSubsystem(FSocketSubsystemModule *this)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  FString *this_01;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FName FVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FString local_c8;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  FString local_78;
  FString local_68;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  pcVar1 = *(code **)(this->_padding_ + 0x58);
  pFVar5 = ::FName::FName(&local_res8,L"WINDOWS");
  (*pcVar1)(this,*pFVar5);
  iVar10 = 1;
  if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
    (**(code **)(FSocketSubsystemWindows::SocketSingleton->_padding_ + 0x10))();
    if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
      (**(code **)FSocketSubsystemWindows::SocketSingleton->_padding_)
                (FSocketSubsystemWindows::SocketSingleton,1);
    }
    FSocketSubsystemWindows::SocketSingleton = (FSocketSubsystemWindows *)0x0;
  }
  this_00 = FModuleManager::Get();
  TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_58,
             (TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
              *)&this->SocketSubsystems);
  local_80 = 0;
  stack0xffffffffffffff58 = local_58._16_16_;
  local_b8 = (longlong *)local_58._0_8_;
  auStack_b0._0_8_ = local_58._8_8_;
  local_98 = local_38;
  pTStack_90 = pTStack_30;
  uVar6 = local_58._24_8_ >> 0x20;
  uVar12 = local_58._28_4_;
  local_88 = (TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
              *)&this->SocketSubsystems;
  if ((int)uVar12 < *(int *)(local_58._16_8_ + 0x18)) {
    do {
      plVar3 = local_b8;
      (**(code **)(**(longlong **)(*local_b8 + 8 + (longlong)(int)uVar6 * 0x18) + 0x10))();
      this_01 = ::FName::ToString((FName *)(*plVar3 + (longlong)(int)uVar12 * 0x18),&local_68);
      ::FString::FString(&local_c8,L"Sockets");
      iVar11 = local_c8.Data.ArrayNum + -1;
      FVar7.Data = local_c8.Data.AllocatorInstance.Data;
      if (local_c8.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar7.Data = (FScriptContainerElement *)L"";
      }
      bVar4 = ::FString::StartsWith(this_01,(wchar_t *)FVar7.Data,iVar11,CaseSensitive);
      if (bVar4) {
        if ((this_01->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(this_01->Data).AllocatorInstance.Data;
        }
        pFVar5 = ::FName::FName(&local_res10,pwVar8);
        FVar9 = *pFVar5;
      }
      else {
        ::FString::ConcatFF(&local_78,&local_c8,this_01);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar7.Data = local_78.Data.AllocatorInstance.Data;
        }
        pFVar5 = ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
        FVar9 = *pFVar5;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FModuleManager::UnloadModule(this_00,FVar9,true,true);
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar6 = (ulonglong)uStack_9c;
      uVar12 = uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (3 < uVar12) {
        uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_88->HashSize < iVar10)) || (iVar10 < local_88->HashSize)) {
        local_88->HashSize = iVar10;
        TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  return;
}

// GetSocketSubsystem @ 143108b40

/* WARNING: Enum "Type": Some values do not have unique names */

ISocketSubsystem * __thiscall
FSocketSubsystemModule::GetSocketSubsystem(FSocketSubsystemModule *this,FName param_1)

{
  bool bVar1;
  ISocketSubsystem **ppIVar2;
  wchar_t *pwVar3;
  FModuleManager *this_00;
  FName FVar4;
  IModuleInterface *pIVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FName local_res10;
  FString local_res18;
  FString local_48;
  FString local_38;
  
  local_res8 = param_1;
  if (param_1 == (FName)0x0) {
    local_res8 = this->DefaultSocketSubsystem;
  }
  local_res10 = param_1;
  ppIVar2 = TMapBase<FName,ISocketSubsystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>_>
            ::Find((TMapBase<FName,ISocketSubsystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>_>
                    *)&this->SocketSubsystems,local_res8);
  if (ppIVar2 == (ISocketSubsystem **)0x0) {
    ::FName::ToString(&local_res8,&local_38);
    ::FString::PrintfImpl(&local_48,L"no%s");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,(wchar_t *)FVar6.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      pIVar5 = (IModuleInterface *)0x0;
    }
    else {
      this_00 = FModuleManager::Get();
      FVar4 = GetSocketModuleName(&local_res18);
      FVar4 = *(FName *)FVar4;
      bVar1 = FModuleManager::IsModuleLoaded(this_00,FVar4);
      if (!bVar1) {
        FModuleManager::LoadModule(this_00,FVar4,None);
      }
      pIVar5 = FModuleManager::GetModule(this_00,FVar4);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((pIVar5 == (IModuleInterface *)0x0) ||
       (ppIVar2 = TMapBase<FName,ISocketSubsystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>_>
                  ::Find((TMapBase<FName,ISocketSubsystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>_>
                          *)&this->SocketSubsystems,local_res8), ppIVar2 == (ISocketSubsystem **)0x0
       )) {
      if (2 < (byte)LogSockets._0_1_) {
        ::FName::ToString(&local_res10,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      return (ISocketSubsystem *)0x0;
    }
  }
  return *ppIVar2;
}

// RegisterSocketSubsystem @ 143108ce0

void __thiscall
FSocketSubsystemModule::RegisterSocketSubsystem
          (FSocketSubsystemModule *this,FName param_1,ISocketSubsystem *param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  FName local_res10;
  ISocketSubsystem *local_res18 [2];
  FName *local_28;
  ISocketSubsystem **local_20;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->SocketSubsystems).field_0x8 != *(int *)&(this->SocketSubsystems).field_0x34) {
    puVar3 = *(undefined1 **)&(this->SocketSubsystems).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->SocketSubsystems).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->SocketSubsystems).field_0x48 - 1U &
                              param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->SocketSubsystems + (longlong)iVar2 * 0x18) == param_1)
        goto LAB_143108d80;
        iVar2 = *(int *)(*(longlong *)&this->SocketSubsystems + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_res10;
  local_20 = local_res18;
  TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,ISocketSubsystem_*_const_&>_>
            ((TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
              *)&this->SocketSubsystems,
             (TPairInitializer<FName_const_&,ISocketSubsystem_*_const_&> *)(local_res18 + 1),
             (bool *)&local_28);
LAB_143108d80:
  if (param_3) {
    this->DefaultSocketSubsystem = local_res10;
  }
  return;
}

// UnregisterSocketSubsystem @ 143108db0

void __thiscall
FSocketSubsystemModule::UnregisterSocketSubsystem(FSocketSubsystemModule *this,FName param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->SocketSubsystems).field_0x8 != *(int *)&(this->SocketSubsystems).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SocketSubsystems).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SocketSubsystems).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SocketSubsystems).field_0x48 - 1U &
                              param_1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->SocketSubsystems).field_0x0;
      while (*(FName *)(lVar1 + (longlong)iVar3 * 0x18) != param_1) {
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
        if (iVar3 == -1) {
          return;
        }
      }
      local_res8 = param_1;
      uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,ISocketSubsystem_*>,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>,FDefaultSetAllocator>
                           *)&this->SocketSubsystems,local_res10.Number + uVar2,&local_res8);
    }
  }
  return;
}

// StartupModule @ 143108e60

void __thiscall FSocketSubsystemModule::StartupModule(FSocketSubsystemModule *this)

{
  code *pcVar1;
  FSocketSubsystemWindows *pFVar2;
  char cVar3;
  FSocketSubsystemWindows *pFVar4;
  FName local_res8;
  FString local_18;
  
  ::FName::FName(&local_res8,L"WINDOWS");
  pFVar2 = FSocketSubsystemWindows::SocketSingleton;
  if ((FSocketSubsystemWindows::SocketSingleton == (FSocketSubsystemWindows *)0x0) &&
     (pFVar4 = ::operator_new(0x88), pFVar2 = (FSocketSubsystemWindows *)0x0,
     pFVar4 != (FSocketSubsystemWindows *)0x0)) {
    pFVar4->_padding_ = (longlong)&___7ISocketSubsystem__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar4->_padding_,4000);
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar4->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FSocketSubsystemWindows__6B_;
    pFVar4->bTriedToInit = false;
    pFVar2 = pFVar4;
  }
  FSocketSubsystemWindows::SocketSingleton = pFVar2;
  pFVar2 = FSocketSubsystemWindows::SocketSingleton;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pcVar1 = *(code **)(FSocketSubsystemWindows::SocketSingleton->_padding_ + 8);
  if (pcVar1 == FSocketSubsystemWindows::Init) {
    cVar3 = FSocketSubsystemWindows::Init(FSocketSubsystemWindows::SocketSingleton,&local_18);
  }
  else {
    cVar3 = (*pcVar1)();
  }
  if (cVar3 == '\0') {
    if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
      pcVar1 = *(code **)(FSocketSubsystemWindows::SocketSingleton->_padding_ + 0x10);
      if (pcVar1 == FSocketSubsystemWindows::Shutdown) {
        WSACleanup();
      }
      else {
        (*pcVar1)();
      }
      if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
        (**(code **)FSocketSubsystemWindows::SocketSingleton->_padding_)
                  (FSocketSubsystemWindows::SocketSingleton,1);
      }
      FSocketSubsystemWindows::SocketSingleton = (FSocketSubsystemWindows *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    (this->DefaultSocketSubsystem).ComparisonIndex = 0;
    (this->DefaultSocketSubsystem).Number = 0;
    return;
  }
  (**(code **)(this->_padding_ + 0x50))(this,local_res8,pFVar2,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->DefaultSocketSubsystem = local_res8;
  return;
}

// ShutdownModule @ 143108fe0

void __thiscall FSocketSubsystemModule::ShutdownModule(FSocketSubsystemModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143108fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// SupportsDynamicReloading @ 143108ff0

bool __thiscall FSocketSubsystemModule::SupportsDynamicReloading(FSocketSubsystemModule *this)

{
  return false;
}

// SupportsAutomaticShutdown @ 143109000

bool __thiscall FSocketSubsystemModule::SupportsAutomaticShutdown(FSocketSubsystemModule *this)

{
  return false;
}

// ~FSocketSubsystemModule @ 14310ba00

void __thiscall FSocketSubsystemModule::~FSocketSubsystemModule(FSocketSubsystemModule *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSocketSubsystemModule__6B_;
  *(undefined4 *)&(this->SocketSubsystems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SocketSubsystems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,ISocketSubsystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,ISocketSubsystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,ISocketSubsystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SocketSubsystems);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

