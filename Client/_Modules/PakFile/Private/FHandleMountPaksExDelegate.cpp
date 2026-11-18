// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// HandleDelegate @ 142a7aac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::PakFile::Private::FHandleMountPaksExDelegate::HandleDelegate
          (FPakPlatformFile *param_1,TArrayView<UE::FMountPaksExArgs,int> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  code *pcVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  size_t sVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  TRefCountPtr<FPakFile> TVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FMountPaksExArgs *pFVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint *puVar26;
  char cVar27;
  TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *this;
  undefined1 auStack_248 [32];
  char local_228;
  undefined1 local_227 [7];
  FMountPaksExArgs *local_220;
  FError local_218;
  FPakListEntry local_208;
  uint local_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  FIoStatus local_1d8;
  undefined4 local_1c8;
  int local_1c4;
  FPakListEntry local_1c0;
  FMountPaksExArgs *local_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  FPakMountArgs local_180;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TStringView<wchar_t> local_148;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  int local_e8;
  int local_e4;
  IErrorDetails *local_e0;
  byte local_d8;
  longlong local_d0;
  longlong lStack_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong lStack_98;
  ulonglong local_90;
  longlong local_88 [2];
  byte local_78;
  longlong *local_70 [2];
  byte local_60;
  TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_248;
  uVar16 = 0;
  local_228 = '\0';
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_118 = (uint *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_1c0.PakFile.Reference = (FPakFile *)param_1;
  if (param_2->ArrayNum < 1) goto LAB_142a7ae29;
  lpCriticalSection = &param_1->PakListCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar9 = (param_1->PakFiles).ArrayNum;
  uVar21 = 1;
  if (3 < uVar9) {
    uVar24 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_1c8 = (undefined4)lVar20;
    uVar21 = 1 << ((byte)lVar20 & 0x1f);
  }
  if ((((int)uVar9 < 1) || ((int)uVar21 <= (int)local_f0)) && ((int)local_f0 <= (int)uVar21)) {
    TSet<FPakPlatformFile::FPakListEntry,UE::PakFile::Private::FPakEntryFilenameSetKeyFuncs<0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<FPakPlatformFile::FPakListEntry,UE::PakFile::Private::FPakEntryFilenameSetKeyFuncs<0>,FDefaultSetAllocator>
                      *)local_138);
    TSparseArray<TSparseSetElement<FPakPlatformFile::FPakListEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<FPakPlatformFile::FPakListEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_138,uVar9);
  }
  else {
    TSparseArray<TSparseSetElement<FPakPlatformFile::FPakListEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<FPakPlatformFile::FPakListEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_138,uVar9);
    local_f0 = uVar21;
    if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
    }
    if (uVar21 != 0) {
      uVar9 = uVar21;
      if (uVar21 < 2) {
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          uVar9 = 0;
          goto LAB_142a7ac5c;
        }
      }
      else {
LAB_142a7ac5c:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar9,4);
      }
      if (0 < (int)uVar21) {
        uVar25 = (ulonglong)uVar21;
        uVar24 = uVar16;
        do {
          FVar15.Data = (FScriptContainerElement *)local_100;
          if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar15.Data = local_f8.Data;
          }
          uVar11 = (longlong)(int)uVar21 - 1U & uVar24;
          uVar24 = uVar24 + 1;
          *(undefined4 *)((longlong)FVar15.Data + uVar11 * 4) = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    if (local_f0 != 0) {
      pTStack_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      local_1f8 = 0;
      uStack_1f4 = 1;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      if (local_110 != 0) {
        puVar26 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar26 = local_118;
        }
        uVar9 = *puVar26;
        uVar24 = uVar16;
        while (uVar9 == 0) {
          uStack_1e0 = (int)uVar24 + 0x20;
          uVar24 = (ulonglong)uStack_1e0;
          iVar13 = (int)uVar16;
          local_1f8 = iVar13 + 1;
          uVar16 = (ulonglong)local_1f8;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1f8)
          goto LAB_142a7ad61;
          uVar9 = puVar26[(longlong)iVar13 + 1];
        }
        uStack_1f4 = ~(uVar9 - 1) & uVar9;
        uVar16 = (ulonglong)uStack_1f4 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_1c4 = (int)lVar20;
        uStack_1e4 = local_1c4 + -1 + uStack_1e0;
        uVar16 = (ulonglong)uStack_1e4;
        if ((int)local_110 < (int)uStack_1e4) {
LAB_142a7ad61:
          uVar16 = (ulonglong)local_110;
          uStack_1e4 = local_110;
        }
      }
      local_1e8 = 0xffffffff;
      local_1a8 = (longlong *)local_138;
      local_1a0._padding_ = CONCAT44(uStack_1f4,local_1f8);
      local_1a0.CurrentBitIndex = uStack_1e4;
      local_1a0.UnvisitedBitMask = 0xffffffff;
      local_1a0._28_4_ = uStack_1dc;
      local_1a0.BaseBitIndex = uStack_1e0;
      local_1a0.Array = pTStack_1f0;
      if ((int)uVar16 < (int)local_110) {
        do {
          iVar18 = (int)uVar16;
          lVar20 = *local_1a8 + (longlong)iVar18 * 0x18;
          lVar3 = *(longlong *)(*local_1a8 + 8 + (longlong)iVar18 * 0x18);
          iVar13 = *(int *)(lVar3 + 0x20);
          iVar14 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar14 = 0;
          }
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,*(wchar_t **)(lVar3 + 0x18));
          uVar9 = local_f0 - 1 & uVar9;
          *(uint *)(lVar20 + 0x14) = uVar9;
          FVar15.Data = (FScriptContainerElement *)local_100;
          if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
            FVar15.Data = local_f8.Data;
          }
          uVar16 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar9;
          *(undefined4 *)(lVar20 + 0x10) = *(undefined4 *)((longlong)FVar15.Data + uVar16 * 4);
          *(int *)((longlong)FVar15.Data + uVar16 * 4) = iVar18;
          local_1a0.UnvisitedBitMask = local_1a0.UnvisitedBitMask & ~local_1a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
          uVar16 = (ulonglong)(uint)local_1a0.CurrentBitIndex;
        } while (local_1a0.CurrentBitIndex < (local_1a0.Array)->NumBits);
      }
    }
  }
  iVar13 = (param_1->PakFiles).ArrayNum;
  pFVar22 = (param_1->PakFiles).AllocatorInstance.Data;
  pFVar19 = pFVar22 + (longlong)iVar13 * 0x10;
  while( true ) {
    if ((param_1->PakFiles).ArrayNum != iVar13) {
      local_227[0] = 0;
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_227);
    }
    if (pFVar22 == pFVar19) break;
    TSet<FPakPlatformFile::FPakListEntry,UE::PakFile::Private::FPakEntryFilenameSetKeyFuncs<0>,FDefaultSetAllocator>
    ::Emplace<FPakPlatformFile::FPakListEntry_const_&>
              ((TSet<FPakPlatformFile::FPakListEntry,UE::PakFile::Private::FPakEntryFilenameSetKeyFuncs<0>,FDefaultSetAllocator>
                *)local_138,&local_1c0,(bool *)pFVar22);
    pFVar22 = pFVar22 + 0x10;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
