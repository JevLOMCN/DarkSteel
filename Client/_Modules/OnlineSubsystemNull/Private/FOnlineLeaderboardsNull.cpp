// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 10

// ~FOnlineLeaderboardsNull @ 14ed12c50

void __thiscall FOnlineLeaderboardsNull::~FOnlineLeaderboardsNull(FOnlineLeaderboardsNull *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FOnlineLeaderboardsNull__6B_;
  *(undefined4 *)&(this->Leaderboards).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Leaderboards).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Leaderboards);
  IOnlineLeaderboards::~IOnlineLeaderboards((IOnlineLeaderboards *)this);
  return;
}

// FindOrCreateLeaderboard @ 14ed23a40

FLeaderboardNull * __thiscall
FOnlineLeaderboardsNull::FindOrCreateLeaderboard
          (FOnlineLeaderboardsNull *this,FString *param_1,Type param_2,Type param_3)

{
  TMap<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
  *this_00;
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FOnlineStatsRow *pFVar4;
  FLeaderboardNull *pFVar5;
  FString *local_78;
  FString *local_70;
  FString local_68;
  FOnlineStatsRow *local_58;
  FOnlineStatsRow *local_50;
  FOnlineStatsRow *local_48;
  FOnlineStatsRow *local_40;
  FOnlineStatsRow *local_38;
  FOnlineStatsRow *local_30;
  undefined4 local_28;
  
  this_00 = &this->Leaderboards;
  pFVar4 = (FOnlineStatsRow *)
           TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
           ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                   *)this_00,param_1);
  if (pFVar4 == (FOnlineStatsRow *)0x0) {
    local_28 = 0;
    local_68.Data._8_8_ = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar4;
    local_58 = pFVar4;
    local_50 = pFVar4;
    local_48 = pFVar4;
    local_40 = pFVar4;
    local_38 = pFVar4;
    local_30 = pFVar4;
    if (&local_68 != param_1) {
      uVar1 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_68.Data.ArrayMax = 0;
      local_68.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_68,uVar1,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    local_70 = &local_68;
    local_78 = param_1;
    TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>_>
              ((TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>
                *)&stack0x00000008,(bool *)&local_78);
    DestructItems<FOnlineStatsRow,int>(local_38,(int)local_30);
    if (local_38 != (FOnlineStatsRow *)0x0) {
      FMemory::Free(local_38);
    }
    DestructItems<FColumnMetaData,int>((FColumnMetaData *)local_48,(int)local_40);
    if (local_48 != (FOnlineStatsRow *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_58 != (FOnlineStatsRow *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FOnlineStatsRow *)local_68.Data.AllocatorInstance.Data != (FOnlineStatsRow *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
           ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                   *)this_00,param_1);
  if ((pFVar5 == (FLeaderboardNull *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Leaderboards.Find(LeaderboardName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineLeaderboardInterfaceNull.cpp"
                         ,0xa9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FLeaderboardNull *)(*pcVar2)();
    return pFVar5;
  }
  pFVar5 = TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
           ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                   *)this_00,param_1);
  return pFVar5;
}

// FlushLeaderboards @ 14ed243c0

bool __thiscall
FOnlineLeaderboardsNull::FlushLeaderboards(FOnlineLeaderboardsNull *this,FName *param_1)

{
  (**(code **)(this->_padding_ + 0x78))(this,param_1,1);
  return true;
}

// FreeStats @ 14ed243e0

void __thiscall
FOnlineLeaderboardsNull::FreeStats(FOnlineLeaderboardsNull *this,FOnlineLeaderboardRead *param_1)

{
  return;
}

// ReadLeaderboards @ 14ed2b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FOnlineLeaderboardsNull::ReadLeaderboards
          (FOnlineLeaderboardsNull *this,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<FOnlineLeaderboardRead,1> *param_2)

{
  int *piVar1;
  FOnlineLeaderboardRead *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  FOnlineStatsRow *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  FLeaderboardNull *pFVar17;
  FString *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FOnlineStatsRow *pFVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStackY_188 [32];
  uint local_138;
  longlong local_130;
  longlong local_128;
  longlong local_108;
  longlong local_100;
  void *local_e8 [2];
  FString local_d8;
  FScriptContainerElement *local_c8;
  TReferenceControllerBase<1> *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ForElementType<FSetElementId> local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  param_2->Object->ReadState = Failed;
  pFVar2 = param_2->Object;
  DestructItems<FOnlineStatsRow,int>
            ((FOnlineStatsRow *)(pFVar2->Rows).AllocatorInstance.Data,(pFVar2->Rows).ArrayNum);
  (pFVar2->Rows).ArrayNum = 0;
  if ((pFVar2->Rows).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&(pFVar2->Rows).AllocatorInstance,0,&(pFVar2->Rows).ArrayMax);
  }
  lVar19 = (longlong)param_1->ArrayNum;
  if (param_1->ArrayNum != 0) {
    param_2->Object->ReadState = Done;
    pFVar17 = TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
              ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                      *)&this->Leaderboards,(FString *)param_2->Object);
    if ((pFVar17 != (FLeaderboardNull *)0x0) && (uVar22 = 0, 0 < *(int *)&pFVar17->field_0x38)) {
      local_108 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar22 < *(int *)&pFVar17->field_0x38) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        lVar25 = *(longlong *)(*(longlong *)&pFVar17->field_0x30 + 0x10 + local_108);
        pTVar3 = *(TReferenceControllerBase<1> **)
                  (*(longlong *)&pFVar17->field_0x30 + 0x18 + local_108);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar23 = 0;
        if (0 < lVar19) {
          lVar24 = 0;
          local_100 = lVar19;
          do {
            uVar15 = 0;
            if ((int)uVar23 < param_1->ArrayNum) {
              uVar15 = ~uVar23 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            pFVar20 = (param_1->AllocatorInstance).Data;
            pTVar4 = *(TReferenceControllerBase<1> **)(pFVar20 + lVar24 + 8);
            puVar5 = *(undefined8 **)(pFVar20 + lVar24);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (((puVar5 != (undefined8 *)0x0) && (lVar25 != 0)) &&
               (cVar14 = (**(code **)*puVar5)(puVar5,lVar25), cVar14 != '\0')) {
              pFVar2 = param_2->Object;
              uVar15 = 0;
              if ((int)uVar22 < *(int *)&pFVar17->field_0x38) {
                uVar15 = ~uVar22 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              pFVar21 = (FOnlineStatsRow *)(*(longlong *)&pFVar17->field_0x30 + local_108);
              pFVar6 = (FOnlineStatsRow *)(pFVar2->Rows).AllocatorInstance.Data;
              if (((pFVar6 <= pFVar21) && (pFVar21 < pFVar6 + (pFVar2->Rows).ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              iVar16 = (pFVar2->Rows).ArrayNum;
              piVar1 = &(pFVar2->Rows).ArrayMax;
              if (iVar16 == *piVar1) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,&(pFVar2->Rows).AllocatorInstance,piVar1);
              }
              (pFVar2->Rows).ArrayNum = iVar16 + 1;
              FOnlineStatsRow::FOnlineStatsRow
                        ((FOnlineStatsRow *)
                         ((pFVar2->Rows).AllocatorInstance.Data + (longlong)iVar16 * 0x78),pFVar21);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            uVar23 = uVar23 + 1;
            lVar24 = lVar24 + 0x10;
            local_100 = local_100 + -1;
          } while (local_100 != 0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        local_108 = local_108 + 0x78;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < *(int *)&pFVar17->field_0x38);
    }
    uVar11 = _UNK_150631d98;
    uVar10 = ___xmm_00000000ffffffff0000008000000000;
    local_138 = 0;
    if (0 < lVar19) {
      local_128 = 0;
      local_130 = 0;
      do {
        pFVar2 = param_2->Object;
        uVar23 = ~local_138 >> 0x1f;
        uVar22 = 0;
        if ((int)local_138 < param_1->ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        uVar22 = 0;
        uVar7 = *(undefined8 *)((param_1->AllocatorInstance).Data + local_128);
        if (0 < (pFVar2->Rows).ArrayNum) {
          lVar25 = 0;
          do {
            uVar15 = 0;
            if ((int)uVar22 < (pFVar2->Rows).ArrayNum) {
              uVar15 = ~uVar22 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            pFVar20 = (pFVar2->Rows).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar20 + lVar25 + 0x10) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
            puVar5 = *(undefined8 **)(pFVar20 + lVar25 + 0x10);
            cVar14 = (**(code **)*puVar5)(puVar5,uVar7);
            if (cVar14 != '\0') {
              uVar15 = 0;
              if ((int)uVar22 < (pFVar2->Rows).ArrayNum) {
                uVar15 = ~uVar22 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              if ((pFVar2->Rows).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x78 !=
                  (FScriptContainerElement *)0x0) goto LAB_14ed2babc;
              break;
            }
            uVar22 = uVar22 + 1;
            lVar25 = lVar25 + 0x78;
          } while ((int)uVar22 < (pFVar2->Rows).ArrayNum);
        }
        uVar22 = 0;
        if ((int)local_138 < param_1->ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        pFVar20 = (param_1->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)local_138 < param_1->ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        plVar8 = *(longlong **)((param_1->AllocatorInstance).Data + local_128);
        pFVar18 = (FString *)(**(code **)(*plVar8 + 0x30))(plVar8,local_e8);
        ::FString::FString(&local_d8,pFVar18);
        local_c8 = *(FScriptContainerElement **)(pFVar20 + local_128);
        local_c0 = *(TReferenceControllerBase<1> **)(pFVar20 + local_128 + 8);
        if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b0._0_8_ = (FScriptContainerElement *)0x0;
        local_b0._8_8_ = 0;
        local_90 = (void *)0x0;
        local_88 = uVar10;
        uStack_80 = uVar11;
        local_70 = (ForElementType<FSetElementId>)0x0;
        local_68 = 0;
        if (local_e8[0] != (void *)0x0) {
          FMemory::Free(local_e8[0]);
        }
        pFVar2 = param_2->Object;
        local_b8 = 0xffffffff;
        pFVar20 = (pFVar2->Rows).AllocatorInstance.Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar20 + (longlong)(pFVar2->Rows).ArrayMax * 0x78)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        iVar16 = (pFVar2->Rows).ArrayNum;
        piVar1 = &(pFVar2->Rows).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&(pFVar2->Rows).AllocatorInstance,piVar1);
        }
        (pFVar2->Rows).ArrayNum = iVar16 + 1;
        pFVar20 = (pFVar2->Rows).AllocatorInstance.Data + (longlong)iVar16 * 0x78;
        ::FString::FString((FString *)pFVar20,&local_d8);
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20[0x10].field_0x0)->
        AllocatorInstance).Data = local_c8;
        *(TReferenceControllerBase<1> **)&pFVar20[0x18].field_0x0 = local_c0;
        if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined8 *)
         &((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
            *)(pFVar20 + 0x28))->Elements = 0;
        *(undefined4 *)
         &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20[0x20].field_0x0)->
          AllocatorInstance).Data = local_b8;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20[0x30].field_0x0)->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(undefined8 *)&pFVar20[0x48].field_0x0 = 0;
        *(undefined4 *)
         &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20[0x50].field_0x0)->
          AllocatorInstance).Data = 0;
        *(undefined4 *)&pFVar20[0x54].field_0x0 = 0x80;
        *(int *)&pFVar20[0x58].field_0x0 = -1;
        *(int *)&pFVar20[0x5c].field_0x0 = 0;
        *(undefined8 *)&pFVar20[0x68].field_0x0 = 0;
        *(undefined4 *)
         &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20[0x70].field_0x0)->
          AllocatorInstance).Data = 0;
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                     *)(pFVar20 + 0x28),
                    (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                     *)local_b0);
        local_68 = 0;
        if (local_70 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_70);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_b0,0,local_b0._8_4_);
        iVar16 = SUB84(local_b0._8_8_,4);
        local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
        if (iVar16 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
        }
        uVar22 = local_88._4_4_;
        uStack_80 = 0xffffffff;
        local_88 = (ulonglong)local_88._4_4_ << 0x20;
        if (0x80 < uVar22) {
          local_88 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free(local_90);
        }
        if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_b0._0_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
