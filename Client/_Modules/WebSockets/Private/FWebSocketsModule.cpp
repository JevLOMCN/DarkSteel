// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 7

// CreateWebSocket @ 14b3f70d0

TSharedRef<IWebSocket,1> * __thiscall
FWebSocketsModule::CreateWebSocket
          (FWebSocketsModule *this,TSharedRef<IWebSocket,1> *__return_storage_ptr__,FString *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TSharedRef<IWebSocket,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  IWebSocket *local_68;
  TReferenceControllerBase<1> *local_60;
  FDestructionSentinel local_58;
  
  if ((this->WebSocketsManager == (IWebSocketsManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WebSocketsManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\WebSocketsModule.cpp"
                         ,0x5b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<IWebSocket,1> *)(*pcVar3)();
    return pTVar9;
  }
  iVar18 = param_2->ArrayNum;
  pFVar10 = (param_2->AllocatorInstance).Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = iVar18;
  if (iVar18 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar18,0,&local_78,iVar18,&local_6c);
    ConstructItems<FString,FString,int>(local_78.Data,(FString *)pFVar10,iVar18);
  }
  FVar4.Data = local_78.Data;
  iVar18 = local_70;
  if (local_70 != 0) {
    iVar18 = 0;
    lVar13 = (longlong)local_70;
    bVar5 = 1 < *(int *)(local_78.Data + 8);
    lVar12 = 0;
    iVar16 = 0;
    do {
      lVar12 = lVar12 + 1;
      iVar17 = iVar16 + 1;
      if (lVar12 < lVar13) {
        pFVar10 = FVar4.Data + lVar12 * 0x10 + 8;
        do {
          if (bVar5 != 1 < *(int *)pFVar10) break;
          iVar17 = iVar17 + 1;
          lVar12 = lVar12 + 1;
          pFVar10 = pFVar10 + 0x10;
        } while (lVar12 < lVar13);
      }
      iVar15 = iVar17 - iVar16;
      if (bVar5 == false) {
        DestructItems<FString,int>((FString *)(FVar4.Data + (longlong)iVar16 * 0x10),iVar15);
      }
      else {
        if (iVar18 != iVar16) {
          memmove(FVar4.Data + (longlong)iVar18 * 0x10,FVar4.Data + (longlong)iVar16 * 0x10,
                  (longlong)iVar15 << 4);
        }
        iVar18 = iVar18 + iVar15;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar16 = iVar17;
    } while (lVar12 < lVar13);
  }
  local_70 = iVar18;
  (**(code **)((longlong)*this->WebSocketsManager + 0x10))
            (this->WebSocketsManager,__return_storage_ptr__,param_1,&local_78,param_3);
  local_68 = __return_storage_ptr__->Object;
  local_60 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWebSocketCreated,
             (FWriteAccessScope *)&local_58);
  puVar1 = &(this->OnWebSocketCreated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar11 = *(int *)&(this->OnWebSocketCreated).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    pTVar14 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               *)(longlong)(int)uVar11;
    lVar12 = (longlong)pTVar14 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar11 < *(int *)&(this->OnWebSocketCreated).field_0x10) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (param_3 = pTVar14,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<IWebSocket,1> *)(*pcVar3)();
        return pTVar9;
      }
      lVar13 = *(longlong *)&(this->OnWebSocketCreated).field_0x8;
      if (((*(int *)(lVar12 + 8 + lVar13) == 0) ||
          (plVar2 = *(longlong **)(lVar12 + lVar13), plVar2 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_68,param_2,param_1,param_3),
         cVar7 == '\0')) {
        bVar5 = true;
      }
      pTVar14 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)&pTVar14[-1].field_0x4f;
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnWebSocketCreated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnWebSocketCreated,false
              );
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  DestructItems<FString,int>((FString *)local_78.Data,local_70);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return __return_storage_ptr__;
}

// CreateWebSocket @ 14b3f7400

TSharedRef<IWebSocket,1> * __thiscall
FWebSocketsModule::CreateWebSocket
          (FWebSocketsModule *this,TSharedRef<IWebSocket,1> *__return_storage_ptr__,FString *param_1
          ,FString *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3)

