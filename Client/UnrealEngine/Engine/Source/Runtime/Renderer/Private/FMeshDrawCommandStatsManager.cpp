// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 12

// FMeshDrawCommandStatsManager @ 144eeedc0

FMeshDrawCommandStatsManager * __thiscall
FMeshDrawCommandStatsManager::FMeshDrawCommandStatsManager(FMeshDrawCommandStatsManager *this)

{
  code *pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar2;
  FMeshDrawCommandStatsManager *pFVar3;
  FDelegateHandle local_res10 [2];
  
  this->CurrentFrameNumber = 0;
  this->bRequestDumpStats = false;
  this->bCollectStats = false;
  (this->OptionalCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalCategory).Data.ArrayNum = 0;
  (this->OptionalCategory).Data.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FrameDataCS,4000);
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  (this->Stats).TotalDrawData.PrimitiveCount = 0;
  (this->Stats).TotalDrawData.VertexCount = 0;
  (this->Stats).TotalInstances = 0;
  (this->Stats).InstanceCullingIndirectDrawData.PrimitiveCount = 0;
  (this->Stats).InstanceCullingIndirectDrawData.VertexCount = 0;
  (this->Stats).InstanceCullingIndirectInstances = 0;
  (this->Stats).CustomIndirectDrawData.PrimitiveCount = 0;
  (this->Stats).CustomIndirectDrawData.VertexCount = 0;
  (this->Stats).CustomIndirectInstances = 0;
  (this->Stats).CategoryStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stats).CategoryStats.ArrayNum = 0;
  (this->Stats).CategoryStats.ArrayMax = 0;
  *(undefined8 *)&this->StatCollections = 0;
  *(undefined8 *)&(this->StatCollections).field_0x8 = 0;
  *(undefined8 *)&(this->StatCollections).field_0x20 = 0;
  *(undefined4 *)&(this->StatCollections).field_0x28 = 0;
  *(undefined4 *)&(this->StatCollections).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatCollections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatCollections).field_0x34 = 0;
  *(undefined8 *)&(this->StatCollections).field_0x40 = 0;
  *(undefined4 *)&(this->StatCollections).field_0x48 = 0;
  *(undefined8 *)&this->BudgetedDrawData = 0;
  *(undefined8 *)&(this->BudgetedDrawData).field_0x8 = 0;
  *(undefined8 *)&(this->BudgetedDrawData).field_0x20 = 0;
  *(undefined4 *)&(this->BudgetedDrawData).field_0x28 = 0;
  *(undefined4 *)&(this->BudgetedDrawData).field_0x2c = 0x80;
  *(undefined4 *)&(this->BudgetedDrawData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BudgetedDrawData).field_0x34 = 0;
  *(undefined8 *)&(this->BudgetedDrawData).field_0x40 = 0;
  *(undefined4 *)&(this->BudgetedDrawData).field_0x48 = 0;
  *(undefined8 *)&this->UntrackedDrawData = 0;
  *(undefined8 *)&(this->UntrackedDrawData).field_0x8 = 0;
  *(undefined8 *)&(this->UntrackedDrawData).field_0x20 = 0;
  *(undefined4 *)&(this->UntrackedDrawData).field_0x28 = 0;
  *(undefined4 *)&(this->UntrackedDrawData).field_0x2c = 0x80;
  *(undefined4 *)&(this->UntrackedDrawData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UntrackedDrawData).field_0x34 = 0;
  *(undefined8 *)&(this->UntrackedDrawData).field_0x40 = 0;
  *(undefined4 *)&(this->UntrackedDrawData).field_0x48 = 0;
  (this->ScreenMessageDelegate).ID = 0;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FMeshDrawCommandStatsManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrameRT,(FMeshDrawCommandStatsManager *)(local_res10 + 1),
             (pmf_59790ee0)this);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLazySingleton::Construct<FRendererOnScreenNotification>
                (&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                  ::__l2::Singleton);
      DAT_1550a81e8 =
           &`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
            ::__l2::Singleton;
      atexit(`TLazySingleton<FRendererOnScreenNotification>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((LPCRITICAL_SECTION)DAT_1550a81e8 == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshDrawCommandStatsManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)DAT_1550a81e8;
  if ((LPCRITICAL_SECTION)DAT_1550a81e8 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)DAT_1550a81e8);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::AddLambda<_FMeshDrawCommandStatsManager::FMeshDrawCommandStatsManager_::__l2::<lambda_1>_>
              (lpCriticalSection + 2,(<lambda_1> *)local_res10);
    LeaveCriticalSection(lpCriticalSection);
    (this->ScreenMessageDelegate).ID = local_res10[0].ID;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 144ef4580

void __thiscall
`FMeshDrawCommandStatsManager::FMeshDrawCommandStatsManager'::__l2::<lambda_1>::operator()
          (void *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FText *pFVar9;
  FStatCollection *pFVar10;
  ulonglong uVar11;
  FName *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  longlong lVar15;
  FName *pFVar16;
  longlong lVar17;
  FName *pFVar18;
  FName FVar19;
  FName *pFVar20;
  FName FVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  FName *pFVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  uint uVar26;
  EOnScreenMessageSeverity local_res18 [8];
  EOnScreenMessageSeverity local_res20 [8];
  undefined1 local_228;
  EOnScreenMessageSeverity local_227;
  EOnScreenMessageSeverity local_226 [4];
  EOnScreenMessageSeverity local_222 [2];
  uint local_220;
  int local_21c;
  undefined1 local_218 [8];
  FName *local_210;
  int local_208;
  FStatCollection *local_200;
  FString local_1f8;
  longlong *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  int local_1b4;
  longlong *local_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  
  pFVar20 = (FName *)0x0;
  local_208 = (**(code **)(*(longlong *)CVarMeshDrawCommandStats._padding_ + 200))();
  uVar25 = 0;
  local_210 = (FName *)0x0;
  iVar5 = (**(code **)(*(longlong *)CVarMeshDrawCommandStats._padding_ + 200))();
  if (iVar5 == 0) {
    return;
  }
  iVar5 = (**(code **)(*(longlong *)CVarMeshDrawCommandUseVertexStats._padding_ + 200))();
  local_21c = iVar5;
  if (iVar5 < 1) {
    ::FString::PrintfImpl(&local_118,L"MeshDrawCommandStats (Triangles / Budget - Category)");
    pFVar9 = FText::FromString(&local_e8,&local_118);
    local_res20[0] = Info;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res20,pFVar9);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
  }
  else {
    ::FString::PrintfImpl(&local_178,L"MeshDrawCommandStats (Vertices / Budget - Category)");
    pFVar9 = FText::FromString(&local_f8,&local_178);
    local_res18[0] = Info;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res18,pFVar9);
    local_118.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      local_118.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    }
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  iVar6 = (**(code **)(*(longlong *)CVarMeshDrawCommandStats._padding_ + 200))();
  pFVar10 = TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
            ::Find((TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
                    *)(*(longlong *)this + 0xa8),iVar6);
  pFVar16 = pFVar20;
  local_200 = pFVar10;
  if (pFVar10 == (FStatCollection *)0x0) {
LAB_144ef4977:
    if (pFVar10 != (FStatCollection *)0x0) goto LAB_144ef497f;
LAB_144ef49c7:
    local_210 = pFVar16;
    pFVar13 = ::FString::FString(&local_a8,L" (All Passes)");
    FVar24.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar13->Data).ArrayNum;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
    local_220 = iVar5;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      local_220 = iVar5;
      local_210 = pFVar16;
    }
  }
  else {
    pFVar18 = (FName *)(pFVar10->Categories).AllocatorInstance.Data;
    local_220 = (pFVar10->Categories).ArrayNum;
    uVar11 = (ulonglong)(int)local_220;
    pFVar23 = pFVar18 + uVar11 * 0x19;
LAB_144ef46f5:
    pFVar10 = local_200;
    if ((local_200->Categories).ArrayNum != (int)uVar11) {
      local_228 = 0;
      `TCheckedPointerIterator<FMeshDrawCommandStatsManager::FCollectionCategory,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_228);
    }
    if (pFVar18 != pFVar23) {
      FVar21 = *pFVar18;
      lVar15 = *(longlong *)this;
      uVar7 = ::GetTypeHash(FVar21.ComparisonIndex.Value);
      if (*(int *)(lVar15 + 0x100) != *(int *)(lVar15 + 300)) {
        lVar17 = lVar15 + 0x130;
        if (*(longlong *)(lVar15 + 0x138) != 0) {
          lVar17 = *(longlong *)(lVar15 + 0x138);
        }
        uVar7 = *(uint *)(lVar17 + (ulonglong)
                                   (*(int *)(lVar15 + 0x140) - 1U & FVar21.Number + uVar7) * 4);
        if (uVar7 != 0xffffffff) {
          do {
            pFVar14 = (FName *)((longlong)(int)uVar7 * 0x20 + *(longlong *)(lVar15 + 0xf8));
            if (*pFVar14 == FVar21) {
              pFVar12 = pFVar14 + 1;
              if (pFVar14 == (FName *)0x0) {
                pFVar12 = pFVar20;
              }
              if ((pFVar12 == (FName *)0x0) || (FVar21 = *pFVar12, FVar21 == (FName)0x0)) break;
              if (iVar5 < 1) {
                FVar19 = pFVar18[0x17];
              }
              else {
                FVar21 = pFVar12[1];
                if (FVar21 == (FName)0x0) break;
                FVar19 = pFVar18[0x18];
              }
              local_227 = (ulonglong)FVar19 < (ulonglong)FVar21;
              ::FName::ToString(pFVar18,&local_c8);
              ::FString::PrintfImpl(&local_108,L"%5lluK / %5dK - %s (%s)");
              pFVar9 = FText::FromString(&local_d8,&local_108);
              TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
              ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText>
                        (param_1,&local_227,pFVar9);
              if (local_d8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              pFVar16 = (FName *)((longlong)&(pFVar16->ComparisonIndex).Value + (longlong)FVar21);
              pFVar18 = pFVar18 + 0x19;
              uVar11 = (ulonglong)local_220;
              iVar5 = local_21c;
              goto LAB_144ef46f5;
            }
            uVar7 = pFVar14[3].ComparisonIndex.Value;
          } while (uVar7 != 0xffffffff);
        }
      }
      pFVar18 = pFVar18 + 0x19;
      uVar11 = (ulonglong)local_220;
      goto LAB_144ef46f5;
    }
    local_210 = pFVar16;
    if ((longlong)pFVar16 < 1) goto LAB_144ef4977;
    if (iVar5 < 1) {
      iVar5 = (int)(pFVar10->DrawBudgets).PrimitiveCount;
    }
    else {
      iVar5 = (int)(pFVar10->DrawBudgets).VertexCount;
    }
    local_226[0] = (longlong)iVar5 <= (longlong)pFVar16;
    ::FString::PrintfImpl(&local_168,L"%5dK - Total Tracked");
    pFVar9 = FText::FromString(&local_b8,&local_168);
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText>(param_1,local_226,pFVar9)
    ;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_168.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_144ef4977;
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
LAB_144ef497f:
    if (*(int *)&(pFVar10->Untracked).Passes.Elements.field_0x8 ==
        *(int *)&(pFVar10->Untracked).Passes.Elements.field_0x34) goto LAB_144ef49c7;
    ::FString::PrintfImpl(&local_1f8,L" (%s)");
    FVar24.Data = local_1f8.Data.AllocatorInstance.Data;
    local_220 = local_1f8.Data.ArrayNum;
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Data.ArrayNum = 0;
    local_1f8.Data.ArrayMax = 0;
  }
  uStack_1dc = 1;
  local_1c8 = 0;
  lVar15 = *(longlong *)this;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x158);
  uVar7 = *(uint *)(lVar15 + 0x170);
  local_1e8 = (longlong *)(lVar15 + 0x148);
  uStack_1cc = uVar25;
  if (uVar7 != 0) {
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x168);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x168) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = pTVar1;
    }
    uVar8 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    pFVar16 = pFVar20;
    pFVar18 = pFVar20;
    local_1c8 = 0;
    uVar25 = 0;
    while (uVar8 == 0) {
      iVar5 = (int)pFVar18;
      local_1c8 = (int)pFVar16 + 0x20;
      pFVar16 = (FName *)(ulonglong)local_1c8;
      uVar25 = iVar5 + 1;
      pFVar18 = (FName *)(ulonglong)uVar25;
      uStack_1cc = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
      goto LAB_144ef4a9d;
      uVar8 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar5 * 4 + 4);
    }
    uStack_1dc = -uVar8 & uVar8;
    uVar11 = (ulonglong)uStack_1dc * 2 + 1;
    lVar17 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1b8 = (int)lVar17;
    uStack_1cc = local_1b8 + -1 + local_1c8;
    if ((int)uVar7 < (int)uStack_1cc) {
      uStack_1cc = uVar7;
    }
  }
