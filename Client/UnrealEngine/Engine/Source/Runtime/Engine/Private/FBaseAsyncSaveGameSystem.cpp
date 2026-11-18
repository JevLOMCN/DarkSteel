// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// DeleteGame @ 1484cfaa0

bool __thiscall
FBaseAsyncSaveGameSystem::DeleteGame
          (FBaseAsyncSaveGameSystem *this,bool param_1,wchar_t *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> *paVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined4 local_res8 [2];
  undefined8 *local_78;
  undefined8 *local_70;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined8 local_58 [5];
  undefined8 local_30;
  
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = pTVar7 + 1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar7[1]._padding_ = 0;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    paVar8 = &pTVar7->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_res8);
  pcVar3 = *(code **)((longlong)*this + 0x90);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_58[0] = 0;
  local_30 = 0;
  local_68 = pTVar9;
  local_60 = pTVar7;
  (*pcVar3)(this,&local_78,param_1,param_2,local_res8[0],local_58,&local_68);
  pcVar3 = *(code **)((longlong)*this + 0xa0);
  local_70 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_78 + 6) = *(int *)(local_78 + 6) + 1;
    UNLOCK();
  }
  (*pcVar3)(this,&local_70);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  lVar4 = pTVar9->_padding_;
  if (local_78 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_78 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)(char)lVar4;
}

// DeleteGameAsync @ 1484cfc60

void __thiscall
FBaseAsyncSaveGameSystem::DeleteGameAsync
          (FBaseAsyncSaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool)> *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  local_40 = 0;
  pcVar3 = *(code **)((longlong)*this + 0x90);
  local_68[0] = *(longlong *)param_4;
  local_80 = 0;
  uStack_78 = 0;
  if (local_68[0] != 0) {
    puVar4 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar4)(0,local_58);
  }
  (*pcVar3)(this,&local_88,param_1,param_2,param_3.InternalId,local_68,&local_80);
  if (local_88 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_88)(local_88,1);
    }
  }
  if (*(longlong *)param_4 != 0) {
    plVar5 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// DoesSaveGameExistAsync @ 1484d4ea0

void __thiscall
FBaseAsyncSaveGameSystem::DoesSaveGameExistAsync
          (FBaseAsyncSaveGameSystem *this,wchar_t *param_1,FPlatformUserId param_2,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,ISaveGameSystem::ESaveExistsResult)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  local_40 = 0;
  pcVar3 = *(code **)((longlong)*this + 0x78);
  local_68[0] = *(longlong *)param_3;
  local_80 = 0;
  uStack_78 = 0;
  if (local_68[0] != 0) {
    puVar4 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar4)(0,local_58);
  }
  (*pcVar3)(this,&local_88,param_1,param_2.InternalId,local_68,&local_80);
  if (local_88 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_88)(local_88,1);
    }
  }
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// DoesSaveGameExistWithResult @ 1484d5280

ESaveExistsResult __thiscall
FBaseAsyncSaveGameSystem::DoesSaveGameExistWithResult
          (FBaseAsyncSaveGameSystem *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FBaseAsyncSaveGameSystem FVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  ESaveExistsResult EVar7;
  TReferenceControllerBase<1> *pTVar8;
  atomic<int> *paVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined4 local_res8 [2];
  undefined8 *local_res20;
  undefined8 *local_78;
  TReferenceControllerBase<1> *local_70;
  TReferenceControllerBase<1> *local_68;
  undefined8 local_58 [5];
  undefined8 local_30;
  
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar9 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_W4ESaveExistsResult_ISaveGameSystem___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar8[1]._padding_ = 3;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
    }
    paVar9 = &pTVar8->SharedReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_res8);
  FVar3 = *this;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_58[0] = 0;
  local_30 = 0;
  local_70 = pTVar10;
  local_68 = pTVar8;
  (**(code **)((longlong)FVar3 + 0x78))(this,&local_res20,param_1,local_res8[0],local_58,&local_70);
  pcVar4 = *(code **)((longlong)*this + 0xa0);
  local_78 = local_res20;
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_res20 + 6) = *(int *)(local_res20 + 6) + 1;
    UNLOCK();
  }
  (*pcVar4)(this,&local_78);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
  }
  lVar5 = pTVar10->_padding_;
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res20)(local_res20,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (ESaveExistsResult)lVar5;
}

// GetSaveGameNames @ 1484da840

