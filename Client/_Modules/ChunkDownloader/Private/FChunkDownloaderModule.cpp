// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 3

// GetPlatformChunkInstall @ 14f01ca20

IPlatformChunkInstall * __thiscall
FChunkDownloaderModule::GetPlatformChunkInstall(FChunkDownloaderModule *this)

{
  return (IPlatformChunkInstall *)(this->ChunkInstallWrapper).Ptr;
}

// StartupModule @ 14f01ca30

void __thiscall FChunkDownloaderModule::StartupModule(FChunkDownloaderModule *this)

{
  return;
}

// ShutdownModule @ 14f01ca40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloaderModule::ShutdownModule(FChunkDownloaderModule *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *pTVar3;
  TSharedPtr<IHttpRequest,1> *pTVar4;
  TArray<TFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedRef<FChunkDownloader::FPakFile,1> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  FChunkDownloader *this_00;
  longlong lVar10;
  TFunction<void___cdecl(bool)> *pTVar11;
  code *pcVar12;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *pTVar13;
  bool bVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  TFunction<void___cdecl(bool)> *pTVar18;
  uint uVar19;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *this_01;
  uint uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  uint *puVar23;
  longlong lVar24;
  undefined1 auStackY_198 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [3];
  uint uStack_164;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *pTStack_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined8 uStack_120;
  FSharedReferencer<1> FStack_118;
  TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
  *pTStack_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
  *pTStack_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 uStack_94;
  undefined4 uStack_74;
  undefined1 auStack_68 [48];
  ulonglong uStack_38;
  
  this_00 = (this->ChunkDownloader).Object;
  if (this_00 == (FChunkDownloader *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (3 < (byte)LogChunkDownloader._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
  }
  FChunkDownloader::WaitForMounts(this_00);
  bVar14 = FChunkDownloader::UpdateMountTasks(this_00,0.0);
  if ((bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<639807134757814856>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                          ,0x248,"UpdateMountTasks(0.0f) == false"), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  puVar2 = &(this_00->PakFiles).field_0x10;
  iStack_158 = 0;
  iVar8 = *(int *)&(this_00->PakFiles).field_0x28;
  pTStack_160 = &this_00->PakFiles;
  iStack_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar8 != 0) {
    puVar23 = *(uint **)&(this_00->PakFiles).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar2;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_158;
      iStack_140 = iStack_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14f024cde;
      uVar20 = puVar23[lVar15 + 1];
    }
    uStack_154 = -uVar20 & uVar20;
    uVar7 = (ulonglong)uStack_154 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_130 = (int)lVar15;
    iStack_144 = iStack_140 + -1 + iStack_130;
    if (iVar8 < iStack_144) {
      iStack_144 = iVar8;
    }
  }
LAB_14f024cde:
  uVar20 = *(uint *)&(this_00->PakFiles).field_0x28;
  uStack_13c = uStack_94;
  iStack_138 = *(int *)&(this_00->PakFiles).field_0x8 - *(int *)&(this_00->PakFiles).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_144;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_108._28_4_ = uStack_94;
  TStack_108.BaseBitIndex = iStack_140;
  uStack_e8 = CONCAT44(uStack_134,iStack_138);
  puStack_150 = puVar2;
  pTStack_110 = pTStack_160;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar9 = *(uint *)&(this_00->PakFiles).field_0x28;
  if (uVar20 != uVar9) {
    puVar22 = *(undefined1 **)&(this_00->PakFiles).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14f024def;
      uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar7 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_12c = (int)lVar15;
    uVar20 = iStack_12c + -1 + uVar19;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
    }
  }