LAB_144ef4a9d:
  iStack_1c0 = *(int *)(lVar15 + 0x150) - *(int *)(lVar15 + 0x17c);
  uVar8 = *(uint *)(lVar15 + 0x170);
  TStack_1a0._padding_ = CONCAT44(uStack_1dc,uVar25);
  uStack_1d0 = 0xffffffff;
  uVar26 = uVar8 & 0xffffffe0;
  TStack_1a0.CurrentBitIndex = uStack_1cc;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar5 = (int)uVar8 >> 5;
  TStack_1a0._28_4_ = uStack_1cc;
  TStack_1a0.BaseBitIndex = local_1c8;
  uStack_180 = CONCAT44(uStack_1bc,iStack_1c0);
  uStack_1e0 = uVar25;
  local_1d8 = pTVar1;
  uStack_1c4 = uStack_1cc;
  local_1b0 = local_1e8;
  local_1a8 = local_1e8;
  TStack_1a0.Array = pTVar1;
  if ((((int)uVar8 < 0) || ((int)uVar7 < (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar25 = *(uint *)(lVar15 + 0x170);
  if (uVar8 != uVar25) {
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x168);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x168) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = pTVar1;
    }
    uVar7 = -1 << ((byte)uVar8 & 0x1f) &
            *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar5 * 4);
    while (uVar7 == 0) {
      lVar15 = (longlong)iVar5;
      uVar26 = uVar26 + 0x20;
      iVar5 = iVar5 + 1;
      uVar8 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_144ef4bb4;
      uVar7 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b4 = (int)lVar15;
    uVar8 = local_1b4 + -1 + uVar26;
    if ((int)uVar25 < (int)uVar8) {
      uVar8 = uVar25;
    }
  }
LAB_144ef4bb4:
  while( true ) {
    plVar3 = local_1a8;
    if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_218);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar8) && (TStack_1a0.Array == pTVar1)) &&
       (plVar3 == local_1b0)) break;
    lVar15 = 0x10;
    pFVar16 = (FName *)((longlong)TStack_1a0.CurrentBitIndex * 0x20 + *plVar3);
    if (local_21c < 1) {
      lVar15 = 8;
    }
    lVar15 = *(longlong *)((longlong)&(pFVar16->ComparisonIndex).Value + lVar15);
    if (lVar15 != 0) {
      ::FName::ToString(pFVar16,&local_88);
      ::FString::PrintfImpl(&local_158,L"\t%5dK - %s%s");
      pFVar9 = FText::FromString(&local_98,&local_158);
      local_226[1] = 1;
      TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
      ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_226 + 1,pFVar9);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar20 = (FName *)(ulonglong)(uint)((int)pFVar20 + (int)lVar15);
    }
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  if ((0 < (int)pFVar20) && (local_208 != 1)) {
    ::FString::PrintfImpl(&local_148,L"%5dK - Total Untracked");
    pFVar9 = FText::FromString(&local_78,&local_148);
    local_226[2] = 1;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_226 + 2,pFVar9);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  if (local_200 != (FStatCollection *)0x0) {
    if (local_21c < 1) {
      iVar5 = (int)(local_200->DrawBudgets).PrimitiveCount;
    }
    else {
      iVar5 = (int)(local_200->DrawBudgets).VertexCount;
    }
    lVar15 = 0x58;
    if (local_21c < 1) {
      lVar15 = 0x50;
    }
    if (iVar5 != 0) {
      local_226[3] = iVar5 < *(int *)(lVar15 + *(longlong *)this);
      ::FString::PrintfImpl(&local_138,L"%5dK / %5dK - Total");
      pFVar9 = FText::FromString(&local_68,&local_138);
      TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
      ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText>
                (param_1,local_226 + 3,pFVar9);
      local_128.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        local_128.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
      }
      goto LAB_144ef4ed0;
    }
  }
  ::FString::PrintfImpl(&local_128,L"\t%5dK - Total");
  pFVar9 = FText::FromString(&local_58,&local_128);
  local_222[0] = Info;
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_222,pFVar9);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
LAB_144ef4ed0:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (FVar24.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar24.Data);
  }
  return;
}

// operator() @ 144ef4f10

bool __thiscall
`FMeshDrawCommandStatsManager::DumpStats'::__l2::<lambda_1>::operator()
          (void *this,FStatEntry *param_1,FStatEntry *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1->PassName != param_2->PassName) {
    pFVar2 = ::FName::ToString(&param_2->PassName,&local_18);
    pFVar3 = ::FName::ToString(&param_1->PassName,&local_28);
    pwVar4 = L"";
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return SUB41((uint)iVar1 >> 0x1f,0);
  }
  return param_2->VisibilePrimitiveCount < param_1->VisibilePrimitiveCount;
}

// operator() @ 144ef4fb0

void __thiscall
`FMeshDrawCommandStatsManager::QueueDrawRDGIndirectArgsReadback'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = *(FRHIGPUBufferReadback **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// operator() @ 144ef5000

