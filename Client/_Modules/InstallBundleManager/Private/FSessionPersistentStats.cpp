// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 8

// FSessionPersistentStats @ 148bc3330

FSessionPersistentStats * __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::FSessionPersistentStats
          (FSessionPersistentStats *this,FSessionPersistentStats *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  FPersistentStatsBase::FPersistentStatsBase
            ((FPersistentStatsBase *)this,(FPersistentStatsBase *)param_1);
  this->_padding_ = (longlong)&___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  ::FString::FString(&this->SessionName,&param_1->SessionName);
  pTVar2 = &this->RequiredBundles;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RequiredBundles).ArrayMax;
  iVar3 = (param_1->RequiredBundles).ArrayNum;
  pFVar4 = (param_1->RequiredBundles).AllocatorInstance.Data;
  (this->RequiredBundles).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  return this;
}

// ~FSessionPersistentStats @ 148bc4140

void __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::~FSessionPersistentStats
          (FSessionPersistentStats *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>
            ((FString *)(this->RequiredBundles).AllocatorInstance.Data,
             (this->RequiredBundles).ArrayNum);
  pFVar1 = (this->RequiredBundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPersistentStatsBase::~FPersistentStatsBase((FPersistentStatsBase *)this);
  return;
}

// AddRequiredBundles @ 148bc5f20

void __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::AddRequiredBundles
          (FSessionPersistentStats *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FString *pFVar3;
  FName *pFVar4;
  FName local_res8;
  FString local_28;
  
  pFVar4 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *pFVar4;
    pFVar3 = ::FName::ToString(&local_res8,&local_28);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&this->RequiredBundles,pFVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 1;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return;
}

// AddRequiredBundles @ 148bc5fc0

void __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::AddRequiredBundles
          (FSessionPersistentStats *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&this->RequiredBundles,(FString *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return;
}

// GetFullPathForStatFile @ 148bcb380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::GetFullPathForStatFile
          (FSessionPersistentStats *this,FString *__return_storage_ptr__)

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
  ::FString::ConcatFC(&local_68,&this->SessionName,L".json");
  local_58.DataPtr = FGenericPlatformMisc::GamePersistentDownloadDir();
  local_58.Size = 0;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar1;
  }
  local_48 = L"PersistentStats";
  local_40 = 0xf;
  local_38 = L"SessionStats";
  local_20 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_20 = 0;
  }
  local_30 = 0xc;
  local_28 = local_68.Data.AllocatorInstance.Data;
  FPaths::CombineInternal(__return_storage_ptr__,&local_58,4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRequiredBundles @ 148bcc920

void __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::GetRequiredBundles
          (FSessionPersistentStats *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->RequiredBundles).ArrayNum;
  pFVar8 = (this->RequiredBundles).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->RequiredBundles).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    pFVar3 = (param_1->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar8) && (pFVar8 < pFVar3 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       (FString *)pFVar8);
    pFVar8 = pFVar8 + 0x10;
  }
  return;
}

// ResetRequiredBundles @ 148bd4270

