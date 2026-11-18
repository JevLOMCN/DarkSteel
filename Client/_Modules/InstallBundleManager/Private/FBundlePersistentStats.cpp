// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 3

// ~FBundlePersistentStats @ 148bc3bc0

void __thiscall
InstallBundleUtil::PersistentStats::FBundlePersistentStats::~FBundlePersistentStats
          (FBundlePersistentStats *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  pFVar1 = (this->BundleName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPersistentStatsBase::~FPersistentStatsBase((FPersistentStatsBase *)this);
  return;
}

// GetFullPathForStatFile @ 148bcb290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
InstallBundleUtil::PersistentStats::FBundlePersistentStats::GetFullPathForStatFile
          (FBundlePersistentStats *this,FString *__return_storage_ptr__)

{
  size_t sVar1;
  undefined1 auStack_88 [32];
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  FScriptContainerElement *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  ::FString::ConcatFC(&local_68,&this->BundleName,L".json");
  local_58.DataPtr = FGenericPlatformMisc::GamePersistentDownloadDir();
  local_58.Size = 0;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar1;
  }
  local_48 = L"PersistentStats";
  local_40 = 0xf;
  local_38 = L"BundleStats";
  local_20 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_20 = 0;
  }
  local_30 = 0xb;
  local_28 = local_68.Data.AllocatorInstance.Data;
  FPaths::CombineInternal(__return_storage_ptr__,&local_58,4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Serialize @ 148bd47a0

void __thiscall
InstallBundleUtil::PersistentStats::FBundlePersistentStats::Serialize
          (FBundlePersistentStats *this,FJsonSerializerBase *param_1,bool param_2)

{
  uint uVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FJsonObject *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  TSharedPtr<FJsonObject,1> *pTVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FPersistentTimerData local_1b8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FJsonObject *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  TSharedPtr<FJsonObject,1> local_118;
  wchar_t *local_108;
  undefined8 uStack_100;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  wchar_t *local_e8;
  undefined8 uStack_e0;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *pTStack_60;
  undefined4 local_3c;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  uStack_100 = CONCAT44(uStack_1cc,10);
  local_108 = L"BundleName";
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_108,&this->BundleName);
  uStack_f0 = CONCAT44(uStack_1cc,0x12);
  local_f8 = L"AnalyticsSessionID";
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_f8,&this->_padding_);
  uStack_e0 = CONCAT44(uStack_1cc,10);
  local_e8 = L"CountStats";
  (**(code **)((longlong)*param_1 + 0xd8))(param_1,&local_e8,&this->_padding_);
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    iStack_1c0 = 0xb;
    local_1c8 = L"TimingStats";
    uStack_a0 = CONCAT44(uStack_1bc,0xb);
    local_a8 = L"TimingStats";
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_a8);
    plVar8 = &this->_padding_;
    TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                *)plVar8);
    local_120 = 0;
    stack0xfffffffffffffeb8 = local_88._16_16_;
    local_158 = (longlong *)local_88._0_8_;
    auStack_150._0_8_ = local_88._8_8_;
    local_138 = local_68;
    pTStack_130 = pTStack_60;
    uVar13 = local_88._24_8_ >> 0x20;
    local_128 = (TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                 *)plVar8;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        plVar8 = local_158;
        lVar12 = (longlong)(int)uVar13 * 0x30;
        local_1c8 = *(wchar_t **)(lVar12 + *local_158);
        iVar15 = *(int *)(lVar12 + 8 + *local_158);
        iStack_1c0 = iVar15 + -1;
        if (iVar15 == 0) {
          iStack_1c0 = 0;
        }
        uStack_90 = CONCAT44(uStack_1bc,iStack_1c0);
        local_98 = local_1c8;
        (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_98);
        plVar8 = (longlong *)(*plVar8 + 0x10 + lVar12);
        (**(code **)(*plVar8 + 0x50))(plVar8,param_1,1);
        (**(code **)((longlong)*param_1 + 0x20))(param_1);
        uStack_140 = uStack_140 & ~auStack_150._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
        uVar13 = (ulonglong)uStack_13c;
      } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
      if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
        iVar15 = 1;
        uVar7 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34
        ;
        if (3 < uVar7) {
          uVar13 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar15 = 1 << ((byte)lVar12 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_128->HashSize < iVar15)) || (iVar15 < local_128->HashSize))
        {
          local_128->HashSize = iVar15;
          TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::Rehash(local_128);
        }
      }
    }
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_1c8);
    if ((*plVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*plVar8;
    local_d8._12_4_ = uStack_1cc;
    local_d8.Size = 0xb;
    local_d8.DataPtr = L"TimingStats";
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"TimingStats");
    pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(this_00,uVar7,&local_d8);
    if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
       (pTVar9->Object->Type != Object)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1bc,iStack_1c0));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1bc,iStack_1c0));
      plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_b8);
      if ((*plVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_c8._12_4_ = uStack_1cc;
      local_c8.Size = 0xb;
      local_c8.DataPtr = L"TimingStats";
      pTVar10 = FJsonObject::GetObjectField((FJsonObject *)*plVar8,&local_c8);
      pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar10->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
      if ((pFVar3 == (FJsonObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = *(int *)&(pFVar3->Values).field_0x28;
      local_1b8.CurrentValue = (double)&(pFVar3->Values).field_0x10;
      iVar14 = 0;
      uVar7 = 1;
      local_198 = 0;
      iStack_19c = 0;
      if (iVar15 != 0) {
        puVar16 = *(uint **)&(pFVar3->Values).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)local_1b8.CurrentValue;
        }
        uVar1 = *puVar16;
        while (uVar1 == 0) {
          lVar12 = (longlong)iVar14;
          local_198 = local_198 + 0x20;
          iVar14 = iVar14 + 1;
          iStack_19c = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148bd4a71;
          uVar1 = puVar16[lVar12 + 1];
        }
        uVar7 = -uVar1 & uVar1;
        uVar13 = (ulonglong)uVar7 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iStack_19c = local_198 + -1 + (int)lVar12;
        if (iVar15 < iStack_19c) {
          iStack_19c = iVar15;
        }
      }
LAB_148bd4a71:
      local_1b8.LastUpdateTime = (double)CONCAT44(uVar7,iVar14);
      uStack_1a0 = 0xffffffff;
      uStack_194 = local_3c;
      TStack_180.CurrentBitIndex = iStack_19c;
      TStack_180.UnvisitedBitMask = 0xffffffff;
      TStack_180._padding_ = (longlong)local_1b8.LastUpdateTime;
      TStack_180._28_4_ = local_3c;
      TStack_180.BaseBitIndex = local_198;
      local_1b8._padding_ = (longlong)pFVar3;
      local_188 = pFVar3;
      TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1b8.CurrentValue;
      if (iStack_19c < iVar15) {
        iVar15 = iStack_19c;
        do {
          pFVar3 = local_188;
          local_1b8._padding_ =
               (longlong)&___7FPersistentTimerData_PersistentStats_InstallBundleUtil__6B_;
          local_1b8.LastUpdateTime = 0.0;
          local_1b8.CurrentValue = 0.0;
          lVar12 = *(longlong *)&local_188->Values;
          if ((*(longlong *)(lVar12 + 0x10 + (longlong)iVar15 * 0x28) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar11 = (undefined8 *)
                    (**(code **)**(undefined8 **)(lVar12 + 0x10 + (longlong)iVar15 * 0x28))();
          local_118.Object = (FJsonObject *)*puVar11;
          local_118.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar11[1];
          if (local_118.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FJsonSerializable::FromJson((FJsonSerializable *)&local_1b8,&local_118);
          TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
          ::
          Emplace<FString_const_&,InstallBundleUtil::PersistentStats::FPersistentTimerData_const_&>
                    ((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                      *)&this->_padding_,
                     (FString *)
                     (*(longlong *)&pFVar3->Values + (longlong)TStack_180.CurrentBitIndex * 0x28),
                     &local_1b8);
          FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_1b8);
          TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
          iVar15 = TStack_180.CurrentBitIndex;
        } while (TStack_180.CurrentBitIndex < (TStack_180.Array)->NumBits);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

