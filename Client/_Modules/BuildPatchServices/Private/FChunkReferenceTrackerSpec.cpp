// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 8

// GetTestFlags @ 14326f8e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EAutomationTestFlags __thiscall
FChunkReferenceTrackerSpec::GetTestFlags(FChunkReferenceTrackerSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 14326f8f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FChunkReferenceTrackerSpec::GetTestSourceFileName
          (FChunkReferenceTrackerSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\ChunkReferenceTracker.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14326f920

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall FChunkReferenceTrackerSpec::GetTestSourceFileLine(FChunkReferenceTrackerSpec *this)

{
  return 0xd;
}

// GetBeautifiedTestName @ 14326f930

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
FChunkReferenceTrackerSpec::GetBeautifiedTestName
          (FChunkReferenceTrackerSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 14326f960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014326fa81) */
/* WARNING: Removing unreachable block (ram,0x00014326fb57) */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall FChunkReferenceTrackerSpec::Define(FChunkReferenceTrackerSpec *this)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 *puVar5;
  void *_Src;
  FGuid *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FFileManifest *pFVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  FGuid *pFVar15;
  FFileManifest *pFVar16;
  ulong64 uVar17;
  int *piVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FGuid *pFVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  FIdentityFunctor local_1b5;
  uint local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  FChunkPart local_1a0;
  undefined1 local_188;
  undefined1 local_187 [7];
  FString local_180;
  FString local_170;
  undefined1 local_160 [16];
  FFileManifest *local_150;
  undefined1 local_148 [8];
  FScriptContainerElement *local_140;
  FFileManifest *local_138;
  FString local_130;
  code *local_118 [2];
  undefined **local_108;
  FChunkReferenceTrackerSpec *local_100;
  undefined8 local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FChunkReferenceTrackerSpec *local_d0;
  undefined8 local_c0;
  FGuid local_b8;
  FGuid local_a8;
  FFileManifest local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  iVar22 = 0;
  pTVar2 = &this->FileList;
  FVar11.Data = local_170.Data.AllocatorInstance.Data;
  uVar8 = local_170.Data._8_8_;
  do {
    local_170.Data._8_8_ = uVar8;
    local_170.Data.AllocatorInstance.Data = FVar11.Data;
    ::FString::PrintfImpl(&local_180,L"Some/Install/File%d.exe");
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_180) &&
        ((FScriptContainerElement *)&local_180 <
         pFVar20 + (longlong)(this->FileList).ArrayMax * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (this->FileList).ArrayNum;
    if (iVar13 == (this->FileList).ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,&(this->FileList).ArrayMax);
    }
    (this->FileList).ArrayNum = iVar13 + 1;
    pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_180.Data.AllocatorInstance.Data;
    *(int *)(pFVar20 + 8) = local_180.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_180.Data.ArrayMax;
    local_180.Data.ArrayNum = 0;
    local_180.Data.ArrayMax = 0;
    local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::PrintfImpl(&local_170,L"Other/Install/File%d.exe");
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_170) &&
        ((FScriptContainerElement *)&local_170 <
         pFVar20 + (longlong)(this->FileList).ArrayMax * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (this->FileList).ArrayNum;
    if (iVar13 == (this->FileList).ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,&(this->FileList).ArrayMax);
    }
    (this->FileList).ArrayNum = iVar13 + 1;
    pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_170.Data.AllocatorInstance.Data;
    local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar11.Data = local_170.Data.AllocatorInstance.Data;
    *(int *)(pFVar20 + 8) = local_170.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_170.Data.ArrayMax;
    local_170.Data.ArrayNum = 0;
    local_170.Data.ArrayMax = 0;
    uVar8 = local_170.Data._8_8_;
    local_170.Data.ArrayNum = 0;
    local_170.Data.ArrayMax = 0;
    local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar22 = iVar22 + 1;
  } while (iVar22 < 0x32);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            ((FString *)(pTVar2->AllocatorInstance).Data,(this->FileList).ArrayNum,local_1b5,
             (TLess<FString> *)&local_1b5);
  pFVar20 = (pTVar2->AllocatorInstance).Data;
  pFVar23 = pFVar20 + (longlong)(this->FileList).ArrayNum * 0x10;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  local_1a4 = 0;
  for (; pFVar20 != pFVar23; pFVar20 = pFVar20 + 0x10) {
    bVar12 = ::FString::StartsWith((FString *)pFVar20,L"Some",4,IgnoreCase);
    if (bVar12) {
      if (((local_1b0.Data <= pFVar20) && (pFVar20 < local_1b0.Data + (longlong)local_1a4 * 0x10))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_1a8 == local_1a4) {
        local_1a8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1b0,&local_1a4);
      }
      lVar19 = (longlong)local_1a8;
      local_1a8 = local_1a8 + 1;
      ::FString::FString((FString *)(local_1b0.Data + lVar19 * 0x10),(FString *)pFVar20);
    }
  }
  pTVar3 = &this->SubsetFileList;
  if (pTVar3 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_1b0) {
    DestructItems<FString,int>
              ((FString *)(pTVar3->AllocatorInstance).Data,(this->SubsetFileList).ArrayNum);
    pFVar20 = (pTVar3->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar3->AllocatorInstance).Data = local_1b0.Data;
    (this->SubsetFileList).ArrayNum = local_1a8;
    (this->SubsetFileList).ArrayMax = local_1a4;
    local_1a4 = 0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
  }
  DestructItems<FString,int>((FString *)local_1b0.Data,local_1a8);
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  local_1b4 = (this->FileList).ArrayNum;
  uVar14 = (ulonglong)(int)local_1b4;
  pFVar20 = (pTVar2->AllocatorInstance).Data;
  pFVar23 = pFVar20 + uVar14 * 0x10;
  while( true ) {
    if ((this->FileList).ArrayNum != (int)uVar14) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1b8)
      ;
    }
    if (pFVar20 == pFVar23) {
      local_1b4 = (this->SubsetFileList).ArrayNum;
      uVar14 = (ulonglong)(int)local_1b4;
      pFVar20 = (this->SubsetFileList).AllocatorInstance.Data;
      local_150 = (FFileManifest *)(pFVar20 + uVar14 * 0x10);
      do {
        pFVar16 = local_150;
        if ((this->SubsetFileList).ArrayNum != (int)uVar14) {
          local_1b7 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1b7);
        }
        if ((FFileManifest *)pFVar20 == pFVar16) {
          local_1b4 = (this->FileList).ArrayNum;
          uVar14 = (ulonglong)(int)local_1b4;
          pFVar16 = (FFileManifest *)(this->FileList).AllocatorInstance.Data;
          local_150 = (FFileManifest *)((pFVar16->FileHash).Hash + uVar14 * 0x10 + -0x20);
          while( true ) {
            pFVar10 = local_150;
            local_160._8_8_ = pFVar16;
            if ((this->FileList).ArrayNum != (int)uVar14) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_188);
            }
            if (pFVar16 == pFVar10) break;
            pFVar16 = TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                      ::FindChecked((TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                                     *)&this->FileManifests,&pFVar16->Filename);
            iVar22 = (pFVar16->ChunkParts).ArrayNum;
            pFVar21 = (FGuid *)(pFVar16->ChunkParts).AllocatorInstance.Data;
            pFVar15 = (FGuid *)((longlong)pFVar21 + (longlong)iVar22 * 0x18);
            while( true ) {
              if ((pFVar16->ChunkParts).ArrayNum != iVar22) {
                `TCheckedPointerIterator<BuildPatchServices::FChunkPart,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_187);
              }
              if (pFVar21 == pFVar15) break;
              uVar17 = CityHash64((char *)pFVar21,0x10);
              iVar13 = TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FGuid>
                                 ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                                   *)&this->ChunkRefCounts,(uint)uVar17,pFVar21);
              if ((iVar13 == -1) ||
                 (lVar19 = (longlong)iVar13 * 0x1c + *(longlong *)&this->ChunkRefCounts, lVar19 == 0
                 )) {
                piVar18 = TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>
                          ::EmplaceByHash<FGuid_const_&>
                                    ((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>
                                      *)&this->ChunkRefCounts,(uint)uVar17,pFVar21);
                *piVar18 = *piVar18 + 1;
                pFVar21 = (FGuid *)&pFVar21[1].C;
              }
              else {
                piVar18 = (int *)(lVar19 + 0x10);
                *piVar18 = *piVar18 + 1;
                pFVar21 = (FGuid *)&pFVar21[1].C;
              }
            }
            pFVar16 = (FFileManifest *)(local_160._8_8_ + 0x10);
            uVar14 = (ulonglong)local_1b4;
          }
          local_108 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FChunkReferenceTrackerSpec::Define'::`2'::<lambda_2>,0,0>
                       ::_vftable_;
          local_118[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FChunkReferenceTrackerSpec::Define'::__l2::<lambda_2>,void>
                         ::Call;
          local_f0 = 0;
          local_100 = this;
          ::FString::FString(&local_130,"ChunkReferenceTracker");
          FAutomationSpecBase::Describe
                    ((FAutomationSpecBase *)this,&local_130,
                     (TFunction<void___cdecl(void)> *)local_118);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          local_c0 = 0;
          local_d8 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FChunkReferenceTrackerSpec::Define'::`2'::<lambda_3>,0,0>
                      ::_vftable_;
          local_e8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FChunkReferenceTrackerSpec::Define'::__l2::<lambda_3>,void>
                        ::Call;
          local_d0 = this;
          FAutomationSpecBase::AfterEach
                    ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_e8);
          return;
        }
        pFVar16 = TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                  ::FindChecked((TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                                 *)&this->FileManifests,(FString *)pFVar20);
        iVar22 = (pFVar16->ChunkParts).ArrayNum;
        pFVar21 = (FGuid *)(pFVar16->ChunkParts).AllocatorInstance.Data;
        pFVar15 = (FGuid *)((longlong)pFVar21 + (longlong)iVar22 * 0x18);
        while( true ) {
          if ((pFVar16->ChunkParts).ArrayNum != iVar22) {
            local_1b6 = 0;
            `TCheckedPointerIterator<BuildPatchServices::FChunkPart,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_1b6);
          }
          if (pFVar21 == pFVar15) break;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (&this->SubsetReferencedChunks,(FGuid *)(local_160 + 8),(bool *)pFVar21);
          pTVar4 = &this->UseOrderForwardSortedSubsetArray;
          pFVar6 = (FGuid *)(pTVar4->AllocatorInstance).Data;
          if (((pFVar6 <= pFVar21) &&
              (pFVar21 < pFVar6 + (this->UseOrderForwardSortedSubsetArray).ArrayMax)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (this->UseOrderForwardSortedSubsetArray).ArrayNum;
          piVar18 = &(this->UseOrderForwardSortedSubsetArray).ArrayMax;
          if (iVar13 == *piVar18) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar4->AllocatorInstance,piVar18);
          }
          (this->UseOrderForwardSortedSubsetArray).ArrayNum = iVar13 + 1;
          uVar8 = *(undefined8 *)&pFVar21->C;
          pFVar23 = (pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
          *(undefined8 *)pFVar23 = *(undefined8 *)pFVar21;
          *(undefined8 *)(pFVar23 + 8) = uVar8;
          TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
                    (&this->UseOrderForwardSortedSubsetUniqueArray,pFVar21);
          pTVar4 = &this->UseOrderReverseSortedSubsetArray;
          pFVar6 = (FGuid *)(pTVar4->AllocatorInstance).Data;
          if (((pFVar6 <= pFVar21) &&
              (pFVar21 < pFVar6 + (this->UseOrderReverseSortedSubsetArray).ArrayMax)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (this->UseOrderReverseSortedSubsetArray).ArrayNum;
          piVar18 = &(this->UseOrderReverseSortedSubsetArray).ArrayMax;
          if (iVar13 == *piVar18) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar4->AllocatorInstance,piVar18);
          }
          pFVar23 = (pTVar4->AllocatorInstance).Data;
          (this->UseOrderReverseSortedSubsetArray).ArrayNum = iVar13 + 1;
          memmove(pFVar23 + 0x10,pFVar23,(longlong)iVar13 << 4);
          uVar8 = *(undefined8 *)pFVar21;
          uVar9 = *(undefined8 *)&pFVar21->C;
          pFVar23 = (pTVar4->AllocatorInstance).Data;
          pFVar21 = (FGuid *)&pFVar21[1].C;
          *(undefined8 *)pFVar23 = uVar8;
          *(undefined8 *)(pFVar23 + 8) = uVar9;
        }
        uVar14 = (ulonglong)local_1b4;
        pFVar20 = pFVar20 + 0x10;
      } while( true );
    }
    local_140 = pFVar20;
    local_138 = BuildPatchServices::FFileManifest::FFileManifest(&local_98);
    TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,BuildPatchServices::FFileManifest_&&>_>
              ((TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
                *)&this->FileManifests,
               (TPairInitializer<FString_const_&,BuildPatchServices::FFileManifest_&&> *)local_160,
               (bool *)&local_140);
    pFVar24 = (FScriptContainerElement *)
              (*(longlong *)&this->FileManifests + (longlong)(int)local_160._0_4_ * 0x78 + 0x10);
    if (local_98.ChunkParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ChunkParts.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_98.InstallTags.AllocatorInstance.Data,local_98.InstallTags.ArrayNum)
    ;
    if (local_98.InstallTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.InstallTags.AllocatorInstance.Data);
    }
    if (local_98.SymlinkTarget.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.SymlinkTarget.Data.AllocatorInstance.Data);
    }
    if (local_98.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Filename.Data.AllocatorInstance.Data);
    }
    if (pFVar24 != pFVar20) {
      iVar22 = *(int *)(pFVar20 + 8);
      pFVar1 = pFVar24 + 0xc;
      _Src = *(void **)pFVar20;
      *(int *)(pFVar24 + 8) = iVar22;
      if ((iVar22 == 0) && (*(int *)pFVar1 == 0)) {
        *(int *)pFVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar22,*(int *)pFVar1,(ForAnyElementType *)pFVar24,iVar22,(int *)pFVar1);
        if (iVar22 != 0) {
          memcpy(*(void **)pFVar24,_Src,(longlong)iVar22 * 2);
        }
      }
    }
    BuildPatchServices::FChunkPart::FChunkPart(&local_1a0);
    pFVar15 = FGuid::NewGuid(&local_b8);
    local_1a0.Guid.A = pFVar15->A;
    local_1a0.Guid.B = pFVar15->B;
    local_1a0.Guid.C = pFVar15->C;
    local_1a0.Guid.D = pFVar15->D;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (&this->AllChunks,(FGuid *)local_148,(bool *)&local_1a0);
    local_1a0.Size = this->TestChunkSize;
    local_1a0.Offset = 0;
    if (((*(FChunkPart **)(pFVar24 + 0x48) <= &local_1a0) &&
        (&local_1a0 < *(FChunkPart **)(pFVar24 + 0x48) + *(int *)(pFVar24 + 0x54))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar22 = *(int *)(pFVar24 + 0x50);
    if (iVar22 == *(int *)(pFVar24 + 0x54)) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,(ForAnyElementType *)(pFVar24 + 0x48),(int *)(pFVar24 + 0x54));
    }
    *(int *)(pFVar24 + 0x50) = iVar22 + 1;
    lVar19 = *(longlong *)(pFVar24 + 0x48);
    puVar5 = (undefined8 *)(lVar19 + (longlong)iVar22 * 0x18);
    *puVar5 = local_1a0.Guid._0_8_;
    puVar5[1] = local_1a0.Guid._8_8_;
    *(ulonglong *)(lVar19 + 0x10 + (longlong)iVar22 * 0x18) =
         CONCAT44(local_1a0.Size,local_1a0.Offset);
    pFVar15 = FGuid::NewGuid(&local_a8);
    local_1a0.Guid.A = pFVar15->A;
    local_1a0.Guid.B = pFVar15->B;
    local_1a0.Guid.C = pFVar15->C;
    local_1a0.Guid.D = pFVar15->D;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (&this->AllChunks,(FGuid *)(local_148 + 4),(bool *)&local_1a0);
    local_1a0.Offset = local_1a0.Offset + local_1a0.Size;
    local_1a0.Size = this->TestChunkSize;
    if (((*(FChunkPart **)(pFVar24 + 0x48) <= &local_1a0) &&
        (&local_1a0 < *(FChunkPart **)(pFVar24 + 0x48) + *(int *)(pFVar24 + 0x54))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar22 = *(int *)(pFVar24 + 0x50);
    if (iVar22 == *(int *)(pFVar24 + 0x54)) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,(ForAnyElementType *)(pFVar24 + 0x48),(int *)(pFVar24 + 0x54));
    }
    *(int *)(pFVar24 + 0x50) = iVar22 + 1;
    lVar19 = *(longlong *)(pFVar24 + 0x48);
    puVar5 = (undefined8 *)(lVar19 + (longlong)iVar22 * 0x18);
    *puVar5 = local_1a0.Guid._0_8_;
    puVar5[1] = local_1a0.Guid._8_8_;
    *(ulonglong *)(lVar19 + 0x10 + (longlong)iVar22 * 0x18) =
         CONCAT44(local_1a0.Size,local_1a0.Offset);
    local_1a0.Offset = local_1a0.Offset + local_1a0.Size;
    local_1a0.Size = this->TestChunkSize;
    if (((*(FChunkPart **)(pFVar24 + 0x48) <= &local_1a0) &&
        (&local_1a0 < *(FChunkPart **)(pFVar24 + 0x48) + *(int *)(pFVar24 + 0x54))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) break;
    iVar22 = *(int *)(pFVar24 + 0x50);
    if (iVar22 == *(int *)(pFVar24 + 0x54)) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,(ForAnyElementType *)(pFVar24 + 0x48),(int *)(pFVar24 + 0x54));
    }
    pFVar20 = pFVar20 + 0x10;
    *(int *)(pFVar24 + 0x50) = iVar22 + 1;
    lVar19 = *(longlong *)(pFVar24 + 0x48);
    puVar5 = (undefined8 *)(lVar19 + (longlong)iVar22 * 0x18);
    *puVar5 = local_1a0.Guid._0_8_;
    puVar5[1] = local_1a0.Guid._8_8_;
    *(ulonglong *)(lVar19 + 0x10 + (longlong)iVar22 * 0x18) =
         CONCAT44(local_1a0.Size,local_1a0.Offset);
    uVar14 = (ulonglong)local_1b4;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ~FChunkReferenceTrackerSpec @ 143287980

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FChunkReferenceTrackerSpec::~FChunkReferenceTrackerSpec(FChunkReferenceTrackerSpec *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  IBuildManifestSet *pIVar4;
  IChunkReferenceTracker *pIVar5;
  
  pFVar1 = (this->UseOrderForwardSortedSubsetUniqueArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UseOrderReverseSortedSubsetArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UseOrderForwardSortedSubsetArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChunkRefCounts).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkRefCounts).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkRefCounts);
  *(undefined4 *)&(this->FileManifests).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileManifests).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileManifests);
  (this->SubsetReferencedChunks).HashSize = 0;
  FVar3 = (this->SubsetReferencedChunks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SubsetReferencedChunks).Elements);
  (this->AllChunks).HashSize = 0;
  FVar3 = (this->AllChunks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllChunks).Elements);
  DestructItems<FString,int>
            ((FString *)(this->SubsetFileList).AllocatorInstance.Data,
             (this->SubsetFileList).ArrayNum);
  pFVar1 = (this->SubsetFileList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FileList).AllocatorInstance.Data,(this->FileList).ArrayNum);
  pFVar1 = (this->FileList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar4 = (this->ManifestSet).Ptr;
  if (pIVar4 != (IBuildManifestSet *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MockManifest).SharedReferenceCount.ReferenceController);
  pIVar5 = (this->ChunkReferenceTracker).Ptr;
  if (pIVar5 != (IChunkReferenceTracker *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 1432a7dd0

void __thiscall `FChunkReferenceTrackerSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FChunkReferenceTrackerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FChunkReferenceTrackerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"GetReferencedChunks");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FChunkReferenceTrackerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FChunkReferenceTrackerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"GetReferenceCount");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FChunkReferenceTrackerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FChunkReferenceTrackerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"SortByUseOrder");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FChunkReferenceTrackerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FChunkReferenceTrackerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"GetNextReferences");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FChunkReferenceTrackerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FChunkReferenceTrackerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"PopReference");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1432ad480

void __thiscall `FChunkReferenceTrackerSpec::Define'::__l2::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1a0) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar1 = *(longlong *)this;
  puVar2 = (undefined8 *)(lVar1 + 0x1a8);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &local_18) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x1b0),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1b8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001432ad510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}