bool __thiscall
FBaseAsyncSaveGameSystem::GetSaveGameNames
          (FBaseAsyncSaveGameSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  int *piVar1;
  int iVar2;
  FBaseAsyncSaveGameSystem FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined4 local_res8 [2];
  undefined8 *local_res10;
  undefined8 *local_res20;
  TReferenceControllerBase<1> *local_88;
  TReferenceControllerBase<1> *local_80;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_78;
  TReferenceControllerBase<1> *local_70;
  undefined8 local_68 [5];
  undefined8 local_40;
  
  pTVar9 = ::operator_new(0x18);
  pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar9 + 1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar9[1]._padding_ = 0;
    if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar10 = ::operator_new(0x20);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar10 + 1);
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[1]._padding_ = 0;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar12 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_res8);
  FVar3 = *this;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68[0] = 0;
  local_40 = 0;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = pTVar11;
  local_80 = pTVar9;
  local_78 = pTVar12;
  local_70 = pTVar10;
  (**(code **)((longlong)FVar3 + 0x98))
            (this,&local_res10,local_res8[0],&local_78,local_68,&local_88);
  pcVar5 = *(code **)((longlong)*this + 0xa0);
  local_res20 = local_res10;
  if (local_res10 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_res10 + 6) = *(int *)(local_res10 + 6) + 1;
    UNLOCK();
  }
  (*pcVar5)(this,&local_res20);
  if (param_1 != pTVar12) {
    DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (param_1->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar12->ArrayNum;
    param_1->ArrayMax = pTVar12->ArrayMax;
    pTVar12->ArrayNum = 0;
    pTVar12->ArrayMax = 0;
  }
  if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  lVar6 = pTVar11->_padding_;
  if (local_res10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res10)(local_res10,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return (bool)(char)lVar6;
}

// GetSaveGameNamesAsync @ 1484daad0

void __thiscall
FBaseAsyncSaveGameSystem::GetSaveGameNamesAsync
          (FBaseAsyncSaveGameSystem *this,FPlatformUserId param_1,
          TFunction<void___cdecl(FPlatformUserId,bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&)>
          *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *local_88;
  TReferenceControllerBase<1> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_58 [2];
  undefined1 local_48 [24];
  undefined8 local_30;
  
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = pTVar5 + 1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_70 = 0;
  uStack_68 = 0;
  local_30 = 0;
  pcVar3 = *(code **)((longlong)*this + 0x98);
  local_58[0] = *(longlong *)param_2;
  if (local_58[0] != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(0,local_48);
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = pTVar8;
  local_78 = pTVar5;
  (*pcVar3)(this,&local_88,param_1.InternalId,&local_80,local_58,&local_70);
  if (local_88 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_88)(local_88,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// LoadGame @ 1484e10b0

bool __thiscall
FBaseAsyncSaveGameSystem::LoadGame
          (FBaseAsyncSaveGameSystem *this,bool param_1,wchar_t *param_2,int param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  int *piVar2;
  int iVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined4 local_res8 [2];
  undefined1 local_res10;
  wchar_t *local_res18;
  int local_res20;
  undefined8 *local_a8;
  undefined8 *local_a0;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_90;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 local_78 [5];
  undefined8 local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  pTVar10 = ::operator_new(0x18);
  pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13 = pTVar10 + 1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar10[1]._padding_ = 0;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pTVar11 = ::operator_new(0x20);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1 = pTVar11 + 1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ = 0;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_EV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    aVar4 = (atomic<int>)param_4->ArrayNum;
    pFVar5 = (param_4->AllocatorInstance).Data;
    pTVar11[1].SharedReferenceCount = aVar4;
    if (aVar4 == (atomic<int>)0x0) {
      pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)aVar4,0,(ForAnyElementType *)pTVar1,(int)aVar4,
                 (int *)&pTVar11[1].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar1->_padding_,pFVar5,(longlong)(int)aVar4);
    }
    pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar11 + 1);
    param_2 = local_res18;
    if ((pTVar12 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), param_2 = local_res18, bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_res8);
  pcVar6 = *(code **)((longlong)*this + 0x88);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78[0] = 0;
  local_50 = 0;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = pTVar13;
  local_90 = pTVar10;
  local_88 = pTVar12;
  local_80 = pTVar11;
  (*pcVar6)(this,&local_a8,local_res10,param_2,local_res8[0],&local_88,local_78,&local_98);
  pcVar6 = *(code **)((longlong)*this + 0xa0);
  local_a0 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_a8 + 6) = *(int *)(local_a8 + 6) + 1;
    UNLOCK();
  }
  (*pcVar6)(this,&local_a0);
  if (param_4 != pTVar12) {
    pFVar5 = (param_4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (param_4->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_4->ArrayNum = (int)*(atomic<int> *)&pTVar12->ArrayNum;
    param_4->ArrayMax = (int)*(atomic<int> *)&pTVar12->ArrayMax;
    *(undefined8 *)&pTVar12->ArrayNum = 0;
  }
  if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  lVar7 = pTVar13->_padding_;
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a8 + 6);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return (bool)(char)lVar7;
}

// LoadGameAsync @ 1484e1390