LAB_14ed2babc:
        local_138 = local_138 + 1;
        local_130 = local_130 + 1;
        local_128 = local_128 + 0x10;
      } while (local_130 < lVar19);
    }
  }
  (**(code **)(this->_padding_ + 0x40))(this,param_2->Object->ReadState == Done);
  return true;
}

// ReadLeaderboardsAroundRank @ 14ed2bb40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineLeaderboardsNull::ReadLeaderboardsAroundRank
          (FOnlineLeaderboardsNull *this,int param_1,uint param_2,
          TSharedRef<FOnlineLeaderboardRead,1> *param_3)

{
  FString local_18;
  
  if (2 < (byte)LogOnlineLeaderboard._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"FOnlineLeaderboardsNull::ReadLeaderboardsAroundRank is currently not supported.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ReadLeaderboardsAroundUser @ 14ed2bbb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineLeaderboardsNull::ReadLeaderboardsAroundUser
          (FOnlineLeaderboardsNull *this,TSharedRef<FUniqueNetId_const_,1> *param_1,uint param_2,
          TSharedRef<FOnlineLeaderboardRead,1> *param_3)

{
  FString local_18;
  
  if (2 < (byte)LogOnlineLeaderboard._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"FOnlineLeaderboardsNull::ReadLeaderboardsAroundUser is currently not supported.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ReadLeaderboardsForFriends @ 14ed2bc30

bool __thiscall
FOnlineLeaderboardsNull::ReadLeaderboardsForFriends
          (FOnlineLeaderboardsNull *this,int param_1,TSharedRef<FOnlineLeaderboardRead,1> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  FLeaderboardNull *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<FUniqueNetId_const_,1> local_78;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<FUniqueNetId_const_,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  uVar10 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  if ((this->NullSubsystem == (FOnlineSubsystemNull *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NullSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineLeaderboardInterfaceNull.cpp"
                         ,0x39,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (**(code **)(this->NullSubsystem->_padding_ + 0x80))(this->NullSubsystem,&local_68);
  if (local_68 != (longlong *)0x0) {
    if ((local_68 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar7 = (longlong *)(**(code **)(*local_68 + 0x110))(local_68,local_48,param_1);
    lVar1 = *plVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (lVar1 != 0) {
      if ((local_68 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      plVar7 = (longlong *)(**(code **)(*local_68 + 0x110))(local_68,local_38,param_1);
      if ((*plVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_78.Object = (FUniqueNetId *)*plVar7;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar7[1];
      plVar7[1] = 0;
      *plVar7 = 0;
      if ((local_78.Object == (FUniqueNetId *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (((local_88.AllocatorInstance.Data <= &local_78) &&
          (&local_78 <
           (TSharedRef<FUniqueNetId_const_,1> *)
           (local_88.AllocatorInstance.Data + (longlong)local_88.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = local_88.ArrayNum;
      if (local_88.ArrayNum == local_88.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88.AllocatorInstance,&local_88.ArrayMax);
      }
      local_88.ArrayNum = iVar5 + 1;
      *(FUniqueNetId **)&local_88.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           local_78.Object;
      *(TReferenceControllerBase<1> **)
       (local_88.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    }
  }
  pFVar8 = TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
           ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                   *)&this->Leaderboards,(FString *)param_2->Object);
  if ((pFVar8 != (FLeaderboardNull *)0x0) && (uVar11 = uVar10, 0 < *(int *)&pFVar8->field_0x38)) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < *(int *)&pFVar8->field_0x38) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(longlong *)(*(longlong *)&pFVar8->field_0x30 + 0x10 + uVar11) != 0) {
        uVar6 = 0;
        if ((int)uVar9 < *(int *)&pFVar8->field_0x38) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar1 = *(longlong *)&pFVar8->field_0x30;
        if ((*(longlong *)(lVar1 + 0x10 + uVar11) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_58.Object = *(FUniqueNetId **)(lVar1 + 0x10 + uVar11);
        local_58.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar1 + 0x18 + uVar11);
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_58.Object == (FUniqueNetId *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSharedRef<FUniqueNetId_const_,1>_>(&local_88,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x78;
    } while ((int)(uVar9 + 1) < *(int *)&pFVar8->field_0x38);
  }
  uVar4 = (**(code **)(this->_padding_ + 8))(this,&local_88,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)local_88.AllocatorInstance.Data,local_88.ArrayNum)
  ;
  if ((TSharedRef<FUniqueNetId_const_,1> *)local_88.AllocatorInstance.Data !=
      (TSharedRef<FUniqueNetId_const_,1> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// WriteLeaderboards @ 14ed33470

bool __thiscall
FOnlineLeaderboardsNull::WriteLeaderboards
          (FOnlineLeaderboardsNull *this,FName *param_1,FUniqueNetId *param_2,
          FOnlineLeaderboardWrite *param_3)

{
  FStatsColumnArray *this_00;
  FVariantData *this_01;
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FLeaderboardNull *pFVar9;
  FOnlineStatsRow *pFVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FString *pFVar13;
  FVariantData *this_02;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
  *this_03;
  ForElementType<unsigned_int> FVar16;
  int local_res20 [2];
  int local_168 [2];
  longlong local_160;
  longlong local_158;
  FString local_148;
  void *local_138;
  FLeaderboardNull *local_130;
  FColumnMetaData *local_128;
  FLeaderboardNull *local_120;
  FOnlineStatsRow *local_118;
  FLeaderboardNull *local_110;
  undefined4 local_108;
  undefined1 local_f8 [16];
  TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
  *local_e8;
  ForElementType<unsigned_int> local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  longlong *local_b0;
  int iStack_a8;
  uint uStack_a4;
  ForElementType<unsigned_int> local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  int local_90;
  undefined4 uStack_8c;
  FString *local_80;
  FString *local_78;
  FString *local_70;
  FVariantData *local_68;
  undefined4 local_44;
  
  local_158 = (longlong)*(int *)&(param_3->LeaderboardNames).field_0x8;
  uVar15 = 0;
  if (0 < local_158) {
    this_03 = (TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
               *)&this->Leaderboards;
    FVar16 = (ForElementType<unsigned_int>)&param_3->_padding_;
    local_160 = 0;
    local_e8 = this_03;
    local_e0 = FVar16;
    do {
      lVar11 = local_160;
      uVar7 = 0;
      if ((int)uVar15 < *(int *)&(param_3->LeaderboardNames).field_0x8) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar13 = (FString *)(lVar11 + *(longlong *)&param_3->LeaderboardNames);
      pFVar9 = TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
               ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                       *)this_03,pFVar13);
      if (pFVar9 == (FLeaderboardNull *)0x0) {
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138 = (void *)0x0;
        local_128 = (FColumnMetaData *)0x0;
        local_118 = (FOnlineStatsRow *)0x0;
        local_108 = 0;
        local_148.Data._8_8_ = 0;
        local_130 = pFVar9;
        local_120 = pFVar9;
        local_110 = pFVar9;
        if (&local_148 != pFVar13) {
          uVar7 = (pFVar13->Data).ArrayNum;
          _Src = (pFVar13->Data).AllocatorInstance.Data;
          local_148.Data.ArrayMax = 0;
          local_148.Data.ArrayNum = uVar7;
          if (uVar7 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar7,0,(ForAnyElementType *)&local_148,uVar7,&local_148.Data.ArrayMax);
            memcpy(local_148.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar7 * 2);
          }
        }
        local_78 = &local_148;
        local_80 = pFVar13;
        TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>_>
                  (this_03,(TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>
                            *)local_f8,(bool *)&local_80);
        DestructItems<FOnlineStatsRow,int>(local_118,(int)local_110);
        if (local_118 != (FOnlineStatsRow *)0x0) {
          FMemory::Free(local_118);
        }
        DestructItems<FColumnMetaData,int>(local_128,(int)local_120);
        if (local_128 != (FColumnMetaData *)0x0) {
          FMemory::Free(local_128);
        }
        if (local_138 != (void *)0x0) {
          FMemory::Free(local_138);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
               ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                       *)this_03,pFVar13);
      if ((pFVar9 == (FLeaderboardNull *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Leaderboards.Find(LeaderboardName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineLeaderboardInterfaceNull.cpp"
                             ,0xa9,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar9 = TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
               ::Find((TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
                       *)this_03,pFVar13);
      if ((pFVar9 == (FLeaderboardNull *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Leaderboard",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineLeaderboardInterfaceNull.cpp"
                             ,0x6c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar10 = FLeaderboardNull::FindOrCreatePlayerRecord(pFVar9,param_2);
      if ((pFVar10 == (FOnlineStatsRow *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PlayerRow",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineLeaderboardInterfaceNull.cpp"
                             ,0x6f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = *(uint *)((longlong)FVar16 + 0x18);
      iStack_a8 = 0;
      local_90 = 0;
      uStack_a4 = 1;
      uStack_94 = 0;
      if (uVar7 != 0) {
        FVar14 = FVar16;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = *(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10);
        }
        uVar2 = *(uint *)FVar14;
        while (uVar2 == 0) {
          lVar11 = (longlong)iStack_a8;
          local_90 = local_90 + 0x20;
          iStack_a8 = iStack_a8 + 1;
          uStack_94 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_a8)
          goto LAB_14ed3374d;
          uVar2 = ((uint *)((longlong)FVar14 + 4))[lVar11];
        }
        uStack_a4 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uStack_a4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_f8._4_4_ = (undefined4)lVar11;
        uStack_94 = local_90 + -1 + local_f8._4_4_;
        if ((int)uVar7 < (int)uStack_94) {
          uStack_94 = uVar7;
        }
      }
LAB_14ed3374d:
      local_d8 = &param_3->_padding_;
      uStack_98 = 0xffffffff;
      uStack_8c = local_44;
      TStack_d0._padding_ = CONCAT44(uStack_a4,iStack_a8);
      TStack_d0.CurrentBitIndex = uStack_94;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      TStack_d0._28_4_ = local_44;
      TStack_d0.BaseBitIndex = local_90;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar16;
      local_b0 = local_d8;
      local_a0 = FVar16;
      if ((int)uStack_94 < (int)uVar7) {
        this_00 = &pFVar10->Columns;
        uVar7 = uStack_94;
        do {
          pFVar13 = (FString *)((longlong)(int)uVar7 * 0x38 + *local_d8);
          iVar3 = (pFVar13->Data).ArrayNum;
          this_01 = (FVariantData *)(pFVar13 + 1);
          iVar8 = iVar3 + -1;
          if (iVar3 == 0) {
            pwVar12 = L"";
            iVar8 = 0;
          }
          else {
            pwVar12 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar12);
          iVar8 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                              *)this_00,uVar7,pFVar13);
          if (iVar8 == -1) {
LAB_14ed3385d:
            local_70 = pFVar13;
            local_68 = this_01;
            TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
                      ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<FString_const_&,FVariantData_const_&> *)(local_f8 + 8),
                       (bool *)&local_70);
          }
          else {
            lVar11 = (longlong)iVar8 * 0x38 + *(longlong *)&this_00->field_0x0;
            this_02 = (FVariantData *)(lVar11 + 0x10);
            if (lVar11 == 0) {
              this_02 = (FVariantData *)0x0;
            }
            if (this_02 == (FVariantData *)0x0) goto LAB_14ed3385d;
            if ((this_02->Type == this_01->Type) && (this_01->Type == Int32)) {
              FVariantData::GetValue(this_01,local_168);
              FVariantData::GetValue(this_02,local_res20);
              if (param_3->SortMethod == Ascending) {
                bVar5 = local_168[0] < local_res20[0];
              }
              else {
                if (param_3->SortMethod != Descending) goto LAB_14ed33850;
                bVar5 = local_res20[0] < local_168[0];
              }
              if (bVar5) goto LAB_14ed33850;
            }
            else {
LAB_14ed33850:
              FVariantData::operator=(this_02,this_01);
            }
          }
          TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
          this_03 = local_e8;
          FVar16 = local_e0;
          uVar7 = TStack_d0.CurrentBitIndex;
        } while (TStack_d0.CurrentBitIndex < (int)*(uint *)((longlong)TStack_d0.Array + 0x18));
      }
      uVar15 = uVar15 + 1;
      local_160 = local_160 + 0x10;
      local_158 = local_158 + -1;
    } while (local_158 != 0);
  }
  return true;
}

// WriteOnlinePlayerRatings @ 14ed33900

bool __thiscall
FOnlineLeaderboardsNull::WriteOnlinePlayerRatings
          (FOnlineLeaderboardsNull *this,FName *param_1,int param_2,
          TArray<FOnlinePlayerScore,TSizedDefaultAllocator<32>_> *param_3)

{
  return false;
}

