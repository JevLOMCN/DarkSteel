// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_> @ 148a3e1e0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::
PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,FFastArraySerializerHeader *param_1,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_3,
          TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
          *param_4)

{
  int *piVar1;
  int iVar2;
  FWorldPartitionDestructibleHLODState *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<int> FVar9;
  int iVar10;
  undefined1 *puVar11;
  ForElementType<int> FVar12;
  ForElementType<int> FVar13;
  uint uVar14;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  longlong lVar17;
  FIdentityFunctor local_res8;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  uint local_64;
  int local_60;
  uint local_5c;
  ForElementType<int> local_58;
  
  if (!`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat1084) {
    FCsvProfilerTrace::OutputInlineStat("FastArray_Apply",_GCsvCategory_Networking.Index);
    `public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat1084 = true;
  }
  local_5c = _GCsvCategory_Networking.Index;
  FCsvProfiler::BeginStat("FastArray_Apply",_GCsvCategory_Networking.Index,"CSV_FastArray_Apply");
  if (this->Parms->bInternalAck == false) {
    pTVar15 = this->Items;
    local_64 = 0;
    if (0 < pTVar15->ArrayNum) {
      do {
        uVar16 = local_64;
        uVar14 = 0;
        if ((int)local_64 < pTVar15->ArrayNum) {
          uVar14 = ~local_64 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = *(int *)((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x14 + 8);
        if ((iVar7 < param_1->ArrayReplicationKey) && (param_1->BaseReplicationKey < iVar7)) {
          FVar12 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<int>)&param_1->DeletedIndices;
          FVar9 = FVar13;
          if (FVar12 != (ForElementType<int>)0x0) {
            FVar9 = FVar12;
          }
          FVar12 = (ForElementType<int>)
                   ((longlong)FVar9 + (longlong)(param_1->DeletedIndices).ArrayNum * 4);
          for (; FVar9 != FVar12; FVar9 = (ForElementType<int>)((longlong)FVar9 + 4)) {
            if (*(uint *)FVar9 == local_64) goto LAB_148a3e402;
          }
          if (4 < (byte)LogNetFastTArray._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>&___ptr64)___ptr64'
                        ::__l17::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
          }
          FVar12 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
          FVar9 = FVar13;
          if (FVar12 != (ForElementType<int>)0x0) {
            FVar9 = FVar12;
          }
          if ((ulonglong)FVar9 <= &local_64) {
            FVar9 = FVar13;
            if (FVar12 != (ForElementType<int>)0x0) {
              FVar9 = FVar12;
            }
            if ((&local_64 <
                 (uint *)((longlong)FVar9 + (longlong)(param_1->DeletedIndices).ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar7 = (param_1->DeletedIndices).ArrayNum;
          piVar1 = &(param_1->DeletedIndices).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (0x404,(ForElementType<int> *)FVar13,piVar1);
          }
          (param_1->DeletedIndices).ArrayNum = iVar7 + 1;
          FVar12 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
          if (FVar12 != (ForElementType<int>)0x0) {
            FVar13 = FVar12;
          }
          *(uint *)((longlong)FVar13 + (longlong)iVar7 * 4) = local_64;
        }
LAB_148a3e402:
        pTVar15 = this->Items;
        local_64 = local_64 + 1;
      } while ((int)local_64 < pTVar15->ArrayNum);
    }
  }
  if ((0 < (param_1->DeletedIndices).ArrayNum) || (0 < param_1->NumChanged)) {
    pFVar3 = this->ArraySerializer;
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    if (*(int *)((longlong)&pFVar3->_padding_ + 4) == -1) {
      *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    }
  }
  FVar13 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
  iVar7 = (param_1->DeletedIndices).ArrayNum;
  if (FVar13 == (ForElementType<int>)0x0) {
    FVar13 = (ForElementType<int>)&param_1->DeletedIndices;
  }
  local_60 = this->Items->ArrayNum;
  FVar12 = (ForElementType<int>)((longlong)FVar13 + (longlong)iVar7 * 4);
  local_58 = FVar12;
  do {
    if ((param_1->DeletedIndices).ArrayNum != iVar7) {
      local_68 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_68);
    }
    if (FVar13 == FVar12) {
      if (((param_1->DeletedIndices).ArrayNum < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((local_60 != this->Items->ArrayNum) && (1 < (byte)LogNetFastTArray._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>&___ptr64)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      }
      FVar13 = (param_3->AllocatorInstance).SecondaryData;
      iVar7 = param_3->ArrayNum;
      FVar12 = (ForElementType<int>)param_3;
      if (FVar13 != (ForElementType<int>)0x0) {
        FVar12 = FVar13;
      }
      uVar16 = 0;
      FVar13 = (ForElementType<int>)((longlong)FVar12 + (longlong)iVar7 * 4);
      while( true ) {
        if (param_3->ArrayNum != iVar7) {
          local_67 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_67);
        }
        iVar2 = local_60;
        if (FVar12 == FVar13) break;
        uVar14 = uVar16;
        if ((int)*(uint *)FVar12 < this->Items->ArrayNum) {
          uVar14 = ~*(uint *)FVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<int>)((longlong)FVar12 + 4);
      }
      FVar13 = (param_3->AllocatorInstance).SecondaryData;
      iVar7 = param_3->ArrayNum;
      pFVar3 = this->ArraySerializer;
      if (FVar13 != (ForElementType<int>)0x0) {
        param_3 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar13;
      }
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar3->bIsClient == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsClient()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                             ,0x78,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar3->OwnerComponent).field0_0x0.DebugPtr !=
          (UWorldPartitionDestructibleHLODComponent *)0x0) {
        FVar13 = (ForElementType<int>)((longlong)param_3 + (longlong)iVar7 * 4);
        for (; (ForElementType<int>)param_3 != FVar13;
            param_3 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                      ((longlong)param_3 + 4)) {
          FWorldPartitionDestructibleHLODState::ApplyDamagedActorState(pFVar3,*(int *)param_3);
        }
        UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
                  ((pFVar3->OwnerComponent).field0_0x0.DebugPtr);
      }
      FVar13 = (param_2->AllocatorInstance).SecondaryData;
      iVar7 = param_2->ArrayNum;
      FVar12 = (ForElementType<int>)param_2;
      if (FVar13 != (ForElementType<int>)0x0) {
        FVar12 = FVar13;
      }
      FVar13 = (ForElementType<int>)((longlong)FVar12 + (longlong)iVar7 * 4);
      while( true ) {
        if (param_2->ArrayNum != iVar7) {
          local_66 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_66);
        }
        if (FVar12 == FVar13) break;
        uVar14 = uVar16;
        if ((int)*(uint *)FVar12 < this->Items->ArrayNum) {
          uVar14 = ~*(uint *)FVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<int>)((longlong)FVar12 + 4);
      }
      FVar13 = (param_2->AllocatorInstance).SecondaryData;
      iVar7 = param_2->ArrayNum;
      pFVar3 = this->ArraySerializer;
      if (FVar13 != (ForElementType<int>)0x0) {
        param_2 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar13;
      }
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar3->bIsClient == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsClient()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                             ,0x78,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar3->OwnerComponent).field0_0x0.DebugPtr !=
          (UWorldPartitionDestructibleHLODComponent *)0x0) {
        FVar13 = (ForElementType<int>)((longlong)param_2 + (longlong)iVar7 * 4);
        for (; (ForElementType<int>)param_2 != FVar13;
            param_2 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                      ((longlong)param_2 + 4)) {
          FWorldPartitionDestructibleHLODState::ApplyDamagedActorState(pFVar3,*(int *)param_2);
        }
        UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
                  ((pFVar3->OwnerComponent).field0_0x0.DebugPtr);
      }
      if ((iVar2 != this->Items->ArrayNum) && (1 < (byte)LogNetFastTArray._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>&___ptr64)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      }
      iVar7 = (param_1->DeletedIndices).ArrayNum;
      if (0 < iVar7) {
        FVar13 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
        local_res8 = SUB81(this,0);
        if (FVar13 == (ForElementType<int>)0x0) {
          FVar13 = (ForElementType<int>)&param_1->DeletedIndices;
        }
        AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                  ((int *)FVar13,iVar7,local_res8,(TLess<void> *)&local_65);
        uVar14 = (param_1->DeletedIndices).ArrayNum - 1;
        if (-1 < (int)uVar14) {
          lVar17 = (longlong)(int)uVar14 * 4;
          do {
            uVar8 = uVar16;
            if ((int)uVar14 < (param_1->DeletedIndices).ArrayNum) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar13 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
            FVar12 = (ForElementType<int>)&param_1->DeletedIndices;
            if (FVar13 != (ForElementType<int>)0x0) {
              FVar12 = FVar13;
            }
            uVar8 = *(uint *)(lVar17 + (longlong)FVar12);
            if ((-1 < (int)uVar8) && (pTVar15 = this->Items, (int)uVar8 < pTVar15->ArrayNum)) {
              if (((int)uVar8 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (pTVar15->AllocatorInstance).Data;
              iVar7 = ~uVar8 + pTVar15->ArrayNum;
              if (1 < iVar7) {
                iVar7 = 1;
              }
              if (iVar7 != 0) {
                memmove(pFVar4 + (longlong)(int)uVar8 * 0x14,
                        pFVar4 + (longlong)(pTVar15->ArrayNum - iVar7) * 0x14,(longlong)iVar7 * 0x14
                       );
              }
              pTVar15->ArrayNum = pTVar15->ArrayNum + -1;
              if (4 < (byte)LogNetFastTArray._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>&___ptr64)___ptr64'
                            ::__l83::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
              }
            }
            lVar17 = lVar17 + -4;
            uVar14 = uVar14 - 1;
          } while (-1 < (int)uVar14);
        }
        pFVar3 = this->ArraySerializer;
        bVar6 = 1 < (int)pFVar3->_padding_;
        if (!bVar6) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)pFVar3);
        }
        piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
        *(undefined4 *)&pFVar3->_padding_ = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)pFVar3,0,piVar1);
        }
        *(undefined4 *)&pFVar3->_padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
        iVar7 = *(int *)((longlong)&pFVar3->_padding_ + 4);
        *(undefined4 *)&pFVar3->_padding_ = 0;
        if ((iVar7 < 0) || (0x80 < iVar7)) {
          *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&pFVar3->_padding_,0);
        }
        if (bVar6) {
          *(int *)&pFVar3->_padding_ = 1;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)pFVar3);
        }
      }
      FCsvProfiler::EndStat("FastArray_Apply",local_5c);
      return;
    }
    uVar16 = *(uint *)FVar13;
    if ((-1 < (int)uVar16) &&
       (pTVar15 = this->Items, FVar12 = local_58, (int)uVar16 < pTVar15->ArrayNum)) {
      if (((int)uVar16 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = *(int *)((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x14);
      if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
        bVar6 = false;
        puVar11 = &param_4->field_0x38;
        if (*(undefined1 **)&param_4->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&param_4->field_0x40;
        }
        iVar10 = *(int *)(puVar11 +
                         ((longlong)*(int *)&param_4->field_0x48 - 1U & (longlong)iVar2) * 4);
        if (iVar10 != -1) {
          do {
            if (*(int *)((longlong)iVar10 * 200 + *(longlong *)param_4) == iVar2) {
              TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                               *)param_4,iVar10);
              bVar6 = true;
              break;
            }
            iVar10 = *(int *)((longlong)iVar10 * 200 + 0xc0 + *(longlong *)param_4);
          } while (iVar10 != -1);
        }
        if (bVar6) {
          this->Parms->bGuidListsChanged = true;
        }
      }
      uVar14 = 0;
      if ((int)uVar16 < this->Items->ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      FVar12 = local_58;
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar12 = local_58, bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar13 = (ForElementType<int>)((longlong)FVar13 + 4);
  } while( true );
}

// PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_> @ 148a3eb10

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::
PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,FFastArraySerializerHeader *param_1,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_3,
          TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>
          *param_4)

{
  int *piVar1;
  FWorldPartitionDestructibleHLODState *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  ForElementType<int> FVar11;
  uint uVar12;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  FIdentityFunctor local_res8;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76 [2];
  uint local_74;
  undefined1 local_70 [4];
  int local_6c;
  uint local_68 [2];
  uint local_60;
  ForElementType<int> local_58;
  
  if (!`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat1084) {
    FCsvProfilerTrace::OutputInlineStat("FastArray_Apply",_GCsvCategory_Networking.Index);
    `public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat1084 = true;
  }
  local_60 = _GCsvCategory_Networking.Index;
  FCsvProfiler::BeginStat("FastArray_Apply",_GCsvCategory_Networking.Index,"CSV_FastArray_Apply");
  if (this->Parms->bInternalAck == false) {
    pTVar13 = this->Items;
    local_74 = 0;
    if (0 < pTVar13->ArrayNum) {
      do {
        uVar12 = local_74;
        uVar6 = 0;
        if ((int)local_74 < pTVar13->ArrayNum) {
          uVar6 = ~local_74 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = *(int *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x14 + 8);
        if ((iVar7 < param_1->ArrayReplicationKey) && (param_1->BaseReplicationKey < iVar7)) {
          FVar10 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<int>)&param_1->DeletedIndices;
          FVar9 = FVar11;
          if (FVar10 != (ForElementType<int>)0x0) {
            FVar9 = FVar10;
          }
          FVar10 = (ForElementType<int>)
                   ((longlong)FVar9 + (longlong)(param_1->DeletedIndices).ArrayNum * 4);
          for (; FVar9 != FVar10; FVar9 = (ForElementType<int>)((longlong)FVar9 + 4)) {
            if (*(uint *)FVar9 == local_74) goto LAB_148a3ed44;
          }
          if (4 < (byte)LogNetFastTArray._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>&___ptr64)___ptr64'
                        ::__l17::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
          }
          FVar10 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
          FVar9 = FVar11;
          if (FVar10 != (ForElementType<int>)0x0) {
            FVar9 = FVar10;
          }
          if ((ulonglong)FVar9 <= &local_74) {
            FVar9 = FVar11;
            if (FVar10 != (ForElementType<int>)0x0) {
              FVar9 = FVar10;
            }
            if ((&local_74 <
                 (uint *)((longlong)FVar9 + (longlong)(param_1->DeletedIndices).ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar7 = (param_1->DeletedIndices).ArrayNum;
          piVar1 = &(param_1->DeletedIndices).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (0x404,(ForElementType<int> *)FVar11,piVar1);
          }
          (param_1->DeletedIndices).ArrayNum = iVar7 + 1;
          FVar10 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
          if (FVar10 != (ForElementType<int>)0x0) {
            FVar11 = FVar10;
          }
          *(uint *)((longlong)FVar11 + (longlong)iVar7 * 4) = local_74;
        }
LAB_148a3ed44:
        pTVar13 = this->Items;
        local_74 = local_74 + 1;
      } while ((int)local_74 < pTVar13->ArrayNum);
    }
  }
  if ((0 < (param_1->DeletedIndices).ArrayNum) || (0 < param_1->NumChanged)) {
    pFVar2 = this->ArraySerializer;
    piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    if (*(int *)((longlong)&pFVar2->_padding_ + 4) == -1) {
      *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    }
  }
  FVar11 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
  iVar7 = (param_1->DeletedIndices).ArrayNum;
  if (FVar11 == (ForElementType<int>)0x0) {
    FVar11 = (ForElementType<int>)&param_1->DeletedIndices;
  }
  local_6c = this->Items->ArrayNum;
  local_58 = (ForElementType<int>)((longlong)FVar11 + (longlong)iVar7 * 4);
  while( true ) {
    FVar10 = local_58;
    if ((param_1->DeletedIndices).ArrayNum != iVar7) {
      local_78 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_78);
    }
    if (FVar11 == FVar10) break;
    uVar12 = *(uint *)FVar11;
    if ((-1 < (int)uVar12) && (pTVar13 = this->Items, (int)uVar12 < pTVar13->ArrayNum)) {
      if (((int)uVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68[0] = *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x14);
      if ((*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) &&
         (iVar8 = TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
                  ::RemoveImpl<int>((TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
                                     *)param_4,local_68[0],(int *)local_68), 0 < iVar8)) {
        this->Parms->bGuidListsChanged = true;
      }
      uVar6 = 0;
      if ((int)uVar12 < this->Items->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar11 = (ForElementType<int>)((longlong)FVar11 + 4);
  }
  if (((param_1->DeletedIndices).ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_6c != this->Items->ArrayNum) && (1 < (byte)LogNetFastTArray._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>&___ptr64)___ptr64'
                ::__l44::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
  }
  FVar11 = (param_3->AllocatorInstance).SecondaryData;
  iVar7 = param_3->ArrayNum;
  FVar10 = (ForElementType<int>)param_3;
  if (FVar11 != (ForElementType<int>)0x0) {
    FVar10 = FVar11;
  }
  FVar11 = (ForElementType<int>)((longlong)FVar10 + (longlong)iVar7 * 4);
  while( true ) {
    if (param_3->ArrayNum != iVar7) {
      local_77 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_77);
    }
    iVar8 = local_6c;
    if (FVar10 == FVar11) break;
    uVar12 = 0;
    if ((int)*(uint *)FVar10 < this->Items->ArrayNum) {
      uVar12 = ~*(uint *)FVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar10 = (ForElementType<int>)((longlong)FVar10 + 4);
  }
  FVar11 = (param_3->AllocatorInstance).SecondaryData;
  iVar7 = param_3->ArrayNum;
  pFVar2 = this->ArraySerializer;
  if (FVar11 != (ForElementType<int>)0x0) {
    param_3 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar11;
  }
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar2->bIsClient == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsClient()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                         ,0x78,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar2->OwnerComponent).field0_0x0.DebugPtr !=
      (UWorldPartitionDestructibleHLODComponent *)0x0) {
    FVar11 = (ForElementType<int>)((longlong)param_3 + (longlong)iVar7 * 4);
    for (; (ForElementType<int>)param_3 != FVar11;
        param_3 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                  ((longlong)param_3 + 4)) {
      FWorldPartitionDestructibleHLODState::ApplyDamagedActorState(pFVar2,*(int *)param_3);
    }
    UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
              ((pFVar2->OwnerComponent).field0_0x0.DebugPtr);
  }
  FVar11 = (param_2->AllocatorInstance).SecondaryData;
  iVar7 = param_2->ArrayNum;
  FVar10 = (ForElementType<int>)param_2;
  if (FVar11 != (ForElementType<int>)0x0) {
    FVar10 = FVar11;
  }
  FVar11 = (ForElementType<int>)((longlong)FVar10 + (longlong)iVar7 * 4);
  while( true ) {
    if (param_2->ArrayNum != iVar7) {
      local_76[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_76);
    }
    if (FVar10 == FVar11) break;
    uVar12 = 0;
    if ((int)*(uint *)FVar10 < this->Items->ArrayNum) {
      uVar12 = ~*(uint *)FVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar10 = (ForElementType<int>)((longlong)FVar10 + 4);
  }
  FVar11 = (param_2->AllocatorInstance).SecondaryData;
  iVar7 = param_2->ArrayNum;
  pFVar2 = this->ArraySerializer;
  if (FVar11 != (ForElementType<int>)0x0) {
    param_2 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar11;
  }
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar2->bIsClient == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsClient()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                         ,0x78,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar2->OwnerComponent).field0_0x0.DebugPtr !=
      (UWorldPartitionDestructibleHLODComponent *)0x0) {
    FVar11 = (ForElementType<int>)((longlong)param_2 + (longlong)iVar7 * 4);
    for (; (ForElementType<int>)param_2 != FVar11;
        param_2 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                  ((longlong)param_2 + 4)) {
      FWorldPartitionDestructibleHLODState::ApplyDamagedActorState(pFVar2,*(int *)param_2);
    }
    UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
              ((pFVar2->OwnerComponent).field0_0x0.DebugPtr);
  }
  if ((iVar8 != this->Items->ArrayNum) && (1 < (byte)LogNetFastTArray._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>&___ptr64)___ptr64'
                ::__l66::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
  }
  iVar7 = (param_1->DeletedIndices).ArrayNum;
  if (0 < iVar7) {
    FVar11 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
    local_res8 = SUB81(this,0);
    if (FVar11 == (ForElementType<int>)0x0) {
      FVar11 = (ForElementType<int>)&param_1->DeletedIndices;
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)FVar11,iVar7,local_res8,(TLess<void> *)local_70);
    uVar12 = (param_1->DeletedIndices).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      lVar14 = (longlong)(int)uVar12 * 4;
      do {
        uVar6 = 0;
        if ((int)uVar12 < (param_1->DeletedIndices).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<int>)&param_1->DeletedIndices;
        if (FVar11 != (ForElementType<int>)0x0) {
          FVar10 = FVar11;
        }
        uVar6 = *(uint *)(lVar14 + (longlong)FVar10);
        if ((-1 < (int)uVar6) && (pTVar13 = this->Items, (int)uVar6 < pTVar13->ArrayNum)) {
          if (((int)uVar6 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pTVar13->AllocatorInstance).Data;
          iVar7 = pTVar13->ArrayNum + ~uVar6;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar6 * 0x14,
                    pFVar3 + (longlong)(pTVar13->ArrayNum - iVar7) * 0x14,(longlong)iVar7 * 0x14);
          }
          pTVar13->ArrayNum = pTVar13->ArrayNum + -1;
          if (4 < (byte)LogNetFastTArray._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>(FFastArraySerializer::FFastArraySerializerHeader&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>&___ptr64)___ptr64'
                        ::__l83::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
          }
        }
        lVar14 = lVar14 + -4;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    pFVar2 = this->ArraySerializer;
    bVar5 = 1 < (int)pFVar2->_padding_;
    if (!bVar5) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)pFVar2);
    }
    iVar7 = *(int *)((longlong)&pFVar2->_padding_ + 4);
    *(undefined4 *)&pFVar2->_padding_ = 0;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)pFVar2,0,(int *)((longlong)&pFVar2->_padding_ + 4));
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    iVar7 = *(int *)((longlong)&pFVar2->_padding_ + 4);
    *(undefined4 *)&pFVar2->_padding_ = 0;
    if ((iVar7 < 0) || (0x80 < iVar7)) {
      *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&pFVar2->_padding_,0);
    }
    if (bVar5) {
      *(int *)&pFVar2->_padding_ = 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)pFVar2);
    }
  }
  FCsvProfiler::EndStat("FastArray_Apply",local_60);
  return;
}