{
  int iVar1;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  if (1 < (param_2->Data).ArrayNum) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_18,(int *)((longlong)&local_10 + 4));
    local_10 = CONCAT44(local_10._4_4_,iVar1 + 1);
    ::FString::FString((FString *)(local_18.Data + (longlong)iVar1 * 0x10),param_2);
  }
  (**(code **)(this->_padding_ + 0x48))(this,__return_storage_ptr__,param_1,&local_18,param_3);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return __return_storage_ptr__;
}

// StartupModule @ 14b3f74c0

/* WARNING: Removing unreachable block (ram,0x00014b3f75f9) */
/* WARNING: Removing unreachable block (ram,0x00014b3f76d8) */

void __thiscall FWebSocketsModule::StartupModule(FWebSocketsModule *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IWebSocketsManager IVar4;
  IWebSocketsManager IVar5;
  IWebSocketsManager IVar6;
  IWebSocketsManager IVar7;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  longlong lVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  IVar7 = (IWebSocketsManager)0x0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  Singleton = this;
  FConfigCacheIni::GetArray(GConfig,L"WebSockets",L"WebSocketsProtocols",&local_68,&GEngineIni);
  if (local_68.ArrayNum == 0) {
    ::FString::FString(&local_58,L"ws");
    if (((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = local_68.ArrayNum;
    if (local_68.ArrayNum == local_68.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
    }
    lVar8 = (longlong)iVar3;
    *(undefined8 *)(local_68.AllocatorInstance.Data + lVar8 * 0x10) = 0;
    *(FScriptContainerElement **)(local_68.AllocatorInstance.Data + lVar8 * 0x10) =
         local_58.Data.AllocatorInstance.Data;
    *(int *)(local_68.AllocatorInstance.Data + lVar8 * 0x10 + 8) = local_58.Data.ArrayNum;
    *(int *)(local_68.AllocatorInstance.Data + lVar8 * 0x10 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = iVar3 + 1;
    ::FString::FString(&local_48,L"wss");
    if (((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = local_68.ArrayNum;
    if (local_68.ArrayNum == local_68.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
    }
    local_68.ArrayNum = iVar3 + 1;
    lVar8 = (longlong)iVar3;
    *(undefined8 *)(local_68.AllocatorInstance.Data + lVar8 * 0x10) = 0;
    *(FScriptContainerElement **)(local_68.AllocatorInstance.Data + lVar8 * 0x10) =
         local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_68.AllocatorInstance.Data + lVar8 * 0x10 + 8) = local_48.Data.ArrayNum;
    *(int *)(local_68.AllocatorInstance.Data + lVar8 * 0x10 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  IVar4 = (IWebSocketsManager)::operator_new(0xe0);
  if (IVar4 != (IWebSocketsManager)0x0) {
    *(IWebSocketsManager *)((longlong)IVar4 + 0x18) = (IWebSocketsManager)0x0;
    *(undefined ***)IVar4 = &FLwsWebSocketsManager::_vftable__for__IWebSocketsManager__;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x20) = (IWebSocketsManager)0x0;
    *(undefined ***)((longlong)IVar4 + 8) = &FLwsWebSocketsManager::_vftable__for__FRunnable__;
    *(undefined ***)((longlong)IVar4 + 0x10) =
         &FLwsWebSocketsManager::_vftable__for__FSingleThreadRunnable__;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x28) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x30) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x38) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x40) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x48) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x50) = (IWebSocketsManager)0x0;
    IVar5 = (IWebSocketsManager)::operator_new(0x10);
    IVar6 = IVar7;
    if (IVar5 != (IWebSocketsManager)0x0) {
      *(undefined8 *)IVar5 = 0;
      *(undefined8 *)((longlong)IVar5 + 8) = 0;
      *(undefined8 *)IVar5 = 0;
      IVar6 = IVar5;
    }
    *(IWebSocketsManager *)((longlong)IVar4 + 0x68) = IVar6;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x60) = IVar6;
    IVar6 = (IWebSocketsManager)::operator_new(0x10);
    if (IVar6 != (IWebSocketsManager)0x0) {
      *(undefined8 *)IVar6 = 0;
      *(undefined8 *)((longlong)IVar6 + 8) = 0;
      *(undefined8 *)IVar6 = 0;
      IVar7 = IVar6;
    }
    *(IWebSocketsManager *)((longlong)IVar4 + 0x78) = IVar7;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x70) = IVar7;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x80) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x88) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x90) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0x98) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0xa0) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0xa8) = (IWebSocketsManager)0x0;
    *(IWebSocketsManager *)((longlong)IVar4 + 0xc0) = (IWebSocketsManager)0x3fa1111111111111;
    *(undefined4 *)((longlong)IVar4 + 0xb0) = 0;
    *(undefined1 *)((longlong)IVar4 + 0xb4) = 0;
    *(undefined4 *)((longlong)IVar4 + 0xb8) = 0x7fffffff;
    *(IWebSocketsManager *)((longlong)IVar4 + 200) = (IWebSocketsManager)0x0;
    *(undefined2 *)((longlong)IVar4 + 0xd0) = 0;
    IVar7 = IVar4;
  }
  iVar3 = local_68.ArrayNum;
  this->WebSocketsManager = (IWebSocketsManager *)IVar7;
  pcVar1 = *(code **)*(IWebSocketsManager *)IVar7;
  local_38 = local_68.AllocatorInstance.Data;
  if ((local_68.ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_30 = iVar3;
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  iStack_20 = iVar3;
  uStack_1c = uStack_2c;
  (*pcVar1)(IVar7,&local_28);
  this_00 = FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FWebSocketsModule>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
              *)this_00,(FWebSocketsModule *)&stack0x00000008,(pmf_820c0246)this);
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14b3f7890