LAB_142a7ae29:
  pFVar23 = param_2->DataPtr;
  local_1b0 = pFVar23 + param_2->ArrayNum;
  cVar27 = '\0';
  local_220 = pFVar23;
  if (pFVar23 != local_1b0) {
    this = &pFVar23->Result;
    do {
      pwVar2 = pFVar23->PakFilePath;
      iVar13 = 0;
      local_220 = pFVar23;
      local_158 = pwVar2;
      if (pwVar2 != (wchar_t *)0x0) {
        sVar12 = wcslen(pwVar2);
        iVar13 = (int)sVar12;
      }
      iStack_150 = iVar13;
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar2);
      if (local_138._8_4_ != local_104) {
        FVar15.Data = (FScriptContainerElement *)local_100;
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar15.Data = local_f8.Data;
        }
        lVar20 = local_138._0_8_;
        for (iVar13 = *(int *)((longlong)FVar15.Data + (ulonglong)(local_f0 - 1 & uVar9) * 4);
            iVar13 != -1; iVar13 = *(int *)(lVar20 + 0x10 + (longlong)iVar13 * 0x18)) {
          pwVar2 = pFVar23->PakFilePath;
          iVar14 = 0;
          if (pwVar2 != (wchar_t *)0x0) {
            sVar12 = wcslen(pwVar2);
            iVar14 = (int)sVar12;
          }
          lVar3 = *(longlong *)(lVar20 + 8 + (longlong)iVar13 * 0x18);
          iVar10 = *(int *)(lVar3 + 0x20);
          iVar18 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar18 = 0;
          }
          if ((iVar18 == iVar14) &&
             ((((iVar18 == 0 || (iVar14 == 0)) ||
               (iVar10 = FGenericPlatformStricmp::Strnicmp
                                   (*(wchar_t **)(lVar3 + 0x18),pwVar2,(longlong)iVar14),
               lVar20 = local_138._0_8_, iVar10 == 0)) && (iVar18 == iVar14)))) {
            pFVar23 = local_220;
            cVar27 = local_228;
            if ((iVar13 != -1) && (lVar20 = lVar20 + (longlong)iVar13 * 0x18, lVar20 != 0)) {
              if (2 < (byte)LogPakFile._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
              }
              lVar20 = *(longlong *)(lVar20 + 8);
              local_88[0] = lVar20 + 0x10;
              if (lVar20 == 0) {
                local_88[0] = 0;
              }
              local_78 = 0;
              if ((TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *)
                  local_88 != this) {
                local_c0 = local_c0 & 0xffffffffffffff00;
                Core::Private::TMoveConstructorCaller<UE::FMountPaksExArgs::FMountResult>::Construct
                          (&local_d0,local_88);
                uVar16 = *(ulonglong *)&(this->Variant).TypeIndex;
                lVar20 = (this->Variant)._padding_;
                lVar3 = (this->Variant)._padding_;
                (this->Variant)._padding_ = local_d0;
                (this->Variant)._padding_ = lStack_c8;
                *(ulonglong *)&(this->Variant).TypeIndex = local_c0;
                local_d0 = lVar20;
                lStack_c8 = lVar3;
                local_c0 = uVar16;
                if ((2 < (uVar16 & 0xff)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                       ,0xd4,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar16 & 0xff])(&local_d0);
              }
              bVar6 = local_78;
              if ((2 < local_78) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[bVar6])(local_88);
              goto LAB_142a7b463;
            }
            break;
          }
          pFVar23 = local_220;
          cVar27 = local_228;
        }
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Mounting pak file: %s \n");
      uVar9 = *(uint *)((longlong)(this + -1) + 0x10);
      if (uVar9 == 0xffffffff) {
        local_148._12_4_ = uStack_14c;
        local_148.Size = iStack_150;
        local_148.DataPtr = local_158;
        uVar9 = FPakPlatformFile::GetPakOrderFromPakFilePath(&local_148);
      }
      local_180.PakFilename = pFVar23->PakFilePath;
      local_180.MountOptions.MountFlags = *(EMountFlags *)((longlong)(this + -1) + 0x14);
      local_180.Path = (wchar_t *)0x0;
      local_180.bLoadIndex = true;
      local_180.PakOrder = uVar9;
      FIoStatus::FIoStatus(&local_1d8);
      local_208.ReadOrder = 0;
      local_208.PakFile.Reference = (FPakFile *)0x0;
      bVar7 = FPakPlatformFile::Mount
                        ((FPakPlatformFile *)local_1c0.PakFile.Reference,&local_180,&local_1d8,
                         &local_208);
      TVar17.Reference = local_208.PakFile.Reference;
      if ((cVar27 != '\0') || (bVar7)) {
        local_228 = '\x01';
        if (!bVar7) goto LAB_142a7b129;
        local_70[0] = &(local_208.PakFile.Reference)->_padding_;
        if (local_208.PakFile.Reference == (FPakFile *)0x0) {
          local_70[0] = (longlong *)0x0;
        }
        local_60 = 0;
        if ((TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *)local_70
            != this) {
          local_a8 = local_a8 & 0xffffffffffffff00;
          Core::Private::TMoveConstructorCaller<UE::FMountPaksExArgs::FMountResult>::Construct
                    (&local_b8,local_70);
          uVar16 = *(ulonglong *)&(this->Variant).TypeIndex;
          lVar20 = (this->Variant)._padding_;
          lVar3 = (this->Variant)._padding_;
          (this->Variant)._padding_ = local_b8;
          (this->Variant)._padding_ = lStack_b0;
          *(ulonglong *)&(this->Variant).TypeIndex = local_a8;
          local_b8 = lVar20;
          lStack_b0 = lVar3;
          local_a8 = uVar16;
          if ((2 < (uVar16 & 0xff)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16 & 0xff])(&local_b8);
        }
        bVar6 = local_60;
        if ((2 < local_60) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[bVar6])(local_70);
        pFVar23 = local_220;
      }
      else {
        local_228 = '\0';
LAB_142a7b129:
        if ((local_1d8.ErrorCode == PendingEncryptionKey) &&
           ((local_180.MountOptions.MountFlags & ReportDecryptionFailure) == None)) {
          local_58.Variant._padding_ = 0;
          local_58.Variant.TypeIndex = 0;
          TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::operator=
                    (this,&local_58);
          uVar16 = (ulonglong)local_58.Variant.TypeIndex;
          if ((2 < local_58.Variant.TypeIndex) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          TVar17.Reference = local_208.PakFile.Reference;
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16] !=
              Core::Private::TDestructorCaller<UE::FMountPaksExArgs::FMountResult>::Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16])(&local_58);
            TVar17.Reference = local_208.PakFile.Reference;
          }
        }
        else {
          UnifiedError::IoStore::ConvertError(&local_218,&local_1d8);
          local_e8 = local_218.ErrorCode;
          local_e4 = local_218.ModuleId;
          local_e0 = (IErrorDetails *)0x0;
          local_218.ErrorCode = 0;
          local_218.ModuleId = 0;
          if (local_218.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_e0 = local_218.ErrorDetails.Reference;
            (**(code **)((longlong)*local_218.ErrorDetails.Reference + 8))
                      (local_218.ErrorDetails.Reference,&local_1c0.field_0x4);
            TVar5.Reference = local_218.ErrorDetails.Reference;
            if (local_218.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_218.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar5.Reference + 0x10))();
            }
          }
          local_d8 = 1;
          if ((TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *)
              &local_e8 != this) {
            local_90 = CONCAT71(local_90._1_7_,1);
            Core::Private::
            TMoveConstructorCaller<TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType>
            ::Construct(&local_a0,&local_e8);
            uVar16 = *(ulonglong *)&(this->Variant).TypeIndex;
            lVar20 = (this->Variant)._padding_;
            lVar3 = (this->Variant)._padding_;
            (this->Variant)._padding_ = local_a0;
            (this->Variant)._padding_ = lStack_98;
            *(ulonglong *)&(this->Variant).TypeIndex = local_90;
            local_a0 = lVar20;
            lStack_98 = lVar3;
            local_90 = uVar16;
            if ((2 < (uVar16 & 0xff)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16 & 0xff])(&local_a0);
          }
          bVar6 = local_d8;
          if ((2 < local_d8) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar6])(&local_e8);
          TVar5.Reference = local_218.ErrorDetails.Reference;
          local_218.ErrorCode = 0;
          local_218.ModuleId = 0;
          TVar17.Reference = local_208.PakFile.Reference;
          if (local_218.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_218.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar5.Reference + 0x10))();
            TVar17.Reference = local_208.PakFile.Reference;
            if (local_218.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_218.ErrorDetails.Reference + 0x10))();
              TVar17.Reference = local_208.PakFile.Reference;
            }
          }
        }
      }
      if (TVar17.Reference != (FPakFile *)0x0) {
        plVar1 = &(TVar17.Reference)->_padding_;
        LOCK();
        lVar20 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(TVar17.Reference)->_padding_)(TVar17.Reference,1);
        }
      }
      FIoStatus::~FIoStatus(&local_1d8);
      local_220 = pFVar23;
LAB_142a7b463:
      pFVar23 = local_220 + 1;
      this = (TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *)
             ((longlong)(this + 1) + 0x10);
      cVar27 = local_228;
      local_220 = pFVar23;
    } while (pFVar23 != local_1b0);
  }
  local_f0 = 0;
  if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<FPakPlatformFile::FPakListEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPakPlatformFile::FPakListEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPakPlatformFile::FPakListEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  return (bool)cVar27;
}

