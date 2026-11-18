// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_> @ 148a2d770

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentHelper::
ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>
          (FWorldPartitionDestructibleHLODState *param_1,
          TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>
          *param_2,FWorldPartitionDestructibleHLODState *param_3,
          TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>
          *param_4,FReplicationStateDescriptor *param_5,FReplicationStateApplyContext *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res10 [8];
  undefined1 local_d8 [4];
  int local_d4;
  ForAnyElementType local_d0;
  int local_c8;
  int iStack_c4;
  uint local_c0 [2];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  int local_94;
  uint local_90;
  uint *local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  undefined1 local_6c [12];
  FScriptContainerElement *local_60;
  int *local_58;
  TArrayView<int,int> local_50;
  
  if (!`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
       ::__l2::__CsvProfilerStat206) {
    FCsvProfilerTrace::OutputInlineStat("FastArray_Apply",_GCsvCategory_Networking.Index);
    `public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
    ::__l2::__CsvProfilerStat206 = true;
  }
  local_70 = _GCsvCategory_Networking.Index;
  FCsvProfiler::BeginStat("FastArray_Apply",_GCsvCategory_Networking.Index,"CSV_FastArray_Apply");
  plVar12 = (longlong *)CONCAT71(param_6._1_7_,param_6._0_1_);
  if (4 < (byte)LogNetFastTArray._0_1_) {
    Logging::Private::BasicLog<5>
              (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
  }
  local_88 = (uint *)plVar12[2];
  local_7c = (uint)*(ushort *)(*plVar12 + 0x86);
  local_80 = *(ushort *)(*plVar12 + 0x86) + 0x1f >> 5;
  if (local_7c == 0) {
    local_88 = &local_7c;
  }
  else if ((local_88 == (uint *)0x0) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Storage != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x5a6,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((local_7c != 0) &&
      ((local_88[local_80 - 1] & ~(0xffffffffU >> (-(char)local_7c & 0x1fU))) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x5a7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar10 = local_88;
  local_74 = **(ushort **)(*plVar12 + 8) + 1;
  local_78 = (*(ushort **)(*plVar12 + 8))[1] - 1;
  if ((local_7c == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar18 = *puVar10;
  if ((int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4) != param_2->ArrayNum) {
    if (5 < (byte)LogNetFastTArray._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ConditionalRebuildItemMap<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState&___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_const&___ptr64,bool)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_1);
    pFVar19 = (param_2->AllocatorInstance).Data;
    local_94 = 0;
    iVar8 = param_2->ArrayNum;
    if (iVar8 != 0) {
      do {
        if (*(int *)(pFVar19 + (longlong)local_94 * 0x14) != -1) {
          local_58 = &local_94;
          local_60 = pFVar19 + (longlong)local_94 * 0x14;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_1,(TPairInitializer<int_const_&,int_const_&> *)local_6c,
                     (bool *)&local_60);
        }
        local_94 = local_94 + 1;
      } while (local_94 != iVar8);
    }
  }
  ConditionalRebuildItemMap<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>
            (param_3,param_4,(bool)((byte)uVar18 & 1));
  uVar18 = param_2->ArrayNum;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  iStack_c4 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_d0,0,&iStack_c4);
  }
  pFVar19 = (param_2->AllocatorInstance).Data;
  local_d4 = 0;
  iVar8 = param_2->ArrayNum;
  if (iVar8 != 0) {
    do {
      uVar18 = *(uint *)(pFVar19 + (longlong)local_d4 * 0x14);
      if (uVar18 != 0xffffffff) {
        if ((int)param_3->_padding_ != *(int *)((longlong)&param_3->_padding_ + 4)) {
          plVar12 = &param_3->_padding_;
          if ((longlong *)param_3->_padding_ != (longlong *)0x0) {
            plVar12 = (longlong *)param_3->_padding_;
          }
          iVar6 = *(int *)((longlong)plVar12 +
                          (ulonglong)((int)param_3->_padding_ - 1U & uVar18) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(param_3->_padding_ + (longlong)iVar6 * 0x10) == uVar18)
              goto LAB_148a2db0d;
              iVar6 = *(int *)(param_3->_padding_ + 8 + (longlong)iVar6 * 0x10);
            } while (iVar6 != -1);
          }
        }
        if (4 < (byte)LogNetFastTArray._0_1_) {
          Logging::Private::BasicLog<5>
                    (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
                      ::__l21::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
        }
        if (((local_d0.Data <= (FScriptContainerElement *)&local_d4) &&
            ((FScriptContainerElement *)&local_d4 < local_d0.Data + (longlong)iStack_c4 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_c8 == iStack_c4) {
          local_c8 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_d0,&iStack_c4);
        }
        lVar9 = (longlong)local_c8;
        local_c8 = local_c8 + 1;
        *(int *)(local_d0.Data + lVar9 * 4) = local_d4;
      }
LAB_148a2db0d:
      local_d4 = local_d4 + 1;
    } while (local_d4 != iVar8);
  }
  uVar18 = param_4->ArrayNum;
  uVar17 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_ac = 0;
  local_a0 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_a8,0,(int *)((longlong)&local_a0 + 4));
  }
  uVar18 = param_4->ArrayNum;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (local_ac < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_b8,local_b0,&local_ac);
  }
  pFVar19 = (param_4->AllocatorInstance).Data;
  lVar9 = (longlong)param_4->ArrayNum;
  local_90 = 0;
  local_6c._4_8_ = pFVar19;
  FVar15.Data = local_d0.Data;
  puVar10 = local_88;
  iVar8 = local_c8;
  do {
    local_d0.Data = FVar15.Data;
    local_88 = puVar10;
    local_c8 = iVar8;
    if (lVar9 == 0) {
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      if (*(int *)((longlong)&param_1->_padding_ + 4) == -1) {
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
      }
      iVar6 = param_2->ArrayNum;
      pFVar19 = FVar15.Data + (longlong)iVar8 * 4;
      while( true ) {
        if (local_c8 != iVar8) {
          param_6._0_1_ = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_6);
        }
        if (FVar15.Data == pFVar19) break;
        uVar18 = 0;
        if ((int)*(uint *)FVar15.Data < param_2->ArrayNum) {
          uVar18 = ~*(uint *)FVar15.Data >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar15.Data = FVar15.Data + 4;
      }
      if ((local_c8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((iVar6 != param_2->ArrayNum) && (1 < (byte)LogNetFastTArray._0_1_)) {
        Logging::Private::BasicLog<2>
                  (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
                    ::__l75::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      }
      iVar4 = (int)local_a0;
      pFVar19 = local_a8.Data + (longlong)(int)local_a0 * 4;
      FVar15.Data = local_a8.Data;
      while( true ) {
        if ((int)local_a0 != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar15.Data == pFVar19) break;
        uVar18 = 0;
        if ((int)*(uint *)FVar15.Data < param_2->ArrayNum) {
          uVar18 = ~*(uint *)FVar15.Data >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar15.Data = FVar15.Data + 4;
      }
      iVar4 = (int)local_a0;
      local_50.DataPtr = (int *)local_a8.Data;
      if (((int)local_a0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_50.ArrayNum = iVar4;
      FWorldPartitionDestructibleHLODState::PostReplicatedChange(param_1,&local_50,iVar6 - iVar8);
      iVar8 = local_b0;
      pFVar19 = local_b8.Data + (longlong)local_b0 * 4;
      FVar15.Data = local_b8.Data;
      while( true ) {
        if (local_b0 != iVar8) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        FVar16.Data = local_b8.Data;
        if (FVar15.Data == pFVar19) break;
        uVar18 = 0;
        if ((int)*(uint *)FVar15.Data < param_2->ArrayNum) {
          uVar18 = ~*(uint *)FVar15.Data >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar15.Data = FVar15.Data + 4;
      }
      lVar9 = (longlong)local_b0;
      if ((local_b0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_1->bIsClient == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsClient()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                             ,0x78,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_1->OwnerComponent).field0_0x0.DebugPtr !=
          (UWorldPartitionDestructibleHLODComponent *)0x0) {
        pFVar19 = FVar16.Data + lVar9 * 4;
        for (; FVar16.Data != pFVar19; FVar16.Data = FVar16.Data + 4) {
          FWorldPartitionDestructibleHLODState::ApplyDamagedActorState(param_1,*(uint *)FVar16.Data)
          ;
        }
        UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
                  ((param_1->OwnerComponent).field0_0x0.DebugPtr);
      }
      if ((iVar6 != param_2->ArrayNum) && (1 < (byte)LogNetFastTArray._0_1_)) {
        Logging::Private::BasicLog<2>
                  (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
                    ::__l95::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      }
      if (0 < local_c8) {
        AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                  ((int *)local_d0.Data,local_c8,param_6._0_1_,(TLess<void> *)local_98);
        uVar18 = local_c8 - 1;
        if (-1 < (int)uVar18) {
          lVar9 = (longlong)(int)uVar18 * 4;
          do {
            uVar13 = 0;
            if ((int)uVar18 < local_c8) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar13 = *(uint *)(local_d0.Data + lVar9);
            if ((-1 < (int)uVar13) && ((int)uVar13 < param_2->ArrayNum)) {
              if (((int)uVar13 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar19 = (param_2->AllocatorInstance).Data;
              iVar8 = param_2->ArrayNum + ~uVar13;
              if (1 < iVar8) {
                iVar8 = 1;
              }
              if (iVar8 != 0) {
                memmove(pFVar19 + (longlong)(int)uVar13 * 0x14,
                        pFVar19 + (longlong)(param_2->ArrayNum - iVar8) * 0x14,
                        (longlong)iVar8 * 0x14);
              }
              param_2->ArrayNum = param_2->ArrayNum + -1;
            }
            lVar9 = lVar9 + -4;
            uVar18 = uVar18 - 1;
          } while (-1 < (int)uVar18);
        }
        bVar5 = 1 < (int)param_1->_padding_;
        if (!bVar5) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)param_1);
        }
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        *(undefined4 *)&param_1->_padding_ = 0;
        if (*piVar1 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)param_1,0,piVar1);
        }
        *(undefined4 *)&param_1->_padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
        iVar8 = *(int *)((longlong)&param_1->_padding_ + 4);
        *(undefined4 *)&param_1->_padding_ = 0;
        if ((iVar8 < 0) || (0x80 < iVar8)) {
          *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_,0);
        }
        if (bVar5) {
          *(undefined4 *)&param_1->_padding_ = 1;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_1);
        }
      }
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      FCsvProfiler::EndStat("FastArray_Apply",local_70);
      return;
    }
    uVar18 = (uint)uVar17;
    if (local_78 == 0) {
LAB_148a2dc0e:
      uVar13 = *(uint *)pFVar19;
      if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
        plVar12 = &param_1->_padding_;
        if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
          plVar12 = (longlong *)param_1->_padding_;
        }
        uVar7 = *(uint *)((longlong)plVar12 + (ulonglong)((int)param_1->_padding_ - 1U & uVar13) * 4
                         );
        if (uVar7 != 0xffffffff) {
          do {
            puVar10 = (uint *)((longlong)(int)uVar7 * 0x10 + param_1->_padding_);
            if (*puVar10 == uVar13) {
              pFVar14 = (FScriptContainerElement *)(puVar10 + 1);
              if (puVar10 == (uint *)0x0) {
                pFVar14 = (FScriptContainerElement *)0x0;
              }
              if (pFVar14 != (FScriptContainerElement *)0x0) {
                uVar13 = *(uint *)pFVar14;
                uVar7 = 0;
                if ((int)uVar13 < param_2->ArrayNum) {
                  uVar7 = ~uVar13 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar2 = (FScriptContainerElement *)(local_6c._4_8_ + (longlong)(int)uVar18 * 0x14);
                bVar5 = InternalCompareArrayElement
                                  (param_5,(param_2->AllocatorInstance).Data +
                                           (longlong)(int)uVar13 * 0x14,pFVar2);
                uVar18 = local_90;
                if (bVar5) goto LAB_148a2e007;
                if (4 < (byte)LogNetFastTArray._0_1_) {
                  Logging::Private::BasicLog<5>
                            (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
                              ::__l42::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
                }
                if (((local_b8.Data <= pFVar14) &&
                    (pFVar14 < local_b8.Data + (longlong)local_ac * 4)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (local_b0 == local_ac) {
                  local_b0 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_b8,&local_ac);
                }
                iVar8 = local_b0 + 1;
                *(uint *)(local_b8.Data + (longlong)local_b0 * 4) = *(uint *)pFVar14;
                uVar18 = *(uint *)pFVar14;
                uVar13 = 0;
                if ((int)uVar18 < param_2->ArrayNum) {
                  uVar13 = ~uVar18 >> 0x1f;
                }
                local_b0 = iVar8;
                if ((uVar13 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar14 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x14;
                InternalApplyArrayElement(param_5,pFVar14,pFVar2);
                goto LAB_148a2de41;
              }
              break;
            }
            uVar7 = puVar10[2];
          } while (uVar7 != 0xffffffff);
        }
      }
      if (1 < uVar13 + 1) {
        pFVar14 = (param_2->AllocatorInstance).Data;
        if (((pFVar14 <= pFVar19) && (pFVar19 < pFVar14 + (longlong)param_2->ArrayMax * 0x14)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = param_2->ArrayNum;
        if (uVar13 == param_2->ArrayMax) {
          uVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x414,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = uVar13 + 1;
        lVar11 = (longlong)(int)uVar13;
        pFVar14 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar14 + lVar11 * 0x14) = 0xffffffffffffffff;
        *(undefined4 *)(pFVar14 + lVar11 * 0x14 + 8) = 0xffffffff;
        *(uint *)(pFVar14 + lVar11 * 0x14 + 0xc) = *(uint *)(pFVar19 + 0xc);
        pFVar14[lVar11 * 0x14 + 0x10] = pFVar19[0x10];
        local_c0[0] = uVar13;
        if (4 < (byte)LogNetFastTArray._0_1_) {
          Logging::Private::BasicLog<5>
                    (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState*___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>*___ptr64,FWorldPartitionDestructibleHLODState*___ptr64,TArray<struct_FWorldPartitionDestructibleHLODDamagedActorState,class_TSizedDefaultAllocator<32>_>_const*___ptr64,UE::Net::FReplicationStateDescriptor_const*___ptr64,UE::Net::FReplicationStateApplyContext&___ptr64)'
                      ::__l56::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
        }
        uVar13 = local_c0[0];
        uVar7 = 0;
        if ((int)local_c0[0] < param_2->ArrayNum) {
          uVar7 = ~local_c0[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x14;
        *(uint *)pFVar14 = *(uint *)pFVar19;
        if (((local_a8.Data <= (FScriptContainerElement *)local_c0) &&
            ((FScriptContainerElement *)local_c0 < local_a8.Data + (longlong)local_a0._4_4_ * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (int)local_a0;
        if ((int)local_a0 == local_a0._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar8 + 1);
        *(uint *)(local_a8.Data + (longlong)iVar8 * 4) = local_c0[0];
        local_90 = uVar18;
LAB_148a2de41:
        uVar18 = local_90;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          uVar13 = *(uint *)((longlong)&param_1->_padding_ + 4);
          *(uint *)(pFVar14 + 4) = *(uint *)(pFVar14 + 4) + 1;
          *(uint *)(pFVar14 + 8) = uVar13;
        }
      }
    }
    else {
      uVar13 = local_74 + (int)(uVar17 % (ulonglong)local_78);
      if ((local_7c <= uVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((puVar10[uVar13 >> 5] >> (uVar13 & 0x1f) & 1) != 0) goto LAB_148a2dc0e;
    }
LAB_148a2e007:
    local_90 = uVar18 + 1;
    uVar17 = (ulonglong)local_90;
    pFVar19 = pFVar19 + 0x14;
    lVar9 = lVar9 + -1;
    FVar15.Data = local_d0.Data;
    puVar10 = local_88;
    iVar8 = local_c8;
  } while( true );
}

// ConditionalRebuildItemMap<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_> @ 148a2e7c0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentHelper::
ConditionalRebuildItemMap<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>
          (FWorldPartitionDestructibleHLODState *param_1,
          TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int local_res18 [4];
  FScriptContainerElement *local_18;
  int *local_10;
  
  if ((param_3) ||
     ((int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4) != param_2->ArrayNum)) {
    if (5 < (byte)LogNetFastTArray._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_static_void___cdecl_UE::Net::Private::FFastArrayReplicationFragmentHelper::ConditionalRebuildItemMap<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>(FWorldPartitionDestructibleHLODState&___ptr64,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_const&___ptr64,bool)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_1);
    pFVar2 = (param_2->AllocatorInstance).Data;
    iVar1 = param_2->ArrayNum;
    local_res18[0] = 0;
    if (iVar1 != 0) {
      do {
        local_18 = pFVar2 + (longlong)local_res18[0] * 0x14;
        if (*(int *)(pFVar2 + (longlong)local_res18[0] * 0x14) != -1) {
          local_10 = local_res18;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_1,(TPairInitializer<int_const_&,int_const_&> *)(local_res18 + 2),
                     (bool *)&local_18);
        }
        local_res18[0] = local_res18[0] + 1;
      } while (local_res18[0] != iVar1);
    }
  }
  return;
}