LAB_14f024def:
  while( true ) {
    pTVar3 = pTStack_110;
    if (*(int *)&pTStack_110->field_0x8 - *(int *)&pTStack_110->field_0x34 != (int)uStack_e8) {
      uStack_168 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_168);
    }
    if (((TStack_108.CurrentBitIndex == uVar20) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar3 == &this_00->PakFiles)) break;
    pTVar6 = (TSharedRef<FChunkDownloader::FPakFile,1> *)
             (*(longlong *)pTVar3 + ((longlong)TStack_108.CurrentBitIndex * 5 + 2) * 8);
    if ((pTVar6->Object->Download).Object != (FDownload *)0x0) {
      FChunkDownloader::CancelDownload(this_00,pTVar6,false);
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  puVar2 = &(this_00->Chunks).field_0x10;
  iStack_158 = 0;
  iVar8 = *(int *)&(this_00->Chunks).field_0x28;
  pTStack_160 = (TMap<FString,TSharedRef<FChunkDownloader::FPakFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>_>
                 *)&this_00->Chunks;
  iStack_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar8 != 0) {
    puVar23 = *(uint **)&(this_00->Chunks).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar2;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_158;
      iStack_140 = iStack_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14f024eee;
      uVar20 = puVar23[lVar15 + 1];
    }
    uStack_154 = -uVar20 & uVar20;
    uVar7 = (ulonglong)uStack_154 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_128 = (int)lVar15;
    iStack_144 = iStack_140 + -1 + iStack_128;
    if (iVar8 < iStack_144) {
      iStack_144 = iVar8;
    }
  }
LAB_14f024eee:
  uVar20 = *(uint *)&(this_00->Chunks).field_0x28;
  uStack_13c = uStack_74;
  iStack_138 = *(int *)&(this_00->Chunks).field_0x8 - *(int *)&(this_00->Chunks).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  uStack_148 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_154,iStack_158);
  TStack_d8.CurrentBitIndex = iStack_144;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_d8._28_4_ = uStack_74;
  TStack_d8.BaseBitIndex = iStack_140;
  uStack_b8 = CONCAT44(uStack_134,iStack_138);
  uStack_164 = uVar20;
  puStack_150 = puVar2;
  pTStack_e0 = (TMap<int,TSharedRef<FChunkDownloader::FChunk,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>_>
                *)pTStack_160;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar9 = *(uint *)&(this_00->Chunks).field_0x28;
  if (uVar20 != uVar9) {
    puVar22 = *(undefined1 **)&(this_00->Chunks).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar9;
      uStack_164 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14f025010;
      uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar7 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_124 = (int)lVar15;
    uVar20 = iStack_124 + -1 + uVar19;
    uStack_164 = uVar20;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
      uStack_164 = uVar9;
    }
  }