// BuildChangedAndDeletedBuffers @ 148a4a860

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::BuildChangedAndDeletedBuffers
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1
          ,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2,
          TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_3,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  FWorldPartitionDestructibleHLODState *this_00;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar3;
  ForElementType<int> FVar4;
  longlong lVar5;
  code *pcVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar12;
  undefined8 uVar13;
  ForElementType<int> FVar14;
  uint *puVar15;
  undefined1 *puVar16;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar17;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar18;
  uint *puVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<int> FVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  int local_res18;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  longlong local_f8;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined1 local_c8 [24];
  FString local_b0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  uint uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  undefined4 local_44;
  uint *puVar25;
  
  ConditionalLogSerializerState(this,param_2);
  local_res18 = CalcNumItemsForConsideration(this);
  puVar23 = (uint *)0x0;
  uVar24 = 0;
  uVar22 = uVar24;
  if (param_2 != (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0)
  {
    uVar22 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  }
  local_res18 = uVar22 - local_res18;
  if (4 < (byte)LogNetFastTArray._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TMap<int,int,class_FDefaultSetAllocator,struct_TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
  }
  pTVar18 = this->Items;
  if (0 < pTVar18->ArrayNum) {
    local_f8 = 0;
    puVar15 = puVar23;
    do {
      lVar5 = local_f8;
      uVar9 = (uint)puVar15;
      uVar22 = uVar24;
      if ((int)uVar9 < pTVar18->ArrayNum) {
        uVar22 = ~uVar9 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar20 = (pTVar18->AllocatorInstance).Data + lVar5;
      if (4 < (byte)LogNetFastTArray._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TMap<int,int,class_FDefaultSetAllocator,struct_TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                    ::__l22::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      }
      if ((this->Parms->bIsWritingOnClient == false) || (*(uint *)pFVar20 != 0xffffffff)) {
        if (*(uint *)pFVar20 == 0xffffffff) {
          this_00 = this->ArraySerializer;
          *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
          *(uint *)pFVar20 = (uint)this_00->_padding_;
          if ((int)this_00->_padding_ == -1) {
            *(undefined4 *)&this_00->_padding_ = 0;
          }
          *(uint *)(pFVar20 + 4) = *(uint *)(pFVar20 + 4) + 1;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)this_00);
          piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
          *piVar1 = *piVar1 + 1;
          if (*(int *)((longlong)&this_00->_padding_ + 4) == -1) {
            *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
          }
          this_00->_padding_ = -1;
        }
        local_68 = pFVar20 + 4;
        local_70 = pFVar20;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)param_1,(TPairInitializer<int_const_&,int_const_&> *)local_c8,
                   (bool *)&local_70);
        FVar17 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)param_3;
        if (param_2 ==
            (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0) {
LAB_148a4abd0:
          if (4 < (byte)LogNetFastTArray._0_1_) {
            ::FString::FString(&local_b0,L"");
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TMap<int,int,class_FDefaultSetAllocator,struct_TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                        ::__l89::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
          }
          FVar3 = (param_3->AllocatorInstance).SecondaryData;
          uStack_fc = *(uint *)pFVar20;
          FVar12 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)param_3;
          if (FVar3 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0)
          {
            FVar12 = FVar3;
          }
          local_100 = uVar9;
          if ((ulonglong)FVar12 <= &local_100) {
            FVar12 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                     param_3;
            if (FVar3 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                         0x0) {
              FVar12 = FVar3;
            }
            if ((&local_100 < (uint *)((longlong)FVar12 + (longlong)param_3->ArrayMax * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = param_3->ArrayNum;
          if (iVar11 == param_3->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>_>
                               (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar11 + 1;
          FVar3 = (param_3->AllocatorInstance).SecondaryData;
          if (FVar3 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0)
          {
            FVar17 = FVar3;
          }
          local_res18 = local_res18 + 1;
          uVar13 = CONCAT44(uStack_fc,local_100);
        }
        else {
          puVar15 = puVar23;
          if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
            puVar16 = &param_2->field_0x38;
            if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
              puVar16 = *(undefined1 **)&param_2->field_0x40;
            }
            uVar22 = *(uint *)(puVar16 +
                              (ulonglong)(*(int *)&param_2->field_0x48 - 1U & *(uint *)pFVar20) * 4)
            ;
            if (uVar22 != 0xffffffff) {
              do {
                puVar15 = (uint *)((longlong)(int)uVar22 * 0x10 + *(longlong *)param_2);
                if (*puVar15 == *(uint *)pFVar20) break;
                uVar22 = puVar15[2];
                puVar15 = puVar23;
              } while (uVar22 != 0xffffffff);
            }
          }
          puVar19 = puVar15 + 1;
          if (puVar15 == (uint *)0x0) {
            puVar19 = puVar23;
          }
          if (puVar19 == (uint *)0x0) goto LAB_148a4abd0;
          if (*puVar19 == *(uint *)(pFVar20 + 4)) {
            if (4 < (byte)LogNetFastTArray._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TMap<int,int,class_FDefaultSetAllocator,struct_TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                          ::__l51::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
            }
            goto LAB_148a4acf0;
          }
          if (4 < (byte)LogNetFastTArray._0_1_) {
            ::FString::FString((FString *)(local_c8 + 8),L"");
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TMap<int,int,class_FDefaultSetAllocator,struct_TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                        ::__l70::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
            if ((int *)local_c8._8_8_ != (int *)0x0) {
              FMemory::Free((void *)local_c8._8_8_);
            }
          }
          FVar3 = (param_3->AllocatorInstance).SecondaryData;
          uStack_104 = *(uint *)pFVar20;
          FVar12 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)param_3;
          if (FVar3 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0)
          {
            FVar12 = FVar3;
          }
          local_108 = uVar9;
          if ((ulonglong)FVar12 <= &local_108) {
            FVar12 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                     param_3;
            if (FVar3 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                         0x0) {
              FVar12 = FVar3;
            }
            if ((&local_108 < (uint *)((longlong)FVar12 + (longlong)param_3->ArrayMax * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = param_3->ArrayNum;
          if (iVar11 == param_3->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>_>
                               (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar11 + 1;
          FVar3 = (param_3->AllocatorInstance).SecondaryData;
          if (FVar3 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0)
          {
            FVar17 = FVar3;
          }
          uVar13 = CONCAT44(uStack_104,local_108);
        }
        *(undefined8 *)((longlong)FVar17 + (longlong)iVar11 * 8) = uVar13;
      }
LAB_148a4acf0:
      puVar15 = (uint *)(ulonglong)(uVar9 + 1);
      local_f8 = local_f8 + 0x14;
      pTVar18 = this->Items;
    } while ((int)(uVar9 + 1) < pTVar18->ArrayNum);
  }
  if ((0 < local_res18) &&
     (param_2 != (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0))
  {
    uVar22 = *(uint *)&param_2->field_0x28;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
    uStack_94 = 1;
    local_80 = 0;
    puVar15 = puVar23;
    if (uVar22 != 0) {
      puVar15 = (uint *)(ulonglong)uVar22;
      puVar19 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)TStack_e8.Array;
      }
      uVar9 = *puVar19;
      puVar25 = puVar23;
      local_80 = 0;
      uVar24 = 0;
      while (uVar9 == 0) {
        iVar11 = (int)puVar25;
        local_80 = (int)puVar23 + 0x20;
        puVar23 = (uint *)(ulonglong)local_80;
        uVar24 = iVar11 + 1;
        puVar25 = (uint *)(ulonglong)uVar24;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
        goto LAB_148a4adad;
        uVar9 = puVar19[(longlong)iVar11 + 1];
      }
      uStack_94 = -uVar9 & uVar9;
      uVar2 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_c8._4_4_ = (undefined4)lVar5;
      uVar9 = (local_80 - 1) + local_c8._4_4_;
      if ((int)uVar22 < (int)uVar9) {
        uVar9 = uVar22;
      }
      puVar15 = (uint *)(ulonglong)uVar9;
    }
LAB_148a4adad:
    uStack_88 = 0xffffffff;
    uStack_84 = (uint)puVar15;
    uStack_7c = local_44;
    TStack_e8._padding_ = CONCAT44(uStack_94,uVar24);
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    TStack_e8._28_4_ = local_44;
    TStack_e8.BaseBitIndex = local_80;
    local_f0 = param_2;
    local_a0 = param_2;
    uStack_98 = uVar24;
    local_90 = (undefined1 *)TStack_e8.Array;
    TStack_e8.CurrentBitIndex = uStack_84;
    if ((int)uStack_84 < (int)uVar22) {
      do {
        iVar11 = TStack_e8.CurrentBitIndex;
        pTVar7 = local_f0;
        uVar24 = *(uint *)(*(longlong *)local_f0 + (longlong)(int)puVar15 * 0x10);
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          puVar16 = &param_1->field_0x38;
          if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
            puVar16 = *(undefined1 **)&param_1->field_0x40;
          }
          iVar10 = *(int *)(puVar16 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar24) * 4);
          if (iVar10 != -1) {
            do {
              if (*(uint *)(*(longlong *)param_1 + (longlong)iVar10 * 0x10) == uVar24)
              goto LAB_148a4af53;
              iVar10 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iVar10 * 0x10);
            } while (iVar10 != -1);
          }
        }
        if (4 < (byte)LogNetFastTArray._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TMap<int,int,class_FDefaultSetAllocator,struct_TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                      ::__l114::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
        }
        FVar4 = (param_4->AllocatorInstance).SecondaryData;
        FVar21 = (ForElementType<int>)((longlong)iVar11 * 0x10 + *(longlong *)pTVar7);
        FVar14 = (ForElementType<int>)param_4;
        if (FVar4 != (ForElementType<int>)0x0) {
          FVar14 = FVar4;
        }
        if ((ulonglong)FVar14 <= (ulonglong)FVar21) {
          FVar14 = (ForElementType<int>)param_4;
          if (FVar4 != (ForElementType<int>)0x0) {
            FVar14 = FVar4;
          }
          if (((ulonglong)FVar21 < (ulonglong)((longlong)FVar14 + (longlong)param_4->ArrayMax * 4))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar11 = param_4->ArrayNum;
        if (iVar11 == param_4->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar11 + 1;
        FVar4 = (param_4->AllocatorInstance).SecondaryData;
        FVar14 = (ForElementType<int>)param_4;
        if (FVar4 != (ForElementType<int>)0x0) {
          FVar14 = FVar4;
        }
        local_res18 = local_res18 + -1;
        *(undefined4 *)((longlong)FVar14 + (longlong)iVar11 * 4) = *(undefined4 *)FVar21;
        if (local_res18 < 1) {
          return;
        }
LAB_148a4af53:
        TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
        puVar15 = (uint *)(ulonglong)(uint)TStack_e8.CurrentBitIndex;
      } while (TStack_e8.CurrentBitIndex < (TStack_e8.Array)->NumBits);
    }
  }
  return;
}

// BuildChangedAndDeletedBuffersFromDefault @ 148a4afa0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::BuildChangedAndDeletedBuffersFromDefault
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1
          ,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_2)

{
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar6;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint local_58;
  int iStack_54;
  FString local_50;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  
  CalcNumItemsForConsideration(this);
  if ((this->Parms->bIsInitializingBaseFromDefault == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parms.bIsInitializingBaseFromDefault",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                         ,0x360,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar7 = this->Items;
  uVar9 = 0;
  if (0 < pTVar7->ArrayNum) {
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < pTVar7->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (pTVar7->AllocatorInstance).Data + lVar10;
      if (4 < (byte)LogNetFastTArray._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffersFromDefault(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)const___ptr64'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      }
      if ((this->Parms->bIsWritingOnClient == false) || (*(int *)pFVar8 != -1)) {
        if (*(int *)pFVar8 == -1) {
          if (4 < (byte)LogNetFastTArray._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffersFromDefault(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)const___ptr64'
                        ::__l35::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
          }
        }
        else {
          local_40 = pFVar8;
          local_38 = pFVar8 + 4;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_1,(TPairInitializer<int_const_&,int_const_&> *)&stack0x00000008,
                     (bool *)&local_40);
          if (4 < (byte)LogNetFastTArray._0_1_) {
            ::FString::FString(&local_50,L"");
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::BuildChangedAndDeletedBuffersFromDefault(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>&___ptr64,TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)const___ptr64'
                        ::__l52::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
          FVar1 = (param_2->AllocatorInstance).SecondaryData;
          iStack_54 = *(int *)pFVar8;
          FVar6 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)param_2;
          if (FVar1 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0)
          {
            FVar6 = FVar1;
          }
          local_58 = uVar9;
          if ((ulonglong)FVar6 <= &local_58) {
            FVar6 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)param_2
            ;
            if (FVar1 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                         0x0) {
              FVar6 = FVar1;
            }
            if ((&local_58 < (uint *)((longlong)FVar6 + (longlong)param_2->ArrayMax * 8)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar5 = param_2->ArrayNum;
          if (iVar5 == param_2->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>_>
                              (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar5 + 1;
          FVar1 = (param_2->AllocatorInstance).SecondaryData;
          FVar6 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)param_2;
          if (FVar1 != (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0)
          {
            FVar6 = FVar1;
          }
          *(ulonglong *)((longlong)FVar6 + (longlong)iVar5 * 8) = CONCAT44(iStack_54,local_58);
        }
      }
      pTVar7 = this->Items;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x14;
    } while ((int)uVar9 < pTVar7->ArrayNum);
  }
  return;
}

// CalcNumItemsForConsideration @ 148a4bfe0

/* WARNING: Removing unreachable block (ram,0x000148a4c057) */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::CalcNumItemsForConsideration
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pTVar3 = this->Items;
  iVar5 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x14;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWorldPartitionDestructibleHLODDamagedActorState,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((this->Parms->bIsWritingOnClient == false) || (*(int *)pFVar4 != -1)) {
      iVar5 = iVar5 + 1;
      pFVar4 = pFVar4 + 0x14;
    }
    else {
      pFVar4 = pFVar4 + 0x14;
    }
  }
  return iVar5;
}

// ConditionalCreateNewDeltaState @ 148a4cf30

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::ConditionalCreateNewDeltaState
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1
          ,int param_2)

{
  FWorldPartitionDestructibleHLODState *pFVar1;
  INetDeltaBaseState *pIVar2;
  TSharedPtr<INetDeltaBaseState,1> *pTVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  UStruct *pUVar8;
  INetDeltaBaseState *pIVar9;
  FNetFastTArrayBaseState *pFVar10;
  INetDeltaBaseState *pIVar11;
  FNetFastTArrayBaseState *pFVar12;
  INetDeltaBaseState *pIVar13;
  INetDeltaBaseState *pIVar14;
  bool bVar15;
  FName local_res8;
  TRawPtrProxy<FNetFastTArrayBaseState> local_res20;
  TSharedPtr<INetDeltaBaseState,1> local_38;
  FString local_28;
  
  pFVar1 = this->ArraySerializer;
  if (*(int *)((longlong)&pFVar1->_padding_ + 4) != param_2) {
    return true;
  }
  iVar6 = (int)pFVar1->_padding_;
  if (((iVar6 == -1) || (iVar6 != this->Items->ArrayNum)) ||
     (*(int *)((longlong)&pFVar1->_padding_ + 4) == -1)) {
    *(int *)&pFVar1->_padding_ = this->Items->ArrayNum;
    iVar6 = CalcNumItemsForConsideration(this);
    *(int *)((longlong)&this->ArraySerializer->_padding_ + 4) = iVar6;
  }
  if ((*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 !=
       *(int *)((longlong)&this->ArraySerializer->_padding_ + 4)) &&
     (2 < (byte)LogNetFastTArray._0_1_)) {
    pUVar8 = UField::GetOwnerStruct((UField *)this->Struct);
    local_res8 = (FName)pUVar8->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<3>
              (&`public:_bool___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ConditionalCreateNewDeltaState(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_const&___ptr64,int)___ptr64'
                ::__l12::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pIVar2 = this->Parms->OldState;
  if (pIVar2 == (INetDeltaBaseState *)0x0) {
    pFVar10 = ::operator_new(0x78);
    pFVar12 = (FNetFastTArrayBaseState *)0x0;
    if (pFVar10 != (FNetFastTArrayBaseState *)0x0) {
      pFVar10->_padding_ = 0;
      pFVar10->_padding_ = 0;
      pFVar10->_padding_ = 0;
      *(undefined8 *)&pFVar10->IDToCLMap = 0;
      *(undefined8 *)&(pFVar10->IDToCLMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar10->IDToCLMap).field_0x20 = 0;
      pFVar10->_padding_ = (longlong)&___7FNetFastTArrayBaseState__6B_;
      *(undefined4 *)&(pFVar10->IDToCLMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar10->IDToCLMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar10->IDToCLMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar10->IDToCLMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar10->IDToCLMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar10->IDToCLMap).field_0x48 = 0;
      pFVar10->ArrayReplicationKey = -1;
      pFVar12 = pFVar10;
    }
    local_res20.Object = pFVar12;
    TSharedPtr<INetDeltaBaseState,1>::operator=<FNetFastTArrayBaseState>
              (this->Parms->NewState,&local_res20);
    pFVar12->ArrayReplicationKey = *(int *)((longlong)&this->ArraySerializer->_padding_ + 4);
    return false;
  }
  pIVar9 = (INetDeltaBaseState *)pIVar2->_padding_;
  pIVar14 = (INetDeltaBaseState *)0x0;
  pIVar11 = pIVar9;
  pIVar13 = pIVar14;
  if (pIVar9 != (INetDeltaBaseState *)0x0) {
    iVar6 = (int)pIVar9->_padding_;
    do {
      pIVar11 = pIVar14;
      pIVar13 = (INetDeltaBaseState *)0x0;
      if (iVar6 == 0) goto LAB_148a4d065;
      LOCK();
      iVar7 = (int)pIVar9->_padding_;
      bVar15 = iVar6 == iVar7;
      if (bVar15) {
        *(int *)&pIVar9->_padding_ = iVar6 + 1;
        iVar7 = iVar6;
      }
      UNLOCK();
      iVar6 = iVar7;
    } while (!bVar15);
    pIVar11 = pIVar9;
    pIVar13 = (INetDeltaBaseState *)pIVar2->_padding_;
  }
LAB_148a4d065:
  pIVar9 = (INetDeltaBaseState *)&pIVar13->_padding_;
  if (pIVar13 == (INetDeltaBaseState *)0x0) {
    pIVar9 = pIVar14;
  }
  if ((pIVar9 != (INetDeltaBaseState *)&pIVar2->_padding_) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return (bool)uVar5;
  }
  if (pIVar13 == (INetDeltaBaseState *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      uVar5 = (*pcVar4)();
      return (bool)uVar5;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      uVar5 = (*pcVar4)();
      return (bool)uVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pIVar11 != (INetDeltaBaseState *)0x0) {
    LOCK();
    *(int *)&pIVar11->_padding_ = (int)pIVar11->_padding_ + 1;
    UNLOCK();
  }
  pTVar3 = this->Parms->NewState;
  local_38.Object = pIVar13;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar11;
  if (pTVar3 != &local_38) {
    pTVar3->Object = pIVar13;
    local_38.Object = (INetDeltaBaseState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&pTVar3->SharedReferenceCount,&local_38.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar11);
  return false;
}

// ConditionalLogSerializerState @ 148a4d200

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::ConditionalLogSerializerState
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1
          )

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_e8;
  FString local_d8;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  FString local_90;
  FString local_80;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (4 < (byte)LogNetFastTArray._0_1_) {
    ::FString::PrintfImpl(&local_d8,L"Current: %d ");
    pTVar5 = this->Items;
    iVar12 = pTVar5->ArrayNum;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    pFVar2 = pFVar11 + (longlong)iVar12 * 0x14;
    while( true ) {
      if (pTVar5->ArrayNum != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FWorldPartitionDestructibleHLODDamagedActorState,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar11 == pFVar2) break;
      ::FString::PrintfImpl(&local_90,L"[%d/%d], ");
      iVar15 = local_90.Data.ArrayNum + -1;
      if (local_90.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars(&local_d8,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar15);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      pFVar11 = pFVar11 + 0x14;
    }
    if (4 < (byte)LogNetFastTArray._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ConditionalLogSerializerState(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    }
    iVar12 = 0;
    ::FString::PrintfImpl(&local_e8,L"Client: %d ");
    if (param_1 != (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0
       ) {
      iVar15 = *(int *)&param_1->field_0x28;
      puVar1 = &param_1->field_0x10;
      uStack_bc = 1;
      iStack_ac = iVar12;
      local_a8 = iVar12;
      if (iVar15 != 0) {
        puVar17 = *(uint **)&param_1->field_0x20;
        if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar14 = *puVar17;
        while (uVar14 == 0) {
          lVar9 = (longlong)iVar12;
          local_a8 = local_a8 + 0x20;
          iVar12 = iVar12 + 1;
          iStack_ac = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148a4d3ad;
          uVar14 = puVar17[lVar9 + 1];
        }
        uStack_bc = -uVar14 & uVar14;
        uVar3 = (ulonglong)uStack_bc * 2 + 1;
        lVar9 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_98 = (int)lVar9;
        iStack_ac = local_a8 + -1 + local_98;
        if (iVar15 < iStack_ac) {
          iStack_ac = iVar15;
        }
      }
LAB_148a4d3ad:
      uVar14 = *(uint *)&param_1->field_0x28;
      uVar13 = uVar14 & 0xffffffe0;
      iStack_a0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
      uStack_b0 = 0xffffffff;
      TStack_68._padding_ = CONCAT44(uStack_bc,iVar12);
      TStack_68.CurrentBitIndex = iStack_ac;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      iVar10 = (int)uVar14 >> 5;
      TStack_68._28_4_ = iStack_ac;
      TStack_68.BaseBitIndex = local_a8;
      uStack_48 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = param_1;
      iStack_c0 = iVar12;
      local_b8 = puVar1;
      iStack_a4 = iStack_ac;
      local_70 = param_1;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(uint *)&param_1->field_0x28;
      if (uVar14 != uVar4) {
        puVar16 = *(undefined1 **)&param_1->field_0x20;
        if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
          puVar16 = puVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar10 * 4);
        while (uVar14 == 0) {
          lVar9 = (longlong)iVar10;
          uVar13 = uVar13 + 0x20;
          iVar10 = iVar10 + 1;
          uVar14 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_148a4d4a0;
          uVar14 = *(uint *)(puVar16 + lVar9 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar14 = (int)lVar9 + -1 + uVar13;
        if ((int)uVar4 < (int)uVar14) {
          uVar14 = uVar4;
        }
      }
LAB_148a4d4a0:
      while( true ) {
        pTVar7 = local_70;
        if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_68.CurrentBitIndex == uVar14) &&
            (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == param_1)) break;
        ::FString::PrintfImpl(&local_80,L"[%d/%d], ");
        iVar12 = local_80.Data.ArrayNum + -1;
        if (local_80.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        ::FString::AppendChars(&local_e8,(wchar_t *)local_80.Data.AllocatorInstance.Data,iVar12);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      }
    }
    if (4 < (byte)LogNetFastTArray._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ConditionalLogSerializerState(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_const*___ptr64)const___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ConditionalRebuildItemMap @ 148a4d5b0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::ConditionalRebuildItemMap
          (TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this)

{
  int *piVar1;
  int iVar2;
  FWorldPartitionDestructibleHLODState *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_BuildMap> FVar12;
  UStruct *pUVar13;
  FNameEntryId FVar14;
  FName FVar15;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FString local_80;
  FString local_70;
  FScriptContainerElement *local_60;
  uint *local_58;
  
  if ((this->Parms->bUpdateUnmappedObjects == false) && (this->Parms->Writer != (FBitWriter *)0x0))
  {
    return;
  }
  if ((int)this->ArraySerializer->_padding_ -
      *(int *)((longlong)&this->ArraySerializer->_padding_ + 4) == this->Items->ArrayNum) {
    return;
  }
  FVar12 = StatPtr_STAT_NetSerializeFastArray_BuildMap;
  if (StatPtr_STAT_NetSerializeFastArray_BuildMap ==
      (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_BuildMap>)0x0) {
    pFVar11 = ::FName::FName(&local_98,"STAT_NetSerializeFastArray_BuildMap");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_BuildMap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSerializeFastArray_BuildMap,
                        *pFVar11,L"NetSerializeFast Array BuildMap","STATGROUP_ServerCPU",
                        "STATCAT_Advanced",L"Server CPU",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                   ,0x2f0);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar10;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_148a4d734;
    }
  }
  bVar6 = false;
  FVar15 = local_90;
LAB_148a4d734:
  if (4 < (byte)LogNetFastTArray._0_1_) {
    pUVar13 = UField::GetOwnerStruct((UField *)this->Struct);
    local_a8 = (FName)pUVar13->_padding_;
    ::FName::ToString(&local_a8,&local_80);
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ConditionalRebuildItemMap(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this->ArraySerializer;
  bVar8 = 1 < (int)pFVar3->_padding_;
  if (!bVar8) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)pFVar3);
  }
  piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
  *(undefined4 *)&pFVar3->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pFVar3,0,piVar1);
  }
  *(undefined4 *)&pFVar3->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&pFVar3->_padding_ + 4);
  *(undefined4 *)&pFVar3->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&pFVar3->_padding_,0);
  }
  if (bVar8) {
    *(int *)&pFVar3->_padding_ = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               pFVar3);
  }
  pTVar16 = this->Items;
  local_res8 = 0;
  if (0 < pTVar16->ArrayNum) {
    do {
      uVar10 = local_res8;
      uVar9 = 0;
      if ((int)local_res8 < pTVar16->ArrayNum) {
        uVar9 = ~local_res8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)((pTVar16->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14) == -1) {
        if (this->Parms->Writer != (FBitWriter *)0x0) {
          if (2 < (byte)LogNetFastTArray._0_1_) {
            pUVar13 = UField::GetOwnerStruct((UField *)this->Struct);
            local_a0 = (FName)pUVar13->_padding_;
            ::FName::ToString(&local_a0,&local_70);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ConditionalRebuildItemMap(void)___ptr64'
                        ::__l31::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_148a4d914;
        }
      }
      else {
LAB_148a4d914:
        lVar17 = (longlong)(int)local_res8;
        pTVar16 = this->Items;
        pFVar3 = this->ArraySerializer;
        uVar10 = 0;
        if ((int)local_res8 < pTVar16->ArrayNum) {
          uVar10 = ~local_res8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_60 = (pTVar16->AllocatorInstance).Data + lVar17 * 0x14;
        local_58 = &local_res8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)pFVar3,(TPairInitializer<int_const_&,int_const_&> *)local_res18,
                   (bool *)&local_60);
      }
      pTVar16 = this->Items;
      local_res8 = local_res8 + 1;
    } while ((int)local_res8 < pTVar16->ArrayNum);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// ReadDeltaHeader @ 148a61b90

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::ReadDeltaHeader(TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                  *this,FFastArraySerializerHeader *param_1)

{
  byte *pbVar1;
  FBitReader *this_00;
  int *piVar2;
  FFastPathLoadBuffer *pFVar3;
  FWorldPartitionDestructibleHLODState *pFVar4;
  ForElementType<int> FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint *puVar10;
  ForElementType<int> FVar11;
  FStaticBasicLogRecord *pFVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  ForElementType<int> FVar17;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_38 [4];
  
  this_00 = this->Parms->Reader;
  piVar2 = (int *)((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer;
  if (((FFastPathLoadBuffer *)this_00->_padding_)->EndFastPathLoadBuffer < piVar2 + 1) {
    if ((this_00->_padding_ & 0x10000) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,param_1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,(uint *)param_1);
    }
  }
  else {
    param_1->ArrayReplicationKey = *piVar2;
    ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer =
         ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer + 4;
  }
  pbVar1 = (byte *)((longlong)&this_00->_padding_ + 2);
  piVar2 = (int *)((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer;
  if (((FFastPathLoadBuffer *)this_00->_padding_)->EndFastPathLoadBuffer < piVar2 + 1) {
    if ((*pbVar1 & 1) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&param_1->BaseReplicationKey,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,(uint *)&param_1->BaseReplicationKey);
    }
  }
  else {
    param_1->BaseReplicationKey = *piVar2;
    ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer =
         ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer + 4;
  }
  local_res8[0] = 0;
  puVar16 = (uint *)((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer;
  if (((FFastPathLoadBuffer *)this_00->_padding_)->EndFastPathLoadBuffer < puVar16 + 1) {
    if ((*pbVar1 & 1) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar16;
    ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer =
         ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer + 4;
  }
  if (4 < (byte)LogNetFastTArray._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ReadDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
  }
  if (MaxNumberOfAllowedDeletionsPerUpdate < (int)local_res8[0]) {
    if ((byte)LogNetFastTArray._0_1_ < 3) goto LAB_148a61d51;
    pFVar12 = &`public:_bool___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ReadDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
               ::__l23::LOG_Static;
  }
  else {
    piVar2 = (int *)((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer;
    if (((FFastPathLoadBuffer *)this_00->_padding_)->EndFastPathLoadBuffer < piVar2 + 1) {
      if ((*pbVar1 & 1) == 0) {
        (**(code **)(this_00->_padding_ + 0x188))(this_00,&param_1->NumChanged,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this_00,(uint *)&param_1->NumChanged);
      }
    }
    else {
      param_1->NumChanged = *piVar2;
      ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer =
           ((FFastPathLoadBuffer *)this_00->_padding_)->StartFastPathLoadBuffer + 4;
    }
    if (param_1->NumChanged <= MaxNumberOfAllowedChangesPerUpdate) {
      if (4 < (byte)LogNetFastTArray._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ReadDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                    ::__l60::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      }
      puVar16 = (uint *)0x0;
      if (0 < (int)local_res8[0]) {
        do {
          pFVar3 = (FFastPathLoadBuffer *)this_00->_padding_;
          local_res10[0] = 0;
          if (pFVar3->EndFastPathLoadBuffer <
              (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4)) {
            if ((*pbVar1 & 1) == 0) {
              (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res10);
            }
          }
          else {
            local_res10[0] = *(uint *)pFVar3->StartFastPathLoadBuffer;
            pFVar3->StartFastPathLoadBuffer = pFVar3->StartFastPathLoadBuffer + 4;
          }
          pFVar4 = this->ArraySerializer;
          if ((int)pFVar4->_padding_ != *(int *)((longlong)&pFVar4->_padding_ + 4)) {
            plVar14 = &pFVar4->_padding_;
            if ((longlong *)pFVar4->_padding_ != (longlong *)0x0) {
              plVar14 = (longlong *)pFVar4->_padding_;
            }
            uVar15 = *(uint *)((longlong)plVar14 +
                              (ulonglong)((int)pFVar4->_padding_ - 1U & local_res10[0]) * 4);
            if (uVar15 != 0xffffffff) {
              do {
                puVar13 = (uint *)((longlong)(int)uVar15 * 0x10 + pFVar4->_padding_);
                if (*puVar13 == local_res10[0]) {
                  puVar10 = puVar13 + 1;
                  if (puVar13 == (uint *)0x0) {
                    puVar10 = (uint *)0x0;
                  }
                  if (puVar10 != (uint *)0x0) {
                    local_38[0] = *puVar10;
                    FVar17 = (ForElementType<int>)&param_1->DeletedIndices;
                    FVar5 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
                    FVar11 = FVar17;
                    if (FVar5 != (ForElementType<int>)0x0) {
                      FVar11 = FVar5;
                    }
                    if ((ulonglong)FVar11 <= local_38) {
                      FVar11 = FVar17;
                      if (FVar5 != (ForElementType<int>)0x0) {
                        FVar11 = FVar5;
                      }
                      if ((local_38 <
                           (uint *)((longlong)FVar11 +
                                   (longlong)(param_1->DeletedIndices).ArrayMax * 4)) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar7)) {
                        pcVar6 = (code *)swi(3);
                        uVar8 = (*pcVar6)();
                        return (bool)uVar8;
                      }
                    }
                    iVar9 = (param_1->DeletedIndices).ArrayNum;
                    piVar2 = &(param_1->DeletedIndices).ArrayMax;
                    if (iVar9 == *piVar2) {
                      iVar9 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                        (0x404,(ForElementType<int> *)FVar17,piVar2);
                    }
                    (param_1->DeletedIndices).ArrayNum = iVar9 + 1;
                    FVar5 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
                    if (FVar5 != (ForElementType<int>)0x0) {
                      FVar17 = FVar5;
                    }
                    *(uint *)((longlong)FVar17 + (longlong)iVar9 * 4) = local_38[0];
                    if ((byte)LogNetFastTArray._0_1_ < 5) goto LAB_148a61e66;
                    pFVar12 = &`public:_bool___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ReadDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                               ::__l85::LOG_Static;
                    goto LAB_148a61e5a;
                  }
                  break;
                }
                uVar15 = puVar13[2];
              } while (uVar15 != 0xffffffff);
            }
          }
          if (4 < (byte)LogNetFastTArray._0_1_) {
            pFVar12 = &`public:_bool___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ReadDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                       ::__l104::LOG_Static;
LAB_148a61e5a:
            UE::Logging::Private::BasicLog<5>(pFVar12,(FLogCategoryBase *)&LogNetFastTArray);
          }
LAB_148a61e66:
          uVar15 = (int)puVar16 + 1;
          puVar16 = (uint *)(ulonglong)uVar15;
        } while ((int)uVar15 < (int)local_res8[0]);
      }
      return true;
    }
    if ((byte)LogNetFastTArray._0_1_ < 3) goto LAB_148a61d51;
    pFVar12 = &`public:_bool___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::ReadDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
               ::__l43::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogNetFastTArray);
LAB_148a61d51:
  FArchiveState::SetError((FArchiveState *)this_00);
  return false;
}

// WriteDeltaHeader @ 148a6cec0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFastArraySerializer::
TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::WriteDeltaHeader(TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                   *this,FFastArraySerializerHeader *param_1)

{
  undefined1 *puVar1;
  FBitWriter *this_00;
  int *piVar2;
  uint *puVar3;
  ForElementType<int> FVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  ForElementType<int> FVar8;
  int iVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  
  this_00 = this->Parms->Writer;
  piVar2 = *(int **)this_00->_padding_;
  if ((int *)((undefined8 *)this_00->_padding_)[1] < piVar2 + 1) {
    if ((this_00->_padding_ & 0x10000) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,param_1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,(uint *)param_1);
    }
  }
  else {
    param_1->ArrayReplicationKey = *piVar2;
    *(longlong *)this_00->_padding_ = *(longlong *)this_00->_padding_ + 4;
  }
  puVar1 = (undefined1 *)((longlong)&this_00->_padding_ + 2);
  piVar2 = *(int **)this_00->_padding_;
  if ((int *)((undefined8 *)this_00->_padding_)[1] < piVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&param_1->BaseReplicationKey,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,(uint *)&param_1->BaseReplicationKey);
    }
  }
  else {
    param_1->BaseReplicationKey = *piVar2;
    *(longlong *)this_00->_padding_ = *(longlong *)this_00->_padding_ + 4;
  }
  local_res8[0] = (param_1->DeletedIndices).ArrayNum;
  puVar3 = *(uint **)this_00->_padding_;
  if ((uint *)((undefined8 *)this_00->_padding_)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar3;
    *(longlong *)this_00->_padding_ = *(longlong *)this_00->_padding_ + 4;
  }
  piVar2 = *(int **)this_00->_padding_;
  if ((int *)((undefined8 *)this_00->_padding_)[1] < piVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&param_1->NumChanged,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,(uint *)&param_1->NumChanged);
    }
  }
  else {
    param_1->NumChanged = *piVar2;
    *(longlong *)this_00->_padding_ = *(longlong *)this_00->_padding_ + 4;
  }
  if (4 < (byte)LogNetFastTArray._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::WriteDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
  }
  iVar9 = MaxNumberOfAllowedChangesPerUpdate;
  if (2 < (byte)LogNetFastTArray._0_1_) {
    if (MaxNumberOfAllowedDeletionsPerUpdate < (int)local_res8[0]) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::WriteDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    }
    if ((2 < (byte)LogNetFastTArray._0_1_) && (iVar9 < param_1->NumChanged)) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::WriteDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    }
  }
  for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (param_1->DeletedIndices).ArrayNum)); iVar9 = iVar9 + 1) {
    if (iVar9 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FVar4 = (param_1->DeletedIndices).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<int>)&param_1->DeletedIndices;
    if (FVar4 != (ForElementType<int>)0x0) {
      FVar8 = FVar4;
    }
    local_res10[0] = *(uint *)((longlong)FVar8 + (longlong)iVar9 * 4);
    plVar5 = (longlong *)this_00->_padding_;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    if (4 < (byte)LogNetFastTArray._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FFastArraySerializer::TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>::WriteDeltaHeader(FFastArraySerializer::FFastArraySerializerHeader&___ptr64)const___ptr64'
                  ::__l60::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    }
  }
  return;
}