void __thiscall FWebSocketsModule::ShutdownModule(FWebSocketsModule *this)

{
  IWebSocketsManager *pIVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
  if (this->WebSocketsManager != (IWebSocketsManager *)0x0) {
    (**(code **)((longlong)*this->WebSocketsManager + 8))();
    pIVar1 = this->WebSocketsManager;
    if (pIVar1 != (IWebSocketsManager *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,1);
    }
    this->WebSocketsManager = (IWebSocketsManager *)0x0;
    Singleton = (FWebSocketsModule *)0x0;
    return;
  }
  Singleton = (FWebSocketsModule *)0x0;
  return;
}

// BuildUpgradeHeader @ 14b3f92b0

FString * __cdecl
FWebSocketsModule::BuildUpgradeHeader
          (FString *__return_storage_ptr__,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar5
  ;
  bool bVar6;
  FString *pFVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FString local_a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &param_1->field_0x10;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar12 = *(int *)&param_1->field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = iStack_90;
  if (iVar12 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    local_78 = 0;
    iStack_90 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14b3f935d;
      uVar11 = puVar14[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar12 < iStack_7c) {
      iStack_7c = iVar12;
    }
  }
LAB_14b3f935d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar4)();
    return pFVar7;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14b3f9460;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14b3f9460:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    ::FString::PrintfImpl(&local_a8,L"%s: %s\r\n");
    iVar12 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar12);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// Get @ 14b3fc930

FWebSocketsModule * __cdecl FWebSocketsModule::Get(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FWebSocketsModule *pFVar4;
  FName *pFVar5;
  FModuleManager *this;
  FName local_res8 [4];
  
  if (Singleton == (FWebSocketsModule *)0x0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\WebSocketsModule.cpp"
                           ,0x51,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWebSocketsModule *)(*pcVar2)();
      return pFVar4;
    }
    pFVar5 = ::FName::FName(local_res8,"WebSockets");
    FVar1 = *pFVar5;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar1);
    if ((Singleton == (FWebSocketsModule *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\WebSocketsModule.cpp"
                           ,0x54,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWebSocketsModule *)(*pcVar2)();
      return pFVar4;
    }
  }
  return Singleton;
}

// OnConfigSectionsChanged @ 14b3fed30

void __thiscall
FWebSocketsModule::OnConfigSectionsChanged
          (FWebSocketsModule *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  if (this->WebSocketsManager != (IWebSocketsManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b3fed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->WebSocketsManager + 0x20))();
    return;
  }
  return;
}