LAB_14f025010:
  do {
    pTVar13 = pTStack_e0;
    this_01 = &this_00->Chunks;
    if (*(int *)(&pTStack_e0->field_0x0 + 8) - *(int *)(&pTStack_e0->field_0x0 + 0x34) !=
        (int)uStack_b8) {
      auStack_167[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_167);
    }
    if (((TStack_d8.CurrentBitIndex == uVar20) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Chunks).field_0x10))
       && (pTVar13 == this_01)) {
      pTVar3 = &this_00->PakFiles;
      bVar14 = 1 < *(int *)&(this_00->PakFiles).field_0x48;
      if (!bVar14) {
        TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
                          *)pTVar3);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)pTVar3,0,*(int *)&(this_00->PakFiles).field_0x8);
      puVar2 = &(this_00->PakFiles).field_0xc;
      *(undefined4 *)&(this_00->PakFiles).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar2);
      }
      *(undefined4 *)&(this_00->PakFiles).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->PakFiles).field_0x34 = 0;
      iVar8 = *(int *)&(this_00->PakFiles).field_0x2c;
      *(undefined4 *)&(this_00->PakFiles).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this_00->PakFiles).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->PakFiles).field_0x10,0);
      }
      if (bVar14) {
        *(undefined4 *)&(this_00->PakFiles).field_0x48 = 1;
        TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,TSharedRef<FChunkDownloader::FPakFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FChunkDownloader::FPakFile,1>,0>,FDefaultSetAllocator>
                  *)pTVar3);
      }
      bVar14 = 1 < *(int *)&(this_00->Chunks).field_0x48;
      if (!bVar14) {
        TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
                          *)this_01);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_01,0,*(int *)&(this_00->Chunks).field_0x8);
      puVar2 = &(this_00->Chunks).field_0xc;
      *(undefined4 *)&(this_00->Chunks).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
      }
      *(undefined4 *)&(this_00->Chunks).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->Chunks).field_0x34 = 0;
      iVar8 = *(int *)&(this_00->Chunks).field_0x2c;
      *(undefined4 *)&(this_00->Chunks).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this_00->Chunks).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Chunks).field_0x10,0);
      }
      if (bVar14) {
        *(undefined4 *)&(this_00->Chunks).field_0x48 = 1;
        TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<int,TSharedRef<FChunkDownloader::FChunk,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FChunkDownloader::FChunk,1>,0>,FDefaultSetAllocator>
                  *)this_01);
      }
      pTVar4 = &this_00->ManifestRequest;
      if (pTVar4->Object != (IHttpRequest *)0x0) {
        (**(code **)(*(longlong *)pTVar4->Object + 0x118))();
        uStack_120 = 0;
        FStack_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TSharedPtr<IHttpRequest,1> *)&uStack_120) {
          pTVar4->Object = (IHttpRequest *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this_00->ManifestRequest).SharedReferenceCount,&FStack_118);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_118.ReferenceController);
      }
      if (0 < (this_00->PostLoadCallbacks).ArrayNum) {
        pTVar5 = &this_00->PostLoadCallbacks;
        pTVar11 = (TFunction<void___cdecl(bool)> *)(pTVar5->AllocatorInstance).Data;
        piVar1 = &(this_00->PostLoadCallbacks).ArrayMax;
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar8 = (this_00->PostLoadCallbacks).ArrayNum;
        (this_00->PostLoadCallbacks).ArrayNum = 0;
        *piVar1 = 0;
        DestructItems<TFunction<void___cdecl(bool)>,int>
                  ((TFunction<void___cdecl(bool)> *)(pTVar5->AllocatorInstance).Data,0);
        (this_00->PostLoadCallbacks).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,0,&pTVar5->AllocatorInstance,0,piVar1);
        }
        for (pTVar18 = pTVar11; pTVar18 != pTVar11 + iVar8; pTVar18 = pTVar18 + 1) {
          FChunkDownloader::ExecuteNextTick(this_00,pTVar18,false);
        }
        DestructItems<TFunction<void___cdecl(bool)>,int>(pTVar11,iVar8);
        if (pTVar11 != (TFunction<void___cdecl(bool)> *)0x0) {
          FMemory::Free(pTVar11);
        }
      }
      lVar15 = *(longlong *)&this_00->UpdateBuildCallback;
      if (lVar15 != 0) {
        auStack_68._40_8_ = *(undefined8 *)&(this_00->UpdateBuildCallback).field_0x28;
        *(undefined8 *)&(this_00->UpdateBuildCallback).field_0x28 = 0;
        auStack_68._16_8_ = *(undefined8 *)&(this_00->UpdateBuildCallback).field_0x10;
        auStack_68._24_8_ = *(undefined8 *)&(this_00->UpdateBuildCallback).field_0x18;
        auStack_68._32_8_ = *(undefined8 *)&(this_00->UpdateBuildCallback).field_0x20;
        *(undefined8 *)&this_00->UpdateBuildCallback = 0;
        auStack_68._0_8_ = lVar15;
        FChunkDownloader::ExecuteNextTick(this_00,(TFunction<void___cdecl(bool)> *)auStack_68,false)
        ;
        if (auStack_68._0_8_ != 0) {
          plVar16 = (longlong *)(auStack_68 + 0x10);
          if ((longlong *)auStack_68._40_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)auStack_68._40_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      ::FString::Empty(&this_00->ContentBuildId);
      return;
    }
    lVar15 = *(longlong *)&pTVar13->field_0x0;
    lVar24 = (longlong)TStack_d8.CurrentBitIndex * 0x20;
    lVar21 = *(longlong *)(lVar24 + 8 + lVar15);
    if (*(char *)(lVar21 + 4) != '\0') {
      uVar20 = *(int *)(lVar21 + 0x10) - 1;
      if (-1 < (int)uVar20) {
        lVar21 = (longlong)(int)uVar20 << 4;
        do {
          lVar10 = *(longlong *)(lVar24 + 8 + lVar15);
          uVar19 = 0;
          if ((int)uVar20 < *(int *)(lVar10 + 0x10)) {
            uVar19 = ~uVar20 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FChunkDownloader::UnmountPakFile
                    (this_00,(TSharedRef<FChunkDownloader::FPakFile,1> *)
                             (*(longlong *)(lVar10 + 8) + lVar21));
          lVar21 = lVar21 + -0x10;
          uVar20 = uVar20 - 1;
        } while (-1 < (int)uVar20);
      }
      *(undefined1 *)(*(longlong *)(lVar24 + 8 + lVar15) + 4) = 0;
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    uVar20 = uStack_164;
  } while( true );
}