bool __thiscall
`FMeshDrawCommandStatsManager::Update'::__l10::<lambda_1>::operator()
          (void *this,FCategoryStats *param_1,FCategoryStats *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FName::ToString(&param_2->CategoryName,&local_18);
  pFVar3 = ::FName::ToString(&param_1->CategoryName,&local_28);
  pwVar4 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// CreateInstance @ 144effc50

void __cdecl FMeshDrawCommandStatsManager::CreateInstance(void)

{
  code *pcVar1;
  bool bVar2;
  FMeshDrawCommandStatsManager *this;
  
  if (Instance != (FMeshDrawCommandStatsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                       ,0x14,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = ::operator_new(0x1a0);
  if (this != (FMeshDrawCommandStatsManager *)0x0) {
    Instance = FMeshDrawCommandStatsManager(this);
    return;
  }
  Instance = (FMeshDrawCommandStatsManager *)0x0;
  return;
}

// CreatePassStats @ 144f003a0

FMeshDrawCommandPassStats * __thiscall
FMeshDrawCommandStatsManager::CreatePassStats(FMeshDrawCommandStatsManager *this,wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FFrameData *pFVar6;
  FMeshDrawCommandPassStats *pFVar7;
  FMeshDrawCommandPassStats *local_18 [2];
  
  if (this->bCollectStats == false) {
    return (FMeshDrawCommandPassStats *)0x0;
  }
  lpCriticalSection = &this->FrameDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = GetOrAddFrameData(this);
  pFVar7 = ::operator_new(0x80);
  local_18[0] = (FMeshDrawCommandPassStats *)0x0;
  if (pFVar7 != (FMeshDrawCommandPassStats *)0x0) {
    (pFVar7->DrawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DrawData).ArrayNum = 0;
    (pFVar7->DrawData).ArrayMax = 0;
    *(undefined8 *)&(pFVar7->CustomIndirectArgsBuffers).Elements = 0;
    *(undefined8 *)&(pFVar7->CustomIndirectArgsBuffers).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar7->CustomIndirectArgsBuffers).Elements.field_0x20 = 0;
    pFVar7->PassName = param_1;
    pFVar7->bBuildRenderingCommandsCalled = false;
    *(undefined4 *)&(pFVar7->CustomIndirectArgsBuffers).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar7->CustomIndirectArgsBuffers).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->CustomIndirectArgsBuffers).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->CustomIndirectArgsBuffers).Elements.field_0x34 = 0;
    (pFVar7->CustomIndirectArgsBuffers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar7->CustomIndirectArgsBuffers).HashSize = 0;
    pFVar7->InstanceCullingGPUBufferReadback = (FRHIGPUBufferReadback *)0x0;
    pFVar7->IndirectArgParameterOffset = 0;
    local_18[0] = pFVar7;
  }
  pFVar2 = (pFVar6->PassData).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(pFVar6->PassData).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMeshDrawCommandPassStats *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (pFVar6->PassData).ArrayNum;
  piVar1 = &(pFVar6->PassData).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar6->PassData).AllocatorInstance,piVar1);
  }
  pFVar7 = local_18[0];
  (pFVar6->PassData).ArrayNum = iVar5 + 1;
  *(FMeshDrawCommandPassStats **)((pFVar6->PassData).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar7;
}

// DumpStats @ 144f041d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144f04521) */

void __thiscall
FMeshDrawCommandStatsManager::DumpStats(FMeshDrawCommandStatsManager *this,FFrameData *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  FDateTime this_00;
  IFileManager *pIVar9;
  ulonglong uVar10;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar11;
  size_t sVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  undefined8 *puVar17;
  FName *this_01;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 auStack_1b78 [32];
  FStatEntry *local_1b58;
  FStatEntry *local_1b50;
  wchar_t *local_1b48;
  wchar_t *local_1b40;
  undefined8 local_1b38;
  uint local_1b30;
  wchar_t *local_1b28;
  uint local_1b20;
  uint local_1b18;
  uint local_1b10;
  uint local_1b08;
  uint local_1b00;
  FIdentityFunctor local_1af8;
  undefined1 local_1af7;
  undefined1 local_1af6 [6];
  ForAnyElementType local_1af0;
  undefined8 local_1ae8;
  uint local_1ae0;
  FScriptContainerElement *local_1ad8;
  FStatEntry local_1ad0;
  FScriptContainerElement *local_1a78;
  longlong *local_1a70;
  FString local_1a68;
  FName local_1a58;
  FFrameData *local_1a50;
  FScriptContainerElement *local_1a48;
  <lambda_1> local_1a40;
  FString local_1a38;
  FString local_1a28;
  FString local_1a10;
  FString local_1a00;
  FString local_19f0;
  FScriptContainerElement local_19d8 [128];
  ForAnyElementType local_1958;
  FScriptContainerElement *local_1950;
  int local_1948;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1938;
  wchar_t local_1898 [1040];
  wchar_t local_1078 [1040];
  wchar_t local_858 [1040];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b78;
  local_1a50 = param_1;
  local_1a40.__this = this;
  if ((this->OptionalCategory).Data.ArrayNum < 2) {
    pFVar8 = ::FString::FString(&local_1a10,L"");
    FVar18.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if (local_1a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      local_1ad8 = FVar18.Data;
      FMemory::Free(local_1a10.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::PrintfImpl(&local_1a68,L"%s-");
    FVar18.Data = local_1a68.Data.AllocatorInstance.Data;
    local_1a68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a68.Data.ArrayNum = 0;
    local_1a68.Data.ArrayMax = 0;
  }
  local_1ad8 = FVar18.Data;
  this_00 = FDateTime::Now();
  pFVar8 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_19f0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  FPaths::ProfilingDir(&local_1a00);
  local_1b58 = (FStatEntry *)pwVar21;
  ::FString::PrintfImpl(&local_1a28,L"%sMeshDrawCommandStats-%s%s.csv");
  if (local_1a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a00.Data.AllocatorInstance.Data);
  }
  if (local_19f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_19f0.Data.AllocatorInstance.Data);
  }
  pIVar9 = IFileManager::Get();
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_1a28.Data.ArrayNum != 0) {
    FVar16.Data = local_1a28.Data.AllocatorInstance.Data;
  }
  local_1a70 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar16.Data,0x10);
  if (local_1a70 != (longlong *)0x0) {
    local_1ae0 = (param_1->PassData).ArrayNum;
    uVar10 = (ulonglong)(int)local_1ae0;
    pFVar23 = (param_1->PassData).AllocatorInstance.Data;
    local_1af0.Data = (FScriptContainerElement *)0x0;
    local_1a48 = pFVar23 + uVar10 * 8;
    local_1ae8 = 0;
    while( true ) {
      pFVar19 = local_1a48;
      local_1a78 = pFVar23;
      if ((param_1->PassData).ArrayNum != (int)uVar10) {
        local_1af7 = 0;
        `TCheckedPointerIterator<FMeshDrawCommandPassStats_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1af7);
      }
      if (pFVar23 == pFVar19) break;
      puVar3 = *(undefined8 **)pFVar23;
      iVar7 = *(int *)(puVar3 + 3);
      puVar17 = (undefined8 *)puVar3[2];
      puVar1 = puVar17 + (longlong)iVar7 * 9;
      while( true ) {
        if (*(int *)(puVar3 + 3) != iVar7) {
          local_1af6[0] = 0;
          `TCheckedPointerIterator<FVisibleMeshDrawCommandStatsData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1af6);
        }
        if (puVar17 == puVar1) break;
        if (0 < *(short *)((longlong)(puVar17 + 2) + 4)) {
          local_1ad0.SegmentIndex = 0;
          local_1ad0._44_4_ = 0;
          local_1ad0.TotalVertexCount = 0;
          local_1ad0._84_4_ = 0;
          local_1ad0.PassName.ComparisonIndex.Value = 0;
          local_1ad0.PassName.Number = 0;
          local_1ad0.VisibilePrimitiveCount = 0;
          local_1ad0.VisibileVertexCount = 0;
          local_1ad0.VisibleInstance = 0;
          local_1ad0.CategoryName.ComparisonIndex.Value = 0;
          local_1ad0.CategoryName.Number = 0;
          local_1ad0.ResourceName.ComparisonIndex.Value = 0;
          local_1ad0.ResourceName.Number = 0;
          local_1ad0.LODIndex = 0;
          local_1ad0.TotalInstanceCount = 0;
          local_1ad0.TotalPrimitiveCount = 0;
          local_1ad0.MaterialName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1ad0.MaterialName.Data.ArrayNum = 0;
          local_1ad0.MaterialName.Data.ArrayMax = 0;
          local_1ad0.PrimitiveCount = 0;
          local_1ad0.VertexCount = 0;
          if (local_1af0.Data <= &local_1ad0) {
            if (&local_1ad0 < (FStatEntry *)(local_1af0.Data + (longlong)local_1ae8._4_4_ * 0x58)) {
              local_1b40 = (wchar_t *)(longlong)(int)(uint)local_1ae8;
              local_1b38 = 0x58;
              local_1b58 = &local_1ad0;
              local_1b50 = (FStatEntry *)local_1af0.Data;
              local_1b48 = (wchar_t *)(longlong)local_1ae8._4_4_;
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
          }
          if ((uint)local_1ae8 == local_1ae8._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x858,&local_1af0,(int *)((longlong)&local_1ae8 + 4));
            local_1ae8 = CONCAT44(local_1ae8._4_4_,iVar6);
          }
          pFVar19 = local_1af0.Data + (longlong)(int)(uint)local_1ae8 * 0x58;
          local_1ae8 = CONCAT44(local_1ae8._4_4_,(uint)local_1ae8 + 1);
          *(FName *)&pFVar19->field_0x0 = local_1ad0.PassName;
          pFVar23 = pFVar19 + 0x30;
          *(int *)(pFVar19 + 8) = local_1ad0.VisibilePrimitiveCount;
          *(int *)(pFVar19 + 0xc) = local_1ad0.VisibileVertexCount;
          *(int *)(pFVar19 + 0x10) = local_1ad0.VisibleInstance;
          *(ulonglong *)(pFVar19 + 0x14) =
               CONCAT44(local_1ad0.CategoryName.Number,local_1ad0.CategoryName.ComparisonIndex.Value
                       );
          *(ulonglong *)(pFVar19 + 0x1c) =
               CONCAT44(local_1ad0.ResourceName.Number,local_1ad0.ResourceName.ComparisonIndex.Value
                       );
          *(int *)(pFVar19 + 0x24) = local_1ad0.LODIndex;
          *(undefined8 *)pFVar23 = 0;
          *(int *)(pFVar19 + 0x28) = local_1ad0.SegmentIndex;
          *(FScriptContainerElement **)pFVar23 = local_1ad0.MaterialName.Data.AllocatorInstance.Data
          ;
          *(int *)(pFVar19 + 0x38) = local_1ad0.MaterialName.Data.ArrayNum;
          *(int *)(pFVar19 + 0x3c) = local_1ad0.MaterialName.Data.ArrayMax;
          *(int *)(pFVar19 + 0x40) = local_1ad0.PrimitiveCount;
          *(int *)(pFVar19 + 0x44) = local_1ad0.VertexCount;
          *(int *)(pFVar19 + 0x48) = local_1ad0.TotalInstanceCount;
          *(int *)(pFVar19 + 0x4c) = local_1ad0.TotalPrimitiveCount;
          *(int *)(pFVar19 + 0x50) = local_1ad0.TotalVertexCount;
          local_1ad0.MaterialName.Data.ArrayNum = 0;
          local_1ad0.MaterialName.Data.ArrayMax = 0;
          local_1ad0.MaterialName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          ::FName::FName(&local_1a58,(wchar_t *)*puVar3);
          *(FName *)&pFVar19->field_0x0 = local_1a58;
          *(int *)(pFVar19 + 8) =
               (int)*(short *)((longlong)(puVar17 + 2) + 4) * *(int *)((longlong)(puVar17 + 1) + 4);
          *(int *)(pFVar19 + 0xc) =
               (int)*(short *)((longlong)(puVar17 + 2) + 4) * *(int *)(puVar17 + 1);
          *(int *)(pFVar19 + 0x10) = (int)*(short *)((longlong)(puVar17 + 2) + 4);
          *(undefined4 *)(pFVar19 + 0x40) = *(undefined4 *)((longlong)(puVar17 + 1) + 4);
          *(undefined4 *)(pFVar19 + 0x44) = *(undefined4 *)(puVar17 + 1);
          *(undefined4 *)(pFVar19 + 0x48) = *(undefined4 *)(puVar17 + 2);
          *(int *)(pFVar19 + 0x4c) = *(int *)(puVar17 + 2) * *(int *)((longlong)(puVar17 + 1) + 4);
          *(int *)(pFVar19 + 0x50) = *(int *)(puVar17 + 1) * *(int *)(puVar17 + 2);
          *(undefined8 *)(pFVar19 + 0x14) = *puVar17;
          *(undefined4 *)(pFVar19 + 0x24) = *(undefined4 *)(puVar17 + 5);
          *(undefined4 *)(pFVar19 + 0x28) = *(undefined4 *)((longlong)(puVar17 + 5) + 4);
          *(undefined8 *)(pFVar19 + 0x1c) = puVar17[6];
          iVar6 = *(int *)(puVar17 + 8) + -1;
          if (*(int *)(puVar17 + 8) == 0) {
            iVar6 = 0;
          }
          ::FString::AssignRange((FString *)pFVar23,(wchar_t *)puVar17[7],iVar6);
        }
        puVar17 = puVar17 + 9;
      }
      pFVar23 = local_1a78 + 8;
      uVar10 = (ulonglong)local_1ae0;
      param_1 = local_1a50;
    }
    AlgoImpl::
    IntroSortInternal<_FMeshDrawCommandStatsManager::DumpStats_::__l2::FStatEntry,int,FIdentityFunctor,_FMeshDrawCommandStatsManager::DumpStats_::__l2::<lambda_1>_>
              ((FStatEntry *)local_1af0.Data,(uint)local_1ae8,local_1af8,local_1a40);
    plVar20 = local_1a70;
    pcVar4 = *(code **)(*local_1a70 + 0x188);
    pTVar11 = StringCast<char,128,wchar_t>
                        (&local_1938,
                         L"Pass,VisiblePrimitiveCount,VisibleVertices,VisibleInstances,Category,ResourceName,LODIndex,SegmentIndex,MaterialName,PrimitiveCount,VertexCount,TotalInstanceCount,TotalPrimitiveCount,TotalVertexCount\n"
                        );
    (*pcVar4)(plVar20,pTVar11->Ptr,200);
    if ((void *)local_1938._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1938._padding_);
    }
    uVar14 = (ulonglong)(int)(uint)local_1ae8;
    local_1ae0 = (uint)local_1ae8;
    this_01 = (FName *)(local_1af0.Data + 0x1c);
    pFVar23 = local_1af0.Data + uVar14 * 0x58;
    uVar10 = uVar14;
    while( true ) {
      if ((int)uVar14 != (int)uVar10) {
        local_1af8 = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<`FMeshDrawCommandStatsManager::DumpStats'::__l2::FStatEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_1af8);
      }
      if ((FScriptContainerElement *)&this_01[-4].Number == pFVar23) break;
      ::FName::ToStringInternal((FName *)&this_01[-4].Number,local_858,0x40b);
      ::FName::ToStringInternal(this_01 + -1,local_1078,0x40b);
      ::FName::ToStringInternal(this_01,local_1898,0x40b);
      local_1b00 = this_01[6].Number;
      local_1b08 = this_01[6].ComparisonIndex.Value;
      local_1b10 = this_01[5].Number;
      local_1b18 = this_01[5].ComparisonIndex.Value;
      local_1b20 = this_01[4].Number;
      if (this_01[3].Number == 0) {
        local_1b28 = L"";
      }
      else {
        local_1b28 = *(wchar_t **)&this_01[2].Number;
      }
      local_1b30 = this_01[1].Number;
      local_1b38 = CONCAT44(local_1b38._4_4_,this_01[1].ComparisonIndex.Value);
      local_1b40 = local_1898;
      local_1b48 = local_1078;
      local_1b50 = (FStatEntry *)CONCAT44(local_1b50._4_4_,this_01[-2].Number);
      local_1b58 = (FStatEntry *)CONCAT44(local_1b58._4_4_,this_01[-2].ComparisonIndex.Value);
      ::FString::PrintfImpl(&local_1a38,L"%s,%d,%d,%d,%s,%s,%d,%d,%s,%d,%d,%d,%d,%d\n");
      iVar6 = local_1a38.Data.ArrayNum;
      local_1958.Data = (FScriptContainerElement *)0x0;
      pcVar4 = *(code **)(*plVar20 + 0x188);
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = 0;
      }
      if (iVar6 == 0) {
        pwVar21 = L"";
LAB_144f04782:
        sVar12 = wcslen(pwVar21);
        local_1948 = (int)sVar12;
        uVar24 = local_1948 + 1;
        FVar18.Data = (FScriptContainerElement *)0x0;
        if (0x80 < uVar24) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1958,0,uVar24,1);
          FVar18.Data = local_1958.Data;
        }
        lVar22 = (longlong)(int)uVar24;
        pFVar19 = local_19d8;
        if (FVar18.Data != (FScriptContainerElement *)0x0) {
          pFVar19 = FVar18.Data;
        }
        lVar13 = 0;
        bVar5 = false;
        lVar15 = lVar13;
        local_1950 = pFVar19;
        if (0 < (int)uVar24) {
          do {
            uVar2 = *(ushort *)((longlong)pwVar21 + lVar15 * 2);
            pFVar19[lVar15] = SUB21(uVar2,0);
            lVar15 = lVar15 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar2);
          } while (lVar15 < lVar22);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)((longlong)pwVar21 + lVar13 * 2)) {
                pFVar19[lVar13] = (FScriptContainerElement)0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar22);
          }
        }
        if ((pFVar19 + lVar22 == (FScriptContainerElement *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pwVar21 = (wchar_t *)local_1a38.Data.AllocatorInstance.Data;
        if (local_1a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_144f04782;
        local_1950 = (FScriptContainerElement *)0x0;
        local_1948 = 0;
      }
      plVar20 = local_1a70;
      (*pcVar4)(local_1a70,local_1950,(longlong)iVar7);
      if (local_1958.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1958.Data);
      }
      if (local_1a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a38.Data.AllocatorInstance.Data);
      }
      uVar14 = local_1ae8 & 0xffffffff;
      this_01 = this_01 + 0xb;
      uVar10 = (ulonglong)local_1ae0;
    }
    (**(code **)*plVar20)(plVar20,1);
    DestructItems<_FMeshDrawCommandStatsManager::DumpStats_::__l2::FStatEntry,int>
              ((FStatEntry *)local_1af0.Data,(uint)local_1ae8);
    FVar18.Data = local_1ad8;
    if ((FStatEntry *)local_1af0.Data != (FStatEntry *)0x0) {
      FMemory::Free(local_1af0.Data);
      FVar18.Data = local_1ad8;
    }
  }
  if (local_1a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a28.Data.AllocatorInstance.Data);
  }
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  return;
}

// GetOrAddFrameData @ 144f12a60

FFrameData * __thiscall
FMeshDrawCommandStatsManager::GetOrAddFrameData(FMeshDrawCommandStatsManager *this)

{
  TArray<FMeshDrawCommandStatsManager::FFrameData_*,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FFrameData *pFVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  iVar5 = (this->Frames).ArrayNum;
  pTVar1 = &this->Frames;
  piVar8 = (int *)0x0;
  if (iVar5 != 0) {
    uVar4 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar4 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFrameData *)(*pcVar2)();
      return pFVar6;
    }
    if (**(int **)((pTVar1->AllocatorInstance).Data + (longlong)(this->Frames).ArrayNum * 8 + -8) ==
        this->CurrentFrameNumber) goto LAB_144f12bf1;
  }
  iVar5 = (this->Frames).ArrayNum;
  if (iVar5 != 0) {
    uVar4 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar4 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFrameData *)(*pcVar2)();
      return pFVar6;
    }
    FFrameData::Validate
              (*(FFrameData **)
                ((pTVar1->AllocatorInstance).Data + (longlong)(this->Frames).ArrayNum * 8 + -8));
  }
  piVar9 = &(this->Frames).ArrayNum;
  piVar7 = ::operator_new(0x80);
  if (piVar7 != (int *)0x0) {
    iVar5 = this->CurrentFrameNumber;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[0xe] = 0;
    piVar7[0xf] = 0;
    *piVar7 = iVar5;
    piVar7[0x10] = 0;
    piVar7[0x11] = 0x80;
    piVar7[0x12] = -1;
    piVar7[0x13] = 0;
    piVar7[0x16] = 0;
    piVar7[0x17] = 0;
    piVar7[0x18] = 0;
    piVar7[0x1a] = 0;
    piVar7[0x1b] = 0;
    piVar7[0x1c] = 0;
    piVar7[0x1d] = 0;
    *(undefined1 *)(piVar7 + 0x1e) = 0;
    piVar8 = piVar7;
  }
  iVar5 = *piVar9;
  piVar7 = &(this->Frames).ArrayMax;
  if (iVar5 == *piVar7) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar7);
    *piVar9 = iVar5;
  }
  *piVar9 = iVar5 + 1;
  *(int **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = piVar8;
LAB_144f12bf1:
  piVar8 = &(this->Frames).ArrayNum;
  iVar5 = *piVar8;
  uVar10 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar10 < iVar5) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FFrameData *)(*pcVar2)();
    return pFVar6;
  }
  return *(FFrameData **)((this->Frames).AllocatorInstance.Data + (longlong)*piVar8 * 8 + -8);
}

