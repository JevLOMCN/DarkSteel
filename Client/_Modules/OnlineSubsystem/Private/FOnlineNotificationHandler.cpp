// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 8

// AddPlayerNotificationBinding_Handle @ 14ebb7000

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FOnlineNotificationHandler::AddPlayerNotificationBinding_Handle
          (FOnlineNotificationHandler *this,FUniqueNetId *param_1,FString *param_2,
          FOnlineNotificationBinding *param_3)

{
  TDelegate<EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *pTVar10;
  FDelegateHandle FVar11;
  undefined8 *puVar12;
  int iVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  uint uVar16;
  undefined8 uVar17;
  TDelegate<EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
  *in_stack_00000028;
  FString local_68;
  void *local_58 [2];
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_stack_00000028,&local_48);
  if (((*(int *)&in_stack_00000028->field_0x10 == 0) ||
      (*(longlong **)&in_stack_00000028->field_0x8 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)&in_stack_00000028->field_0x8 + 0x38))(), cVar5 == '\0'))
  {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (1 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_68,L"Adding empty notification binding for type %s");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    *(undefined8 *)param_1 = 0;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    pFVar9 = (FString *)
             (**(code **)((param_2->Data).AllocatorInstance.Data + 0x30))(param_2,local_58);
    pwVar15 = L"";
    iVar8 = (pFVar9->Data).ArrayNum;
    if (iVar8 == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    uVar17 = 0;
    iVar13 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar13 = 0;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar14);
    this_00 = TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
              ::FindOrAddImpl<FString>
                        ((TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                          *)&this->PlayerBindingMap,uVar7,pFVar9);
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    iVar8 = *(int *)&(param_3->NotificationDelegate).field_0x8;
    if (iVar8 != 0) {
      pwVar15 = *(wchar_t **)&param_3->NotificationDelegate;
    }
    uVar7 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar7 = 0;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar7,pwVar15);
    pTVar10 = TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FString_const_&>
                        ((TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_00,uVar7,(FString *)param_3);
    pTVar1 = (TDelegate<EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
              *)(pTVar10->AllocatorInstance).Data;
    if (((pTVar1 <= in_stack_00000028) && (in_stack_00000028 < pTVar1 + pTVar10->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar11.ID = (*pcVar4)();
      return (FDelegateHandle)FVar11.ID;
    }
    iVar8 = pTVar10->ArrayNum;
    if (iVar8 == pTVar10->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    pTVar10->ArrayNum = iVar8 + 1;
    TDelegate<enum_EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<enum_EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
              ((pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 0x18,in_stack_00000028);
    uVar16 = pTVar10->ArrayNum - 1;
    uVar7 = 0;
    if ((int)uVar16 < pTVar10->ArrayNum) {
      uVar7 = ~uVar16 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar11.ID = (*pcVar4)();
      return (FDelegateHandle)FVar11.ID;
    }
    iVar8 = pTVar10->ArrayNum;
    pFVar2 = (pTVar10->AllocatorInstance).Data;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (pFVar2 + (longlong)iVar8 * 0x18 + -0x18),&local_30);
    if ((*(int *)(pFVar2 + (longlong)iVar8 * 0x18 + -8) != 0) &&
       (plVar3 = *(longlong **)(pFVar2 + (longlong)iVar8 * 0x18 + -0x10), plVar3 != (longlong *)0x0)
       ) {
      puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x40))(plVar3,&stack0x00000028);
      uVar17 = *puVar12;
    }
    *(undefined8 *)param_1 = uVar17;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
  }
  if (*(void **)&param_3->NotificationDelegate != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->NotificationDelegate);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSystemNotificationBinding_Handle @ 14ebb72e0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FOnlineNotificationHandler::AddSystemNotificationBinding_Handle
          (FOnlineNotificationHandler *this,FString *param_1,FOnlineNotificationBinding *param_2)

{
  TDelegate<EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *pTVar9;
  FDelegateHandle FVar10;
  undefined8 *puVar11;
  int iVar12;
  wchar_t *pwVar13;
  uint uVar14;
  TDelegate<EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
  *in_R9;
  FScriptContainerElement *pFVar15;
  undefined1 local_res20 [8];
  FString local_58;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R9,&local_48);
  if (((*(int *)&in_R9->field_0x10 == 0) || (*(longlong **)&in_R9->field_0x8 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)&in_R9->field_0x8 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (1 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_58,L"Adding empty notification binding for type %s");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    iVar8 = *(int *)&(param_2->NotificationDelegate).field_0x8;
    if (iVar8 == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)&param_2->NotificationDelegate;
    }
    pFVar15 = (FScriptContainerElement *)0x0;
    iVar12 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar12 = 0;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar13);
    pTVar9 = TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                         *)this,uVar7,(FString *)param_2);
    pTVar1 = (TDelegate<EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
              *)(pTVar9->AllocatorInstance).Data;
    if (((pTVar1 <= in_R9) && (in_R9 < pTVar1 + pTVar9->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar10.ID = (*pcVar4)();
      return (FDelegateHandle)FVar10.ID;
    }
    iVar8 = pTVar9->ArrayNum;
    if (iVar8 == pTVar9->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
    }
    pTVar9->ArrayNum = iVar8 + 1;
    TDelegate<enum_EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<enum_EOnlineNotificationResult___cdecl(FOnlineNotification_const_&),FDefaultDelegateUserPolicy>
              ((pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 0x18,in_R9);
    uVar14 = pTVar9->ArrayNum - 1;
    uVar7 = 0;
    if ((int)uVar14 < pTVar9->ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar10.ID = (*pcVar4)();
      return (FDelegateHandle)FVar10.ID;
    }
    iVar8 = pTVar9->ArrayNum;
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (pFVar2 + (longlong)iVar8 * 0x18 + -0x18),&local_30);
    if ((*(int *)(pFVar2 + (longlong)iVar8 * 0x18 + -8) != 0) &&
       (plVar3 = *(longlong **)(pFVar2 + (longlong)iVar8 * 0x18 + -0x10), plVar3 != (longlong *)0x0)
       ) {
      puVar11 = (undefined8 *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res20);
      pFVar15 = (FScriptContainerElement *)*puVar11;
    }
    (param_1->Data).AllocatorInstance.Data = pFVar15;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
  }
  if (*(void **)&param_2->NotificationDelegate != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->NotificationDelegate);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// DeliverNotification @ 14ebed080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineNotificationHandler::DeliverNotification
          (FOnlineNotificationHandler *this,FOnlineNotification *param_1)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  longlong lVar8;
  longlong *plVar9;
  FReadAccessScope *pFVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  FString local_b8;
  void *local_a8 [2];
  void *local_98 [2];
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  plVar14 = (longlong *)0x0;
  pTVar6 = TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                   *)this,&param_1->TypeStr);
  plVar9 = plVar14;
  if ((pTVar6 != (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)0x0) &&
     (iVar11 = pTVar6->ArrayNum, plVar16 = plVar14, plVar9 = (longlong *)0x0, plVar18 = plVar14,
     plVar17 = plVar14, 0 < iVar11)) {
    do {
      plVar9 = plVar18;
      uVar15 = (uint)plVar16;
      uVar5 = 0;
      if ((int)uVar15 < iVar11) {
        uVar5 = ~uVar15 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = (pTVar6->AllocatorInstance).Data + (longlong)plVar17;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar13,&local_88);
      if (((*(int *)&pFVar13[0x10].field_0x0 == 0) ||
          (*(longlong **)&pFVar13[8].field_0x0 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)&pFVar13[8].field_0x0 + 0x38))(), cVar4 == '\0')) {
        pFVar10 = &local_88;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_88);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar13,&local_58);
        plVar9 = plVar14;
        if (*(int *)&pFVar13[0x10].field_0x0 != 0) {
          plVar9 = *(longlong **)&pFVar13[8].field_0x0;
        }
        uVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
        plVar9 = (longlong *)(ulonglong)uVar5;
        pFVar10 = &local_58;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (pFVar10);
      iVar11 = pTVar6->ArrayNum;
      plVar16 = (longlong *)(ulonglong)(uVar15 + 1);
      plVar18 = plVar9;
      plVar17 = plVar17 + 3;
    } while ((int)(uVar15 + 1) < iVar11);
  }
  iVar11 = (int)plVar9;
  pFVar1 = (param_1->ToUserId).Object;
  if (pFVar1 != (FUniqueNetId *)0x0) {
    pFVar7 = (FString *)(**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_a8);
    this_00 = TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
              ::Find((TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                      *)&this->PlayerBindingMap,pFVar7);
    if (local_a8[0] != (void *)0x0) {
      FMemory::Free(local_a8[0]);
    }
    if (((this_00 !=
          (TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
           *)0x0) &&
        (pTVar6 = TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_00,&param_1->TypeStr),
        pTVar6 != (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (iVar12 = pTVar6->ArrayNum, plVar16 = plVar14, plVar18 = plVar14, 0 < iVar12)) {
      do {
        uVar15 = (uint)plVar16;
        uVar5 = 0;
        if ((int)uVar15 < iVar12) {
          uVar5 = ~uVar15 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = (pTVar6->AllocatorInstance).Data + (longlong)plVar18;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar13,&local_70);
        if (((*(int *)&pFVar13[0x10].field_0x0 == 0) ||
            (*(longlong **)&pFVar13[8].field_0x0 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)&pFVar13[8].field_0x0 + 0x38))(), cVar4 == '\0')) {
          pFVar10 = &local_70;
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar13,&local_40);
          plVar9 = plVar14;
          if (*(int *)&pFVar13[0x10].field_0x0 != 0) {
            plVar9 = *(longlong **)(pFVar13 + 8);
          }
          uVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
          plVar9 = (longlong *)(ulonglong)uVar5;
          pFVar10 = &local_40;
        }
        iVar11 = (int)plVar9;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (pFVar10);
        iVar12 = pTVar6->ArrayNum;
        plVar16 = (longlong *)(ulonglong)(uVar15 + 1);
        plVar18 = plVar18 + 3;
      } while ((int)(uVar15 + 1) < iVar12);
    }
  }
  if ((iVar11 == 0) && (1 < (byte)LogOnline._0_1_)) {
    pFVar1 = (param_1->ToUserId).Object;
    if (pFVar1 != (FUniqueNetId *)0x0) {
      lVar8 = (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_98);
      if (*(int *)(lVar8 + 8) == 0) {
        plVar14 = (longlong *)0x1;
      }
      else {
        plVar14 = (longlong *)0x1;
      }
    }
    ::FString::PrintfImpl
              (&local_b8,L"Received an onlinenotification that was not handled. Type %s for %s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if ((plVar14 != (longlong *)0x0) && (local_98[0] != (void *)0x0)) {
      FMemory::Free(local_98[0]);
    }
  }
  return;
}