void __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::ResetRequiredBundles
          (FSessionPersistentStats *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this_00 = &this->RequiredBundles;
  DestructItems<FString,int>
            ((FString *)(this_00->AllocatorInstance).Data,(this->RequiredBundles).ArrayNum);
  piVar1 = &(this->RequiredBundles).ArrayMax;
  (this->RequiredBundles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (this_00,(FString *)pFVar3);
    pFVar3 = pFVar3 + 0x10;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return;
}

// Serialize @ 148bd6be0

void __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::Serialize
          (FSessionPersistentStats *this,FJsonSerializerBase *param_1,bool param_2)

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
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FPersistentTimerData local_1c8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  FJsonObject *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  longlong *local_168;
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *local_138;
  undefined2 local_130;
  TSharedPtr<FJsonObject,1> local_128;
  wchar_t *local_118;
  undefined8 uStack_110;
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
  uStack_110 = CONCAT44(uStack_1dc,0xb);
  local_118 = L"SessionName";
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_118,&this->SessionName);
  uStack_100 = CONCAT44(uStack_1dc,0xf);
  local_108 = L"RequiredBundles";
  (**(code **)((longlong)*param_1 + 0xa8))(param_1,&local_108,&this->RequiredBundles);
  uStack_f0 = CONCAT44(uStack_1dc,0x12);
  local_f8 = L"AnalyticsSessionID";
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_f8,&this->_padding_);
  uStack_e0 = CONCAT44(uStack_1dc,10);
  local_e8 = L"CountStats";
  (**(code **)((longlong)*param_1 + 0xd8))(param_1,&local_e8,&this->_padding_);
  cVar5 = (**(code **)*param_1)(param_1);
  if (cVar5 == '\0') {
    iStack_1d0 = 0xb;
    local_1d8 = L"TimingStats";
    uStack_a0 = CONCAT44(uStack_1cc,0xb);
    local_a8 = L"TimingStats";
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_a8);
    plVar8 = &this->_padding_;
    TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                *)plVar8);
    local_130 = 0;
    stack0xfffffffffffffea8 = local_88._16_16_;
    local_168 = (longlong *)local_88._0_8_;
    auStack_160._0_8_ = local_88._8_8_;
    local_148 = local_68;
    pTStack_140 = pTStack_60;
    uVar13 = local_88._24_8_ >> 0x20;
    local_138 = (TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                 *)plVar8;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        plVar8 = local_168;
        lVar12 = (longlong)(int)uVar13 * 0x30;
        local_1d8 = *(wchar_t **)(*local_168 + lVar12);
        iVar15 = *(int *)(*local_168 + 8 + lVar12);
        iStack_1d0 = iVar15 + -1;
        if (iVar15 == 0) {
          iStack_1d0 = 0;
        }
        uStack_90 = CONCAT44(uStack_1cc,iStack_1d0);
        local_98 = local_1d8;
        (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_98);
        plVar8 = (longlong *)(*plVar8 + 0x10 + lVar12);
        (**(code **)(*plVar8 + 0x50))(plVar8,param_1,1);
        (**(code **)((longlong)*param_1 + 0x20))(param_1);
        uStack_150 = uStack_150 & ~auStack_160._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
        uVar13 = (ulonglong)uStack_14c;
      } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
      if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
        iVar15 = 1;
        uVar7 = *(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34
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
        if (((0 < (int)uVar7) && (local_138->HashSize < iVar15)) || (iVar15 < local_138->HashSize))
        {
          local_138->HashSize = iVar15;
          TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::Rehash(local_138);
        }
      }
    }
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_1d8);
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
    local_d8._12_4_ = uStack_1dc;
    local_d8.Size = 0xb;
    local_d8.DataPtr = L"TimingStats";
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"TimingStats");
    pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(this_00,uVar7,&local_d8);
    if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
       (pTVar9->Object->Type != Object)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1cc,iStack_1d0));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1cc,iStack_1d0));
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
      local_c8._12_4_ = uStack_1dc;
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
      local_1c8.CurrentValue = (double)&(pFVar3->Values).field_0x10;
      iVar14 = 0;
      uVar7 = 1;
      local_1a8 = 0;
      iStack_1ac = 0;
      if (iVar15 != 0) {
        puVar16 = *(uint **)&(pFVar3->Values).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)local_1c8.CurrentValue;
        }
        uVar1 = *puVar16;
        while (uVar1 == 0) {
          lVar12 = (longlong)iVar14;
          local_1a8 = local_1a8 + 0x20;
          iVar14 = iVar14 + 1;
          iStack_1ac = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148bd6edf;
          uVar1 = puVar16[lVar12 + 1];
        }
        uVar7 = -uVar1 & uVar1;
        uVar13 = (ulonglong)uVar7 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iStack_1ac = local_1a8 + -1 + (int)lVar12;
        if (iVar15 < iStack_1ac) {
          iStack_1ac = iVar15;
        }
      }
LAB_148bd6edf:
      local_1c8.LastUpdateTime = (double)CONCAT44(uVar7,iVar14);
      uStack_1b0 = 0xffffffff;
      uStack_1a4 = local_3c;
      TStack_190.CurrentBitIndex = iStack_1ac;
      TStack_190.UnvisitedBitMask = 0xffffffff;
      TStack_190._padding_ = (longlong)local_1c8.LastUpdateTime;
      TStack_190._28_4_ = local_3c;
      TStack_190.BaseBitIndex = local_1a8;
      local_1c8._padding_ = (longlong)pFVar3;
      local_198 = pFVar3;
      TStack_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c8.CurrentValue;
      if (iStack_1ac < iVar15) {
        iVar15 = iStack_1ac;
        do {
          pFVar3 = local_198;
          local_1c8._padding_ =
               (longlong)&___7FPersistentTimerData_PersistentStats_InstallBundleUtil__6B_;
          local_1c8.LastUpdateTime = 0.0;
          local_1c8.CurrentValue = 0.0;
          lVar12 = *(longlong *)&local_198->Values;
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
          local_128.Object = (FJsonObject *)*puVar11;
          local_128.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar11[1];
          if (local_128.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FJsonSerializable::FromJson((FJsonSerializable *)&local_1c8,&local_128);
          TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
          ::
          Emplace<FString_const_&,InstallBundleUtil::PersistentStats::FPersistentTimerData_const_&>
                    ((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                      *)&this->_padding_,
                     (FString *)
                     (*(longlong *)&pFVar3->Values + (longlong)TStack_190.CurrentBitIndex * 0x28),
                     &local_1c8);
          FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_1c8);
          TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
          iVar15 = TStack_190.CurrentBitIndex;
        } while (TStack_190.CurrentBitIndex < (TStack_190.Array)->NumBits);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