// QueueCustomDrawIndirectArgsReadback @ 144f1ef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDrawCommandStatsManager::QueueCustomDrawIndirectArgsReadback
          (FMeshDrawCommandStatsManager *this,FRHICommandListImmediate *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  FFrameData *pFVar7;
  FRHIGPUBufferReadback *this_00;
  FName *pFVar8;
  FRHIGPUBufferReadback *this_01;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_147 [7];
  FRHIBuffer *local_140;
  longlong *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined1 local_104 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FRHIGPUBufferReadback *local_c8;
  undefined8 local_c0;
  FRHIBuffer **local_b8;
  FRHIGPUBufferReadback **local_b0;
  FName local_a8 [2];
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (this->bCollectStats != false) {
    lpCriticalSection = &this->FrameDataCS;
    local_104._4_8_ = param_1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar7 = GetOrAddFrameData(this);
    pFVar7->bIndirectArgReadbackRequested = true;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar13 = 0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    pFVar12 = (pFVar7->PassData).AllocatorInstance.Data;
    iVar11 = (pFVar7->PassData).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar11 * 8;
    while( true ) {
      if ((pFVar7->PassData).ArrayNum != iVar11) {
        local_148 = 0;
        `TCheckedPointerIterator<FMeshDrawCommandPassStats_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_148);
      }
      uVar16 = local_70;
      if (pFVar12 == pFVar1) break;
      TSet<FRHIBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                ((TSet<FRHIBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,FDefaultSetAllocator> *)local_98
                 ,(TSet<FRHIBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,FDefaultSetAllocator> *)
                  (*(longlong *)pFVar12 + 0x20));
      pFVar12 = pFVar12 + 8;
    }
    uStack_12c = 1;
    local_118 = 0;
    uStack_11c = local_118;
    if (local_70 != 0) {
      puVar14 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar14 = local_78;
      }
      uVar15 = *puVar14;
      local_118 = 0;
      uVar13 = 0;
      while (uVar15 == 0) {
        lVar10 = (longlong)(int)uVar13;
        local_118 = local_118 + 0x20;
        uVar13 = uVar13 + 1;
        uStack_11c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_144f1f0d1;
        uVar15 = puVar14[lVar10 + 1];
      }
      uStack_12c = -uVar15 & uVar15;
      uVar2 = (ulonglong)uStack_12c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_108 = (int)lVar10;
      uStack_11c = (local_118 - 1) + local_108;
      if ((int)local_70 < (int)uStack_11c) {
        uStack_11c = local_70;
      }
    }
LAB_144f1f0d1:
    local_138 = (longlong *)local_98;
    local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar15 = local_70 & 0xffffffe0;
    iStack_110 = local_98._8_4_ - local_64;
    uStack_120 = 0xffffffff;
    TStack_f0.CurrentBitIndex = uStack_11c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_12c,uVar13);
    iVar11 = (int)local_70 >> 5;
    TStack_f0._28_4_ = uStack_11c;
    TStack_f0.BaseBitIndex = local_118;
    uStack_d0 = CONCAT44(uStack_10c,iStack_110);
    bVar9 = (byte)local_70;
    uStack_130 = uVar13;
    uStack_114 = uStack_11c;
    local_104._12_8_ = local_138;
    TStack_f0.Array = local_128;
    if (((int)local_70 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = local_104._4_8_;
    if (uVar16 != local_70) {
      puVar14 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar14 = local_78;
      }
      uVar13 = -1 << (bVar9 & 0x1f) & puVar14[iVar11];
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_144f1f1dd;
        uVar13 = puVar14[lVar10 + 1];
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (int)lVar10 + -1 + uVar15;
      if ((int)local_70 < (int)uVar16) {
        uVar16 = local_70;
      }
    }
LAB_144f1f1dd:
    while( true ) {
      uVar5 = local_104._12_8_;
      if ((int)*(longlong *)(local_104._12_8_ + 8) - *(int *)(local_104._12_8_ + 0x34) !=
          (int)uStack_d0) {
        `TSparseArray<TSparseSetElement<FRHIBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_147);
      }
      if (((TStack_f0.CurrentBitIndex == uVar16) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         ((undefined1 *)uVar5 == local_98)) break;
      local_140 = *(FRHIBuffer **)(*(longlong *)uVar5 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
      this_00 = ::operator_new(0x58);
      this_01 = (FRHIGPUBufferReadback *)0x0;
      if (this_00 != (FRHIGPUBufferReadback *)0x0) {
        pFVar8 = ::FName::FName(local_a8,L"CustomIndirectArgs.StatsReadbackQuery");
        this_01 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_00,*pFVar8);
      }
      FRHIGPUBufferReadback::EnqueueCopy(this_01,(FRHICommandList *)uVar4,local_140,0);
      local_b8 = &local_140;
      local_c0 = 0;
      local_b0 = &local_c8;
      local_c8 = this_01;
      TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FRHIBuffer_*_const_&,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult_const_&>_>
                ((TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                  *)&pFVar7->CustomIndirectArgsBufferResults,
                 (TPairInitializer<FRHIBuffer_*_const_&,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult_const_&>
                  *)local_104,(bool *)&local_b8);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FRHIBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FRHIBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FRHIBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// QueueDrawRDGIndirectArgsReadback @ 144f1f350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIGPUBufferReadback * __thiscall
FMeshDrawCommandStatsManager::QueueDrawRDGIndirectArgsReadback
          (FMeshDrawCommandStatsManager *this,FRDGBuilder *param_1,FRDGBuffer *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRHIGPUBufferReadback *pFVar6;
  FName *pFVar7;
  FRDGEventName *pFVar8;
  undefined8 *puVar9;
  FFrameData *pFVar10;
  FName local_res8;
  FRHIGPUBufferReadback *local_68;
  undefined8 *local_60;
  FRDGBuffer *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  <lambda_1> local_48;
  FRDGEventName local_38;
  
  pFVar6 = ::operator_new(0x58);
  local_68 = (FRHIGPUBufferReadback *)0x0;
  if (pFVar6 != (FRHIGPUBufferReadback *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,L"InstanceCulling.StatsReadbackQuery");
    local_68 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar6,*pFVar7);
  }
  local_48.GPUBufferReadback = local_68;
  local_48.DrawIndirectArgsRDG = param_2;
  pFVar8 = FRDGEventName::FRDGEventName(&local_38,1,L"ReadbackIndirectArgs");
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRHIGPUBufferReadback *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    puVar9[2] = 0;
    *puVar9 = &___7__TObject_VFReadbackBufferParameters___FRDGAllocator__6B_;
    *(undefined4 *)(puVar9 + 3) = 0x80;
  }
  local_60 = puVar9;
  if (((undefined8 **)param_1->_padding_ <= &local_60) &&
     (&local_60 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRHIGPUBufferReadback *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar5 + 1;
  uStack_50 = 0x80;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_60;
  *(FRDGBuffer **)&((FReadbackBufferParameters *)(puVar9 + 2))->Buffer = param_2;
  puVar9[3] = CONCAT44(uStack_4c,0x80);
  local_58 = param_2;
  FRDGBuilder::
  AddPass<FReadbackBufferParameters,_FMeshDrawCommandStatsManager::QueueDrawRDGIndirectArgsReadback_::__l2::<lambda_1>_>
            (param_1,pFVar8,(FReadbackBufferParameters *)(puVar9 + 2),Readback,&local_48);
  if (local_38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->FrameDataCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar10 = GetOrAddFrameData(this);
    pFVar2 = (pFVar10->RDGIndirectArgsReadbackBuffers).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar2 + (longlong)(pFVar10->RDGIndirectArgsReadbackBuffers).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FRHIGPUBufferReadback *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (pFVar10->RDGIndirectArgsReadbackBuffers).ArrayNum;
    piVar1 = &(pFVar10->RDGIndirectArgsReadbackBuffers).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar10->RDGIndirectArgsReadbackBuffers).AllocatorInstance,piVar1);
    }
    (pFVar10->RDGIndirectArgsReadbackBuffers).ArrayNum = iVar5 + 1;
    *(FRHIGPUBufferReadback **)
     ((pFVar10->RDGIndirectArgsReadbackBuffers).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_68;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return local_68;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Update @ 144f312e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMeshDrawCommandStatsManager::Update(FMeshDrawCommandStatsManager *this)

{
  bool *pbVar1;
  int *piVar2;
  ulong64 *puVar3;
  TMap<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
  *this_00;
  undefined8 *puVar4;
  ushort uVar5;
  FRHIGPUBufferReadback *this_01;
  FName FVar6;
  FName FVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  FIdentityFunctor FVar11;
  FMeshDrawCommandStatsManager *pFVar12;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *pTVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulong64 uVar21;
  void *pvVar22;
  FName *pFVar23;
  FDrawData *pFVar24;
  TStatId TVar25;
  FCsvProfiler *pFVar26;
  UMeshDrawCommandStatsSettings *pUVar27;
  FStatCollection *pFVar28;
  size_t sVar29;
  FString *pFVar30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar31;
  UMeshDrawCommandStatsSettings *pUVar32;
  byte bVar33;
  short sVar34;
  ulonglong uVar35;
  void *pvVar36;
  FName FVar37;
  FScriptContainerElement *pFVar38;
  FNameEntryId FVar39;
  char *_Str;
  undefined8 *puVar40;
  FScriptContainerElement *pFVar41;
  wchar_t *_Str_00;
  uint uVar42;
  void *pvVar43;
  TMap<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>_>
  *pTVar44;
  FFrameData *this_02;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar45;
  undefined1 *puVar46;
  uint *puVar47;
  uint uVar48;
  longlong lVar49;
  int *piVar50;
  FName FVar51;
  undefined1 *puVar52;
  uint uVar53;
  FName *pFVar54;
  FName *pFVar55;
  ForAnyElementType FVar56;
  longlong lVar57;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *pTVar58;
  TArray<FMeshDrawCommandStatsManager::FFrameData_*,TSizedDefaultAllocator<32>_> *pTVar59;
  bool bVar60;
  undefined1 auStackY_658 [32];
  FIdentityFunctor local_5f8;
  undefined1 local_5f7;
  undefined1 local_5f6;
  undefined1 local_5f5;
  undefined1 local_5f4;
  undefined1 local_5f3;
  undefined1 local_5f2;
  undefined1 local_5f1;
  uint local_5f0;
  uint local_5ec;
  FMeshDrawCommandStatsManager *local_5e8;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *local_5e0;
  undefined8 uStack_5d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  int local_5b8;
  undefined4 uStack_5b4;
  UMeshDrawCommandStatsSettings *local_5a8;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *local_5a0;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *local_598;
  FFrameData *local_590;
  uint local_588;
  FString local_580;
  int local_570;
  LPCRITICAL_SECTION local_568;
  uint local_560 [2];
  int local_558;
  uint uStack_554;
  undefined1 *puStack_550;
  undefined4 local_548;
  int iStack_544;
  int iStack_540;
  undefined4 uStack_53c;
  longlong local_538;
  UMeshDrawCommandStatsSettings *local_530;
  undefined8 local_528;
  FName local_520;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_518;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *local_4f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b0;
  int local_490;
  FName local_488;
  FName local_480;
  undefined8 local_478;
  FName local_470;
  FName local_468;
  undefined4 local_460;
  int local_45c;
  undefined1 local_458 [8];
  FName local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  int local_428;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_418;
  int local_3f8;
  longlong *local_3e8;
  undefined1 auStack_3e0 [16];
  uint uStack_3d0;
  uint uStack_3cc;
  longlong local_3c8;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_3c0;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *local_3b8;
  undefined2 local_3b0;
  longlong *local_3a8;
  undefined1 auStack_3a0 [16];
  uint uStack_390;
  uint uStack_38c;
  longlong local_388;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_380;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *local_378;
  undefined2 local_370;
  undefined1 local_368 [12];
  uint uStack_35c;
  TBitArray<FDefaultBitArrayAllocator> *local_358;
  undefined8 uStack_350;
  longlong local_348;
  undefined8 uStack_340;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_330;
  undefined8 uStack_310;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  undefined8 uStack_2e0;
  FString local_2d8;
  FString local_2c8 [5];
  FName local_270;
  TRangedForIterator local_268;
  undefined1 local_238 [32];
  longlong local_218;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_210;
  undefined1 local_208 [32];
  longlong local_1e8;
  TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
  *pTStack_1e0;
  undefined4 local_1bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b8;
  undefined4 local_17c;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  undefined8 local_108;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_658;
  bVar60 = -1 < CpuChannel->Enabled;
  local_5e8 = this;
  if (bVar60) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId316,"FMeshDrawCommandStatsManager::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
               ,0x13c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId316);
  }
  this->CurrentFrameNumber = this->CurrentFrameNumber + 1;
  local_570 = (**(code **)(*(longlong *)CVarMeshDrawCommandStats._padding_ + 200))();
  lpCriticalSection = (LPCRITICAL_SECTION)&this->FrameDataCS;
  local_568 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  uVar53 = (this->Frames).ArrayNum - 1;
  bVar16 = false;
  local_528 = 1;
  local_5ec = uVar53;
  if (-1 < (int)uVar53) {
    pTVar59 = &this->Frames;
    lVar49 = (longlong)(int)uVar53 << 3;
    pvVar43 = (void *)0x0;
    do {
      uVar42 = 0;
      uVar45 = uVar42;
      if ((int)uVar53 < pTVar59->ArrayNum) {
        uVar45 = ~uVar53 >> 0x1f;
      }
      local_5ec = uVar53;
      if ((uVar45 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_02 = *(FFrameData **)((pTVar59->AllocatorInstance).Data + lVar49);
      local_590 = this_02;
      bVar15 = FFrameData::IsCompleted(this_02);
      if (bVar15) {
        if (!bVar16) {
          (this->Stats).TotalDrawData.PrimitiveCount = 0;
          piVar50 = &(this->Stats).CategoryStats.ArrayMax;
          (this->Stats).TotalDrawData.VertexCount = 0;
          (this->Stats).TotalInstances = 0;
          (this->Stats).InstanceCullingIndirectDrawData.PrimitiveCount = 0;
          (this->Stats).InstanceCullingIndirectDrawData.VertexCount = 0;
          (this->Stats).InstanceCullingIndirectInstances = 0;
          (this->Stats).CustomIndirectDrawData.PrimitiveCount = 0;
          (this->Stats).CustomIndirectDrawData.VertexCount = 0;
          (this->Stats).CustomIndirectInstances = 0;
          bVar16 = true;
          (this->Stats).CategoryStats.ArrayNum = 0;
          if (*piVar50 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,&(this->Stats).CategoryStats.AllocatorInstance,0,piVar50);
          }
          pTVar44 = &this_02->CustomIndirectArgsBufferResults;
          TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_238,
                     (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                      *)pTVar44);
          local_3b0 = 0;
          stack0xfffffffffffffc28 = local_238._16_16_;
          local_3e8 = (longlong *)local_238._0_8_;
          auStack_3e0._0_8_ = local_238._8_8_;
          local_3c8 = local_218;
          pTStack_3c0 = pTStack_210;
          uVar35 = local_238._24_8_ >> 0x20;
          local_3b8 = (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                       *)pTVar44;
          if (local_238._28_4_ < *(int *)(local_238._16_8_ + 0x18)) {
            do {
              lVar57 = (longlong)(int)uVar35 * 0x20 + *local_3e8;
              this_01 = *(FRHIGPUBufferReadback **)(lVar57 + 8);
              uVar21 = FRHIGPUBufferReadback::GetGPUSizeBytes(this_01);
              pvVar22 = FRHIGPUBufferReadback::Lock(this_01,(uint)uVar21);
              *(void **)(lVar57 + 0x10) = pvVar22;
              uStack_3d0 = uStack_3d0 & ~auStack_3e0._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3e0);
              uVar35 = (ulonglong)uStack_3cc;
            } while ((int)uStack_3cc < *(int *)(auStack_3e0._8_8_ + 0x18));
            if (((char)local_3b0 != '\0') && (local_3b0._1_1_ != '\0')) {
              TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_3b8,
                                  *(int *)&(local_3b8->Elements).field_0x8 -
                                  *(int *)&(local_3b8->Elements).field_0x34,Default);
            }
          }
          local_128._0_8_ = 0;
          local_128._8_8_ = 0;
          local_108 = 0;
          local_5f0 = (local_590->PassData).ArrayNum;
          uVar35 = (ulonglong)(int)local_5f0;
          pUVar32 = (UMeshDrawCommandStatsSettings *)(local_590->PassData).AllocatorInstance.Data;
          local_100 = 0;
          local_fc = 0x80;
          local_f8 = 0xffffffff;
          pUVar27 = (UMeshDrawCommandStatsSettings *)(&pUVar32->_padding_ + uVar35);
          local_f4 = 0;
          local_e8 = (ForElementType<FSetElementId>)0x0;
          local_e0 = 0;
          this_02 = local_590;
          local_530 = pUVar27;
          while( true ) {
            local_5a8 = pUVar32;
            if ((this_02->PassData).ArrayNum != (int)uVar35) {
              local_5f8 = (FIdentityFunctor)0x0;
              `TCheckedPointerIterator<FMeshDrawCommandPassStats_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_5f8);
            }
            if (pUVar32 == pUVar27) break;
            pTVar58 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                       *)pUVar32->_padding_;
            local_598 = pTVar58;
            if (pTVar58->field_0x8 != '\0') {
              FVar6.ComparisonIndex.Value = *(uint *)&pTVar58->field_0x0;
              FVar6.Number = *(uint *)&pTVar58->field_0x4;
              ::FName::FName(&local_520,(wchar_t *)FVar6);
              FVar6 = local_520;
              uVar53 = ::GetTypeHash(local_520.ComparisonIndex.Value);
              local_5a0 = TMapBase<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,0>_>
                          ::FindOrAddImpl<FName>
                                    ((TMapBase<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,0>_>
                                      *)local_128,FVar6.Number + uVar53,&local_520);
              pvVar22 = pvVar43;
              if (*(FRHIGPUBufferReadback **)&pTVar58[1].field_0x20 != (FRHIGPUBufferReadback *)0x0)
              {
                pvVar22 = FRHIGPUBufferReadback::Lock
                                    (*(FRHIGPUBufferReadback **)&pTVar58[1].field_0x20,
                                     *(uint *)&pTVar58->field_0x18);
              }
              local_588 = 0;
              if (0 < *(int *)&pTVar58->field_0x18) {
                local_538 = 0;
                pvVar36 = pvVar43;
                do {
                  lVar57 = local_538;
                  uVar45 = (uint)pvVar36;
                  uVar53 = uVar42;
                  if ((int)uVar45 < *(int *)&pTVar58->field_0x18) {
                    uVar53 = ~uVar45 >> 0x1f;
                  }
                  if ((uVar53 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar54 = (FName *)(lVar57 + *(longlong *)&pTVar58->field_0x10);
                  if ((pFVar54[1].ComparisonIndex.Value == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("DrawData.StatsData.NumVertices > 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                                          ,0x16e,L""), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar53 = pFVar54[3].ComparisonIndex.Value;
                  uVar48 = (uVar53 & 0x7fffffff) / 0x14;
                  if (pFVar54[4] == (FName)0x0) {
                    if ((pvVar22 != (void *)0x0) && ((uVar53 & 0x80000000) != 0)) {
                      if ((*(short *)((longlong)&pFVar54[2].Number + 2) < 1) &&
                         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_4628829169935974013>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                                              ,0x183,"DrawData.NumBatches > 0"), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pTVar58 = local_598;
                      *(undefined2 *)&pFVar54[2].Number = 0;
                      pvVar36 = pvVar43;
                      sVar34 = 0;
                      if (0 < *(short *)((longlong)&pFVar54[2].Number + 2)) {
                        do {
                          lVar57 = (longlong)
                                   (int)(*(int *)&pTVar58[1].field_0x28 + (int)pvVar36 + uVar48);
                          if ((pFVar54[1].Number != *(uint *)((longlong)pvVar22 + lVar57 * 0x14) / 3
                              ) && (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                                       (&bGEnsureHasExecuted<_4628829169935974008>,
                                                        false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                                                  ,0x188,
                                                  "DrawData.PrimitiveCount == IndirectArgs.IndexCountPerInstance / 3"
                                                  ), bVar15)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          uVar53 = (int)pvVar36 + 1;
                          sVar34 = *(short *)((longlong)pvVar22 + lVar57 * 0x14 + 4) +
                                   (short)pFVar54[2].Number;
                          *(short *)&pFVar54[2].Number = sVar34;
                          this = local_5e8;
                          pvVar36 = (void *)(ulonglong)uVar53;
                          uVar45 = local_588;
                        } while ((int)uVar53 < (int)*(short *)((longlong)&pFVar54[2].Number + 2));
                      }
                      if (((int)pFVar54[2].ComparisonIndex.Value < (int)sVar34) &&
                         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_4628829169935974005>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                                              ,0x18b,
                                              "DrawData.VisibleInstanceCount <= DrawData.TotalInstanceCount"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      piVar50 = &(this->Stats).InstanceCullingIndirectInstances;
                      *piVar50 = *piVar50 + (int)(short)pFVar54[2].Number;
                      puVar3 = &(this->Stats).InstanceCullingIndirectDrawData.VertexCount;
                      *puVar3 = *puVar3 + (ulonglong)
                                          ((int)(short)pFVar54[2].Number *
                                          pFVar54[1].ComparisonIndex.Value);
                      pFVar24 = &(this->Stats).InstanceCullingIndirectDrawData;
                      pFVar24->PrimitiveCount =
                           pFVar24->PrimitiveCount +
                           (longlong)(int)((int)(short)pFVar54[2].Number * pFVar54[1].Number);
                      pTVar58 = local_598;
                    }
                  }
                  else {
                    if ((pFVar54[1].Number != 0) &&
                       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<_4628829169935974030>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                                            ,0x172,"DrawData.PrimitiveCount == 0"), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    local_488 = pFVar54[4];
                    uVar53 = ((uint)((ulonglong)local_488 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)local_488 >> 4)) * -0x7a143595;
                    uVar53 = (uVar53 >> 0xd ^ uVar53) * -0x3d4d51cb;
                    iVar17 = TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<FRHIBuffer_const_*>
                                       ((TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                                         *)&local_590->CustomIndirectArgsBufferResults,
                                        uVar53 >> 0x10 ^ uVar53,(FRHIBuffer **)&local_488);
                    if (iVar17 != -1) {
                      lVar57 = (longlong)iVar17 * 0x20 +
                               *(longlong *)&local_590->CustomIndirectArgsBufferResults;
                      pvVar36 = (void *)(lVar57 + 8);
                      if (lVar57 == 0) {
                        pvVar36 = pvVar43;
                      }
                      if (pvVar36 != (void *)0x0) {
                        puVar47 = (uint *)(*(longlong *)((longlong)pvVar36 + 8) +
                                          (longlong)(int)uVar48 * 0x14);
                        pFVar54[1].Number = *puVar47 / 3;
                        sVar34 = (short)puVar47[1];
                        uVar18 = (uint)sVar34;
                        uVar53 = pFVar54[2].ComparisonIndex.Value;
                        *(short *)&pFVar54[2].Number = sVar34;
                        uVar48 = uVar18;
                        if ((int)uVar18 < (int)uVar53) {
                          uVar48 = pFVar54[2].ComparisonIndex.Value;
                        }
                        pFVar54[2].ComparisonIndex.Value = uVar48;
                        piVar50 = &(this->Stats).CustomIndirectInstances;
                        *piVar50 = *piVar50 + uVar18;
                        puVar3 = &(this->Stats).CustomIndirectDrawData.VertexCount;
                        *puVar3 = *puVar3 + (ulonglong)
                                            ((int)(short)pFVar54[2].Number *
                                            pFVar54[1].ComparisonIndex.Value);
                        pFVar24 = &(this->Stats).CustomIndirectDrawData;
                        pFVar24->PrimitiveCount =
                             pFVar24->PrimitiveCount +
                             (longlong)(int)((int)(short)pFVar54[2].Number * pFVar54[1].Number);
                        goto LAB_144f319a7;
                      }
                    }
                    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_4628829169935974027>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommandStats.cpp"
                                        ,0x175,"IndirectArgsBufferResult");
                    if (bVar15) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
LAB_144f319a7:
                  piVar50 = &(this->Stats).TotalInstances;
                  *piVar50 = *piVar50 + (int)(short)pFVar54[2].Number;
                  puVar3 = &(this->Stats).TotalDrawData.VertexCount;
                  *puVar3 = *puVar3 + (ulonglong)
                                      ((int)(short)pFVar54[2].Number *
                                      pFVar54[1].ComparisonIndex.Value);
                  (this->Stats).TotalDrawData.PrimitiveCount =
                       (this->Stats).TotalDrawData.PrimitiveCount +
                       (longlong)(int)((int)(short)pFVar54[2].Number * pFVar54[1].Number);
                  pFVar23 = pFVar54;
                  if (local_570 == 1) {
                    FVar51.ComparisonIndex.Value = *(uint *)&pTVar58->field_0x0;
                    FVar51.Number = *(uint *)&pTVar58->field_0x4;
                    pFVar23 = ::FName::FName(&local_270,(wchar_t *)FVar51);
                  }
                  FVar6 = *pFVar23;
                  local_480 = FVar6;
                  uVar53 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
                  pFVar24 = TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                            ::FindOrAddImpl<FName_const_&>
                                      ((TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                                        *)local_5a0,FVar6.Number + uVar53,&local_480);
                  local_588 = uVar45 + 1;
                  pvVar36 = (void *)(ulonglong)local_588;
                  pFVar24->PrimitiveCount =
                       pFVar24->PrimitiveCount +
                       (longlong)(int)((int)(short)pFVar54[2].Number * pFVar54[1].Number);
                  local_538 = local_538 + 0x48;
                  pFVar24->VertexCount =
                       pFVar24->VertexCount +
                       (ulonglong)((int)(short)pFVar54[2].Number * pFVar54[1].ComparisonIndex.Value)
                  ;
                  pUVar32 = local_5a8;
                  pTVar58 = local_598;
                } while ((int)local_588 < *(int *)&local_598->field_0x18);
              }
              pUVar27 = local_530;
              this_02 = local_590;
              if (pvVar22 != (void *)0x0) {
                FRHIGPUBufferReadback::Unlock(*(FRHIGPUBufferReadback **)&pTVar58[1].field_0x20);
                pUVar27 = local_530;
                this_02 = local_590;
              }
            }
            uVar35 = (ulonglong)local_5f0;
            pUVar32 = (UMeshDrawCommandStatsSettings *)&pUVar32->_padding_;
          }
          pTVar44 = &this_02->CustomIndirectArgsBufferResults;
          TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_208,
                     (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                      *)pTVar44);
          FVar11 = local_5f8;
          stack0xfffffffffffffc68 = local_208._16_16_;
          local_3a8 = (longlong *)local_208._0_8_;
          auStack_3a0._0_8_ = local_208._8_8_;
          local_370 = 0;
          local_388 = local_1e8;
          pTStack_380 = pTStack_1e0;
          uVar35 = local_208._24_8_ >> 0x20;
          local_378 = (TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                       *)pTVar44;
          if (local_208._28_4_ < *(int *)(local_208._16_8_ + 0x18)) {
            do {
              lVar57 = (longlong)(int)uVar35 * 0x20 + *local_3a8;
              FRHIGPUBufferReadback::Unlock(*(FRHIGPUBufferReadback **)(lVar57 + 8));
              *(undefined8 *)(lVar57 + 0x10) = 0;
              uStack_390 = uStack_390 & ~auStack_3a0._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3a0);
              uVar35 = (ulonglong)uStack_38c;
            } while ((int)uStack_38c < *(int *)(auStack_3a0._8_8_ + 0x18));
            if (((char)local_370 != '\0') && (local_370._1_1_ != '\0')) {
              uVar53 = *(int *)&(local_378->Elements).field_0x8 -
                       *(int *)&(local_378->Elements).field_0x34;
              if (uVar53 < 4) {
                iVar17 = 1;
              }
              else {
                uVar35 = (ulonglong)((uVar53 >> 1) + 7) * 2 + 1;
                lVar57 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar57 == 0; lVar57 = lVar57 + -1) {
                  }
                }
                local_460 = (undefined4)lVar57;
                iVar17 = 1 << ((byte)lVar57 & 0x1f);
              }
              if (((0 < (int)uVar53) && (local_378->HashSize < iVar17)) ||
                 (iVar17 < local_378->HashSize)) {
                local_378->HashSize = iVar17;
                TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
                ::Rehash(local_378);
              }
            }
          }
          local_4d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
          local_4d0._padding_._0_4_ = 0;
          local_4d0._padding_._4_4_ = 1;
          local_4d0.UnvisitedBitMask = 0xffffffff;
          local_4d0.CurrentBitIndex = 0;
          local_4d0.BaseBitIndex = 0;
          if (local_100 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4d0);
          }
          local_5e0 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                       *)local_128;
          uStack_5d8 = CONCAT44(local_4d0._padding_._4_4_,(undefined4)local_4d0._padding_);
          pTStack_5d0 = local_4d0.Array;
          uStack_5c8 = CONCAT44(local_4d0.CurrentBitIndex,local_4d0.UnvisitedBitMask);
          uStack_5c0 = CONCAT44(local_4d0._28_4_,local_4d0.BaseBitIndex);
          TStack_4f0._padding_._0_4_ = (undefined4)local_4d0._padding_;
          TStack_4f0._padding_._4_4_ = local_4d0._padding_._4_4_;
          TStack_4f0.Array = local_4d0.Array;
          TStack_4f0.UnvisitedBitMask = local_4d0.UnvisitedBitMask;
          TStack_4f0.CurrentBitIndex = local_4d0.CurrentBitIndex;
          TStack_4f0.BaseBitIndex = local_4d0.BaseBitIndex;
          TStack_4f0._28_4_ = local_4d0._28_4_;
          iVar17 = local_4d0.CurrentBitIndex;
          local_4f8 = local_5e0;
          if (local_4d0.CurrentBitIndex < (local_4d0.Array)->NumBits) {
            do {
              pTVar58 = local_4f8;
              local_178._0_8_ = 0;
              local_178._8_8_ = 0;
              local_158 = (uint *)0x0;
              local_150 = 0;
              local_14c = 0x80;
              local_148 = 0xffffffff;
              local_144 = 0;
              local_138 = (ForElementType<FSetElementId>)0x0;
              local_130 = 0;
              TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
                           *)local_178,
                          (TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
                           *)(*(longlong *)&local_4f8->field_0x0 + 8 + (longlong)iVar17 * 0x60));
              pvVar22 = pvVar43;
              uVar53 = 1;
              uVar45 = uVar42;
              uVar48 = uVar42;
              if (local_150 != 0) {
                puVar47 = (uint *)(local_178 + 0x10);
                if (local_158 != (uint *)0x0) {
                  puVar47 = local_158;
                }
                uVar53 = *puVar47;
                pvVar36 = pvVar43;
                uVar45 = 0;
                uVar48 = 0;
                while (uVar53 == 0) {
                  iVar17 = (int)pvVar22;
                  uVar48 = (int)pvVar36 + 0x20;
                  pvVar36 = (void *)(ulonglong)uVar48;
                  uVar45 = iVar17 + 1;
                  pvVar22 = (void *)(ulonglong)uVar45;
                  if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)uVar45) {
                    pvVar22 = (void *)(ulonglong)local_150;
                    uVar53 = 1;
                    goto LAB_144f31d44;
                  }
                  uVar53 = (puVar47 + 1)[iVar17];
                }
                uVar53 = -uVar53 & uVar53;
                uVar35 = (ulonglong)uVar53 * 2 + 1;
                lVar57 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar57 == 0; lVar57 = lVar57 + -1) {
                  }
                }
                local_45c = (int)lVar57;
                uVar18 = local_45c + -1 + uVar48;
                pvVar22 = (void *)(ulonglong)uVar18;
                if ((int)local_150 < (int)uVar18) {
                  pvVar22 = (void *)(ulonglong)local_150;
                }
              }
LAB_144f31d44:
              local_5e0 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                           *)local_178;
              pTStack_5d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
              uStack_5d8 = CONCAT44(uVar53,uVar45);
              TStack_418.CurrentBitIndex = (int)pvVar22;
              uStack_5c8 = CONCAT44(TStack_418.CurrentBitIndex,0xffffffff);
              uStack_5c0 = CONCAT44(local_1bc,uVar48);
              TStack_418._padding_ = uStack_5d8;
              TStack_418._24_8_ = uStack_5c0;
              TStack_418.UnvisitedBitMask = 0xffffffff;
              local_420 = local_5e0;
              TStack_418.Array = pTStack_5d0;
              if (TStack_418.CurrentBitIndex < (int)local_150) {
                do {
                  uStack_440 = *(undefined8 *)
                                ((longlong)(int)pvVar22 * 0x20 + *(longlong *)&local_420->field_0x0)
                  ;
                  puVar4 = (undefined8 *)
                           ((longlong)(int)pvVar22 * 0x20 + 8 + *(longlong *)&local_420->field_0x0);
                  local_438 = *puVar4;
                  uStack_430 = puVar4[1];
                  local_448 = *(undefined8 *)
                               ((longlong)TStack_4f0.CurrentBitIndex * 0x60 +
                               *(longlong *)&pTVar58->field_0x0);
                  pFVar38 = (this->Stats).CategoryStats.AllocatorInstance.Data;
                  if (((pFVar38 <= (FScriptContainerElement *)&local_448) &&
                      ((FScriptContainerElement *)&local_448 <
                       pFVar38 + (longlong)(this->Stats).CategoryStats.ArrayMax * 0x20)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar17 = (this->Stats).CategoryStats.ArrayNum;
                  if (iVar17 == (this->Stats).CategoryStats.ArrayMax) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&(this->Stats).CategoryStats.AllocatorInstance,
                                        &(this->Stats).CategoryStats.ArrayMax);
                  }
                  (this->Stats).CategoryStats.ArrayNum = iVar17 + 1;
                  pFVar41 = (this->Stats).CategoryStats.AllocatorInstance.Data;
                  pFVar38 = pFVar41 + (longlong)iVar17 * 0x20;
                  *(undefined8 *)pFVar38 = local_448;
                  *(undefined8 *)(pFVar38 + 8) = uStack_440;
                  pFVar41 = pFVar41 + (longlong)iVar17 * 0x20 + 0x10;
                  *(undefined8 *)pFVar41 = local_438;
                  *(undefined8 *)(pFVar41 + 8) = uStack_430;
                  TStack_418.UnvisitedBitMask =
                       TStack_418.UnvisitedBitMask & ~TStack_418._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_418);
                  pvVar22 = (void *)(ulonglong)(uint)TStack_418.CurrentBitIndex;
                } while (TStack_418.CurrentBitIndex < (TStack_418.Array)->NumBits);
              }
              local_130 = 0;
              if (local_138 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_138);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_178);
              TStack_4f0.UnvisitedBitMask =
                   TStack_4f0.UnvisitedBitMask & ~TStack_4f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4f0);
              this_02 = local_590;
              iVar17 = TStack_4f0.CurrentBitIndex;
            } while (TStack_4f0.CurrentBitIndex < (TStack_4f0.Array)->NumBits);
          }
          AlgoImpl::
          IntroSortInternal<FMeshDrawCommandStatsManager::FStats::FCategoryStats,int,FIdentityFunctor,_FMeshDrawCommandStatsManager::Update_::__l10::<lambda_1>_>
                    ((FCategoryStats *)(this->Stats).CategoryStats.AllocatorInstance.Data,
                     (this->Stats).CategoryStats.ArrayNum,FVar11,(<lambda_1>)this);
          if ((bDumpStats != false) || (this->bRequestDumpStats != false)) {
            DumpStats(this,this_02);
            bDumpStats = false;
            this->bRequestDumpStats = false;
          }
          local_e0 = 0;
          if (local_e8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_128);
          pTVar59 = &this->Frames;
          uVar53 = local_5ec;
        }
        if (this_02 != (FFrameData *)0x0) {
          FFrameData::~FFrameData(this_02);
          ::operator_delete(this_02,0x80);
        }
        uVar45 = 0;
        if ((int)uVar53 < pTVar59->ArrayNum) {
          uVar45 = ~uVar53 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar38 = (pTVar59->AllocatorInstance).Data + (ulonglong)uVar53 * 8;
        iVar17 = pTVar59->ArrayNum + ~uVar53;
        if (iVar17 != 0) {
          memmove(pFVar38,pFVar38 + 8,(longlong)iVar17 << 3);
        }
        iVar17 = pTVar59->ArrayNum + -1;
        pTVar59->ArrayNum = iVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar59->AllocatorInstance,iVar17,&pTVar59->ArrayMax);
      }
      uVar53 = uVar53 - 1;
      lVar49 = lVar49 + -8;
    } while (-1 < (int)uVar53);
    lpCriticalSection = (LPCRITICAL_SECTION)&this->FrameDataCS;
    local_5ec = uVar53;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_TotalNumPrimitives,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_Culling_TotalNumPrimitives,1> *)
                        &StatPtr_STAT_Culling_TotalNumPrimitives);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar25.StatIdPtr)->Name,Set,(this->Stats).TotalDrawData.PrimitiveCount,
               false);
    if (FThreadStats::bPrimaryEnable != false) {
      TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_TotalNumVertices,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_Culling_TotalNumVertices,1> *)
                          &StatPtr_STAT_Culling_TotalNumVertices);
      FThreadStats::AddMessage<__int64>
                (*(FName *)(TVar25.StatIdPtr)->Name,Set,(this->Stats).TotalDrawData.VertexCount,
                 false);
      if (FThreadStats::bPrimaryEnable != false) {
        TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_TotalNumInstances,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_Culling_TotalNumInstances,1> *)
                            &StatPtr_STAT_Culling_TotalNumInstances);
        FThreadStats::AddMessage<__int64>
                  (*(FName *)(TVar25.StatIdPtr)->Name,Set,(longlong)(this->Stats).TotalInstances,
                   false);
        if (FThreadStats::bPrimaryEnable != false) {
          TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_InstanceCullingIndirectNumPrimitives,1>
                   ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Culling_InstanceCullingIndirectNumPrimitives,1>
                                *)&StatPtr_STAT_Culling_InstanceCullingIndirectNumPrimitives);
          FThreadStats::AddMessage<__int64>
                    (*(FName *)(TVar25.StatIdPtr)->Name,Set,
                     (this->Stats).InstanceCullingIndirectDrawData.PrimitiveCount,false);
          if (FThreadStats::bPrimaryEnable != false) {
            TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_InstanceCullingIndirectNumVertices,1>
                     ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Culling_InstanceCullingIndirectNumVertices,1>
                                  *)&StatPtr_STAT_Culling_InstanceCullingIndirectNumVertices);
            FThreadStats::AddMessage<__int64>
                      (*(FName *)(TVar25.StatIdPtr)->Name,Set,
                       (this->Stats).InstanceCullingIndirectDrawData.VertexCount,false);
            if (FThreadStats::bPrimaryEnable != false) {
              TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_InstanceCullingIndirectNumInstances,1>
                       ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Culling_InstanceCullingIndirectNumInstances,1>
                                    *)&StatPtr_STAT_Culling_InstanceCullingIndirectNumInstances);
              FThreadStats::AddMessage<__int64>
                        (*(FName *)(TVar25.StatIdPtr)->Name,Set,
                         (longlong)(this->Stats).InstanceCullingIndirectInstances,false);
              if (FThreadStats::bPrimaryEnable != false) {
                TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_CustomIndirectNumPrimitives,1>
                         ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Culling_CustomIndirectNumPrimitives,1>
                                      *)&StatPtr_STAT_Culling_CustomIndirectNumPrimitives);
                FThreadStats::AddMessage<__int64>
                          (*(FName *)(TVar25.StatIdPtr)->Name,Set,
                           (this->Stats).CustomIndirectDrawData.PrimitiveCount,false);
                if (FThreadStats::bPrimaryEnable != false) {
                  TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_CustomIndirectNumVertices,1>
                           ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Culling_CustomIndirectNumVertices,1>
                                        *)&StatPtr_STAT_Culling_CustomIndirectNumVertices);
                  FThreadStats::AddMessage<__int64>
                            (*(FName *)(TVar25.StatIdPtr)->Name,Set,
                             (this->Stats).CustomIndirectDrawData.VertexCount,false);
                  if (FThreadStats::bPrimaryEnable != false) {
                    TVar25 = FThreadSafeStaticStatInner<FStat_STAT_Culling_CustomIndirectNumInstances,1>
                             ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Culling_CustomIndirectNumInstances,1>
                                          *)&StatPtr_STAT_Culling_CustomIndirectNumInstances);
                    FThreadStats::AddMessage<__int64>
                              (*(FName *)(TVar25.StatIdPtr)->Name,Set,
                               (longlong)(this->Stats).CustomIndirectInstances,false);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar17 = (**(code **)(*(longlong *)CVarMeshDrawCommandStats._padding_ + 200))();
  if ((iVar17 != 0) || (bVar16 = false, this->bRequestDumpStats != false)) {
    bVar16 = true;
  }
  this->bCollectStats = bVar16;
  pFVar26 = FCsvProfiler::Get();
  bVar16 = FCsvProfiler::IsCapturing_Renderthread(pFVar26);
  if (bVar16) {
    pFVar26 = FCsvProfiler::Get();
    bVar16 = FCsvProfiler::IsCategoryEnabled(pFVar26,_GCsvCategory_MeshDrawCommandStats.Index);
    if (bVar16) {
      bVar33 = 1;
      goto LAB_144f32381;
    }
  }
  bVar33 = 0;
LAB_144f32381:
  pbVar1 = &this->bCollectStats;
  *pbVar1 = (bool)(*pbVar1 | bVar33);
  if (*pbVar1 != false) {
    if (*(int *)&(this->StatCollections).field_0x8 == *(int *)&(this->StatCollections).field_0x34) {
      pUVar27 = GetDefault<UMeshDrawCommandStatsSettings>();
      pTVar58 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                 *)(pUVar27->Budgets).AllocatorInstance.Data;
      local_5f0 = (pUVar27->Budgets).ArrayNum;
      uVar35 = (ulonglong)(int)local_5f0;
      piVar50 = (int *)&pTVar58->field_0x10;
      local_5a0 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                   *)((FNameEntryId *)&pTVar58->field_0x0 + uVar35 * 0xe);
      local_5a8 = pUVar27;
      while( true ) {
        pTVar13 = local_5a0;
        local_598 = pTVar58;
        if ((pUVar27->Budgets).ArrayNum != (int)uVar35) {
          local_5f7 = 0;
          `TCheckedPointerIterator<FMeshDrawCommandStatsBudget_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_5f7);
        }
        lpCriticalSection = local_568;
        pUVar32 = local_5a8;
        this_00 = &this->StatCollections;
        if (pTVar58 == pTVar13) break;
        pFVar28 = TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
                              *)this_00,piVar50[4],piVar50 + 4);
        FVar7.ComparisonIndex.Value = *(uint *)&pTVar58->field_0x0;
        FVar7.Number = *(uint *)&pTVar58->field_0x4;
        bVar16 = ::FName::Equals(FVar7,L"Untracked");
        if (bVar16) {
          pFVar54 = &(pFVar28->Untracked).Name;
        }
        else {
          iVar17 = (pFVar28->Categories).ArrayNum;
          piVar2 = &(pFVar28->Categories).ArrayMax;
          if (iVar17 == *piVar2) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8c8,(ForAnyElementType *)pFVar28,piVar2);
          }
          (pFVar28->Categories).ArrayNum = iVar17 + 1;
          pFVar54 = (FName *)((pFVar28->Categories).AllocatorInstance.Data + (longlong)iVar17 * 200)
          ;
          DefaultConstructItems<FMeshDrawCommandStatsManager::FCollectionCategory,int>(pFVar54,1);
        }
        pFVar23 = pFVar54 + 1;
        pFVar54[0x17] = (FName)(longlong)piVar50[2];
        pFVar54[0x18] = (FName)(longlong)piVar50[3];
        uVar10 = *(undefined4 *)&pTVar58->field_0x4;
        pFVar54->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar58->field_0x0;
        pFVar54->Number = uVar10;
        iVar17 = piVar50[8];
        if (iVar17 == 0) {
          ::FString::FString(&local_580,"All Passes");
          if (pFVar23 != (FName *)&local_580) {
            if (*pFVar23 != (FName)0x0) {
              FMemory::Free((void *)*pFVar23);
            }
            *pFVar23 = (FName)local_580.Data.AllocatorInstance.Data;
            pFVar54[2].ComparisonIndex.Value = local_580.Data.ArrayNum;
            pFVar54[2].Number = local_580.Data.ArrayMax;
            local_580.Data.ArrayNum = 0;
            local_580.Data.ArrayMax = 0;
            local_580.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if ((FName)local_580.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_580.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar53 = 0;
          if (0 < iVar17) {
            do {
              uVar45 = 0;
              if ((int)uVar53 < iVar17) {
                uVar45 = ~uVar53 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar55 = (FName *)(*(longlong *)(piVar50 + 6) + (longlong)(int)uVar53 * 8);
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar54 + 3),
                         (FName *)local_458,(bool *)pFVar55);
              _Str = "";
              if (uVar53 != 0) {
                _Str = " | ";
              }
              sVar29 = strlen(_Str);
              ::FString::AppendChars((FString *)pFVar23,_Str,(int)sVar29);
              pFVar30 = ::FName::ToString(pFVar55,&local_2d8);
              iVar19 = (pFVar30->Data).ArrayNum;
              iVar17 = iVar19 + -1;
              if (iVar19 == 0) {
                iVar17 = 0;
              }
              ::FString::AppendChars
                        ((FString *)pFVar23,(wchar_t *)(pFVar30->Data).AllocatorInstance.Data,iVar17
                        );
              if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
              }
              iVar17 = piVar50[8];
              uVar53 = uVar53 + 1;
              pUVar27 = local_5a8;
            } while ((int)uVar53 < iVar17);
          }
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar54 + 0xd),
                   (FName *)(local_458 + 4),(bool *)local_598);
        puVar40 = *(undefined8 **)(piVar50 + -2);
        iVar17 = *piVar50;
        puVar4 = puVar40 + iVar17;
        while( true ) {
          if (*piVar50 != iVar17) {
            local_5f6 = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_5f6);
          }
          if (puVar40 == puVar4) break;
          local_478 = *puVar40;
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar54 + 0xd),
                     &local_450,(bool *)&local_478);
          puVar40 = puVar40 + 1;
        }
        pTVar58 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                   *)&local_598->field_0x38;
        uVar35 = (ulonglong)local_5f0;
        piVar50 = piVar50 + 0xe;
        this = local_5e8;
      }
      iVar17 = (pUVar27->BudgetTotals).ArrayNum;
      pFVar41 = (pUVar27->BudgetTotals).AllocatorInstance.Data;
      pFVar38 = pFVar41 + (longlong)iVar17 * 0xc;
      while( true ) {
        if ((pUVar32->BudgetTotals).ArrayNum != iVar17) {
          local_5f5 = 0;
          `TCheckedPointerIterator<FMeshDrawCommandStatsBudgetTotals_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_5f5);
        }
        if (pFVar41 == pFVar38) break;
        local_560[0] = *(uint *)(pFVar41 + 8);
        iVar19 = TSet<TTuple<int,FMeshDrawCommandStatsManager::FStatCollection>,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<int>
                           ((TSet<TTuple<int,FMeshDrawCommandStatsManager::FStatCollection>,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>,FDefaultSetAllocator>
                             *)this_00,local_560[0],(int *)local_560);
        if (iVar19 != -1) {
          lVar57 = (longlong)iVar19 * 0x148 + *(longlong *)&this_00->field_0x0;
          lVar49 = lVar57 + 8;
          if (lVar57 == 0) {
            lVar49 = 0;
          }
          if (lVar49 != 0) {
            *(longlong *)(lVar49 + 0x128) = (longlong)*(int *)pFVar41;
            *(longlong *)(lVar49 + 0x130) = (longlong)*(int *)(pFVar41 + 4);
          }
        }
        pFVar41 = pFVar41 + 0xc;
      }
      local_4b0._padding_._4_4_ = 1;
      puVar52 = &(this->StatCollections).field_0x10;
      local_4b0._padding_._0_4_ = 0;
      local_4b0.UnvisitedBitMask = 0xffffffff;
      local_4b0.CurrentBitIndex = 0;
      local_4b0.BaseBitIndex = 0;
      local_4b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
      if (*(int *)&(this->StatCollections).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b0);
      }
      uStack_5d8 = CONCAT44(local_4b0._padding_._4_4_,(undefined4)local_4b0._padding_);
      uStack_5c8 = CONCAT44(local_4b0.CurrentBitIndex,local_4b0.UnvisitedBitMask);
      uStack_5c0 = CONCAT44(local_4b0._28_4_,local_4b0.BaseBitIndex);
      local_5b8 = *(int *)&(this->StatCollections).field_0x8 -
                  *(int *)&(this->StatCollections).field_0x34;
      pTStack_5d0 = local_4b0.Array;
      uStack_340._4_4_ = uStack_5b4;
      uStack_340._0_4_ = local_5b8;
      local_358 = local_4b0.Array;
      local_5e0 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                   *)this_00;
      local_368._0_8_ = this_00;
      unique0x1000375f = uStack_5d8;
      uStack_350 = uStack_5c8;
      local_348 = uStack_5c0;
      pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_1b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar52,
                           *(int *)&(this->StatCollections).field_0x28);
      uStack_5d8 = pTVar31->_padding_;
      pTStack_5d0 = pTVar31->Array;
      uStack_5c8._0_4_ = pTVar31->UnvisitedBitMask;
      uStack_5c8._4_4_ = pTVar31->CurrentBitIndex;
      uStack_5c0 = *(longlong *)&pTVar31->BaseBitIndex;
      local_5b8 = *(int *)&(this->StatCollections).field_0x8 -
                  *(int *)&(this->StatCollections).field_0x34;
      local_268._44_4_ = uStack_5b4;
      local_268.InitialNum = local_5b8;
      local_5e0 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                   *)this_00;
      local_268._padding_ = (longlong)this_00;
      local_268._padding_ = uStack_5d8;
      local_268._padding_ = (longlong)pTStack_5d0;
      local_268._padding_ = uStack_5c8;
      local_268._padding_ = uStack_5c0;
      bVar16 = TSparseArray<TSparseSetElement<TTuple<int,FMeshDrawCommandStatsManager::FStatCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_368,&local_268);
      this = local_5e8;
      if (bVar16) {
        do {
          FStatCollection::Finish
                    ((FStatCollection *)
                     (*(longlong *)(undefined1 *)local_368._0_8_ +
                     (longlong)uStack_350._4_4_ * 0x148 + 8));
          uStack_350 = CONCAT44(uStack_350._4_4_,(uint)uStack_350 & ~uStack_35c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_368 + 8));
          bVar16 = TSparseArray<TSparseSetElement<TTuple<int,FMeshDrawCommandStatsManager::FStatCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_368,&local_268);
          this = local_5e8;
        } while (bVar16);
      }
    }
    TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
             *)&this->BudgetedDrawData);
    pUVar27 = (UMeshDrawCommandStatsSettings *)&this->UntrackedDrawData;
    local_5a8 = pUVar27;
    TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
             *)pUVar27);
    iVar17 = (**(code **)(*(longlong *)CVarMeshDrawCommandStats._padding_ + 200))();
    pFVar26 = FCsvProfiler::Get();
    bVar16 = FCsvProfiler::IsCapturing_Renderthread(pFVar26);
    if (bVar16) {
      pFVar26 = FCsvProfiler::Get();
      bVar16 = FCsvProfiler::IsCategoryEnabled(pFVar26,_GCsvCategory_MeshDrawCommandStats.Index);
      if (bVar16) {
        pUVar32 = GetDefault<UMeshDrawCommandStatsSettings>();
        iVar17 = pUVar32->CollectionForCsvProfiler;
      }
    }
    pFVar28 = TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
              ::Find((TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
                      *)&this->StatCollections,iVar17);
    if ((pFVar28 != (FStatCollection *)0x0) || (this = local_5e8, iVar17 == 1)) {
      iVar17 = (local_5e8->Stats).CategoryStats.ArrayNum;
      pFVar54 = (FName *)(local_5e8->Stats).CategoryStats.AllocatorInstance.Data;
      pFVar23 = pFVar54 + (longlong)iVar17 * 4;
      while( true ) {
        if ((local_5e8->Stats).CategoryStats.ArrayNum != iVar17) {
          local_5f4 = 0;
          `TCheckedPointerIterator<FMeshDrawCommandStatsManager::FStats::FCategoryStats,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_5f4);
        }
        lpCriticalSection = local_568;
        this = local_5e8;
        if (pFVar54 == pFVar23) break;
        if (pFVar28 == (FStatCollection *)0x0) {
LAB_144f32b00:
          FVar6 = pFVar54[1];
          uVar53 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
          pFVar24 = TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                                *)pUVar27,FVar6.Number + uVar53,pFVar54 + 1);
          pFVar24->PrimitiveCount = pFVar24->PrimitiveCount + (longlong)pFVar54[2];
          pFVar24->VertexCount = pFVar24->VertexCount + (longlong)pFVar54[3];
          pFVar54 = pFVar54 + 4;
        }
        else {
          FVar6 = pFVar54[1];
          local_470 = FVar6;
          uVar53 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
          iVar19 = TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FName>
                             ((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                               *)&pFVar28->StatToCategoryIndices,FVar6.Number + uVar53,&local_470);
          if (iVar19 == -1) {
LAB_144f32ac3:
            if (*(int *)&(pFVar28->Untracked).Passes.Elements.field_0x8 !=
                *(int *)&(pFVar28->Untracked).Passes.Elements.field_0x34) {
              FVar6 = *pFVar54;
              local_468 = FVar6;
              uVar53 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
              iVar19 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                       FindIndexByHash<FName>
                                 (&(pFVar28->Untracked).Passes,FVar6.Number + uVar53,&local_468);
              if (iVar19 == -1) goto LAB_144f32b3f;
            }
            goto LAB_144f32b00;
          }
          lVar49 = (longlong)iVar19 * 0x20 + *(longlong *)&pFVar28->StatToCategoryIndices;
          local_5a0 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                       *)(lVar49 + 8);
          if (lVar49 == 0) {
            local_5a0 = (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                         *)0x0;
          }
          if (local_5a0 ==
              (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
               *)0x0) goto LAB_144f32ac3;
          local_5f0 = *(uint *)&local_5a0->field_0x8;
          uVar35 = (ulonglong)(int)local_5f0;
          FVar51 = *(FName *)local_5a0;
          FVar6 = (FName)((longlong)FVar51 + uVar35 * 4);
          while( true ) {
            if (*(int *)&local_5a0->field_0x8 != (int)uVar35) {
              local_5f3 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_5f3);
            }
            pUVar27 = local_5a8;
            if (FVar51 == FVar6) break;
            uVar53 = *(uint *)FVar51;
            uVar45 = 0;
            if ((int)uVar53 < (pFVar28->Categories).ArrayNum) {
              uVar45 = ~uVar53 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar55 = (FName *)((pFVar28->Categories).AllocatorInstance.Data +
                               (longlong)(int)uVar53 * 200);
            if (pFVar55[4].ComparisonIndex.Value == pFVar55[9].Number) {
LAB_144f32a76:
              FVar7 = *pFVar55;
              uVar53 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
              pFVar24 = TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                        ::FindOrAddImpl<FName_const_&>
                                  ((TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                                    *)&local_5e8->BudgetedDrawData,FVar7.Number + uVar53,pFVar55);
              pFVar24->PrimitiveCount = pFVar24->PrimitiveCount + (longlong)pFVar54[2];
              pFVar24->VertexCount = pFVar24->VertexCount + (longlong)pFVar54[3];
            }
            else {
              FVar7 = *pFVar54;
              uVar53 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
              if (pFVar55[4].ComparisonIndex.Value != pFVar55[9].Number) {
                FVar37 = (FName)(pFVar55 + 10);
                if (pFVar55[0xb] != (FName)0x0) {
                  FVar37 = pFVar55[0xb];
                }
                iVar19 = *(int *)((longlong)FVar37 +
                                 (ulonglong)
                                 (pFVar55[0xc].ComparisonIndex.Value - 1 & FVar7.Number + uVar53) *
                                 4);
                if (iVar19 != -1) {
                  do {
                    if (*(FName *)((longlong)pFVar55[3] + (longlong)iVar19 * 0x10) == FVar7)
                    goto LAB_144f32a76;
                    iVar19 = *(int *)((longlong)pFVar55[3] + 8 + (longlong)iVar19 * 0x10);
                  } while (iVar19 != -1);
                }
              }
            }
            FVar51 = (FName)((longlong)FVar51 + 4);
            uVar35 = (ulonglong)local_5f0;
          }