// RemovePlayerNotificationBinding @ 14ec10640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineNotificationHandler::RemovePlayerNotificationBinding
          (FOnlineNotificationHandler *this,FUniqueNetId *param_1,FString *param_2,
          FDelegateHandle param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *this_01;
  <lambda_1> local_res8;
  FString local_28;
  void *local_18 [2];
  
  pFVar3 = (FString *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1,&local_28);
  this_00 = TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
            ::Find((TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                    *)&this->PlayerBindingMap,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((((this_00 ==
         (TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
          *)0x0) ||
       (this_01 = TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_00,param_2),
       this_01 == (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)0x0)) ||
      (local_res8.RemoveHandle.ID = (FDelegateHandle)(FDelegateHandle)param_3.ID,
      iVar2 = TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>::
              RemoveAll<_FOnlineNotificationHandler::RemovePlayerNotificationBinding_::__l8::<lambda_1>_>
                        (this_01,&local_res8), iVar2 == 0)) && (1 < (byte)LogOnline._0_1_)) {
    (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_18);
    ::FString::PrintfImpl
              (&local_28,
               L"Attempted to remove binding that could not be found for player %s type %s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// RemoveSystemNotificationBinding @ 14ec10780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineNotificationHandler::RemoveSystemNotificationBinding
          (FOnlineNotificationHandler *this,FString *param_1,FDelegateHandle param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *this_00;
  <lambda_1> local_res8;
  FString local_18;
  
  this_00 = TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                    *)this,param_1);
  if (((this_00 == (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_res8.RemoveHandle.ID = (FDelegateHandle)(FDelegateHandle)param_2.ID,
      iVar2 = TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>::
              RemoveAll<_FOnlineNotificationHandler::RemoveSystemNotificationBinding_::__l5::<lambda_1>_>
                        (this_00,&local_res8), iVar2 == 0)) && (1 < (byte)LogOnline._0_1_)) {
    ::FString::PrintfImpl
              (&local_18,L"Attempted to remove binding that could not be found for type %s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ResetAllPlayerNotificationBindings @ 14ec10de0

void __thiscall
FOnlineNotificationHandler::ResetAllPlayerNotificationBindings(FOnlineNotificationHandler *this)

{
  TSet<TTuple<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *)&this->PlayerBindingMap);
  return;
}

// ResetPlayerNotificationBindings @ 14ec10eb0

void __thiscall
FOnlineNotificationHandler::ResetPlayerNotificationBindings
          (FOnlineNotificationHandler *this,FUniqueNetId *param_1)

{
  FString *pFVar1;
  TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  void *local_18 [2];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_18);
  this_00 = (TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
               ::Find((TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                       *)&this->PlayerBindingMap,pFVar1);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this_00 !=
      (TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)0x0) {
    TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(this_00);
  }
  return;
}

// ResetSystemNotificationBindings @ 14ec10f10

void __thiscall
FOnlineNotificationHandler::ResetSystemNotificationBindings(FOnlineNotificationHandler *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->SystemBindingMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->SystemBindingMap).field_0x8);
  puVar1 = &(this->SystemBindingMap).field_0xc;
  *(undefined4 *)&(this->SystemBindingMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SystemBindingMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemBindingMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->SystemBindingMap).field_0x2c;
  *(undefined4 *)&(this->SystemBindingMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SystemBindingMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SystemBindingMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->SystemBindingMap).field_0x48 = 1;
    TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

