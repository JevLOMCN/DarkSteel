// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// GetBestConfigEntry<FDriverDenyListEntry> @ 145c3f7c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TOptional<FDriverDenyListEntry> * __thiscall
FGPUDriverHelper::GetBestConfigEntry<FDriverDenyListEntry>
          (FGPUDriverHelper *this,TOptional<FDriverDenyListEntry> *__return_storage_ptr__,
          wchar_t *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  ulonglong uVar5;
  TOptional<FDriverDenyListEntry> *pTVar6;
  wchar_t *pwVar7;
  char cVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  void *pvVar11;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d8;
  uint local_1c8;
  uint local_1c4;
  TOptional<FString>_u_0 local_1b8;
  undefined8 local_1a8;
  TReferenceControllerBase<1> *pTStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  void *local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong lStack_160;
  void *local_158;
  undefined8 uStack_150;
  uint local_148;
  FString local_138;
  TOptional<FString>_u_0 local_128;
  TReferenceControllerBase<1> *local_110;
  char local_108;
  undefined4 local_100;
  void *local_f8;
  undefined8 local_f0;
  char local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char local_d0;
  void *local_c8;
  undefined8 local_c0;
  uint local_b8;
  FDriverDenyListEntry local_a8;
  
  GetVendorSectionName(this,&local_138);
  if (local_138.Data.ArrayNum < 2) {
    __return_storage_ptr__->bIsSet = false;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    pvVar4 = (void *)0x0;
    cVar8 = '\0';
    local_158 = (void *)0x0;
    uStack_150 = 0;
    local_148 = 0;
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    local_1b8.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_1b8._8_8_ = 0xffffffff00000000;
    uStack_190 = 0;
    uStack_170 = 0;
    local_198 = 0;
    local_168 = 0;
    local_178 = 0;
    local_1a8 = 0;
    pTStack_1a0 = (TReferenceControllerBase<1> *)0x0;
    lStack_160 = 0;
    local_188 = (void *)0x0;
    uStack_180 = 0;
    FConfigCacheIni::GetArray
              (GConfig,(wchar_t *)local_138.Data.AllocatorInstance.Data,param_1,&local_1d8,
               &GHardwareIni);
    uVar5 = (ulonglong)local_1d8.ArrayNum;
    pFVar10 = local_1d8.AllocatorInstance.Data + uVar5 * 0x10;
    local_1c4 = local_1d8.ArrayNum;
    FVar9.Data = local_1d8.AllocatorInstance.Data;
    pvVar11 = pvVar4;
    while( true ) {
      if (local_1d8.ArrayNum != (int)uVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar9.Data == pFVar10) break;
      if ((*(int *)(FVar9.Data + 8) < 2) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2583593239961402866>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformDriver.h"
                             ,0x20e,"!EntryString.IsEmpty()"), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TOptional<FDriverDenyListEntry> *)(*pcVar1)();
        return pTVar6;
      }
      if (*(int *)(FVar9.Data + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)FVar9.Data;
      }
      FDriverDenyListEntry::FDriverDenyListEntry(&local_a8,pwVar7);
      local_1c8 = 0;
      bVar3 = FDriverDenyListEntry::AppliesToDriver(&local_a8,&this->DriverInfo,&local_1c8);
      uVar2 = local_1c8;
      if ((bVar3) && ((uint)pvVar4 <= local_1c8)) {
        FDriverDenyListEntry::FDriverDenyListEntry
                  ((FDriverDenyListEntry *)&local_128.TypedValue,&local_a8);
        local_b8 = uVar2;
        FDriverConfigEntryConstraints::operator=
                  ((FDriverConfigEntryConstraints *)&local_1b8.TypedValue,
                   (FDriverConfigEntryConstraints *)&local_128.TypedValue);
        if (local_e8 == '\0') {
          if ((char)local_178 != '\0') {
            if (local_188 != (void *)0x0) {
              FMemory::Free(local_188);
            }
            local_178 = local_178 & 0xffffffffffffff00;
          }
          cVar8 = '\0';
        }
        else {
          if (((char)local_178 != '\0') && (local_188 != (void *)0x0)) {
            FMemory::Free(local_188);
          }
          uStack_190 = CONCAT44(uStack_190._4_4_,local_100);
          cVar8 = '\x01';
          local_188 = local_f8;
          uStack_180 = local_f0;
          local_f0 = 0;
          local_f8 = (void *)0x0;
          local_178 = CONCAT71(local_178._1_7_,1);
        }
        if (local_d0 == '\0') {
          lStack_160 = (ulonglong)lStack_160._1_7_ << 8;
        }
        else {
          lStack_160 = CONCAT71(lStack_160._1_7_,1);
          uStack_170 = local_e0;
          local_168 = uStack_d8;
        }
        if (local_158 != (void *)0x0) {
          FMemory::Free(local_158);
        }
        pvVar11 = local_c8;
        pvVar4 = (void *)(ulonglong)local_b8;
        uStack_150 = local_c0;
        local_c0 = 0;
        local_158 = local_c8;
        local_c8 = (void *)0x0;
        local_148 = local_b8;
        if ((local_e8 != '\0') && (local_f8 != (void *)0x0)) {
          FMemory::Free(local_f8);
        }
        if (local_108 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_110);
        }
        if ((local_128.TypedValue.Data.ArrayMax != -1) &&
           (local_128.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_128.TypedValue.Data.AllocatorInstance.Data);
        }
      }
      if (local_a8.DenylistReason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.DenylistReason.Data.AllocatorInstance.Data);
      }
      if ((local_a8.DriverVersion.bIsSet != false) &&
         (local_a8.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data);
      }
      if ((char)local_a8._padding_ != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_a8._padding_);
      }
      if ((local_a8._padding_._4_4_ != -1) && ((void *)local_a8._padding_ != (void *)0x0)) {
        FMemory::Free((void *)local_a8._padding_);
      }
      uVar5 = (ulonglong)local_1c4;
      FVar9.Data = FVar9.Data + 0x10;
    }
    if (cVar8 == (char)lStack_160) {
      __return_storage_ptr__->bIsSet = false;
      DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
    }
    else {
      FDriverDenyListEntry::FDriverDenyListEntry
                (&__return_storage_ptr__->TypedValue,(FDriverDenyListEntry *)&local_1b8.TypedValue);
      __return_storage_ptr__->bIsSet = true;
      DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      cVar8 = (char)local_178;
    }
    if ((cVar8 != '\0') && (local_188 != (void *)0x0)) {
      FMemory::Free(local_188);
    }
    if ((char)local_198 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1a0);
    }
    if ((local_1b8.TypedValue.Data.ArrayMax != -1) &&
       (local_1b8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_1b8.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetBestConfigEntry<FSuggestedDriverEntry> @ 145c3fbf0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TOptional<FSuggestedDriverEntry> * __thiscall
FGPUDriverHelper::GetBestConfigEntry<FSuggestedDriverEntry>
          (FGPUDriverHelper *this,TOptional<FSuggestedDriverEntry> *__return_storage_ptr__,
          wchar_t *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  TOptional<FSuggestedDriverEntry> *pTVar6;
  FString *this_00;
  uint uVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  uint local_res20 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_158;
  TOptional<FString>_u_0 local_148;
  longlong local_138;
  TReferenceControllerBase<1> *pTStack_130;
  char local_128;
  undefined4 local_127;
  undefined2 local_123;
  undefined1 local_121;
  FString local_120;
  uint local_110;
  uint local_108;
  TOptional<FString>_u_0 local_100;
  FRegexPattern local_f0;
  char local_e0;
  FString local_d8;
  TOptional<FString>_u_0 local_c8;
  FRegexPatternImplementation *local_b8;
  TReferenceControllerBase<1> *local_b0;
  char local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  uint local_90;
  FString local_88;
  FScriptContainerElement *local_78;
  FRegexMatcher local_70;
  FString local_50;
  
  pFVar9 = (FScriptContainerElement *)0x0;
  local_res20[0] = 0;
  GetVendorSectionName(this,&local_88);
  if (local_88.Data.ArrayNum < 2) {
    __return_storage_ptr__->bIsSet = false;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_138 = 0;
    pTStack_130 = (TReferenceControllerBase<1> *)0x0;
    local_127 = 0;
    local_123 = 0;
    local_121 = 0;
    local_148.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_148.TypedValue.Data.ArrayNum = 0;
    local_148.TypedValue.Data.ArrayMax = -1;
    local_128 = '\0';
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    local_110 = 0;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,(wchar_t *)local_88.Data.AllocatorInstance.Data,param_1,&local_158,
               &GHardwareIni);
    uVar5 = (ulonglong)local_158.ArrayNum;
    local_78 = local_158.AllocatorInstance.Data + uVar5 * 0x10;
    local_108 = local_158.ArrayNum;
    FVar11.Data = pFVar9;
    pFVar12 = pFVar9;
    FVar13.Data = local_158.AllocatorInstance.Data;
    while( true ) {
      pFVar2 = local_78;
      if (local_158.ArrayNum != (int)uVar5) {
        local_res20[0] = local_res20[0] & 0xffffff00;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar13.Data == pFVar2) break;
      if ((*(int *)(FVar13.Data + 8) < 2) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2583593239961402866>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformDriver.h"
                             ,0x20e,"!EntryString.IsEmpty()"), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TOptional<FSuggestedDriverEntry> *)(*pcVar1)();
        return pTVar6;
      }
      if (*(int *)(FVar13.Data + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)FVar13.Data;
      }
      FDriverConfigEntryConstraints::FDriverConfigEntryConstraints
                ((FDriverConfigEntryConstraints *)&local_100.TypedValue,pwVar8);
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      FParse::Value(pwVar8,L"DriverVersion=",&local_d8,true,(wchar_t **)0x0);
      if (((local_d8.Data.ArrayNum < 2) && (local_100.TypedValue.Data.ArrayMax == -1)) &&
         (local_e0 == '\0')) {
        pFVar12 = (FScriptContainerElement *)&DAT_00000001;
        this_00 = ::FString::FString(&local_50,pwVar8);
        iVar4 = ::FString::Find(this_00,L"=",1,IgnoreCase,FromStart,-1);
        if (iVar4 != -1) goto LAB_145c3fde9;
        bVar3 = true;
      }
      else {
LAB_145c3fde9:
        bVar3 = false;
      }
      if ((pFVar12 != (FScriptContainerElement *)0x0) &&
         (pFVar12 = (FScriptContainerElement *)0x0,
         local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        ::FString::operator=(&local_d8,pwVar8);
      }
      uVar7 = 0;
      if (1 < local_d8.Data.ArrayNum) {
        if (local_100.TypedValue.Data.ArrayMax != -1) {
          iVar4 = (this->DriverInfo).RHIName.Data.ArrayNum;
          if (local_100.TypedValue.Data.ArrayNum == iVar4) {
            if (1 < local_100.TypedValue.Data.ArrayNum) {
              iVar4 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_100.TypedValue.Data.AllocatorInstance.Data,
                                 (wchar_t *)(this->DriverInfo).RHIName.Data.AllocatorInstance.Data);
              bVar3 = iVar4 == 0;
              goto LAB_145c3fe4f;
            }
          }
          else {
            bVar3 = local_100.TypedValue.Data.ArrayNum + iVar4 == 1;
LAB_145c3fe4f:
            if (!bVar3) goto LAB_145c3ffbe;
          }
          uVar7 = 1;
        }
        if (local_e0 != '\0') {
          FRegexMatcher::FRegexMatcher(&local_70,&local_f0,&(this->DriverInfo).DeviceDescription);
          bVar3 = FRegexMatcher::FindNext(&local_70);
          if (!bVar3) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_70.Implementation.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_70.Pattern.Implementation.SharedReferenceCount.ReferenceController);
            goto LAB_145c3ffbe;
          }
          uVar7 = uVar7 + 1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.Implementation.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.Pattern.Implementation.SharedReferenceCount.ReferenceController);
        }
        if ((uint)pFVar9 <= uVar7) {
          local_c8.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_c8.TypedValue.Data.ArrayNum = 0;
          local_c8.TypedValue.Data.ArrayMax = -1;
          if (local_100.TypedValue.Data.ArrayMax != -1) {
            ::FString::FString(&local_c8.TypedValue,&local_100.TypedValue);
          }
          FVar11.Data = local_d8.Data.AllocatorInstance.Data;
          local_a8 = local_e0;
          if (local_e0 != '\0') {
            local_b8 = local_f0.Implementation.Object;
            local_b0 = local_f0.Implementation.SharedReferenceCount.ReferenceController;
            if (local_f0.Implementation.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_f0.Implementation.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_f0.Implementation.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          lVar10 = (longlong)local_d8.Data.ArrayNum;
          local_a0.Data = (FScriptContainerElement *)0x0;
          local_98 = CONCAT44(local_98._4_4_,local_d8.Data.ArrayNum);
          if (local_d8.Data.ArrayNum == 0) {
            local_98 = local_d8.Data._8_8_ & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_d8.Data.ArrayNum,0,&local_a0,local_d8.Data.ArrayNum,
                       (int *)((longlong)&local_98 + 4));
            memcpy(local_a0.Data,FVar11.Data,lVar10 * 2);
          }
          local_90 = uVar7;
          FDriverConfigEntryConstraints::operator=
                    ((FDriverConfigEntryConstraints *)&local_148.TypedValue,
                     (FDriverConfigEntryConstraints *)&local_c8.TypedValue);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          FVar11.Data = local_a0.Data;
          pFVar9 = (FScriptContainerElement *)(ulonglong)local_90;
          local_120.Data._8_8_ = local_98;
          local_98 = 0;
          local_120.Data.AllocatorInstance.Data = local_a0.Data;
          local_a0.Data = (FScriptContainerElement *)0x0;
          local_110 = local_90;
          if (local_a8 != '\0') {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b0);
          }
          if ((local_c8.TypedValue.Data.ArrayMax != -1) &&
             (local_c8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_c8.TypedValue.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_145c3ffbe:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_e0 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.Implementation.SharedReferenceCount.ReferenceController);
      }
      if ((local_100.TypedValue.Data.ArrayMax != -1) &&
         (local_100.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_100.TypedValue.Data.AllocatorInstance.Data);
      }
      FVar13.Data = FVar13.Data + 0x10;
      uVar5 = (ulonglong)local_108;
    }
    if (local_120.Data.ArrayNum < 2) {
      __return_storage_ptr__->bIsSet = false;
      DestructItems<FString,int>((FString *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
    }
    else {
      (__return_storage_ptr__->TypedValue)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue)._padding_ = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue)._padding_ + 4) = 0xffffffff;
      if (local_148.TypedValue.Data.ArrayMax != -1) {
        ::FString::FString((FString *)__return_storage_ptr__,&local_148.TypedValue);
      }
      *(char *)&(__return_storage_ptr__->TypedValue)._padding_ = local_128;
      if (local_128 != '\0') {
        (__return_storage_ptr__->TypedValue)._padding_ = local_138;
        (__return_storage_ptr__->TypedValue)._padding_ = (longlong)pTStack_130;
        if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_130->SharedReferenceCount =
               (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      ::FString::FString(&(__return_storage_ptr__->TypedValue).SuggestedDriverVersion,&local_120);
      __return_storage_ptr__->bIsSet = true;
      DestructItems<FString,int>((FString *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      FVar11.Data = local_120.Data.AllocatorInstance.Data;
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
        FVar11.Data = local_120.Data.AllocatorInstance.Data;
      }
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    if (local_128 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_130);
    }
    if ((local_148.TypedValue.Data.ArrayMax != -1) &&
       (local_148.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_148.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetVendorSectionName @ 145c5ce80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FGPUDriverHelper::GetVendorSectionName(FGPUDriverHelper *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  uVar1 = (this->DriverInfo).VendorId;
  pwVar2 = L"GPU_NVIDIA";
  if (uVar1 != 0x10de) {
    pwVar2 = (wchar_t *)0x0;
  }
  if ((((uVar1 == 0x1002) || (uVar1 == 0x8086)) || (uVar1 == 0x5143)) ||
     ((uVar1 == 0x4d4f4351 || (pwVar2 != (wchar_t *)0x0)))) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"Windows",7,Yes);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  else {
    ::FString::FString(__return_storage_ptr__,L"");
  }
  return __return_storage_ptr__;
}