LAB_144f32b3f:
          pFVar54 = pFVar54 + 4;
        }
      }
    }
  }
  if (bVar33 != 0) {
    pTStack_5d0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BudgetedDrawData).field_0x10;
    iVar17 = *(int *)&(this->BudgetedDrawData).field_0x28;
    local_5e0 = &this->BudgetedDrawData;
    local_558 = 0;
    uStack_554 = 1;
    iStack_544 = 0;
    iStack_540 = 0;
    if (iVar17 != 0) {
      puVar47 = *(uint **)&(this->BudgetedDrawData).field_0x20;
      if (puVar47 == (uint *)0x0) {
        puVar47 = (uint *)pTStack_5d0;
      }
      uVar53 = *puVar47;
      iStack_540 = 0;
      local_558 = 0;
      while (uVar53 == 0) {
        iStack_540 = iStack_540 + 0x20;
        lVar49 = (longlong)local_558;
        local_558 = local_558 + 1;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < local_558) goto LAB_144f32c1b;
        uVar53 = puVar47[lVar49 + 1];
      }
      uStack_554 = -uVar53 & uVar53;
      uVar35 = (ulonglong)uStack_554 * 2 + 1;
      lVar49 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar49 == 0; lVar49 = lVar49 + -1) {
        }
      }
      local_428 = (int)lVar49;
      iStack_544 = local_428 + -1 + iStack_540;
      if (iVar17 < iStack_544) {
LAB_144f32c1b:
        iStack_544 = iVar17;
      }
    }
    local_548 = 0xffffffff;
    uStack_5d8 = CONCAT44(uStack_554,local_558);
    local_5b8 = *(int *)&(this->BudgetedDrawData).field_0x8 -
                *(int *)&(this->BudgetedDrawData).field_0x34;
    uStack_5c8._4_4_ = iStack_544;
    uStack_5c8._0_4_ = 0xffffffff;
    uStack_5c0._4_4_ = uStack_53c;
    uStack_5c0._0_4_ = iStack_540;
    uVar53 = *(uint *)&(this->BudgetedDrawData).field_0x28;
    local_518._padding_._0_4_ = (int)uVar53 >> 5;
    bVar33 = (byte)uVar53 & 0x1f;
    local_518._padding_._4_4_ = 1 << bVar33;
    local_518.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BudgetedDrawData).field_0x10;
    local_518.UnvisitedBitMask = -1 << bVar33;
    local_518.BaseBitIndex = uVar53 & 0xffffffe0;
    uStack_310 = CONCAT44(uStack_5b4,local_5b8);
    local_5a0 = local_5e0;
    puStack_550 = (undefined1 *)pTStack_5d0;
    local_518.CurrentBitIndex = uVar53;
    local_338 = local_5e0;
    TStack_330._padding_ = uStack_5d8;
    TStack_330.Array = pTStack_5d0;
    TStack_330._16_8_ = uStack_5c8;
    TStack_330._24_8_ = uStack_5c0;
    if (((int)uVar53 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar53 != *(uint *)&(this->BudgetedDrawData).field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_518);
    }
    pTVar14 = local_518.Array;
    pTVar58 = local_5a0;
    uStack_5c8 = CONCAT44(local_518.CurrentBitIndex,local_518.UnvisitedBitMask);
    uStack_5c0 = CONCAT44(local_518._28_4_,local_518.BaseBitIndex);
    uStack_5d8 = CONCAT44(local_518._padding_._4_4_,(int)local_518._padding_);
    pTStack_5d0 = local_518.Array;
    local_5f0 = local_518.CurrentBitIndex;
    uVar53 = local_518.CurrentBitIndex;
    while( true ) {
      pTVar13 = local_338;
      if (*(int *)&local_338->field_0x8 - *(int *)&local_338->field_0x34 != (int)uStack_310) {
        local_5f2 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f2);
      }
      lpCriticalSection = local_568;
      pFVar12 = local_5e8;
      uVar45 = _GCsvCategory_MeshDrawCommandStats.Index;
      if (((TStack_330.CurrentBitIndex == uVar53) && (TStack_330.Array == pTVar14)) &&
         (pTVar13 == pTVar58)) break;
      pFVar54 = (FName *)((longlong)TStack_330.CurrentBitIndex * 0x20 + (longlong)*(FName *)pTVar13)
      ;
      if (__CsvProfilerStat598 == false) {
        pFVar30 = ::FName::ToString(pFVar54,local_2c8);
        if ((pFVar30->Data).ArrayNum == 0) {
          _Str_00 = L"";
LAB_144f32dae:
          local_58.Data = (FScriptContainerElement *)0x0;
          sVar29 = wcslen(_Str_00);
          local_48 = (int)sVar29;
          uVar53 = local_48 + 1;
          FVar56.Data = (FScriptContainerElement *)0x0;
          if (0x80 < uVar53) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar53,1);
            FVar56.Data = local_58.Data;
          }
          pFVar38 = local_d8;
          if (FVar56.Data != (FScriptContainerElement *)0x0) {
            pFVar38 = FVar56.Data;
          }
          lVar57 = 0;
          bVar16 = false;
          lVar49 = lVar57;
          local_50 = pFVar38;
          if (0 < (int)uVar53) {
            do {
              uVar5 = *(ushort *)((longlong)_Str_00 + lVar49 * 2);
              pFVar38[lVar49] = SUB21(uVar5,0);
              lVar49 = lVar49 + 1;
              bVar16 = (bool)(bVar16 | 0x7f < uVar5);
            } while (lVar49 < (int)uVar53);
            if (bVar16) {
              do {
                if (0x7f < *(ushort *)((longlong)_Str_00 + lVar57 * 2)) {
                  pFVar38[lVar57] = (FScriptContainerElement)0x3f;
                }
                lVar57 = lVar57 + 1;
              } while (lVar57 < (int)uVar53);
            }
          }
          if ((pFVar38 + (int)uVar53 == (FScriptContainerElement *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                  ,0x25,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else {
          _Str_00 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
          local_58.Data = (FScriptContainerElement *)0x0;
          if ((FScriptContainerElement *)_Str_00 != (FScriptContainerElement *)0x0)
          goto LAB_144f32dae;
          local_50 = (FScriptContainerElement *)0x0;
          local_48 = 0;
        }
        FCsvProfilerTrace::OutputInlineStat((char *)local_50,uVar45);
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
        if (local_2c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8[0].Data.AllocatorInstance.Data);
        }
        __CsvProfilerStat598 = true;
        uVar53 = local_5f0;
      }
      FVar39 = pFVar54[1].ComparisonIndex;
      if (((pFVar54[1] != (FName)(longlong)(int)FVar39.Value) || ((int)FVar39.Value < 0)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FCsvProfiler::RecordCustomStat
                (pFVar54,_GCsvCategory_MeshDrawCommandStats.Index,FVar39.Value,Set);
      TStack_330.UnvisitedBitMask = TStack_330.UnvisitedBitMask & ~TStack_330._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_330);
    }
    iVar20 = 0;
    pTStack_5d0 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_5e8->UntrackedDrawData).field_0x10
    ;
    iVar17 = *(int *)&(local_5e8->UntrackedDrawData).field_0x28;
    pTVar58 = &local_5e8->UntrackedDrawData;
    TStack_300.CurrentBitIndex = iVar20;
    iVar19 = iVar20;
    if (iVar17 != 0) {
      puVar47 = *(uint **)&(local_5e8->UntrackedDrawData).field_0x20;
      if (puVar47 == (uint *)0x0) {
        puVar47 = (uint *)pTStack_5d0;
      }
      uVar53 = *puVar47;
      while (uVar53 == 0) {
        lVar49 = (longlong)iVar20;
        iVar19 = iVar19 + 0x20;
        iVar20 = iVar20 + 1;
        TStack_300.CurrentBitIndex = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_144f32fc3;
        uVar53 = puVar47[lVar49 + 1];
      }
      local_528 = CONCAT44(local_528._4_4_,-uVar53 & uVar53);
      uVar35 = (ulonglong)(-uVar53 & uVar53) * 2 + 1;
      lVar49 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar49 == 0; lVar49 = lVar49 + -1) {
        }
      }
      local_3f8 = (int)lVar49;
      TStack_300.CurrentBitIndex = iVar19 + -1 + local_3f8;
      if (iVar17 < TStack_300.CurrentBitIndex) {
        TStack_300.CurrentBitIndex = iVar17;
      }
    }