void __thiscall
FBaseAsyncSaveGameSystem::LoadGameAsync
          (FBaseAsyncSaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)>
          *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *local_90;
  TReferenceControllerBase<1> *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = pTVar5 + 1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_EV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_40 = 0;
  pcVar3 = *(code **)((longlong)*this + 0x88);
  local_68[0] = *(longlong *)param_4;
  if (local_68[0] != 0) {
    puVar6 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar6)(0,local_58);
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = pTVar8;
  local_80 = pTVar5;
  (*pcVar3)(this,&local_90,param_1,param_2,param_3.InternalId,&local_88,local_68,&local_78);
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_90 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_90)(local_90,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (*(longlong *)param_4 != 0) {
    plVar7 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// LoadGameIfExistsAsync @ 1484e1840

void __thiscall
FBaseAsyncSaveGameSystem::LoadGameIfExistsAsync
          (FBaseAsyncSaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)>
          *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  local_40 = 0;
  pcVar1 = *(code **)((longlong)*this + 0x50);
  local_68[0] = *(longlong *)param_4;
  if (local_68[0] != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,local_58);
  }
  (*pcVar1)(this,param_1,param_2,param_3.InternalId,local_68);
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

// SaveGame @ 1484f3050

bool __thiscall
FBaseAsyncSaveGameSystem::SaveGame
          (FBaseAsyncSaveGameSystem *this,bool param_1,wchar_t *param_2,int param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 local_res8 [2];
  undefined1 local_res10;
  wchar_t *local_res18;
  undefined8 *local_98;
  undefined8 *local_90;
  TReferenceControllerBase<1> *local_88;
  TReferenceControllerBase<1> *local_80;
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *local_70;
  undefined8 local_68 [5];
  undefined8 local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  pTVar8 = ::operator_new(0x18);
  pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController__N_00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar8[1]._padding_ = 0;
    if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar9 = ::operator_new(0x20);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar10 = pTVar9 + 1;
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBV__TArray_EV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar10->_padding_ = 0;
    aVar3 = (atomic<int>)param_4->ArrayNum;
    _Src = (param_4->AllocatorInstance).Data;
    pTVar9[1].SharedReferenceCount = aVar3;
    if (aVar3 == (atomic<int>)0x0) {
      pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)aVar3,0,(ForAnyElementType *)pTVar10,(int)aVar3,
                 (int *)&pTVar9[1].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar10->_padding_,_Src,(longlong)(int)aVar3);
    }
    pTVar10 = pTVar9 + 1;
    param_2 = local_res18;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), param_2 = local_res18, bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_res8);
  pcVar4 = *(code **)((longlong)*this + 0x80);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68[0] = 0;
  local_40 = 0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = pTVar11;
  local_80 = pTVar8;
  local_78 = pTVar10;
  local_70 = pTVar9;
  (*pcVar4)(this,&local_98,local_res10,param_2,local_res8[0],&local_78,local_68,&local_88);
  pcVar4 = *(code **)((longlong)*this + 0xa0);
  local_90 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_98 + 6) = *(int *)(local_98 + 6) + 1;
    UNLOCK();
  }
  (*pcVar4)(this,&local_90);
  if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  lVar5 = pTVar11->_padding_;
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (bool)(char)lVar5;
}

// SaveGameAsync @ 1484f3300

void __thiscall
FBaseAsyncSaveGameSystem::SaveGameAsync
          (FBaseAsyncSaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TSharedRef<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,1> *param_4,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool)> *param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *local_90;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  local_40 = 0;
  pcVar3 = *(code **)((longlong)*this + 0x80);
  local_68[0] = *(longlong *)param_5;
  local_78 = 0;
  uStack_70 = 0;
  if (local_68[0] != 0) {
    puVar4 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar4)(0,local_58);
  }
  local_88 = param_4->Object;
  local_80 = (param_4->SharedReferenceCount).ReferenceController;
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(this,&local_90,param_1,param_2,param_3.InternalId,&local_88,local_68,&local_78);
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_90 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_90)(local_90,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  if (*(longlong *)param_5 != 0) {
    plVar5 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// WaitForAsyncTask @ 148501540

void __thiscall
FBaseAsyncSaveGameSystem::WaitForAsyncTask(FBaseAsyncSaveGameSystem *this,FTaskHandle param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  FThreadHeartBeat *pFVar5;
  FGameThreadHitchHeartBeatThreaded *pFVar6;
  
  bVar4 = IsInGameThread();
  if (bVar4) {
    pFVar5 = FThreadHeartBeat::GetNoInit();
    if (pFVar5 != (FThreadHeartBeat *)0x0) {
      FThreadHeartBeat::SuspendHeartBeat(pFVar5,false);
    }
    pFVar6 = FGameThreadHitchHeartBeatThreaded::Get();
    FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar6);
    while ((*(longlong *)param_1.Pimpl.Reference != 0 &&
           (*(char *)(*(longlong *)param_1.Pimpl.Reference + 0xd0) == '\0'))) {
      FWindowsPlatformMisc::PumpMessagesOutsideMainLoop();
    }
    pFVar6 = FGameThreadHitchHeartBeatThreaded::Get();
    FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar6);
    if (pFVar5 != (FThreadHeartBeat *)0x0) {
      pFVar5 = FThreadHeartBeat::GetNoInit();
      if (pFVar5 != (FThreadHeartBeat *)0x0) {
        FThreadHeartBeat::ResumeHeartBeat(pFVar5,false);
      }
    }
  }
  else if (*(FTaskBase **)param_1.Pimpl.Reference != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)param_1.Pimpl.Reference);
  }
  puVar3 = *(undefined8 **)param_1.Pimpl.Reference;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001485015fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

