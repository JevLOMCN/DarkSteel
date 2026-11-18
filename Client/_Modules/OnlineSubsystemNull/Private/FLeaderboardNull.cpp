// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 1

// FindOrCreatePlayerRecord @ 14ed23bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOnlineStatsRow * __thiscall
FOnlineLeaderboardsNull::FLeaderboardNull::FindOrCreatePlayerRecord
          (FLeaderboardNull *this,FUniqueNetId *param_1)

{
  FName FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FOnlineStatsRow *pFVar6;
  FUniqueNetIdNull *pFVar7;
  FString *pFVar8;
  atomic<int> *paVar9;
  undefined1 auStackY_138 [32];
  TRawPtrProxy<FUniqueNetIdNull> local_e8;
  TSharedRef<FUniqueNetIdNull_const_,1> local_e0;
  void *local_d0 [3];
  FString local_b8;
  FUniqueNetIdNull *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined4 local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar6 = FOnlineLeaderboardRead::FindPlayerRecord((FOnlineLeaderboardRead *)this,param_1);
  if (pFVar6 == (FOnlineStatsRow *)0x0) {
    pFVar7 = ::operator_new(0x30);
    if (pFVar7 == (FUniqueNetIdNull *)0x0) {
      pFVar7 = (FUniqueNetIdNull *)0x0;
    }
    else {
      *(undefined8 *)&pFVar7->field_0x8 = 0;
      *(undefined8 *)&pFVar7->field_0x10 = 0;
      *(undefined ***)pFVar7 = &___7FUniqueNetIdString__6B_;
      (**(code **)(*(longlong *)param_1 + 0x30))(param_1,&pFVar7->field_0x18);
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,&pFVar7->field_0x28);
      *(undefined ***)pFVar7 = &___7FUniqueNetIdNull__6B_;
      FVar1.ComparisonIndex.Value = *(uint *)&pFVar7->field_0x28;
      FVar1.Number = *(uint *)&pFVar7->field_0x2c;
      if (FVar1 != NULL_SUBSYSTEM) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetType() == NULL_SUBSYSTEM",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNullTypes.h"
                           ,0xc,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FOnlineStatsRow *)(*pcVar2)();
          return pFVar6;
        }
      }
      if (((*(longlong *)&pFVar7->field_0x8 != 0) && (*(longlong *)&pFVar7->field_0x10 != 0)) &&
         (0 < *(int *)(*(longlong *)&pFVar7->field_0x10 + 8))) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FOnlineStatsRow *)(*pcVar2)();
          return pFVar6;
        }
      }
    }
    local_e8.Object = pFVar7;
    TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
              (&local_e0,&local_e8);
    if (local_e0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar9 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar9 = &(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    pFVar8 = (FString *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_d0);
    ::FString::FString(&local_b8,pFVar8);
    local_a8 = local_e0.Object;
    local_a0 = local_e0.SharedReferenceCount.ReferenceController;
    if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    local_90._0_8_ = (FScriptContainerElement *)0x0;
    local_90._8_8_ = 0;
    local_70 = (void *)0x0;
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    uStack_60 = _UNK_150631d98;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    if (local_d0[0] != (void *)0x0) {
      FMemory::Free(local_d0[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
    local_98 = 0xffffffff;
    if ((*(FString **)&this->field_0x30 <= &local_b8) &&
       (&local_b8 <
        (FString *)
        ((longlong)*(FString **)&this->field_0x30 + (longlong)*(int *)&this->field_0x3c * 0x78))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FOnlineStatsRow *)(*pcVar2)();
        return pFVar6;
      }
    }
    iVar5 = *(int *)&this->field_0x38;
    if (iVar5 == *(int *)&this->field_0x3c) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&this->field_0x30,(int *)&this->field_0x3c);
    }
    *(int *)&this->field_0x38 = iVar5 + 1;
    pFVar8 = (FString *)(*(longlong *)&this->field_0x30 + (longlong)iVar5 * 0x78);
    ::FString::FString(pFVar8,&local_b8);
    pFVar8[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)local_a8;
    *(TReferenceControllerBase<1> **)&pFVar8[1].Data.ArrayNum = local_a0;
    if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8[2].Data.ArrayNum = 0;
    pFVar8[2].Data.ArrayMax = 0;
    pFVar8[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].Data.ArrayNum = 0;
    pFVar8[4].Data.ArrayMax = 0;
    *(undefined4 *)&pFVar8[2].Data.AllocatorInstance.Data = local_98;
    *(undefined4 *)&pFVar8[5].Data.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&pFVar8[5].Data.AllocatorInstance.Data + 4) = 0x80;
    pFVar8[5].Data.ArrayNum = -1;
    pFVar8[5].Data.ArrayMax = 0;
    pFVar8[6].Data.ArrayNum = 0;
    pFVar8[6].Data.ArrayMax = 0;
    *(undefined4 *)&pFVar8[7].Data.AllocatorInstance.Data = 0;
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                 *)&pFVar8[2].Data.ArrayNum,
                (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                 *)local_90);
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_90,0,local_90._8_4_);
    bVar4 = local_90._12_4_ != 0;
    local_90._8_8_ = (ulonglong)(uint)local_90._12_4_ << 0x20;
    if (bVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    }
    uVar3 = local_68._4_4_;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    uStack_60 = 0xffffffff;
    if (0x80 < uVar3) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FOnlineLeaderboardRead::FindPlayerRecord((FOnlineLeaderboardRead *)this,param_1);
  if (pFVar6 == (FOnlineStatsRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindPlayerRecord(UserId)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineLeaderboardInterfaceNull.h"
                       ,0x25,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FOnlineStatsRow *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar6 = FOnlineLeaderboardRead::FindPlayerRecord((FOnlineLeaderboardRead *)this,param_1);
  return pFVar6;
}