LAB_144f32fc3:
    local_5b8 = *(int *)&(local_5e8->UntrackedDrawData).field_0x8 -
                *(int *)&(local_5e8->UntrackedDrawData).field_0x34;
    uVar53 = *(uint *)&(local_5e8->UntrackedDrawData).field_0x28;
    uStack_5c8 = CONCAT44(TStack_300.CurrentBitIndex,0xffffffff);
    local_5ec = -1 << ((byte)uVar53 & 0x1f);
    puVar52 = &(local_5e8->UntrackedDrawData).field_0x10;
    uStack_5d8 = CONCAT44((int)local_528,iVar20);
    uVar45 = uVar53 & 0xffffffe0;
    uStack_5c0 = CONCAT44(local_17c,iVar19);
    iVar17 = (int)uVar53 >> 5;
    uStack_2e0 = CONCAT44(uStack_5b4,local_5b8);
    TStack_300.UnvisitedBitMask = 0xffffffff;
    TStack_300._24_8_ = uStack_5c0;
    local_5e0 = pTVar58;
    local_308 = pTVar58;
    TStack_300._padding_ = uStack_5d8;
    TStack_300.Array = pTStack_5d0;
    if (((int)uVar53 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar42 = *(uint *)&(pFVar12->UntrackedDrawData).field_0x28;
    if (uVar53 != uVar42) {
      puVar8 = *(undefined1 **)&(pFVar12->UntrackedDrawData).field_0x20;
      puVar46 = puVar52;
      if (puVar8 != (undefined1 *)0x0) {
        puVar46 = puVar8;
      }
      uVar53 = local_5ec & *(uint *)(puVar46 + (longlong)iVar17 * 4);
      while (uVar53 == 0) {
        lVar49 = (longlong)iVar17;
        uVar45 = uVar45 + 0x20;
        iVar17 = iVar17 + 1;
        uVar53 = uVar42;
        if ((int)((uVar42 - 1) + ((int)(uVar42 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_144f330f5;
        uVar53 = *(uint *)(puVar46 + lVar49 * 4 + 4);
      }
      uVar35 = (ulonglong)(-uVar53 & uVar53) * 2 + 1;
      lVar49 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar49 == 0; lVar49 = lVar49 + -1) {
        }
      }
      local_490 = (int)lVar49;
      uVar53 = local_490 + -1 + uVar45;
      if ((int)uVar42 < (int)uVar53) {
        uVar53 = uVar42;
      }
    }
LAB_144f330f5:
    lVar49 = 0;
    while( true ) {
      pTVar13 = local_308;
      if (*(int *)(&local_308->field_0x0 + 8) - *(int *)(&local_308->field_0x0 + 0x34) !=
          (int)uStack_2e0) {
        local_5f1 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f1);
      }
      if (((TStack_300.CurrentBitIndex == uVar53) &&
          (TStack_300.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar52)) &&
         (pTVar13 == pTVar58)) break;
      lVar49 = lVar49 + *(longlong *)
                         ((longlong)TStack_300.CurrentBitIndex * 0x20 + 8 +
                         *(longlong *)&pTVar13->field_0x0);
      TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
    }
    if (__CsvProfilerStat611 == false) {
      FCsvProfilerTrace::OutputInlineStat("Untracked",_GCsvCategory_MeshDrawCommandStats.Index);
      __CsvProfilerStat611 = true;
    }
    iVar17 = (int)lVar49;
    if (((lVar49 != iVar17) || (iVar17 < 0)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar16
       )) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FCsvProfiler::RecordCustomStat("Untracked",_GCsvCategory_MeshDrawCommandStats.Index,iVar17,Set);
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar60) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

