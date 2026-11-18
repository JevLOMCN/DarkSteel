// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// AdvanceDt @ 143b12f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::AdvanceDt
          (FPhysicsThreadAccess *this,float param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FName FVar4;
  ForElementType<Chaos::TVector<int,2>_> FVar5;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *this_00;
  FPBDEvolution *pFVar6;
  longlong lVar7;
  FThreadingProxy *pFVar8;
  FDeformableSolver *this_01;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  FName FVar13;
  TReferenceControllerBase<1> *pTVar14;
  TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
  *pTVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_AdvanceDt> FVar20;
  undefined8 *puVar21;
  ForElementType<Chaos::TVector<int,2>_> FVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  undefined1 *puVar26;
  uint *puVar27;
  uint uVar28;
  ForElementType<Chaos::TVector<int,2>_> FVar29;
  bool bVar30;
  undefined1 auStackY_2a8 [32];
  undefined1 auStack_246 [2];
  uint uStack_244;
  FName FStack_240;
  FColor_u_0 aFStack_238 [2];
  TPairInitializer<UObject_const_*_&&,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_&&>
  TStack_230;
  undefined2 uStack_220;
  undefined2 uStack_21e;
  FName FStack_21c;
  undefined8 uStack_210;
  FName FStack_208;
  undefined8 *puStack_200;
  TReferenceControllerBase<1> *pTStack_1f8;
  FName FStack_1f0;
  int iStack_1e0;
  undefined8 auStack_1d8 [2];
  FConstructionParameters FStack_1c8;
  TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
  *pTStack_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 *puStack_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
  *pTStack_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 **ppuStack_150;
  FName FStack_148;
  FName aFStack_140 [4];
  undefined4 uStack_11c;
  TSet<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>,FDefaultSetAllocator>
  TStack_118;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> TStack_c8;
  ulonglong uStack_78;
  
  this_01 = this->Solver;
  if (this_01 == (FDeformableSolver *)0x0) {
    return;
  }
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FVar20 = StatPtr_STAT_ChaosDeformableSolver_AdvanceDt;
  if (StatPtr_STAT_ChaosDeformableSolver_AdvanceDt ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_AdvanceDt>)0x0) {
    pFVar19 = ::FName::FName(&FStack_148,"STAT_ChaosDeformableSolver_AdvanceDt");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_AdvanceDt>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosDeformableSolver_AdvanceDt,
                        *pFVar19,L"Chaos.Deformable.Solver.AdvanceDt.","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar20;
  bVar11 = false;
  bVar12 = false;
  FStack_1f0.ComparisonIndex.Value = 0;
  FStack_1f0.Number = 0;
  bVar16 = false;
  bVar30 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_238[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_238[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar16 = false;
      bVar30 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_240 = FVar4;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_240,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x85b);
        bVar11 = true;
        bVar12 = true;
        bVar16 = true;
        bVar30 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      TStack_230.Key._0_4_ = FVar4.ComparisonIndex.Value.Value;
      TStack_230.Key._4_4_ = FVar4.Number;
      FStack_208 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar16 = true;
      goto LAB_143a4c88e;
    }
  }
  bVar12 = bVar30;
  bVar11 = bVar16;
  bVar16 = false;
  FStack_208 = FStack_1f0;
LAB_143a4c88e:
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2139,"STAT_ChaosDeformableSolver_AdvanceDt",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x85b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2139);
  }
  dVar10 = (double)param_1;
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)
             &this_01->_padding_,dVar10);
  TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveRanges
            (&((this_01->Evolution).Ptr)->MParticlesActiveView,&TStack_c8);
  iVar2 = (this_01->PrevEvolutionActiveRange).ArrayNum;
  if (TStack_c8.ArrayNum == iVar2) {
    uVar23 = 0;
    if (0 < iVar2) {
      lVar25 = 0;
      do {
        uVar28 = 0;
        if ((int)uVar23 < TStack_c8.ArrayNum) {
          uVar28 = ~uVar23 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar29 = (ForElementType<Chaos::TVector<int,2>_>)&TStack_c8;
        if (TStack_c8.AllocatorInstance.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0
           ) {
          FVar29 = TStack_c8.AllocatorInstance.SecondaryData;
        }
        uVar28 = 0;
        if ((int)uVar23 < (this_01->PrevEvolutionActiveRange).ArrayNum) {
          uVar28 = ~uVar23 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar5 = (this_01->PrevEvolutionActiveRange).AllocatorInstance.SecondaryData;
        FVar22 = (ForElementType<Chaos::TVector<int,2>_>)&this_01->PrevEvolutionActiveRange;
        if (FVar5 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
          FVar22 = FVar5;
        }
        if ((*(int *)((longlong)FVar22 + lVar25 * 8) != *(int *)((longlong)FVar29 + lVar25 * 8)) ||
           (*(int *)((uchar *)((longlong)FVar22 + 4) + lVar25 * 8) !=
            *(int *)((uchar *)((longlong)FVar29 + 4) + lVar25 * 8))) goto LAB_143a4ca16;
        uVar23 = uVar23 + 1;
        lVar25 = lVar25 + 1;
      } while ((int)uVar23 < (this_01->PrevEvolutionActiveRange).ArrayNum);
    }
  }
  else {
LAB_143a4ca16:
    this_00 = (this_01->GSMainConstraint).Ptr;
    if (this_00 != (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) {
      pFVar6 = (this_01->Evolution).Ptr;
      FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitStaticColor
                (this_00,&pFVar6->MParticles,&pFVar6->MParticlesActiveView);
    }
  }
  iVar2 = (this_01->Property).NumSolverSubSteps;
  iVar24 = 0x7fffffff;
  if (iVar2 < 0x7fffffff) {
    iVar24 = iVar2;
  }
  iVar18 = 0;
  iVar2 = iVar18;
  if (0 < iVar24) {
    iVar2 = iVar24;
  }
  if (((this_01->bEnableSolver != false) && (iVar2 != 0)) &&
     (__real_322bcc77 <
      (float)((uint)(param_1 / (float)iVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (0 < iVar2) {
      do {
        iVar18 = iVar18 + 1;
        this_01->Iteration = iVar18;
        FDeformableSolver::Update(this_01,param_1 / (float)iVar2);
      } while (iVar18 < iVar2);
    }
    PostProcessTransientConstraints(this_01);
    this_01->Frame = this_01->Frame + 1;
    TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)
               &this_01->_padding_,dVar10);
  }
  puStack_1a8 = &(this_01->Proxies).field_0x10;
  TStack_118.Elements._0_8_ = 0;
  TStack_118.Elements._8_8_ = 0;
  pTStack_1b8 = &this_01->Proxies;
  TStack_118.Elements._32_8_ = 0;
  iStack_1b0 = 0;
  TStack_118.Elements._40_4_ = 0;
  uStack_1ac = 1;
  TStack_118.Elements._44_4_ = 0x80;
  TStack_118.Elements._48_4_ = 0xffffffff;
  TStack_118.Elements._52_4_ = 0;
  TStack_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_118.HashSize = 0;
  iVar2 = *(int *)&(this_01->Proxies).field_0x28;
  iStack_19c = iStack_1b0;
  iStack_198 = iStack_1b0;
  if (iVar2 != 0) {
    puVar27 = *(uint **)&(this_01->Proxies).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puStack_1a8;
    }
    uVar23 = *puVar27;
    iStack_198 = 0;
    iStack_1b0 = 0;
    while (uVar23 == 0) {
      lVar25 = (longlong)iStack_1b0;
      iStack_198 = iStack_198 + 0x20;
      iStack_1b0 = iStack_1b0 + 1;
      iStack_19c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_143a4cb9d;
      uVar23 = puVar27[lVar25 + 1];
    }
    uStack_1ac = -uVar23 & uVar23;
    uVar1 = (ulonglong)uStack_1ac * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iStack_1e0 = (int)lVar25;
    iStack_19c = iStack_198 + -1 + iStack_1e0;
    if (iVar2 < iStack_19c) {
      iStack_19c = iVar2;
    }
  }
LAB_143a4cb9d:
  uStack_194 = uStack_11c;
  iStack_190 = *(int *)&(this_01->Proxies).field_0x8 - *(int *)&(this_01->Proxies).field_0x34;
  uVar23 = *(uint *)&(this_01->Proxies).field_0x28;
  uStack_1a0 = 0xffffffff;
  TStack_180.CurrentBitIndex = iStack_19c;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  TStack_180._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  uVar28 = uVar23 & 0xffffffe0;
  iVar24 = (int)uVar23 >> 5;
  TStack_180._28_4_ = uStack_11c;
  TStack_180.BaseBitIndex = iStack_198;
  uStack_160 = CONCAT44(uStack_18c,iStack_190);
  uStack_244 = uVar23;
  pTStack_188 = pTStack_1b8;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1a8;
  if ((((int)uVar23 < 0) || (iVar2 < (int)uVar23)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar3 = *(uint *)&(this_01->Proxies).field_0x28;
  if (uVar23 != uVar3) {
    puVar26 = *(undefined1 **)&(this_01->Proxies).field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = &(this_01->Proxies).field_0x10;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar24 * 4);
    while (uVar23 == 0) {
      lVar25 = (longlong)iVar24;
      uVar28 = uVar28 + 0x20;
      iVar24 = iVar24 + 1;
      uStack_244 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_143a4ccad;
      uVar23 = *(uint *)(puVar26 + lVar25 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uStack_244 = (int)lVar25 + -1 + uVar28;
    if ((int)uVar3 < (int)uStack_244) {
      uStack_244 = uVar3;
    }
  }
LAB_143a4ccad:
  uVar23 = uStack_244;
  while( true ) {
    pTVar15 = pTStack_188;
    if (*(int *)&pTStack_188->field_0x8 - *(int *)&pTStack_188->field_0x34 != (int)uStack_160) {
      `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_246);
    }
    lVar25 = (longlong)TStack_180.CurrentBitIndex;
    if (((TStack_180.CurrentBitIndex == uVar23) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this_01->Proxies).field_0x10)
        ) && (pTVar15 == &this_01->Proxies)) break;
    lVar7 = *(longlong *)pTVar15;
    FDeformableSolver::UpdateOutputState(this_01,*(FThreadingProxy **)(lVar7 + 8 + lVar25 * 0x18));
    pFVar8 = *(FThreadingProxy **)(lVar7 + 8 + lVar25 * 0x18);
    ::FName::FName(&FStack_21c,"Flesh");
    if (((FStack_21c.ComparisonIndex.Value == (pFVar8->TypeName).ComparisonIndex.Value) &&
        (FStack_21c.Number == (pFVar8->TypeName).Number)) && (pFVar8 != (FThreadingProxy *)0x0)) {
      puVar21 = ::operator_new(200);
      FStack_240 = (FName)&pFVar8->Owner;
      if (puVar21 == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)0x0;
      }
      else {
        *puVar21 = &___7FBuffer_FThreadingProxy_Softs_Chaos__6B_;
        puVar21[1] = *(UObject **)FStack_240;
        *(FName *)(puVar21 + 2) = pFVar8->TypeName;
        *puVar21 = &___7FFleshOutputBuffer_FFleshThreadingProxy_Softs_Chaos__6B_;
        FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(puVar21 + 3));
        FVar13 = FGeometryCollection::VerticesGroup;
        uStack_220._0_1_ = true;
        uStack_220._1_1_ = false;
        uStack_210 = 0;
        TStack_230.Value = (TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1> *)0x0;
        pFVar19 = ::FName::FName(aFStack_140,"Vertex");
        FStack_1c8.GroupIndexDependency = (FName)TStack_230.Value;
        FVar4 = *pFVar19;
        FStack_1c8.Saved = uStack_220._0_1_;
        FStack_1c8.bAllowCircularDependency = uStack_220._1_1_;
        FStack_1c8._10_2_ = uStack_21e;
        bVar17 = FManagedArrayCollection::HasAttribute
                           ((FManagedArrayCollection *)(puVar21 + 3),FVar4,FVar13);
        if (!bVar17) {
          FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
                    ((FManagedArrayCollection *)(puVar21 + 3),FVar4,FVar13,&FStack_1c8);
        }
        FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                  ((FManagedArrayCollection *)(puVar21 + 3),FVar4,FVar13);
        FManagedArrayCollection::CopyMatchingAttributesFrom
                  ((FManagedArrayCollection *)(puVar21 + 3),
                   (FManagedArrayCollection *)(pFVar8 + 0x1a),
                   (TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                    *)0x0);
      }
      FVar4 = FStack_240;
      pTStack_1f8 = ::operator_new(0x18);
      if (pTStack_1f8 == (TReferenceControllerBase<1> *)0x0) {
        pTStack_1f8 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTStack_1f8->SharedReferenceCount = (atomic<int>)0x1;
        pTStack_1f8->WeakReferenceCount = (atomic<int>)0x1;
        pTStack_1f8->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFFleshOutputBuffer_FFleshThreadingProxy_Softs_Chaos__U__DefaultDeleter_VFFleshOutputBuffer_FFleshThreadingProxy_Softs_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTStack_1f8[1]._padding_ = (longlong)puVar21;
        LOCK();
        pTStack_1f8->SharedReferenceCount =
             (atomic<int>)((int)pTStack_1f8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar14 = pTStack_1f8;
      auStack_1d8[0] = *(undefined8 *)FVar4;
      puStack_158 = auStack_1d8;
      ppuStack_150 = &puStack_200;
      puStack_200 = puVar21;
      TSet<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UObject_const_*_&&,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_&&>_>
                (&TStack_118,&TStack_230,(bool *)&puStack_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      if ((this_01->Property).CacheToFile != false) {
        WriteFrame(this_01,pFVar8,param_1);
      }
    }
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  FDeformableSolver::PushOutputPackage
            (this_01,this_01->Frame,
             (TMap<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
              *)&TStack_118);
  FVar4 = FStack_208;
  TStack_118.HashSize = 0;
  if (TStack_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_118.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_118.Elements);
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)
             &this_01->_padding_,dVar10);
  if (TStack_c8.AllocatorInstance.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
    FMemory::Free((void *)TStack_c8.AllocatorInstance.SecondaryData);
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar4,CycleScopeEnd);
  }
  return;
}

// GetParticleMuscleActivation @ 143b21a60

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::GetParticleMuscleActivation
          (FPhysicsThreadAccess *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  FDeformableSolver *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 local_68 [12];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar11 = (uint)(((this->Solver->Evolution).Ptr)->MParticles)._padding_;
  uVar14 = (ulonglong)uVar11;
  local_68[0] = 0xbf800000;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar14);
  }
  if ((uVar11 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&__return_storage_ptr__->AllocatorInstance,0,piVar1), 0 < (int)uVar11))
  {
    do {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_68) &&
         (((FScriptContainerElement *)local_68 < pFVar2 + (longlong)*piVar1 * 4 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           local_68[0];
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  pFVar9 = this->Solver;
  pFVar3 = (pFVar9->MuscleActivationConstraints).Ptr;
  if ((pFVar3 != (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) &&
     (uVar11 = 0, 0 < (pFVar3->MuscleActivationElement).ArrayNum)) {
    lVar15 = 0;
    do {
      pFVar3 = (pFVar9->MuscleActivationConstraints).Ptr;
      uVar10 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < (pFVar3->MuscleVertexOffset).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = *(int *)((pFVar3->MuscleVertexOffset).AllocatorInstance.Data + lVar15);
      uVar14 = (ulonglong)iVar6;
      pFVar3 = (this->Solver->MuscleActivationConstraints).Ptr;
      uVar7 = 0;
      if ((int)uVar11 < (pFVar3->MuscleVertexCount).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar16 = *(int *)((pFVar3->MuscleVertexCount).AllocatorInstance.Data + lVar15) + iVar6;
      if (iVar6 < iVar16) {
        lVar12 = uVar14 * 4;
        do {
          pFVar3 = (this->Solver->MuscleActivationConstraints).Ptr;
          if (((int)uVar11 < 0) || ((pFVar3->MuscleActivation).ArrayNum <= (int)uVar11)) {
            uVar17 = 0;
          }
          else {
            uVar7 = 0;
            if ((int)uVar11 < (pFVar3->MuscleActivation).ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar8;
            }
            uVar17 = *(undefined4 *)((pFVar3->MuscleActivation).AllocatorInstance.Data + lVar15);
          }
          uVar13 = (uint)uVar14;
          uVar7 = 0;
          if ((int)uVar13 < __return_storage_ptr__->ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          uVar14 = (ulonglong)(uVar13 + 1);
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + lVar12) = uVar17;
          lVar12 = lVar12 + 4;
        } while ((int)(uVar13 + 1) < iVar16);
      }
      pFVar9 = this->Solver;
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 4;
    } while ((int)uVar11 <
             (((pFVar9->MuscleActivationConstraints).Ptr)->MuscleActivationElement).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitializeKinematicConstraint @ 143b22c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::InitializeKinematicConstraint
          (FPhysicsThreadAccess *this)

{
  FPBDEvolution *pFVar1;
  FFunctionStorage *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  FFunctionStorage *pFVar5;
  undefined ***pppuVar6;
  undefined1 auStack_98 [32];
  code *pcStack_78;
  undefined **ppuStack_68;
  FDeformableSolver *pFStack_60;
  undefined ***pppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  FFunctionStorage FStack_38;
  ulonglong uStack_18;
  
  pFStack_60 = this->Solver;
  if (pFStack_60 == (FDeformableSolver *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar1 = (pFStack_60->Evolution).Ptr;
  ppuStack_68 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::Softs::FDeformableSolver::InitializeKinematicConstraint'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  pppuStack_50 = (undefined ***)0x0;
  FStack_38.HeapAllocation = (void *)0x0;
  pcStack_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeKinematicConstraint'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float,float,int>
               ::Call;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeKinematicConstraint'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float,float,int>
               ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`Chaos::Softs::FDeformableSolver::InitializeKinematicConstraint'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&ppuStack_68,&FStack_38);
  lVar3 = *(longlong *)&pFVar1->MKinematicUpdate;
  uVar4 = *(undefined8 *)&(pFVar1->MKinematicUpdate).field_0x8;
  pFVar2 = *(FFunctionStorage **)&(pFVar1->MKinematicUpdate).field_0x28;
  *(code **)&pFVar1->MKinematicUpdate = pcStack_48;
  *(undefined8 *)&(pFVar1->MKinematicUpdate).field_0x8 = uStack_40;
  (pFVar1->MKinematicUpdate).field_0x10 = FStack_38.InlineAllocation[0];
  (pFVar1->MKinematicUpdate).field_0x11 = FStack_38.InlineAllocation[1];
  (pFVar1->MKinematicUpdate).field_0x12 = FStack_38.InlineAllocation[2];
  (pFVar1->MKinematicUpdate).field_0x13 = FStack_38.InlineAllocation[3];
  (pFVar1->MKinematicUpdate).field_0x14 = FStack_38.InlineAllocation[4];
  (pFVar1->MKinematicUpdate).field_0x15 = FStack_38.InlineAllocation[5];
  (pFVar1->MKinematicUpdate).field_0x16 = FStack_38.InlineAllocation[6];
  (pFVar1->MKinematicUpdate).field_0x17 = FStack_38.InlineAllocation[7];
  (pFVar1->MKinematicUpdate).field_0x18 = FStack_38.InlineAllocation[8];
  (pFVar1->MKinematicUpdate).field_0x19 = FStack_38.InlineAllocation[9];
  (pFVar1->MKinematicUpdate).field_0x1a = FStack_38.InlineAllocation[10];
  (pFVar1->MKinematicUpdate).field_0x1b = FStack_38.InlineAllocation[0xb];
  (pFVar1->MKinematicUpdate).field_0x1c = FStack_38.InlineAllocation[0xc];
  (pFVar1->MKinematicUpdate).field_0x1d = FStack_38.InlineAllocation[0xd];
  (pFVar1->MKinematicUpdate).field_0x1e = FStack_38.InlineAllocation[0xe];
  (pFVar1->MKinematicUpdate).field_0x1f = FStack_38.InlineAllocation[0xf];
  (pFVar1->MKinematicUpdate).field_0x20 = FStack_38.InlineAllocation[0x10];
  (pFVar1->MKinematicUpdate).field_0x21 = FStack_38.InlineAllocation[0x11];
  (pFVar1->MKinematicUpdate).field_0x22 = FStack_38.InlineAllocation[0x12];
  (pFVar1->MKinematicUpdate).field_0x23 = FStack_38.InlineAllocation[0x13];
  (pFVar1->MKinematicUpdate).field_0x24 = FStack_38.InlineAllocation[0x14];
  (pFVar1->MKinematicUpdate).field_0x25 = FStack_38.InlineAllocation[0x15];
  (pFVar1->MKinematicUpdate).field_0x26 = FStack_38.InlineAllocation[0x16];
  (pFVar1->MKinematicUpdate).field_0x27 = FStack_38.InlineAllocation[0x17];
  *(undefined4 *)&(pFVar1->MKinematicUpdate).field_0x28 = FStack_38.HeapAllocation._0_4_;
  *(undefined4 *)&(pFVar1->MKinematicUpdate).field_0x2c = FStack_38.HeapAllocation._4_4_;
  pcStack_48 = (code *)lVar3;
  uStack_40 = uVar4;
  FStack_38.InlineAllocation[0] = (pFVar1->MKinematicUpdate).field_0x10;
  FStack_38.InlineAllocation[1] = (pFVar1->MKinematicUpdate).field_0x11;
  FStack_38.InlineAllocation[2] = (pFVar1->MKinematicUpdate).field_0x12;
  FStack_38.InlineAllocation[3] = (pFVar1->MKinematicUpdate).field_0x13;
  FStack_38.InlineAllocation[4] = (pFVar1->MKinematicUpdate).field_0x14;
  FStack_38.InlineAllocation[5] = (pFVar1->MKinematicUpdate).field_0x15;
  FStack_38.InlineAllocation[6] = (pFVar1->MKinematicUpdate).field_0x16;
  FStack_38.InlineAllocation[7] = (pFVar1->MKinematicUpdate).field_0x17;
  FStack_38.InlineAllocation[8] = (pFVar1->MKinematicUpdate).field_0x18;
  FStack_38.InlineAllocation[9] = (pFVar1->MKinematicUpdate).field_0x19;
  FStack_38.InlineAllocation[10] = (pFVar1->MKinematicUpdate).field_0x1a;
  FStack_38.InlineAllocation[0xb] = (pFVar1->MKinematicUpdate).field_0x1b;
  FStack_38.InlineAllocation[0xc] = (pFVar1->MKinematicUpdate).field_0x1c;
  FStack_38.InlineAllocation[0xd] = (pFVar1->MKinematicUpdate).field_0x1d;
  FStack_38.InlineAllocation[0xe] = (pFVar1->MKinematicUpdate).field_0x1e;
  FStack_38.InlineAllocation[0xf] = (pFVar1->MKinematicUpdate).field_0x1f;
  FStack_38.InlineAllocation[0x10] = (pFVar1->MKinematicUpdate).field_0x20;
  FStack_38.InlineAllocation[0x11] = (pFVar1->MKinematicUpdate).field_0x21;
  FStack_38.InlineAllocation[0x12] = (pFVar1->MKinematicUpdate).field_0x22;
  FStack_38.InlineAllocation[0x13] = (pFVar1->MKinematicUpdate).field_0x23;
  FStack_38.InlineAllocation[0x14] = (pFVar1->MKinematicUpdate).field_0x24;
  FStack_38.InlineAllocation[0x15] = (pFVar1->MKinematicUpdate).field_0x25;
  FStack_38.InlineAllocation[0x16] = (pFVar1->MKinematicUpdate).field_0x26;
  FStack_38.InlineAllocation[0x17] = (pFVar1->MKinematicUpdate).field_0x27;
  FStack_38.HeapAllocation = pFVar2;
  if (lVar3 != 0) {
    pFVar5 = &FStack_38;
    if (pFVar2 != (FFunctionStorage *)0x0) {
      pFVar5 = pFVar2;
    }
    (**(code **)(*(longlong *)pFVar5->InlineAllocation + 0x10))();
  }
  if (pcStack_78 != (code *)0x0) {
    pppuVar6 = &ppuStack_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar6 = pppuStack_50;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// InitializeSelfCollisionVariables @ 143b22dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::InitializeSelfCollisionVariables
          (FPhysicsThreadAccess *this)

{
  TMap<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
  *this_00;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FTriangleMesh *pFVar5;
  FManagedArrayCollection *this_01;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  TStatId TVar18;
  FName *pFVar19;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar20;
  TManagedArray<UE::Math::TVector<float>_> *pTVar21;
  ulonglong uVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  TManagedArray<UE::Math::TVector<float>_> *pTVar25;
  FPBDTriangleMeshCollisions *pFVar26;
  FPBDTriangleMeshCollisions *pFVar27;
  ulonglong uVar28;
  FValueType *pFVar29;
  ForAnyElementType FVar30;
  ForElementType<unsigned_int> FVar31;
  ForElementType<FSetElementId> FVar32;
  undefined4 *puVar33;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar34;
  FScriptContainerElement *pFVar35;
  ulong64 uVar36;
  uint *puVar37;
  FManagedArrayCollection *pFVar38;
  longlong lVar39;
  uint uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  uint uVar43;
  ForAnyElementType FVar44;
  FScriptContainerElement *pFVar45;
  uint uVar46;
  uint uVar47;
  FValueType *pFVar48;
  FDeformableSolver *pFVar49;
  FValueType *pFVar50;
  longlong lVar51;
  bool bVar52;
  undefined1 auStackY_878 [32];
  int iStack_824;
  uint auStack_820 [2];
  FDeformableSolver *pFStack_818;
  uint uStack_810;
  uint uStack_80c;
  uint uStack_808;
  uint uStack_804;
  ForAnyElementType FStack_800;
  undefined8 uStack_7f8;
  undefined1 uStack_7f0;
  undefined1 uStack_7ef;
  undefined1 uStack_7ee;
  undefined1 auStack_7ed [5];
  TManagedArray<UE::Math::TVector<float>_> *pTStack_7e8;
  int aiStack_7e0 [2];
  TManagedArray<UE::Math::TVector<float>_> *pTStack_7d8;
  uint uStack_7d0;
  longlong lStack_7c8;
  ulonglong uStack_7c0;
  TManagedArray<UE::Math::TVector<float>_> *pTStack_7b8;
  FManagedArrayCollection *pFStack_7b0;
  FScriptContainerElement *pFStack_7a8;
  FCycleCounter FStack_7a0;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_790;
  undefined4 uStack_780;
  int iStack_77c;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTStack_778;
  FScriptContainerElement *pFStack_770;
  uint uStack_768;
  uint uStack_764;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_760;
  undefined4 uStack_758;
  uint uStack_754;
  uint uStack_750;
  undefined4 uStack_74c;
  FScriptContainerElement *pFStack_748;
  FName FStack_740;
  FName FStack_738;
  TManagedArray<int> *pTStack_730;
  longlong lStack_728;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_720;
  undefined4 uStack_700;
  int iStack_6fc;
  undefined4 uStack_6f8;
  int iStack_6f4;
  longlong *plStack_6f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6e8;
  longlong *plStack_6c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6c0;
  undefined8 uStack_6a0;
  FSourceLocation FStack_698;
  TArrayView<Chaos::TVector<int,3>_const_,int> TStack_678;
  FDeformableSolver *pFStack_668;
  int *piStack_660;
  code *pcStack_658;
  FDeformableSolver **ppFStack_650;
  FName FStack_648;
  FName FStack_640;
  FName FStack_638;
  FName FStack_630;
  FName FStack_628;
  FName FStack_620;
  FSparseArrayAllocationInfo FStack_618;
  TArrayView<Chaos::TVector<int,3>_const_,int> TStack_608;
  FName FStack_5f8;
  FName FStack_5f0;
  FName FStack_5e8;
  FName FStack_5e0;
  FName FStack_5d8;
  FName FStack_5d0;
  undefined1 auStack_5c8 [40];
  int iStack_5a0;
  undefined4 uStack_59c;
  FName FStack_598;
  FName FStack_590;
  FName FStack_588;
  FName FStack_580;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_578;
  FName FStack_568;
  FName aFStack_560 [2];
  FName FStack_550;
  FName aFStack_548 [2];
  longlong lStack_538;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> TStack_510;
  FCollisionFacade FStack_4f8;
  FCollectionMeshFacade FStack_4a8;
  undefined1 auStack_d8 [32];
  ForElementType<unsigned_int> FStack_b8;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a4;
  FScriptContainerElement aFStack_a0 [8];
  ForAnyElementType FStack_98;
  uint uStack_90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_88;
  ulonglong uStack_38;
  
  pFVar49 = this->Solver;
  if (pFVar49 == (FDeformableSolver *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  pFStack_818 = pFVar49;
  TVar18 = FThreadSafeStaticStatInner<FStat_STAT_ChaosDeformableSolver_InitializeSelfCollisionVariables,1>
           ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ChaosDeformableSolver_InitializeSelfCollisionVariables,1>
                        *)&StatPtr_STAT_ChaosDeformableSolver_InitializeSelfCollisionVariables);
  FStack_698.Impl._Line = 0x5bd;
  FStack_698.Impl._Column = 3;
  FStack_698.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
  ;
  FStack_7a0.StatId.ComparisonIndex.Value = 0;
  FStack_7a0.StatId.Number = 0;
  FStack_698.Impl._Function =
       "void __cdecl Chaos::Softs::FDeformableSolver::InitializeSelfCollisionVariables(void)";
  FStack_7a0.EmittedEvent = 0;
  FCycleCounter::Start
            (&FStack_7a0,*(TStatIdData **)&(TVar18.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &FStack_698);
  bVar52 = -1 < CpuChannel->Enabled;
  if (bVar52) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1469,
               "STAT_ChaosDeformableSolver_InitializeSelfCollisionVariables",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x5bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1469);
  }
  iStack_824 = 0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((pFVar49->SurfaceElements).Ptr,0,Default);
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((pFVar49->TetmeshSurfaceElements).Ptr,0,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum((pFVar49->ParticleComponentIndex).Ptr,0,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum((pFVar49->SurfaceCollisionVertices).Ptr,0,Default)
  ;
  uStack_804 = (pFVar49->UninitializedProxys_Internal).ArrayNum;
  uVar28 = (ulonglong)(int)uStack_804;
  pTVar21 = (TManagedArray<UE::Math::TVector<float>_> *)
            (pFVar49->UninitializedProxys_Internal).AllocatorInstance.Data;
  uStack_808 = 0;
  pTVar25 = (TManagedArray<UE::Math::TVector<float>_> *)((longlong)&pTVar21->field_0x0 + uVar28 * 8)
  ;
  pTStack_7e8 = pTVar25;
  while( true ) {
    pFVar50 = (FValueType *)0x0;
    pTStack_7b8 = pTVar21;
    if ((pFVar49->UninitializedProxys_Internal).ArrayNum != (int)uVar28) {
      uStack_7f0 = 0;
      `TCheckedPointerIterator<Chaos::Softs::FThreadingProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&uStack_7f0);
    }
    if (pTVar21 == pTVar25) break;
    lVar39 = *(longlong *)pTVar21;
    ::FName::FName(&FStack_738,"Flesh");
    FVar6 = FGeometryCollection::VerticesGroup;
    if (((FStack_738.ComparisonIndex.Value == (uint)*(undefined8 *)(lVar39 + 0x10)) &&
        (FStack_738.Number == (uint)((ulonglong)*(undefined8 *)(lVar39 + 0x10) >> 0x20))) &&
       (lVar39 != 0)) {
      pFVar38 = *(FManagedArrayCollection **)(lVar39 + 0x260);
      pFStack_7b0 = pFVar38;
      pFVar19 = ::FName::FName(&FStack_568,"Vertex");
      this_00 = &pFVar38->Map;
      FStack_630 = FVar6;
      FStack_638 = *pFVar19;
      pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)this_00,(TTuple<FName,FName> *)&FStack_638);
      pFVar29 = (FValueType *)&pTVar20->field_0x10;
      if (pTVar20 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar29 = pFVar50;
      }
      pTVar25 = pTStack_7e8;
      pFVar49 = pFStack_818;
      if ((pFVar29 != (FValueType *)0x0) &&
         (pTVar21 = FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>
                              (pFVar29), FVar6 = FGeometryCollection::FacesGroup,
         pTVar25 = pTStack_7e8, pFVar49 = pFStack_818,
         pTVar21 != (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
        pFVar19 = ::FName::FName(&FStack_598,"Indices");
        FStack_620 = FVar6;
        FStack_628 = *pFVar19;
        pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)this_00,(TTuple<FName,FName> *)&FStack_628);
        pFVar29 = (FValueType *)&pTVar20->field_0x10;
        if (pTVar20 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
          pFVar29 = pFVar50;
        }
        pFVar48 = pFVar50;
        if (pFVar29 != (FValueType *)0x0) {
          if ((pFVar29->ArrayType != FIntVectorType) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSameType<T>()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                  ,0x303,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar48 = (FValueType *)pFVar29->ManagedArray;
          if ((pFVar48 == (FValueType *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypedManagedArray != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                  ,0x306,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pTStack_7d8 = pTVar21;
        if (pFVar48 != (FValueType *)0x0) {
          pTVar34 = (pFStack_818->SurfaceElements).Ptr;
          uVar40 = pTVar34->ArrayNum;
          uVar28 = (ulonglong)(int)uVar40;
          uStack_7d0 = uVar40;
          iVar14 = (**(code **)(*(longlong *)pFVar48 + 0x60))(pFVar48);
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNum
                    (pTVar34,iVar14 + uVar40,Default);
          FStack_800.Data = (FScriptContainerElement *)0x0;
          uStack_7f8 = 0;
          pTStack_7d8 = pTVar21;
          iVar14 = (**(code **)(*(longlong *)pFVar48 + 0x60))(pFVar48);
          if (0 < iVar14) {
            lVar39 = 0;
            uStack_7c0 = uVar28 * 0xc;
            uStack_80c = uVar40;
            pTStack_7d8 = pTVar21;
            do {
              uVar16 = (uint)pFVar50;
              uVar43 = ~uVar16 >> 0x1f;
              uVar40 = 0;
              if ((int)uVar16 <
                  *(int *)&(pFVar48->SharedManagedArray).SharedReferenceCount.ReferenceController) {
                uVar40 = uVar43;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar46 = (int)uVar28 + uVar16;
              uStack_810 = ~uVar46 >> 0x1f;
              iVar14 = *(int *)((longlong)&((pFVar48->SharedManagedArray).Object)->_padding_ +
                               lVar39);
              pTVar34 = (pFStack_818->SurfaceElements).Ptr;
              uVar40 = 0;
              if ((int)uStack_80c < pTVar34->ArrayNum) {
                uVar40 = uStack_810;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(int *)((pTVar34->AllocatorInstance).Data + uStack_7c0 + lVar39) =
                   iStack_824 + iVar14;
              uVar40 = 0;
              if ((int)uVar16 <
                  *(int *)&(pFVar48->SharedManagedArray).SharedReferenceCount.ReferenceController) {
                uVar40 = uVar43;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              auStack_820[0] =
                   *(int *)((longlong)&((pFVar48->SharedManagedArray).Object)->_padding_ + lVar39) +
                   iStack_824;
              if (((FStack_800.Data <= (FScriptContainerElement *)auStack_820) &&
                  ((FScriptContainerElement *)auStack_820 <
                   FStack_800.Data + (longlong)uStack_7f8._4_4_ * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar14 = (uint)uStack_7f8;
              if ((uint)uStack_7f8 == uStack_7f8._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&FStack_800,(int *)((longlong)&uStack_7f8 + 4));
              }
              uStack_7f8 = CONCAT44(uStack_7f8._4_4_,iVar14 + 1);
              *(uint *)(FStack_800.Data + (longlong)iVar14 * 4) = auStack_820[0];
              uVar40 = 0;
              if ((int)uVar16 <
                  *(int *)&(pFVar48->SharedManagedArray).SharedReferenceCount.ReferenceController) {
                uVar40 = uVar43;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar14 = *(int *)((longlong)&((pFVar48->SharedManagedArray).Object)->_padding_ +
                               lVar39 + 4);
              pTVar34 = (pFStack_818->SurfaceElements).Ptr;
              uVar40 = 0;
              if ((int)uVar46 < pTVar34->ArrayNum) {
                uVar40 = uStack_810;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(int *)((pTVar34->AllocatorInstance).Data + uStack_7c0 + lVar39 + 4) =
                   iStack_824 + iVar14;
              uVar40 = 0;
              if ((int)uVar16 <
                  *(int *)&(pFVar48->SharedManagedArray).SharedReferenceCount.ReferenceController) {
                uVar40 = uVar43;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              auStack_820[0] =
                   *(int *)((longlong)&((pFVar48->SharedManagedArray).Object)->_padding_ +
                           lVar39 + 4) + iStack_824;
              if (((FStack_800.Data <= (FScriptContainerElement *)auStack_820) &&
                  ((FScriptContainerElement *)auStack_820 <
                   FStack_800.Data + (longlong)uStack_7f8._4_4_ * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar14 = (uint)uStack_7f8;
              if ((uint)uStack_7f8 == uStack_7f8._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&FStack_800,(int *)((longlong)&uStack_7f8 + 4));
              }
              uStack_7f8 = CONCAT44(uStack_7f8._4_4_,iVar14 + 1);
              *(uint *)(FStack_800.Data + (longlong)iVar14 * 4) = auStack_820[0];
              uVar40 = 0;
              if ((int)uVar16 <
                  *(int *)&(pFVar48->SharedManagedArray).SharedReferenceCount.ReferenceController) {
                uVar40 = uVar43;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar14 = *(int *)(&((pFVar48->SharedManagedArray).Object)->bIsDirty + lVar39);
              pTVar34 = (pFStack_818->SurfaceElements).Ptr;
              uVar40 = 0;
              if ((int)uVar46 < pTVar34->ArrayNum) {
                uVar40 = uStack_810;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(int *)((pTVar34->AllocatorInstance).Data + uStack_7c0 + lVar39 + 8) =
                   iStack_824 + iVar14;
              uVar40 = 0;
              if ((int)uVar16 <
                  *(int *)&(pFVar48->SharedManagedArray).SharedReferenceCount.ReferenceController) {
                uVar40 = uVar43;
              }
              if ((uVar40 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              auStack_820[0] =
                   *(int *)(&((pFVar48->SharedManagedArray).Object)->bIsDirty + lVar39) + iStack_824
              ;
              if (((FStack_800.Data <= (FScriptContainerElement *)auStack_820) &&
                  ((FScriptContainerElement *)auStack_820 <
                   FStack_800.Data + (longlong)uStack_7f8._4_4_ * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar14 = (uint)uStack_7f8;
              if ((uint)uStack_7f8 == uStack_7f8._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&FStack_800,(int *)((longlong)&uStack_7f8 + 4));
              }
              pFVar50 = (FValueType *)(ulonglong)(uVar16 + 1);
              uStack_7f8 = CONCAT44(uStack_7f8._4_4_,iVar14 + 1);
              lVar39 = lVar39 + 0xc;
              uStack_80c = uStack_80c + 1;
              *(uint *)(FStack_800.Data + (longlong)iVar14 * 4) = auStack_820[0];
              iVar14 = (**(code **)(*(longlong *)pFVar48 + 0x60))(pFVar48);
              uVar28 = (ulonglong)uStack_7d0;
            } while ((int)(uVar16 + 1) < iVar14);
          }
          FVar44.Data = FStack_800.Data;
          uVar40 = (uint)uStack_7f8;
          uVar36 = (ulong64)(int)(uint)uStack_7f8;
          if (((int)(uint)uStack_7f8 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar28 = 0;
          iStack_ac = 0x80;
          auStack_d8._8_8_ = 0;
          auStack_d8._0_8_ = (FScriptContainerElement *)0x0;
          FStack_b8 = (ForElementType<unsigned_int>)0x0;
          uStack_b0 = 0;
          iStack_a8 = -1;
          uStack_a4 = 0;
          FStack_98.Data = (FScriptContainerElement *)0x0;
          uStack_90 = 0;
          if (uVar40 != 0) {
            if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum(uVar36);
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_d8,uVar40);
            uVar43 = 1;
            if (3 < uVar40) {
              uVar41 = (ulonglong)((uVar40 >> 1) + 7) * 2 + 1;
              lVar39 = 0x3f;
              if (uVar41 != 0) {
                for (; uVar41 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                }
              }
              uStack_700 = (undefined4)lVar39;
              uVar43 = 1 << ((byte)lVar39 & 0x1f);
            }
            if ((uStack_90 == 0) || ((int)uStack_90 < (int)uVar43)) {
              uStack_90 = uVar43;
              if (FStack_98.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_98,0,0,4);
              }
              if (uVar43 != 0) {
                uVar40 = uVar43;
                if (uVar43 < 2) {
                  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
                    uVar40 = 0;
                    goto LAB_143a7b25a;
                  }
                }
                else {
LAB_143a7b25a:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&FStack_98,0,uVar40,4);
                }
                if (0 < (int)uVar43) {
                  uVar42 = (ulonglong)uVar43;
                  uVar41 = uVar28;
                  do {
                    FVar30.Data = aFStack_a0;
                    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
                      FVar30.Data = FStack_98.Data;
                    }
                    uVar22 = uVar41 & (longlong)(int)uVar43 - 1U;
                    uVar41 = uVar41 + 1;
                    *(undefined4 *)(FVar30.Data + uVar22 * 4) = 0xffffffff;
                    uVar42 = uVar42 - 1;
                  } while (uVar42 != 0);
                }
              }
              if (uStack_90 != 0) {
                pTStack_760 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_d8 + 0x10);
                uStack_768 = 0;
                uStack_764 = 1;
                uStack_754 = 0;
                uStack_750 = 0;
                if (uStack_b0 != 0) {
                  FVar31 = (ForElementType<unsigned_int>)((longlong)auStack_d8 + 0x10);
                  if (FStack_b8 != (ForElementType<unsigned_int>)0x0) {
                    FVar31 = FStack_b8;
                  }
                  uVar40 = *(uint *)FVar31;
                  uVar41 = uVar28;
                  while (uVar40 == 0) {
                    uStack_750 = (int)uVar41 + 0x20;
                    uVar41 = (ulonglong)uStack_750;
                    iVar14 = (int)uVar28;
                    uStack_768 = iVar14 + 1;
                    uVar28 = (ulonglong)uStack_768;
                    if ((int)((uStack_b0 - 1) + ((int)(uStack_b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)uStack_768) goto LAB_143a7b37d;
                    uVar40 = ((uint *)((longlong)FVar31 + 4))[iVar14];
                  }
                  uStack_764 = -uVar40 & uVar40;
                  uVar28 = (ulonglong)uStack_764 * 2 + 1;
                  lVar39 = 0x3f;
                  if (uVar28 != 0) {
                    for (; uVar28 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                    }
                  }
                  iStack_6fc = (int)lVar39;
                  uStack_754 = (uStack_750 - 1) + iStack_6fc;
                  uVar28 = (ulonglong)uStack_754;
                  if ((int)uStack_b0 < (int)uStack_754) {
LAB_143a7b37d:
                    uVar28 = (ulonglong)uStack_b0;
                    uStack_754 = uStack_b0;
                  }
                }
                uStack_758 = 0xffffffff;
                plStack_6f0 = (longlong *)auStack_d8;
                TStack_6e8._padding_ = CONCAT44(uStack_764,uStack_768);
                TStack_6e8.CurrentBitIndex = uStack_754;
                TStack_6e8.UnvisitedBitMask = 0xffffffff;
                TStack_6e8._28_4_ = uStack_74c;
                TStack_6e8.BaseBitIndex = uStack_750;
                TStack_6e8.Array = pTStack_760;
                if ((int)uVar28 < (int)uStack_b0) {
                  do {
                    iVar14 = (int)uVar28;
                    uVar40 = uStack_90 - 1 & *(uint *)(*plStack_6f0 + (longlong)iVar14 * 0xc);
                    lVar39 = *plStack_6f0 + (longlong)iVar14 * 0xc;
                    *(uint *)(lVar39 + 8) = uVar40;
                    FVar30.Data = aFStack_a0;
                    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
                      FVar30.Data = FStack_98.Data;
                    }
                    uVar28 = (longlong)(int)uStack_90 - 1U & (longlong)(int)uVar40;
                    *(undefined4 *)(lVar39 + 4) = *(undefined4 *)(FVar30.Data + uVar28 * 4);
                    *(int *)(FVar30.Data + uVar28 * 4) = iVar14;
                    TStack_6e8.UnvisitedBitMask =
                         TStack_6e8.UnvisitedBitMask & ~TStack_6e8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6e8);
                    uVar28 = (ulonglong)(uint)TStack_6e8.CurrentBitIndex;
                  } while (TStack_6e8.CurrentBitIndex < (TStack_6e8.Array)->NumBits);
                }
              }
            }
            uVar28 = (ulonglong)uStack_a4;
          }
          pFVar45 = FVar44.Data + uVar36 * 4;
          if (FVar44.Data != pFVar45) {
            do {
              if ((int)uVar28 == 0) {
                iVar14 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0xc,4,1,(ForAnyElementType *)auStack_d8,(int *)(auStack_d8 + 8),
                                    (int *)(auStack_d8 + 0xc));
                uVar40 = uStack_b0;
                if (uStack_b0 == 0) {
                  iVar17 = 0;
LAB_143a7b4ec:
                  if (iStack_ac < (int)(uStack_b0 + 1)) {
                    uVar43 = iStack_ac + 0x1fU >> 5;
                    uVar16 = uStack_b0 + 0x20 >> 5;
                    if (uVar16 < 5) {
                      iStack_ac = 4;
                    }
                    else {
                      uVar28 = (ulonglong)uVar16;
                      if (uVar43 < 5) {
                        uVar43 = 0;
                      }
                      if (uVar43 == 0) {
                        uVar41 = 4;
                        if (4 < uVar28) {
                          uVar41 = uVar28;
                        }
                      }
                      else {
                        uVar41 = ((ulonglong)uVar16 * 3 >> 3) + 0x10 + uVar28;
                      }
                      uVar36 = FMemory::QuantizeSize(uVar41 * 4,0);
                      iStack_ac = (int)(uVar36 >> 2);
                      if (iStack_ac < (int)uVar16) {
                        iStack_ac = 0x7fffffff;
                      }
                    }
                    iStack_ac = iStack_ac << 5;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_d8 + 0x10),uStack_b0
                              );
                  }
                  uStack_b0 = uStack_b0 + 1;
                  uVar16 = (int)uStack_b0 >> 0x1f & 0x1f;
                  uVar43 = uStack_b0 + uVar16;
                  iVar15 = (uVar43 & 0x1f) - uVar16;
                  if (iVar15 != 0) {
                    FVar31 = (ForElementType<unsigned_int>)((longlong)auStack_d8 + 0x10);
                    if (FStack_b8 != (ForElementType<unsigned_int>)0x0) {
                      FVar31 = FStack_b8;
                    }
                    puVar37 = (uint *)((longlong)FVar31 + (longlong)((int)uVar43 >> 5) * 4);
                    *puVar37 = *puVar37 & 0xffffffffU >> (0x20U - (char)iVar15 & 0x1f);
                  }
                }
                else {
                  iVar17 = (int)(uStack_b0 + ((int)uStack_b0 >> 0x1f & 0x1fU)) >> 5;
                  if (iVar17 != (int)(((int)(uStack_b0 - 1) >> 0x1f & 0x1fU) + (uStack_b0 - 1)) >> 5
                     ) goto LAB_143a7b4ec;
                  uStack_b0 = uStack_b0 + 1;
                }
                FVar31 = (ForElementType<unsigned_int>)((longlong)auStack_d8 + 0x10);
                if (FStack_b8 != (ForElementType<unsigned_int>)0x0) {
                  FVar31 = FStack_b8;
                }
                puVar37 = (uint *)((longlong)FVar31 + (longlong)iVar17 * 4);
                *puVar37 = *puVar37 & ~(1 << ((byte)uVar40 & 0x1f));
                iVar17 = iStack_a8;
              }
              else {
                uStack_a4 = (int)uVar28 - 1;
                iVar17 = *(int *)(auStack_d8._0_8_ + (longlong)iStack_a8 * 0xc + 4);
                iVar14 = iStack_a8;
                if (uStack_a4 != 0) {
                  *(undefined4 *)(auStack_d8._0_8_ + (longlong)iVar17 * 0xc) = 0xffffffff;
                }
              }
              iStack_a8 = iVar17;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)auStack_d8,&FStack_618,iVar14);
              puVar37 = (uint *)0x0;
              if (FStack_618.Pointer != (uint *)0x0) {
                *(uint *)FStack_618.Pointer = *(uint *)FVar44.Data;
                *(uint *)((longlong)FStack_618.Pointer + 4) = 0xffffffff;
                puVar37 = FStack_618.Pointer;
              }
              uVar40 = *puVar37;
              if ((auStack_d8._8_4_ - uStack_a4 != 1) && (auStack_d8._8_4_ != uStack_a4)) {
                FVar30.Data = aFStack_a0;
                if (FStack_98.Data != (FScriptContainerElement *)0x0) {
                  FVar30.Data = FStack_98.Data;
                }
                for (iVar14 = *(int *)(FVar30.Data + (ulonglong)(uStack_90 - 1 & uVar40) * 4);
                    iVar14 != -1; iVar14 = *(int *)(auStack_d8._0_8_ + (longlong)iVar14 * 0xc + 4))
                {
                  if (*(uint *)(auStack_d8._0_8_ + (longlong)iVar14 * 0xc) == uVar40) {
                    if (iVar14 != -1) {
                      *(uint *)(auStack_d8._0_8_ + (longlong)iVar14 * 0xc) = uVar40;
                      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized
                                ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)auStack_d8,FStack_618.Index,1);
                      goto LAB_143a7b7d9;
                    }
                    break;
                  }
                }
              }
              uVar43 = auStack_d8._8_4_ - uStack_a4;
              if (uVar43 < 4) {
                uVar16 = 1;
              }
              else {
                uVar28 = (ulonglong)((uVar43 >> 1) + 7) * 2 + 1;
                lVar39 = 0x3f;
                if (uVar28 != 0) {
                  for (; uVar28 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                  }
                }
                uStack_6f8 = (undefined4)lVar39;
                uVar16 = 1 << ((byte)lVar39 & 0x1f);
              }
              if (((int)uVar43 < 1) || ((int)uVar16 <= (int)uStack_90)) {
                uVar40 = uStack_90 - 1 & uVar40;
                puVar37[2] = uVar40;
                FVar30.Data = aFStack_a0;
                if (FStack_98.Data != (FScriptContainerElement *)0x0) {
                  FVar30.Data = FStack_98.Data;
                }
                uVar28 = (longlong)(int)uStack_90 - 1U & (longlong)(int)uVar40;
                puVar37[1] = *(uint *)(FVar30.Data + uVar28 * 4);
                *(int *)(FVar30.Data + uVar28 * 4) = FStack_618.Index;
              }
              else {
                uStack_90 = uVar16;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_d8);
              }
LAB_143a7b7d9:
              uVar28 = (ulonglong)uStack_a4;
              FVar44.Data = FVar44.Data + 4;
            } while (FVar44.Data != pFVar45);
          }
          GeometryCollection::Facades::FCollisionFacade::FCollisionFacade(&FStack_4f8,pFStack_7b0);
          bVar13 = GeometryCollection::Facades::FCollisionFacade::IsValid(&FStack_4f8);
          if (bVar13) {
            TStack_720.Array = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_d8 + 0x10);
            TStack_720._padding_._0_4_ = 0;
            TStack_720._padding_._4_4_ = 1;
            TStack_720.UnvisitedBitMask = 0xffffffff;
            TStack_720.CurrentBitIndex = 0;
            TStack_720.BaseBitIndex = 0;
            if (uStack_b0 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_720);
            }
            TStack_6c0._padding_ =
                 CONCAT44(TStack_720._padding_._4_4_,(undefined4)TStack_720._padding_);
            plStack_6c8 = (longlong *)auStack_d8;
            TStack_6c0.CurrentBitIndex = TStack_720.CurrentBitIndex;
            TStack_6c0.UnvisitedBitMask = TStack_720.UnvisitedBitMask;
            TStack_6c0._28_4_ = TStack_720._28_4_;
            TStack_6c0.BaseBitIndex = TStack_720.BaseBitIndex;
            iStack_5a0 = auStack_d8._8_4_ - uStack_a4;
            auStack_5c8._16_8_ = TStack_720.Array;
            uStack_6a0 = CONCAT44(uStack_59c,iStack_5a0);
            TStack_6c0.Array = TStack_720.Array;
            auStack_5c8._0_8_ = plStack_6c8;
            auStack_5c8._8_8_ = TStack_6c0._padding_;
            auStack_5c8._24_8_ = TStack_6c0._16_8_;
            auStack_5c8._32_8_ = TStack_6c0._24_8_;
            pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_5c8,
                                 (TBitArray<FDefaultBitArrayAllocator> *)(auStack_d8 + 0x10),
                                 uStack_b0);
            lStack_538 = pTVar23->_padding_;
            pTVar10 = pTVar23->Array;
            uVar11._0_4_ = pTVar23->UnvisitedBitMask;
            uVar11._4_4_ = pTVar23->CurrentBitIndex;
            uStack_520 = *(undefined8 *)&pTVar23->BaseBitIndex;
            pTStack_530 = pTVar10;
            uStack_528 = uVar11;
            while( true ) {
              plVar12 = plStack_6c8;
              if ((int)plStack_6c8[1] - *(int *)((longlong)plStack_6c8 + 0x34) != (int)uStack_6a0) {
                uStack_7ef = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_7ef);
              }
              if (((TStack_6c0.CurrentBitIndex == uVar11._4_4_) && (TStack_6c0.Array == pTVar10)) &&
                 (plVar12 == (longlong *)auStack_d8)) break;
              aiStack_7e0[0] = *(int *)(*plVar12 + (longlong)TStack_6c0.CurrentBitIndex * 0xc);
              bVar13 = GeometryCollection::Facades::FCollisionFacade::IsCollisionEnabled
                                 (&FStack_4f8,aiStack_7e0[0] - iStack_824);
              if (bVar13) {
                pTVar4 = (pFStack_818->SurfaceCollisionVertices).Ptr;
                pFVar45 = (pTVar4->AllocatorInstance).Data;
                if (((pFVar45 <= (FScriptContainerElement *)aiStack_7e0) &&
                    ((FScriptContainerElement *)aiStack_7e0 <
                     pFVar45 + (longlong)pTVar4->ArrayMax * 4)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar14 = pTVar4->ArrayNum;
                if (iVar14 == pTVar4->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
                }
                pTVar4->ArrayNum = iVar14 + 1;
                *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 4) = aiStack_7e0[0];
              }
              TStack_6c0.UnvisitedBitMask =
                   TStack_6c0.UnvisitedBitMask & ~TStack_6c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6c0);
            }
          }
          else {
            pTVar4 = (pFStack_818->SurfaceCollisionVertices).Ptr;
            pTVar24 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_d8
                                 ,&TStack_578);
            if ((pTVar4 == pTVar24) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x986,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar14 = pTVar24->ArrayNum;
            if (iVar14 != 0) {
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,iVar14,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,
                                  &pTVar4->ArrayMax);
              memmove((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 4,
                      (pTVar24->AllocatorInstance).Data,(longlong)iVar14 << 2);
              pTVar24->ArrayNum = 0;
            }
            if (TStack_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(TStack_578.AllocatorInstance.Data);
            }
          }
          uStack_90 = 0;
          if (FStack_98.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_98.Data);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)auStack_d8);
          if (FStack_800.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_800.Data);
          }
        }
        pTVar21 = pTStack_7d8;
        iVar14 = (**(code **)(*(longlong *)pTStack_7d8 + 0x60))(pTStack_7d8);
        pFVar49 = pFStack_818;
        iStack_824 = iStack_824 + iVar14;
        if (((pFStack_818->Property).bDoInComponentSpringCollision == false) ||
           (pTVar25 = pTStack_7e8, (pFStack_818->Property).bDoSphereRepulsion != false)) {
          pTVar4 = (pFStack_818->ParticleComponentIndex).Ptr;
          piVar2 = &pTVar4->ArrayNum;
          uVar40 = *piVar2;
          uVar28 = (ulonglong)(int)uVar40;
          iVar17 = (**(code **)(*(longlong *)pTVar21 + 0x60))(pTVar21);
          iVar14 = *piVar2;
          uVar43 = iVar17 + uVar40;
          if (iVar14 < (int)uVar43) {
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,uVar43 - iVar14,&pTVar4->AllocatorInstance,piVar2,
                                &pTVar4->ArrayMax);
            memset((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 4,0,
                   (longlong)(int)(uVar43 - iVar14) << 2);
          }
          else {
            if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar43);
            }
            if ((int)uVar43 < iVar14) {
              uVar16 = iVar14 - uVar43;
              if (((int)(uVar16 | uVar43) < 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar49 = pFStack_818;
              if (uVar16 != 0) {
                pFVar45 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar43 * 4;
                iVar14 = (*piVar2 - uVar16) - uVar43;
                if (iVar14 != 0) {
                  memmove(pFVar45,pFVar45 + (longlong)(int)uVar16 * 4,(longlong)iVar14 << 2);
                }
                *piVar2 = *piVar2 - uVar16;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,&pTVar4->AllocatorInstance,*piVar2,&pTVar4->ArrayMax);
                pFVar49 = pFStack_818;
              }
            }
          }
          lVar39 = uVar28 * 4;
          pFStack_7a8 = (FScriptContainerElement *)lVar39;
          iVar14 = (**(code **)(*(longlong *)pTStack_7d8 + 0x60))();
          pTVar25 = pTStack_7d8;
          uVar43 = uStack_808;
          pFVar45 = (FScriptContainerElement *)lVar39;
          uVar16 = uVar40;
          if (0 < iVar14) {
            do {
              pTVar4 = (pFVar49->ParticleComponentIndex).Ptr;
              uVar46 = 0;
              if ((int)uVar16 < pTVar4->ArrayNum) {
                uVar46 = ~uVar16 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar16 = uVar16 + 1;
              *(uint *)((pTVar4->AllocatorInstance).Data + lVar39) = uVar43;
              lVar39 = lVar39 + 4;
              iVar14 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
              pFVar45 = pFStack_7a8;
              pFVar49 = pFStack_818;
            } while ((int)(uVar16 - uVar40) < iVar14);
          }
          uVar43 = uStack_808;
          GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade
                    (&FStack_4a8,pFStack_7b0);
          GeometryCollection::Facades::FCollectionMeshFacade::GetGeometryGroupIndexArray
                    (&FStack_4a8,&TStack_790);
          uVar16 = uStack_80c;
          if (0 < TStack_790.ArrayNum) {
            uStack_810 = -uVar40;
            pFStack_7a8 = (FScriptContainerElement *)(uVar28 * -4);
            iVar14 = 0;
            do {
              pFVar7 = pFStack_7a8;
              uVar40 = (uint)uVar28;
              uVar47 = uVar40 + uStack_810;
              uVar46 = ~uVar47 >> 0x1f;
              uVar16 = 0;
              if (iVar14 < TStack_790.ArrayNum) {
                uVar16 = uVar46;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar39 = (longlong)pFVar7 + (longlong)pFVar45;
              if (*(int *)(TStack_790.AllocatorInstance.Data + lVar39) < 0) {
                uVar16 = 0;
                if ((int)uVar47 < TStack_790.ArrayNum) {
                  uVar16 = uVar46;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar3 = *(undefined4 *)(TStack_790.AllocatorInstance.Data + lVar39);
                pTVar4 = (pFStack_818->ParticleComponentIndex).Ptr;
                uVar16 = 0;
                if ((int)uVar40 < pTVar4->ArrayNum) {
                  uVar16 = ~uVar40 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)pFVar45) = uVar3;
              }
              else {
                uVar16 = 0;
                if ((int)uVar47 < TStack_790.ArrayNum) {
                  uVar16 = uVar46;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar46 = ~uVar40 >> 0x1f;
                iVar17 = uStack_808 + *(int *)(TStack_790.AllocatorInstance.Data + lVar39);
                pTVar4 = (pFStack_818->ParticleComponentIndex).Ptr;
                uVar16 = 0;
                if ((int)uVar40 < pTVar4->ArrayNum) {
                  uVar16 = uVar46;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar49 = pFStack_818;
                *(int *)((pTVar4->AllocatorInstance).Data + (longlong)pFVar45) = iVar17;
                pTVar4 = (pFStack_818->ParticleComponentIndex).Ptr;
                uVar16 = 0;
                if ((int)uVar40 < pTVar4->ArrayNum) {
                  uVar16 = uVar46;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if ((int)uVar43 < *(int *)((pTVar4->AllocatorInstance).Data + (longlong)pFVar45)) {
                  pTVar4 = (pFVar49->ParticleComponentIndex).Ptr;
                  uVar43 = 0;
                  if ((int)uVar40 < pTVar4->ArrayNum) {
                    uVar43 = uVar46;
                  }
                  if ((uVar43 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar43 = *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)pFVar45);
                }
              }
              uVar28 = (ulonglong)(uVar40 + 1);
              pFVar45 = (FScriptContainerElement *)((longlong)pFVar45 + 4);
              iVar14 = iVar14 + 1;
              uVar16 = uVar43;
            } while ((int)(uStack_810 + uVar40 + 1) < TStack_790.ArrayNum);
          }
          uStack_80c = uVar16;
          uStack_808 = uVar43 + 1;
          pTVar25 = pTStack_7e8;
          pFVar49 = pFStack_818;
          if (TStack_790.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_790.AllocatorInstance.Data);
            pTVar25 = pTStack_7e8;
            pFVar49 = pFStack_818;
          }
        }
      }
    }
    uVar28 = (ulonglong)uStack_804;
    pTVar21 = (TManagedArray<UE::Math::TVector<float>_> *)&pTStack_7b8->field_0x8;
  }
  pTVar34 = (pFVar49->SurfaceElements).Ptr;
  pFVar5 = (pFVar49->SurfaceTriangleMesh).Ptr;
  TStack_608.DataPtr = (TVector<int,3> *)(pTVar34->AllocatorInstance).Data;
  iVar14 = pTVar34->ArrayNum;
  if ((iVar14 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TStack_608.ArrayNum = iVar14;
  FTriangleMesh::Init(pFVar5,&TStack_608,0,-1,true);
  iVar14 = (pFVar49->UninitializedProxys_Internal).ArrayNum;
  uVar28 = (ulonglong)iVar14;
  pFVar45 = (pFVar49->UninitializedProxys_Internal).AllocatorInstance.Data;
  uStack_808 = 0;
  uStack_7c0 = CONCAT44(uStack_7c0._4_4_,iVar14);
  pFVar38 = (FManagedArrayCollection *)(pFVar45 + uVar28 * 8);
  pFStack_7b0 = pFVar38;
  do {
    pFVar27 = (FPBDTriangleMeshCollisions *)0x0;
    pFStack_7a8 = pFVar45;
    if ((pFVar49->UninitializedProxys_Internal).ArrayNum != (int)uVar28) {
      uStack_7ee = 0;
      `TCheckedPointerIterator<Chaos::Softs::FThreadingProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&uStack_7ee);
    }
    if ((FManagedArrayCollection *)pFVar45 == pFVar38) {
      pTVar34 = (pFVar49->TetmeshSurfaceElements).Ptr;
      pFVar5 = (pFVar49->SurfaceTriangleMesh).Ptr;
      TStack_678.DataPtr = (TVector<int,3> *)(pTVar34->AllocatorInstance).Data;
      iVar14 = pTVar34->ArrayNum;
      if ((iVar14 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TStack_678.ArrayNum = iVar14;
      FTriangleMesh::Init(pFVar5,&TStack_678,0,-1,true);
      pFVar26 = ::operator_new(0x550);
      if (pFVar26 != (FPBDTriangleMeshCollisions *)0x0) {
        pFVar27 = FPBDTriangleMeshCollisions::FPBDTriangleMeshCollisions
                            (pFVar26,0,(int)(((pFVar49->Evolution).Ptr)->MParticles)._padding_,
                             (pFVar49->SurfaceTriangleMesh).Ptr,false,false);
      }
      pFVar26 = (pFVar49->TriangleMeshCollisions).Ptr;
      if ((pFVar26 != pFVar27) &&
         ((pFVar49->TriangleMeshCollisions).Ptr = pFVar27,
         pFVar26 != (FPBDTriangleMeshCollisions *)0x0)) {
        (**(code **)pFVar26->_padding_)(pFVar26,1);
      }
      TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)&pFVar49->ParticleTriangleExclusionMap);
      if ((pFVar49->Property).bDoInComponentSpringCollision != false) {
        iStack_77c = (pFVar49->Property).NRingExcluded;
        FTriangleMesh::GetPointToNeighborsMap((pFVar49->SurfaceTriangleMesh).Ptr);
        FTriangleMesh::GetPointToTriangleMap((pFVar49->SurfaceTriangleMesh).Ptr,&TStack_510);
        TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::Reserve((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                   *)&pFVar49->ParticleTriangleExclusionMap,
                  ((pFVar49->SurfaceCollisionVertices).Ptr)->ArrayNum);
        piStack_660 = &iStack_77c;
        ppFStack_650 = &pFStack_668;
        pcStack_658 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeSelfCollisionVariables'::__l87::<lambda_1>,void,int>
                      ::Call;
        pFStack_668 = pFVar49;
        PhysicsParallelFor(((pFVar49->SurfaceCollisionVertices).Ptr)->ArrayNum,
                           (TFunctionRef<void___cdecl(int)> *)&pcStack_658,true);
      }
      if (bVar52) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((FStack_7a0.EmittedEvent & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((FStack_7a0.EmittedEvent & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((FStack_7a0.EmittedEvent & 4) != 0) {
        FThreadStats::AddMessage(FStack_7a0.StatId,CycleScopeEnd);
      }
      return;
    }
    lVar39 = *(longlong *)pFVar45;
    ::FName::FName(&FStack_740,"Flesh");
    FVar6 = FGeometryCollection::VerticesGroup;
    if (((FStack_740.ComparisonIndex.Value == (uint)*(undefined8 *)(lVar39 + 0x10)) &&
        (FStack_740.Number == (uint)((ulonglong)*(undefined8 *)(lVar39 + 0x10) >> 0x20))) &&
       (lVar39 != 0)) {
      this_01 = *(FManagedArrayCollection **)(lVar39 + 0x260);
      pFVar19 = ::FName::FName(&FStack_590,"Vertex");
      FStack_5f0 = FVar6;
      FStack_5f8 = *pFVar19;
      pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&this_01->Map,(TTuple<FName,FName> *)&FStack_5f8);
      pFVar26 = (FPBDTriangleMeshCollisions *)&pTVar20->field_0x10;
      if (pTVar20 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar26 = pFVar27;
      }
      pFVar38 = pFStack_7b0;
      pFVar49 = pFStack_818;
      if ((pFVar26 != (FPBDTriangleMeshCollisions *)0x0) &&
         (pTVar25 = FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>
                              ((FValueType *)pFVar26), FVar6 = FGeometryCollection::FacesGroup,
         pFVar38 = pFStack_7b0, pFVar49 = pFStack_818,
         pTVar25 != (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
        pFVar19 = ::FName::FName(&FStack_588,"Indices");
        FStack_5e0 = FVar6;
        FStack_5e8 = *pFVar19;
        pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&this_01->Map,(TTuple<FName,FName> *)&FStack_5e8);
        pFVar26 = (FPBDTriangleMeshCollisions *)&pTVar20->field_0x10;
        if (pTVar20 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
          pFVar26 = pFVar27;
        }
        if (pFVar26 != (FPBDTriangleMeshCollisions *)0x0) {
          if (((char)pFVar26->_padding_ != '\x02') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSameType<T>()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                  ,0x303,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar45 = (pFVar26->CollidableSubMesh).DynamicSubMesh.MPointToTriangleMap.
                    AllocatorInstance.Data;
          pFStack_748 = pFVar45;
          if ((pFVar45 == (FScriptContainerElement *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypedManagedArray != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                  ,0x306,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (pFVar45 != (FScriptContainerElement *)0x0) {
            pFVar19 = ::FName::FName(&FStack_580,"TriangleMesh");
            FVar6 = *pFVar19;
            pFVar19 = ::FName::FName(aFStack_548,"ObjectIndices");
            FStack_5d8 = *pFVar19;
            FStack_5d0 = FVar6;
            pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                              *)&this_01->Map,(TTuple<FName,FName> *)&FStack_5d8);
            pFVar26 = (FPBDTriangleMeshCollisions *)&pTVar20->field_0x10;
            if (pTVar20 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
              pFVar26 = pFVar27;
            }
            if (pFVar26 != (FPBDTriangleMeshCollisions *)0x0) {
              if (((char)pFVar26->_padding_ != '\x05') &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSameType<T>()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                      ,0x303,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar6 = FGeometryCollection::GeometryGroup;
              pFVar7 = (pFVar26->CollidableSubMesh).DynamicSubMesh.MPointToTriangleMap.
                       AllocatorInstance.Data;
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                pFVar19 = ::FName::FName(&FStack_550,"FaceStart");
                FStack_640 = FVar6;
                FStack_648 = *pFVar19;
                pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                                  *)&this_01->Map,(TTuple<FName,FName> *)&FStack_648);
                pFVar26 = (FPBDTriangleMeshCollisions *)&pTVar20->field_0x10;
                if (pTVar20 ==
                    (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
                  pFVar26 = pFVar27;
                }
                if (pFVar26 != (FPBDTriangleMeshCollisions *)0x0) {
                  if (((char)pFVar26->_padding_ != '\x05') &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSameType<T>()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                          ,0x303,L""), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar35 = (pFVar26->CollidableSubMesh).DynamicSubMesh.MPointToTriangleMap.
                            AllocatorInstance.Data;
                  pFStack_770 = pFVar35;
                  if ((pFVar35 == (FScriptContainerElement *)0x0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("TypedManagedArray != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                          ,0x306,L""), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar6 = FGeometryCollection::GeometryGroup;
                  if (pFVar35 != (FScriptContainerElement *)0x0) {
                    pFVar19 = ::FName::FName(aFStack_560,"FaceCount");
                    pTStack_730 = FManagedArrayCollection::FindAttribute<int>
                                            (this_01,*pFVar19,FVar6);
                    if (pTStack_730 != (TManagedArray<int> *)0x0) {
                      puVar33 = *(undefined4 **)(pFVar7 + 0x10);
                      iVar14 = *(int *)(pFVar7 + 0x18);
                      TStack_88.Elements._0_8_ = 0;
                      TStack_88.Elements._32_8_ = 0;
                      TStack_88.Elements._40_4_ = 0;
                      TStack_88.Elements._52_4_ = 0;
                      TStack_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
                      TStack_88.HashSize = 0;
                      puVar1 = puVar33 + iVar14;
                      TStack_88.Elements._8_8_ = 0;
                      TStack_88.Elements._44_4_ = 0x80;
                      TStack_88.Elements._48_4_ = 0xffffffff;
                      pTStack_7e8 = pTVar25;
                      while( true ) {
                        if (*(int *)(pFVar7 + 0x18) != iVar14) {
                          auStack_7ed[0] = 0;
                          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>
                          ::operator()(auStack_7ed);
                        }
                        pFVar35 = pFStack_770;
                        if (puVar33 == puVar1) break;
                        uStack_780 = *puVar33;
                        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                                  (&TStack_88,&iStack_6f4,(bool *)&uStack_780);
                        puVar33 = puVar33 + 1;
                      }
                      pTVar25 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
                      uStack_810 = 0;
                      iVar14 = (**(code **)(*(longlong *)pFStack_770 + 0x60))(pFStack_770);
                      if (0 < iVar14) {
                        pTStack_7b8 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
                        pTVar21 = pTVar25;
                        do {
                          uVar40 = (uint)pTVar21;
                          if (TStack_88.Elements._8_4_ != TStack_88.Elements._52_4_) {
                            FVar32 = (ForElementType<FSetElementId>)&TStack_88.Hash;
                            if (TStack_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
                            {
                              FVar32 = TStack_88.Hash.SecondaryData;
                            }
                            for (iVar14 = *(int *)((longlong)FVar32 +
                                                  ((ulonglong)(TStack_88.HashSize - 1) &
                                                  (ulonglong)pTVar21) * 4); iVar14 != -1;
                                iVar14 = *(int *)(TStack_88.Elements._0_8_ + 4 +
                                                 (longlong)iVar14 * 0xc)) {
                              if (*(uint *)(TStack_88.Elements._0_8_ + (longlong)iVar14 * 0xc) ==
                                  uVar40) goto LAB_143a7c9b8;
                            }
                          }
                          uVar43 = 0;
                          if ((int)uVar40 < *(int *)(pFVar35 + 0x18)) {
                            uVar43 = ~uVar40 >> 0x1f;
                          }
                          if ((uVar43 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar14 = *(int *)((longlong)&pTVar25->field_0x0 +
                                           *(longlong *)(pFVar35 + 0x10));
                          pTVar34 = (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)
                                    (longlong)iVar14;
                          uVar43 = 0;
                          if ((int)uVar40 < *(int *)&pTStack_730->field_0x18) {
                            uVar43 = ~uVar40 >> 0x1f;
                          }
                          if ((uVar43 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar17 = *(int *)((longlong)&pTVar25->field_0x0 +
                                           *(longlong *)&pTStack_730->field_0x10);
                          pTVar8 = (pFStack_818->TetmeshSurfaceElements).Ptr;
                          iStack_824 = pTVar8->ArrayNum;
                          uVar40 = iStack_824 + iVar17;
                          if (iStack_824 < (int)uVar40) {
                            UE::Core::Private::
                            ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0xc,4,iVar17,&pTVar8->AllocatorInstance,&pTVar8->ArrayNum,
                                       &pTVar8->ArrayMax);
                          }
                          else {
                            if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
                              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
                            }
                            if ((int)uVar40 < iStack_824) {
                              uVar43 = iStack_824 - uVar40;
                              if (((int)(uVar40 | uVar43) < 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x458,
                                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              if (uVar43 != 0) {
                                pFVar7 = (pTVar8->AllocatorInstance).Data +
                                         (longlong)(int)uVar40 * 0xc;
                                iVar15 = (pTVar8->ArrayNum - uVar40) - uVar43;
                                if (iVar15 != 0) {
                                  memmove(pFVar7,pFVar7 + (longlong)(int)uVar43 * 0xc,
                                          (longlong)iVar15 * 0xc);
                                }
                                iVar15 = pTVar8->ArrayNum - uVar43;
                                pTVar8->ArrayNum = iVar15;
                                UE::Core::Private::
                                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0xc,4,&pTVar8->AllocatorInstance,iVar15,&pTVar8->ArrayMax
                                          );
                              }
                            }
                          }
                          uStack_7d0 = iVar14 + iVar17;
                          pFVar35 = pFStack_770;
                          pTVar25 = pTStack_7b8;
                          uVar40 = uStack_810;
                          if (iVar14 < (int)uStack_7d0) {
                            lStack_728 = (longlong)iStack_824;
                            lVar39 = (longlong)pTVar34 * 0xc;
                            uVar43 = iStack_824 - iVar14;
                            lStack_7c8 = 0;
                            uStack_80c = uVar43;
                            pTStack_7d8 = (TManagedArray<UE::Math::TVector<float>_> *)pTVar34;
                            pTStack_778 = pTVar34;
                            do {
                              lVar51 = lStack_7c8;
                              uVar16 = (uint)pTVar34;
                              uVar40 = 0;
                              if ((int)uVar16 < *(int *)(pFVar45 + 0x18)) {
                                uVar40 = ~uVar16 >> 0x1f;
                              }
                              if ((uVar40 == 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              lVar51 = lVar51 + lStack_728;
                              uVar46 = ~(uVar43 + uVar16) >> 0x1f;
                              uStack_804 = *(uint *)(lVar39 + *(longlong *)(pFVar45 + 0x10));
                              pTVar34 = (pFStack_818->TetmeshSurfaceElements).Ptr;
                              uVar40 = 0;
                              if (iStack_824 < pTVar34->ArrayNum) {
                                uVar40 = uVar46;
                              }
                              if ((uVar40 == 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              pFVar45 = pFStack_748;
                              *(uint *)((pTVar34->AllocatorInstance).Data + lVar51 * 0xc) =
                                   uStack_804;
                              uVar40 = 0;
                              if ((int)uVar16 < *(int *)(pFStack_748 + 0x18)) {
                                uVar40 = ~uVar16 >> 0x1f;
                              }
                              if ((uVar40 == 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              lVar51 = (lStack_728 - (longlong)pTStack_778) + (longlong)pTStack_7d8;
                              uVar3 = *(undefined4 *)(lVar39 + 4 + *(longlong *)(pFVar45 + 0x10));
                              pTVar34 = (pFStack_818->TetmeshSurfaceElements).Ptr;
                              uVar40 = 0;
                              if ((int)(uVar43 + uVar16) < pTVar34->ArrayNum) {
                                uVar40 = uVar46;
                              }
                              if ((uVar40 == 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              pFVar45 = pFStack_748;
                              lVar51 = lVar51 * 0xc;
                              *(undefined4 *)((pTVar34->AllocatorInstance).Data + lVar51 + 4) =
                                   uVar3;
                              uVar40 = 0;
                              if ((int)uVar16 < *(int *)(pFStack_748 + 0x18)) {
                                uVar40 = ~uVar16 >> 0x1f;
                              }
                              if ((uVar40 == 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              uVar43 = uStack_80c;
                              uVar3 = *(undefined4 *)(lVar39 + 8 + *(longlong *)(pFVar45 + 0x10));
                              pTVar8 = (pFStack_818->TetmeshSurfaceElements).Ptr;
                              uVar40 = 0;
                              if ((int)(uVar16 + uStack_80c) < pTVar8->ArrayNum) {
                                uVar40 = ~(uVar16 + uStack_80c) >> 0x1f;
                              }
                              if ((uVar40 == 0) &&
                                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              pTStack_7d8 = (TManagedArray<UE::Math::TVector<float>_> *)
                                            ((longlong)
                                             &((ForAnyElementType *)&pTStack_7d8->field_0x0)->Data +
                                            1);
                              pTVar34 = (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *
                                        )(ulonglong)(uVar16 + 1);
                              lVar39 = lVar39 + 0xc;
                              *(undefined4 *)((pTVar8->AllocatorInstance).Data + lVar51 + 8) = uVar3
                              ;
                              lStack_7c8 = lStack_7c8 + 1;
                              iStack_824 = iStack_824 + 1;
                              pFVar35 = pFStack_770;
                              pTVar25 = pTStack_7b8;
                              uVar40 = uStack_810;
                            } while ((int)(uVar16 + 1) < (int)uStack_7d0);
                          }
LAB_143a7c9b8:
                          uVar40 = uVar40 + 1;
                          pTVar21 = (TManagedArray<UE::Math::TVector<float>_> *)(ulonglong)uVar40;
                          pTVar25 = (TManagedArray<UE::Math::TVector<float>_> *)&pTVar25->field_0x4;
                          uStack_810 = uVar40;
                          pTStack_7b8 = pTVar25;
                          iVar14 = (**(code **)(*(longlong *)pFVar35 + 0x60))(pFVar35);
                        } while ((int)uVar40 < iVar14);
                      }
                      TStack_88.HashSize = 0;
                      if (TStack_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FMemory::Free((void *)TStack_88.Hash.SecondaryData);
                      }
                      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::
                      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                (&TStack_88.Elements);
                      pTVar25 = pTStack_7e8;
                    }
                  }
                }
                goto LAB_143a7cd4e;
              }
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypedManagedArray != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                  ,0x306,L"");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            pTVar34 = (pFStack_818->TetmeshSurfaceElements).Ptr;
            uVar40 = pTVar34->ArrayNum;
            uStack_804 = uVar40;
            iVar17 = (**(code **)(*(longlong *)pFVar45 + 0x60))(pFVar45);
            iVar14 = pTVar34->ArrayNum;
            uVar40 = uVar40 + iVar17;
            if (iVar14 < (int)uVar40) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,uVar40 - iVar14,&pTVar34->AllocatorInstance,&pTVar34->ArrayNum,
                         &pTVar34->ArrayMax);
            }
            else {
              if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
              }
              if ((int)uVar40 < iVar14) {
                uVar43 = iVar14 - uVar40;
                if (((int)(uVar40 | uVar43) < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (uVar43 != 0) {
                  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                            (pTVar34,uVar40,uVar43);
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,&pTVar34->AllocatorInstance,pTVar34->ArrayNum,&pTVar34->ArrayMax)
                  ;
                }
              }
            }
            iVar14 = (**(code **)(*(longlong *)pFVar45 + 0x60))(pFVar45);
            uVar40 = uStack_804;
            if (0 < iVar14) {
              uStack_810 = uStack_804;
              lStack_7c8 = (longlong)(int)uStack_804 * 0xc;
              pFVar26 = pFVar27;
              pTStack_7e8 = pTVar25;
              do {
                uVar16 = (uint)pFVar27;
                uVar43 = 0;
                if ((int)uVar16 < *(int *)(pFVar45 + 0x18)) {
                  uVar43 = ~uVar16 >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar46 = ~(uVar16 + uVar40) >> 0x1f;
                uStack_804 = uStack_808 +
                             *(int *)((longlong)&pFVar26->_padding_ + *(longlong *)(pFVar45 + 0x10))
                ;
                pTStack_778 = (pFStack_818->TetmeshSurfaceElements).Ptr;
                uVar43 = 0;
                if ((int)uStack_810 < pTStack_778->ArrayNum) {
                  uVar43 = uVar46;
                }
                if ((uVar43 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(uint *)((longlong)&pFVar26->_padding_ +
                         (longlong)((pTStack_778->AllocatorInstance).Data + lStack_7c8)) =
                     uStack_804;
                uVar43 = 0;
                if ((int)uVar16 < *(int *)(pFVar45 + 0x18)) {
                  uVar43 = ~uVar16 >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uStack_804 = uStack_808 +
                             *(int *)((longlong)&pFVar26->_padding_ +
                                     *(longlong *)(pFVar45 + 0x10) + 4);
                pTVar34 = (pFStack_818->TetmeshSurfaceElements).Ptr;
                uVar43 = 0;
                if ((int)(uVar16 + uVar40) < pTVar34->ArrayNum) {
                  uVar43 = uVar46;
                }
                if ((uVar43 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                lVar39 = lStack_7c8;
                *(uint *)((longlong)&pFVar26->_padding_ +
                         (longlong)((pTVar34->AllocatorInstance).Data + lStack_7c8 + 4)) =
                     uStack_804;
                uVar43 = 0;
                if ((int)uVar16 < *(int *)(pFVar45 + 0x18)) {
                  uVar43 = ~uVar16 >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar14 = uStack_808 +
                         *(int *)((longlong)&(pFVar26->CollidableSubMesh).FullMesh +
                                 *(longlong *)(pFVar45 + 0x10));
                pTVar34 = (pFStack_818->TetmeshSurfaceElements).Ptr;
                uVar43 = 0;
                if ((int)(uVar16 + uVar40) < pTVar34->ArrayNum) {
                  uVar43 = ~(uVar16 + uVar40) >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar27 = (FPBDTriangleMeshCollisions *)(ulonglong)(uVar16 + 1);
                uStack_810 = uStack_810 + 1;
                *(int *)((pTVar34->AllocatorInstance).Data + lVar39 +
                        (longlong)&(pFVar26->CollidableSubMesh).FullMesh) = iVar14;
                iVar14 = (**(code **)(*(longlong *)pFVar45 + 0x60))(pFVar45);
                pTVar25 = pTStack_7e8;
                pFVar26 = (FPBDTriangleMeshCollisions *)
                          ((longlong)&(pFVar26->CollidableSubMesh).FullMesh + 4);
              } while ((int)(uVar16 + 1) < iVar14);
            }
          }
        }
LAB_143a7cd4e:
        iVar14 = (**(code **)(*(longlong *)pTVar25 + 0x60))();
        uStack_808 = uStack_808 + iVar14;
        pFVar38 = pFStack_7b0;
        pFVar49 = pFStack_818;
      }
    }
    uVar28 = uStack_7c0 & 0xffffffff;
    pFVar45 = pFStack_7a8 + 8;
  } while( true );
}

// InitializeSimulationObject @ 143b22de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::InitializeSimulationObject
          (FPhysicsThreadAccess *this,FThreadingProxy *param_1)

{
  int *piVar1;
  FDeformableSolver *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_InitializeSimulationObject> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER LStackX_10;
  FName aFStackX_18 [2];
  FStatMessage FStack_38;
  
  this_00 = this->Solver;
  if (this_00 == (FDeformableSolver *)0x0) {
    return;
  }
  FVar11.Value = 0;
  FVar8 = StatPtr_STAT_ChaosDeformableSolver_InitializeSimulationObject;
  if (StatPtr_STAT_ChaosDeformableSolver_InitializeSimulationObject ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_InitializeSimulationObject>)0x0) {
    pFVar7 = ::FName::FName(aFStackX_18,"STAT_ChaosDeformableSolver_InitializeSimulationObject");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_InitializeSimulationObject>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ChaosDeformableSolver_InitializeSimulationObject,*pFVar7,
                       L"Chaos.Deformable.Solver.InitializeSimulationObject","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar5 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_10.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_10.s.LowPart = FVar9.Value;
        LStackX_10.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_10.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x1cd);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_10.s.LowPart = FVar9.Value;
      LStackX_10.s.HighPart = uVar5;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_143a7d0d4;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_143a7d0d4:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId461,"STAT_ChaosDeformableSolver_InitializeSimulationObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x1cd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId461);
  }
  ::FName::FName((FName *)&LStackX_10.s,"Flesh");
  if ((((LStackX_10.s.LowPart == (param_1->TypeName).ComparisonIndex.Value) &&
       (LStackX_10.s.HighPart == (param_1->TypeName).Number)) && (param_1 != (FThreadingProxy *)0x0)
      ) && ((iVar6 = FManagedArrayCollection::NumElements
                               ((FManagedArrayCollection *)param_1[0x19].Owner,
                                FGeometryCollection::VerticesGroup), 0 < iVar6 &&
            (iVar6 = FManagedArrayCollection::NumElements
                               ((FManagedArrayCollection *)param_1[0x19].Owner,
                                FGeometryCollection::VerticesGroup), iVar6 != 0)))) {
    InitializeDeformableParticles(this_00,(FFleshThreadingProxy *)param_1);
    InitializeKinematicParticles(this_00,(FFleshThreadingProxy *)param_1);
    InitializeWeakConstraint(this_00,(FFleshThreadingProxy *)param_1);
    InitializeMuscleActivation(this_00,(FFleshThreadingProxy *)param_1);
    InitializeTetrahedralOrTriangleConstraint(this_00,(FFleshThreadingProxy *)param_1);
    InitializeGridBasedConstraints(this_00,(FFleshThreadingProxy *)param_1);
    InitializeGaussSeidelConstraints(this_00,(FFleshThreadingProxy *)param_1);
  }
  ::FName::FName((FName *)&LStackX_10.s,"CollisionManager");
  if (((LStackX_10.s.LowPart == (param_1->TypeName).ComparisonIndex.Value) &&
      (LStackX_10.s.HighPart == (param_1->TypeName).Number)) && (param_1 != (FThreadingProxy *)0x0))
  {
    InitializeCollisionBodies(this_00,(FCollisionManagerProxy *)param_1);
  }
  ::FName::FName((FName *)&LStackX_10.s,"ConstraintManager");
  if (((LStackX_10.s.LowPart == (param_1->TypeName).ComparisonIndex.Value) &&
      (LStackX_10.s.HighPart == (param_1->TypeName).Number)) && (param_1 != (FThreadingProxy *)0x0))
  {
    InitializeConstraintBodies(this_00,(FConstraintManagerProxy *)param_1);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar10 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      FStack_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&LStackX_10);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStackX_10.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStackX_10.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStackX_10.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStackX_10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// InitializeSimulationObjects @ 143b22e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::InitializeSimulationObjects
          (FPhysicsThreadAccess *this)

{
  TArray<Chaos::Softs::FThreadingProxy_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FThreadingProxy *pFVar4;
  ForElementType<Chaos::TVector<int,2>_> FVar5;
  FPBDEvolution *pFVar6;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *this_00;
  FDeformableSolver *this_01;
  code *pcVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_InitializeSimulationObjects> FVar21;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *_Src;
  FScriptContainerElement *pFVar22;
  longlong *plVar23;
  FName FVar24;
  FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *pFVar25;
  FName FVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  undefined1 auStackY_188 [32];
  undefined1 auStack_127 [7];
  FName FStack_120;
  FColor_u_0 aFStack_118 [2];
  FName FStack_110;
  FThreadingProxy *pFStack_108;
  FName FStack_100;
  FName FStack_f8;
  TPairInitializer<UObject_const_*_const_&,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_&&>
  TStack_e8;
  TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
  **ppTStack_d8;
  FThreadingProxy **ppFStack_d0;
  FName aFStack_c8 [2];
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> TStack_88;
  ulonglong uStack_38;
  
  this_01 = this->Solver;
  if (this_01 == (FDeformableSolver *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FVar21 = StatPtr_STAT_ChaosDeformableSolver_InitializeSimulationObjects;
  if (StatPtr_STAT_ChaosDeformableSolver_InitializeSimulationObjects ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_InitializeSimulationObjects>)0x0) {
    pFVar20 = ::FName::FName(aFStack_c8,"STAT_ChaosDeformableSolver_InitializeSimulationObjects");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_InitializeSimulationObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosDeformableSolver_InitializeSimulationObjects,*pFVar20,
                        L"Chaos.Deformable.Solver.InitializeSimulationObjects","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar14 = false;
  bVar15 = false;
  FStack_f8.ComparisonIndex.Value = 0;
  FStack_f8.Number = 0;
  bVar16 = false;
  bVar29 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_118[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_118[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar14 = false;
      bVar15 = true;
      bVar16 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_110.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        FStack_110.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_110,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x18c);
        bVar14 = true;
        bVar15 = true;
        bVar16 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStack_120 = FVar26;
      FStack_100 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar16 = true;
      goto LAB_143a7d4c5;
    }
  }
  bVar15 = bVar29;
  bVar14 = bVar16;
  bVar16 = false;
  FStack_100 = FStack_f8;
  FVar26 = FStack_f8;
LAB_143a7d4c5:
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId396,"STAT_ChaosDeformableSolver_InitializeSimulationObjects"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x18c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId396);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&InitializationMutex);
  FStack_120 = (FName)&(this_01->UninitializedProxys_Internal).ArrayNum;
  iVar3 = *(int *)FStack_120;
  if (iVar3 != 0) {
    pTVar1 = &this_01->UninitializedProxys_Internal;
    pFVar28 = (pTVar1->AllocatorInstance).Data;
    pFVar22 = pFVar28 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this_01->UninitializedProxys_Internal).ArrayNum != iVar3) {
        auStack_127[0] = 0;
        `TCheckedPointerIterator<Chaos::Softs::FThreadingProxy_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_127);
      }
      if (pFVar28 == pFVar22) break;
      pFVar4 = *(FThreadingProxy **)pFVar28;
      FDeformableSolver::InitializeSimulationObject(this_01,pFVar4);
      TStack_e8.Value =
           (TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>
            *)pFVar4->Owner;
      ppTStack_d8 = &TStack_e8.Value;
      ppFStack_d0 = &pFStack_108;
      pFStack_108 = pFVar4;
      TSet<TTuple<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UObject_const_*_const_&,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_&&>_>
                ((TSet<TTuple<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>,FDefaultSetAllocator>
                  *)&this_01->Proxies,&TStack_e8,(bool *)&ppTStack_d8);
      if (pFStack_108 != (FThreadingProxy *)0x0) {
        (**(code **)pFStack_108->_padding_)(pFStack_108,1);
      }
      pFVar28 = pFVar28 + 8;
    }
    _Src = TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveRanges
                     (&((this_01->Evolution).Ptr)->MParticlesActiveView,&TStack_88);
    FVar26 = FStack_100;
    if (&this_01->PrevEvolutionActiveRange != _Src) {
      if ((_Src->AllocatorInstance).SecondaryData == (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        memmove(&this_01->PrevEvolutionActiveRange,_Src,0x40);
      }
      FVar5 = (this_01->PrevEvolutionActiveRange).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      (this_01->PrevEvolutionActiveRange).AllocatorInstance.SecondaryData =
           (_Src->AllocatorInstance).SecondaryData;
      (_Src->AllocatorInstance).SecondaryData = (ForElementType<Chaos::TVector<int,2>_>)0x0;
      (this_01->PrevEvolutionActiveRange).ArrayNum = _Src->ArrayNum;
      (this_01->PrevEvolutionActiveRange).ArrayMax = _Src->ArrayMax;
      _Src->ArrayNum = 0;
      _Src->ArrayMax = 8;
    }
    if (TStack_88.AllocatorInstance.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
      FMemory::Free((void *)TStack_88.AllocatorInstance.SecondaryData);
    }
    FVar24 = (FName)&(this_01->UninitializedProxys_Internal).ArrayNum;
    if (*(int *)FVar24 != 0) {
      if (((this_01->Property).bDoSpringCollision != false) ||
         ((this_01->Property).bDoSphereRepulsion != false)) {
        FDeformableSolver::InitializeSelfCollisionVariables(this_01);
      }
      if ((this_01->Property).bUseGridBasedConstraints != false) {
        InitializeGridBasedConstraintVariables(this_01);
      }
      FVar24 = FStack_120;
      if ((this_01->Property).bUseGaussSeidelConstraints != false) {
        InitializeGaussSeidelConstraintVariables(this_01);
        uVar18 = FPBDEvolution::AddConstraintInitRange((this_01->Evolution).Ptr,1,true);
        pFVar6 = (this_01->Evolution).Ptr;
        uStack_a8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`Chaos::Softs::FDeformableSolver::InitializeMuscleActivationVariables'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        pcStack_b8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeMuscleActivationVariables'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
                     ::Call;
        uStack_90 = (longlong *)0x0;
        uVar27 = 0;
        if ((int)uVar18 < (pFVar6->MConstraintInits).ArrayNum) {
          uVar27 = ~uVar18 >> 0x1f;
        }
        uStack_a0 = this_01;
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar22 = (pFVar6->MConstraintInits).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x30;
        lVar10 = *(longlong *)pFVar22;
        uVar11 = *(undefined8 *)(pFVar22 + 8);
        lVar12 = *(longlong *)(pFVar22 + 0x10);
        uVar13 = *(undefined8 *)(pFVar22 + 0x18);
        uVar8 = *(undefined8 *)(pFVar22 + 0x20);
        plVar9 = *(longlong **)(pFVar22 + 0x28);
        *(code **)pFVar22 = pcStack_b8;
        *(undefined8 *)(pFVar22 + 8) = uStack_b0;
        *(undefined4 *)(pFVar22 + 0x10) = (undefined4)uStack_a8;
        *(undefined4 *)(pFVar22 + 0x14) = uStack_a8._4_4_;
        *(undefined4 *)(pFVar22 + 0x18) = (undefined4)uStack_a0;
        *(undefined4 *)(pFVar22 + 0x1c) = uStack_a0._4_4_;
        *(undefined4 *)(pFVar22 + 0x20) = (undefined4)uStack_98;
        *(undefined4 *)(pFVar22 + 0x24) = uStack_98._4_4_;
        *(undefined4 *)(pFVar22 + 0x28) = (undefined4)uStack_90;
        *(undefined4 *)(pFVar22 + 0x2c) = uStack_90._4_4_;
        uStack_a8 = (undefined **)lVar12;
        uStack_a0 = (FDeformableSolver *)uVar13;
        uStack_98 = uVar8;
        uStack_90 = plVar9;
        pcStack_b8 = (code *)lVar10;
        uStack_b0 = uVar11;
        if (lVar10 != 0) {
          plVar23 = &uStack_a8;
          if (plVar9 != (longlong *)0x0) {
            plVar23 = plVar9;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        this_00 = (this_01->MuscleActivationConstraints).Ptr;
        FVar24 = FStack_120;
        if ((this_00 != (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)
           && ((this_00->MuscleActivationElement).ArrayNum != 0)) {
          if ((this_01->Property).bUseGSNeohookean == false) {
            pFVar25 = (this_01->GSCorotatedConstraints).Ptr;
          }
          else {
            pFVar25 = (FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                      (this_01->GSNeohookeanConstraints).Ptr;
          }
          FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
          ApplyInflationVolumeScale
                    (this_00,(FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                             pFVar25);
          FVar24 = FStack_120;
        }
      }
    }
    iVar3 = (this_01->UninitializedProxys_Internal).ArrayNum;
    if (iVar3 < 0) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,-iVar3,&pTVar1->AllocatorInstance,(int *)FVar24,
                          &(this_01->UninitializedProxys_Internal).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + (longlong)iVar19 * 8,0,(longlong)-iVar3 << 3);
    }
    else if (0 < iVar3) {
      piVar2 = &(this_01->UninitializedProxys_Internal).ArrayNum;
      *piVar2 = *piVar2 - iVar3;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar1->AllocatorInstance,(this_01->UninitializedProxys_Internal).ArrayNum,
                 &(this_01->UninitializedProxys_Internal).ArrayMax);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&InitializationMutex);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// LoadRestartData @ 143b26420

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::LoadRestartData(FPhysicsThreadAccess *this)

{
  TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
  *pTVar1;
  FDeformablePackage *pFVar2;
  void *pvVar3;
  FDeformableSolver *this_00;
  TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
  TVar4;
  FDeformablePackage *pFVar5;
  void *pvStackX_10;
  FDeformablePackage *pFStack_28;
  longlong lStack_20;
  
  this_00 = this->Solver;
  if (this_00 == (FDeformableSolver *)0x0) {
    return;
  }
  PullRestartPackage(this_00);
  if (pFStack_28 != (FDeformablePackage *)0x0) {
    pTVar1 = &this_00->CurrentRestartPackage;
    pFVar5 = pFStack_28;
    do {
      if (pTVar1 == (TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
                     *)&lStack_20) {
        if (pFVar5 != (FDeformablePackage *)0x0) {
          *(undefined4 *)&(pFVar5->ObjectMap).field_0x48 = 0;
          pvVar3 = *(void **)&(pFVar5->ObjectMap).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar5->ObjectMap);
          goto LAB_143a8299e;
        }
      }
      else {
        pFVar2 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar5;
        if (pFVar2 != (FDeformablePackage *)0x0) {
          *(undefined4 *)&(pFVar2->ObjectMap).field_0x48 = 0;
          pvVar3 = *(void **)&(pFVar2->ObjectMap).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar2->ObjectMap);
          pFVar5 = pFVar2;
LAB_143a8299e:
          ::operator_delete(pFVar5,0x58);
        }
      }
      TVar4 = PullRestartPackage(this_00);
      pFVar5 = (FDeformablePackage *)0x0;
      if ((FDeformablePackage *)&pFStack_28 != TVar4.Ptr) {
                    /* WARNING: Load size is inaccurate */
        pFVar5 = *TVar4.Ptr;
        (TVar4.Ptr)->Frame = 0;
        (TVar4.Ptr)->_padding_ = 0;
      }
      if (pvStackX_10 != (void *)0x0) {
        *(undefined4 *)((longlong)pvStackX_10 + 0x50) = 0;
        if (*(void **)((longlong)pvStackX_10 + 0x48) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvStackX_10 + 0x48));
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pvStackX_10 + 8));
        ::operator_delete(pvStackX_10,0x58);
      }
    } while (pFVar5 != (FDeformablePackage *)0x0);
  }
  UpdateRestartParticlePositions(this_00);
  return;
}

// PullInputPackage @ 143b2ce20

TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
__thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::PullInputPackage(FPhysicsThreadAccess *this)

{
  FDeformablePackage *in_RDX;
  
  if (this->Solver != (FDeformableSolver *)0x0) {
    FDeformableSolver::PullInputPackage(this->Solver);
    return (TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
            )in_RDX;
  }
  in_RDX->Frame = 0;
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
          )in_RDX;
}

// PushOutputPackage @ 143b2d040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::PushOutputPackage
          (FPhysicsThreadAccess *this,int param_1,
          TMap<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDeformableSolver *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushOutputPackage> FVar11;
  FDeformablePackage *this_00;
  FDeformablePackage *pFVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  TArray<TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  bool bVar17;
  FColor_u_0 aFStackX_20 [2];
  FDeformablePackage *pFStack_68;
  FName FStack_60;
  LARGE_INTEGER LStack_58;
  FName FStack_50;
  FName FStack_48;
  FStatMessage FStack_38;
  
  pFVar3 = this->Solver;
  if (pFVar3 == (FDeformableSolver *)0x0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&PackageOutputMutex);
  pFVar12 = (FDeformablePackage *)0x0;
  FVar11 = StatPtr_STAT_ChaosDeformableSolver_PushOutputPackage;
  if (StatPtr_STAT_ChaosDeformableSolver_PushOutputPackage ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushOutputPackage>)0x0) {
    pFVar10 = ::FName::FName(&FStack_50,"STAT_ChaosDeformableSolver_PushOutputPackage");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_PushOutputPackage>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosDeformableSolver_PushOutputPackage,*pFVar10,
                        L"Chaos.Deformable.Solver.PushOutputPackage","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_60.ComparisonIndex.Value = FVar14.Value;
        FStack_60.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_60,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x90f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStack_58.s.LowPart = FVar14.Value;
      LStack_58.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_143a897d1;
    }
  }
  bVar6 = false;
  FVar15 = FStack_48;
LAB_143a897d1:
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2319,"STAT_ChaosDeformableSolver_PushOutputPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x90f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2319);
  }
  pTVar16 = &pFVar3->BufferedOutputPackages;
  this_00 = ::operator_new(0x58);
  if (this_00 != (FDeformablePackage *)0x0) {
    pFVar12 = FDeformablePackage::FDeformablePackage(this_00,param_1,param_2);
  }
  pFVar2 = (pTVar16->AllocatorInstance).Data;
  pFStack_68 = pFVar12;
  if (((pFVar2 <= (FScriptContainerElement *)&pFStack_68) &&
      ((FScriptContainerElement *)&pFStack_68 <
       pFVar2 + (longlong)(pFVar3->BufferedOutputPackages).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (pFVar3->BufferedOutputPackages).ArrayNum;
  piVar1 = &(pFVar3->BufferedOutputPackages).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar16->AllocatorInstance,piVar1);
  }
  (pFVar3->BufferedOutputPackages).ArrayNum = iVar9 + 1;
  *(FDeformablePackage **)((pTVar16->AllocatorInstance).Data + (longlong)iVar9 * 8) = pFStack_68;
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_38.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_38.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_58);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStack_58.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStack_58.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStack_58.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStack_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&PackageOutputMutex);
  return;
}

// RemoveSimulationObjects @ 143b36550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::RemoveSimulationObjects
          (FPhysicsThreadAccess *this)

{
  int *piVar1;
  TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
  *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FPBDEvolution *pFVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  FThreadingProxy *pFVar8;
  FFleshThreadingProxy *pFVar9;
  FDeformableSolver *this_00;
  code *pcVar10;
  FIdentityFunctor FVar11;
  bool bVar12;
  TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
  *pTVar13;
  FIdentityFunctor FVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_RemoveSimulationObjects> FVar20;
  longlong *plVar21;
  TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_> *pTVar22;
  uint uVar23;
  UObject *pUVar24;
  longlong lVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_> *pTVar28;
  UObject *pUVar29;
  FName FVar30;
  FPBDEvolution *pFVar31;
  uint *puVar32;
  ulonglong uVar33;
  longlong *plVar34;
  int iVar35;
  uint uVar36;
  bool bVar37;
  undefined1 auStackX_20 [8];
  undefined1 uStack_170;
  undefined1 auStack_16f [7];
  longlong *plStack_168;
  FPBDEvolution *pFStack_160;
  UObject *pUStack_158;
  ForAnyElementType FStack_150;
  undefined8 uStack_148;
  FColor_u_0 aFStack_140 [2];
  FName FStack_138;
  undefined8 uStack_130;
  FName FStack_128;
  FName FStack_120;
  FName FStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  FName FStack_108;
  FName FStack_100;
  int iStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
  *pTStack_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *puStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
  *pTStack_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName aFStack_78 [4];
  undefined4 uStack_54;
  
  this_00 = this->Solver;
  if (this_00 == (FDeformableSolver *)0x0) {
    return;
  }
  uVar27 = 0;
  FVar20 = StatPtr_STAT_ChaosDeformableSolver_RemoveSimulationObjects;
  if (StatPtr_STAT_ChaosDeformableSolver_RemoveSimulationObjects ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_RemoveSimulationObjects>)0x0) {
    pFVar19 = ::FName::FName(aFStack_78,"STAT_ChaosDeformableSolver_RemoveSimulationObjects");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_RemoveSimulationObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosDeformableSolver_RemoveSimulationObjects,*pFVar19,
                        L"Chaos.Deformable.Solver.RemoveSimulationObjects","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar20;
  bVar12 = false;
  FVar11 = (FIdentityFunctor)0x0;
  FStack_100.ComparisonIndex.Value = 0;
  FStack_100.Number = 0;
  bVar15 = false;
  FVar14 = (FIdentityFunctor)0x0;
  if ((FVar30.ComparisonIndex.Value.Value != 0) || (FVar30.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_140[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_140[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      FVar11 = (FIdentityFunctor)0x1;
      bVar15 = false;
      FVar14 = (FIdentityFunctor)0x1;
      if (-1 < CpuChannel->Enabled) {
        FStack_128.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        FStack_128.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_128,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x805);
        bVar12 = true;
        FVar11 = (FIdentityFunctor)0x1;
        bVar15 = true;
        FVar14 = (FIdentityFunctor)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStack_138 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar15 = true;
      goto LAB_143a8d61b;
    }
  }
  bVar12 = bVar15;
  FVar11 = FVar14;
  bVar15 = false;
  FStack_138 = FStack_100;
  FVar30 = FStack_100;
LAB_143a8d61b:
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2053,"STAT_ChaosDeformableSolver_RemoveSimulationObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x805);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2053);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&RemovalMutex);
  iVar17 = (this_00->RemovedProxys_Internal).ArrayNum;
  pFVar4 = (this_00->RemovedProxys_Internal).AllocatorInstance.Data;
  pUStack_158 = (UObject *)0x0;
  FStack_150.Data = (FScriptContainerElement *)0x0;
  uStack_148 = CONCAT44(uStack_148._4_4_,iVar17);
  if (iVar17 == 0) {
    iVar17 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar17,0,&FStack_150,iVar17,(int *)((longlong)&uStack_148 + 4));
    memcpy(FStack_150.Data,pFVar4,(longlong)iVar17 << 3);
    pUStack_158 = (UObject *)FStack_150.Data;
    iVar17 = (int)uStack_148;
  }
  pUVar24 = pUStack_158;
  piVar1 = &(this_00->RemovedProxys_Internal).ArrayMax;
  FStack_150.Data = (FScriptContainerElement *)0x0;
  uStack_148 = 0;
  (this_00->RemovedProxys_Internal).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this_00->RemovedProxys_Internal).AllocatorInstance,0,piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&RemovalMutex);
  if (iVar17 != 0) {
    FPBDEvolution::ResetConstraintRules((this_00->Evolution).Ptr);
    pFVar5 = (this_00->Evolution).Ptr;
    pFStack_160 = pFVar5;
    if (0 < (pFVar5->MParticlesActiveView).Ranges.ArrayNum) {
      pTVar28 = &(pFVar5->MParticlesActiveView).Ranges;
      pFVar31 = pFVar5;
      uVar33 = uVar27;
      do {
        uVar36 = (uint)uVar27;
        uVar23 = 0;
        if ((int)uVar36 < (pFVar5->MParticlesActiveView).Ranges.ArrayNum) {
          uVar23 = ~uVar36 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), pFVar31 = pFStack_160, bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((*(uint *)((pTVar28->AllocatorInstance).Data + uVar33) & 0xfffffffe) != 0) {
          TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                    (pTVar28,uVar36,Default);
          break;
        }
        uVar27 = (ulonglong)(uVar36 + 1);
        uVar33 = uVar33 + 4;
      } while ((int)(uVar36 + 1) < (pFVar31->MParticlesActiveView).Ranges.ArrayNum);
    }
    pUVar24 = pUStack_158;
    AlgoImpl::
    IntroSortInternal<Chaos::Softs::FThreadingProxy_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Softs::FThreadingProxy_*,_Chaos::Softs::FDeformableSolver::RemoveSimulationObjects_::__l6::<lambda_1>_>_>
              ((FThreadingProxy **)pUStack_158,iVar17,FVar11,(<lambda_1> *)&uStack_170);
    pUVar29 = (UObject *)0x0;
    pFStack_160 = (FPBDEvolution *)0x1;
    uStack_130 = (UObject *)(&pUVar24->field_0x0 + (longlong)iVar17 * 8);
    for (; pUVar24 != uStack_130; pUVar24 = (UObject *)&pUVar24->field_0x8) {
      lVar25 = *(longlong *)pUVar24;
      ::FName::FName(&FStack_120,"Flesh");
      if ((((FStack_120.ComparisonIndex.Value == (uint)*(undefined8 *)(lVar25 + 0x10)) &&
           (FStack_120.Number == (uint)((ulonglong)*(undefined8 *)(lVar25 + 0x10) >> 0x20))) &&
          (lVar25 != 0)) &&
         ((iVar17 = FManagedArrayCollection::NumElements
                              (*(FManagedArrayCollection **)(lVar25 + 0x260),
                               FGeometryCollection::VerticesGroup), 0 < iVar17 &&
          (uVar27 = *(ulonglong *)(lVar25 + 800), uStack_e0 = uVar27, 0 < (int)(uVar27 >> 0x20)))))
      {
        uVar36 = (uint)uVar27;
        uVar23 = 0;
        if ((int)uVar36 < *(int *)&(this_00->MObjects).field_0x10) {
          uVar23 = ~uVar36 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TMap<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
        ::FindAndRemoveChecked(&this_00->Proxies,(UObject *)&puStack_e8);
        if (puStack_e8 != (undefined8 *)0x0) {
          (**(code **)*puStack_e8)();
        }
        pFVar5 = (this_00->Evolution).Ptr;
        iVar35 = uStack_e0._4_4_;
        plVar34 = (longlong *)(pFVar5->MParticles)._padding_;
        iVar17 = (int)(pFVar5->MParticles)._padding_;
        plVar21 = plVar34 + iVar17;
        plStack_168 = plVar21;
        while( true ) {
          if ((int)(pFVar5->MParticles)._padding_ != iVar17) {
            auStackX_20[0] = 0;
            `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(auStackX_20);
            plVar21 = plStack_168;
          }
          if (plVar34 == plVar21) break;
          plVar6 = (longlong *)*plVar34;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,uVar27 & 0xffffffff,iVar35);
            plVar21 = plStack_168;
          }
          plVar34 = plVar34 + 1;
        }
        iVar17 = (int)(pFVar5->MParticles)._padding_;
        iVar18 = iVar17 - uVar36;
        if (iVar18 < iVar35) {
          iVar35 = iVar18;
        }
        *(int *)&(pFVar5->MParticles)._padding_ = iVar17 - iVar35;
      }
    }
    iVar17 = *(int *)&(this_00->MObjects).field_0x10;
    if (0 < iVar17) {
      plStack_168 = (longlong *)0x0;
      pUVar24 = pUVar29;
      do {
        plVar21 = plStack_168;
        uVar36 = (uint)pUVar29;
        uVar23 = 0;
        if ((int)uVar36 < iVar17) {
          uVar23 = ~uVar36 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (*(UObject **)((longlong)plVar21 + *(longlong *)&(this_00->MObjects).field_0x8) !=
            pUVar24) {
          uVar23 = 0;
          if ((int)uVar36 < *(int *)&(this_00->MObjects).field_0x10) {
            uVar23 = ~uVar36 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pUVar24 = *(UObject **)((longlong)plVar21 + *(longlong *)&(this_00->MObjects).field_0x8);
          if (pUVar24 != (UObject *)0x0) {
            uVar23 = ((uint)((ulonglong)pUVar24 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar24 >> 4))
                     * -0x7a143595;
            uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
            if (*(int *)&(this_00->Proxies).field_0x8 != *(int *)&(this_00->Proxies).field_0x34) {
              puVar7 = *(undefined1 **)&(this_00->Proxies).field_0x40;
              puVar26 = &(this_00->Proxies).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar26 = puVar7;
              }
              iVar17 = *(int *)(puVar26 +
                               (ulonglong)
                               (*(int *)&(this_00->Proxies).field_0x48 - 1U &
                               (uVar23 >> 0x10 ^ uVar23)) * 4);
              if (iVar17 != -1) {
                do {
                  if (*(UObject **)(*(longlong *)&this_00->Proxies + (longlong)iVar17 * 0x18) ==
                      pUVar24) {
                    pTVar22 = TMapBase<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
                              ::FindChecked((TMapBase<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>,0>_>
                                             *)&this_00->Proxies,pUVar24);
                    pFVar8 = pTVar22->Ptr;
                    ::FName::FName(&FStack_118,"Flesh");
                    if (((FStack_118.ComparisonIndex.Value ==
                          (pFVar8->TypeName).ComparisonIndex.Value) &&
                        (FStack_118.Number == (pFVar8->TypeName).Number)) &&
                       (pFVar8 != (FThreadingProxy *)0x0)) {
                      uStack_130 = pFVar8[0x21].Owner;
                      uStack_110 = SUB84(uStack_130,0);
                      iVar18 = (int)((ulonglong)uStack_130 >> 0x20);
                      pFVar8[0x21].Owner = uStack_130;
                      pFVar5 = (this_00->Evolution).Ptr;
                      iVar17 = (pFVar5->MParticlesActiveView).Ranges.ArrayNum;
                      iVar35 = 0;
                      iStack_10c = iVar18;
                      uVar23 = 0;
                      if (iVar17 != 0) {
                        uVar23 = 0;
                        if ((int)(iVar17 - 1U) < iVar17) {
                          uVar23 = ~(iVar17 - 1U) >> 0x1f;
                        }
                        if ((uVar23 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        iVar35 = (pFVar5->MParticlesActiveView).Ranges.ArrayNum;
                        uVar23 = *(uint *)((pFVar5->MParticlesActiveView).Ranges.AllocatorInstance.
                                           Data + (longlong)iVar35 * 4 + -4) >> 1;
                      }
                      pTVar28 = &(pFVar5->MParticlesActiveView).Ranges;
                      plVar21 = plStack_168;
                      if (iVar18 != 0) {
                        iVar17 = uStack_130._4_4_ + uVar23;
                        if (iVar35 == (pFVar5->MParticlesActiveView).Ranges.ArrayMax) {
                          iVar35 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&pTVar28->AllocatorInstance,
                                              &(pFVar5->MParticlesActiveView).Ranges.ArrayMax);
                        }
                        pFVar4 = (pTVar28->AllocatorInstance).Data;
                        (pFVar5->MParticlesActiveView).Ranges.ArrayNum = iVar35 + 1;
                        *(uint *)(pFVar4 + (longlong)iVar35 * 4) = iVar17 * 2 | 1;
                        plVar21 = plStack_168;
                      }
                    }
                    goto LAB_143a8dcb1;
                  }
                  iVar17 = *(int *)(*(longlong *)&this_00->Proxies + 0x10 + (longlong)iVar17 * 0x18)
                  ;
                } while (iVar17 != -1);
              }
            }
            bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3162941949749491654>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                                ,0x83a,"Proxies.Contains(CurrentObject)");
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
        }
LAB_143a8dcb1:
        iVar17 = *(int *)&(this_00->MObjects).field_0x10;
        plStack_168 = plVar21 + 1;
        pUVar29 = (UObject *)(ulonglong)(uVar36 + 1);
      } while ((int)(uVar36 + 1) < iVar17);
    }
    FVar30 = FStack_138;
    iVar35 = 0;
    ResetGaussSeidelVariables(this_00);
    puVar7 = &(this_00->Proxies).field_0x10;
    iVar17 = *(int *)&(this_00->Proxies).field_0x28;
    pTVar2 = &this_00->Proxies;
    iStack_bc = iVar35;
    iStack_b8 = iVar35;
    if (iVar17 == 0) {
LAB_143a8dd71:
      uStack_cc = (uint)pFStack_160;
    }
    else {
      puVar32 = *(uint **)&(this_00->Proxies).field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)puVar7;
      }
      uStack_cc = *puVar32;
      while (uStack_cc == 0) {
        lVar25 = (longlong)iVar35;
        iStack_b8 = iStack_b8 + 0x20;
        iVar35 = iVar35 + 1;
        iStack_bc = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar35) goto LAB_143a8dd71;
        uStack_cc = puVar32[lVar25 + 1];
      }
      uStack_cc = -uStack_cc & uStack_cc;
      uVar27 = (ulonglong)uStack_cc * 2 + 1;
      lVar25 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iStack_f0 = (int)lVar25;
      iStack_bc = iStack_f0 + -1 + iStack_b8;
      if (iVar17 < iStack_bc) {
        iStack_bc = iVar17;
      }
    }
    uStack_b4 = uStack_54;
    iStack_b0 = *(int *)&(this_00->Proxies).field_0x8 - *(int *)&(this_00->Proxies).field_0x34;
    uVar23 = *(uint *)&(this_00->Proxies).field_0x28;
    uStack_c0 = 0xffffffff;
    uVar36 = uVar23 & 0xffffffe0;
    TStack_a0._padding_ = CONCAT44(uStack_cc,iVar35);
    TStack_a0.CurrentBitIndex = iStack_bc;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar23 >> 5;
    TStack_a0._28_4_ = uStack_54;
    TStack_a0.BaseBitIndex = iStack_b8;
    uStack_80 = CONCAT44(uStack_ac,iStack_b0);
    pTStack_d8 = pTVar2;
    iStack_d0 = iVar35;
    puStack_c8 = puVar7;
    pTStack_a8 = pTVar2;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
    if ((((int)uVar23 < 0) || (iVar17 < (int)uVar23)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar3 = *(uint *)&(this_00->Proxies).field_0x28;
    if (uVar23 != uVar3) {
      puVar26 = *(undefined1 **)&(this_00->Proxies).field_0x20;
      if (puVar26 == (undefined1 *)0x0) {
        puVar26 = puVar7;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar18 * 4);
      while (uVar23 == 0) {
        lVar25 = (longlong)iVar18;
        uVar36 = uVar36 + 0x20;
        iVar18 = iVar18 + 1;
        uVar23 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_143a8dea0;
        uVar23 = *(uint *)(puVar26 + lVar25 * 4 + 4);
      }
      uVar27 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uVar23 = (uVar36 - 1) + (int)lVar25;
      if ((int)uVar3 < (int)uVar23) {
        uVar23 = uVar3;
      }
    }
LAB_143a8dea0:
    while( true ) {
      pTVar13 = pTStack_a8;
      if (*(int *)&pTStack_a8->field_0x8 - *(int *)&pTStack_a8->field_0x34 != (int)uStack_80) {
        `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TUniquePtr<Chaos::Softs::FThreadingProxy,TDefaultDelete<Chaos::Softs::FThreadingProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_16f);
      }
      if (((TStack_a0.CurrentBitIndex == uVar23) &&
          (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) &&
         (pUVar24 = pUStack_158, pTVar13 == pTVar2)) break;
      pFVar9 = *(FFleshThreadingProxy **)
                (*(longlong *)pTVar13 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
      ::FName::FName(&FStack_108,"Flesh");
      if (((FStack_108.ComparisonIndex.Value == (uint)pFVar9->_padding_) &&
          (FStack_108.Number == (uint)((ulonglong)pFVar9->_padding_ >> 0x20))) &&
         (pFVar9 != (FFleshThreadingProxy *)0x0)) {
        InitializeWeakConstraint(this_00,pFVar9);
        InitializeMuscleActivation(this_00,pFVar9);
        InitializeTetrahedralOrTriangleConstraint(this_00,pFVar9);
        InitializeGridBasedConstraints(this_00,pFVar9);
        InitializeGaussSeidelConstraints(this_00,pFVar9);
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
  }
  if (pUVar24 != (UObject *)0x0) {
    FMemory::Free(pUVar24);
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bool)FVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  return;
}

// Reset @ 143b36d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::Reset
          (FPhysicsThreadAccess *this,FDeformableSolverProperties *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
  *this_00;
  int iVar4;
  FPBDEvolution *pFVar5;
  FScriptContainerElement *pFVar6;
  FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *pFVar7;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *pFVar8;
  undefined8 *puVar9;
  FDeformableSolver *this_01;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined2 uVar19;
  float fVar20;
  bool bVar21;
  bool bVar22;
  undefined1 uVar23;
  longlong lVar24;
  bool bVar25;
  uint uVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Reset> FVar28;
  FPBDEvolution *pFVar29;
  FPBDEvolution *pFVar30;
  FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *pFVar31;
  FTriangleMesh *this_02;
  FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *pFVar32;
  FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *pFVar33;
  FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *this_03;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *pFVar34;
  FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *this_04;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *pFVar35;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar36;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar37;
  TQuat<double> *pTVar38;
  FThreadStats *this_05;
  FThreadStatsPool *this_06;
  FName FVar39;
  uint uVar40;
  ForAnyElementType FVar41;
  FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *pFVar42;
  ForAnyElementType FVar43;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar44;
  ForAnyElementType FVar45;
  bool bVar46;
  bool bVar47;
  FColor_u_0 aFStackX_10 [4];
  FImplicitObject *pFStackX_20;
  FName FStack_2d8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_2d0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_2c0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_2b0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_2a0;
  undefined1 auStack_288 [112];
  TArrayCollectionArrayBase TStack_218;
  void *pvStack_210;
  undefined8 uStack_208;
  TArrayCollectionArrayBase TStack_200;
  void *pvStack_1f8;
  undefined8 uStack_1f0;
  FName FStack_1e8;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> TStack_1d8;
  TArray<float,TSizedDefaultAllocator<32>_> TStack_1c8;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> TStack_1b8;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  LARGE_INTEGER LStack_198;
  TArray<float,TSizedDefaultAllocator<32>_> TStack_190;
  FStatMessage FStack_180;
  FName FStack_170;
  TVector<double>_u_0 TStack_168;
  undefined1 auStack_148 [168];
  void *pvStack_a0;
  undefined8 auStack_80 [3];
  TQuat<double> TStack_68;
  
  this_01 = this->Solver;
  if (this_01 == (FDeformableSolver *)0x0) {
    return;
  }
  pFVar42 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0;
  FVar28 = StatPtr_STAT_ChaosDeformableSolver_Reset;
  if (StatPtr_STAT_ChaosDeformableSolver_Reset ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Reset>)0x0) {
    pFVar27 = ::FName::FName(&FStack_170,"STAT_ChaosDeformableSolver_Reset");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Reset>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosDeformableSolver_Reset,
                        *pFVar27,L"Chaos.Deformable.Solver.Reset","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar28;
  bVar12 = false;
  bVar11 = false;
  FStack_1e8.ComparisonIndex.Value = 0;
  FStack_1e8.Number = 0;
  bVar46 = false;
  bVar25 = false;
  if ((FVar39.ComparisonIndex.Value.Value != 0) || (FVar39.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_10[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar46 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_2d8.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        FStack_2d8.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_2d8,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x91);
        bVar12 = true;
        bVar11 = true;
        bVar46 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar25 = true;
      goto LAB_143a8e7d8;
    }
  }
  bVar12 = bVar46;
  bVar11 = bVar25;
  bVar25 = false;
  FVar39 = FStack_1e8;
LAB_143a8e7d8:
  bVar46 = -1 < CpuChannel->Enabled;
  if (bVar46) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId145,"STAT_ChaosDeformableSolver_Reset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x91);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId145);
  }
  iVar4 = param_1->NumSolverIterations;
  bVar47 = param_1->FixTimeStep;
  uVar13 = *(undefined3 *)&param_1->field_0x9;
  fVar14 = param_1->TimeStepSize;
  (this_01->Property).NumSolverSubSteps = param_1->NumSolverSubSteps;
  (this_01->Property).NumSolverIterations = iVar4;
  (this_01->Property).FixTimeStep = bVar47;
  *(undefined3 *)&(this_01->Property).field_0x9 = uVar13;
  (this_01->Property).TimeStepSize = fVar14;
  bVar47 = param_1->bEnableKinematics;
  bVar15 = param_1->bUseFloor;
  bVar16 = param_1->bUseGridBasedConstraints;
  fVar14 = param_1->GridDx;
  bVar17 = param_1->bDoQuasistatics;
  bVar18 = param_1->bDoBlended;
  uVar19 = *(undefined2 *)&param_1->field_0x1a;
  fVar20 = param_1->BlendedZeta;
  (this_01->Property).CacheToFile = param_1->CacheToFile;
  (this_01->Property).bEnableKinematics = bVar47;
  (this_01->Property).bUseFloor = bVar15;
  (this_01->Property).bUseGridBasedConstraints = bVar16;
  (this_01->Property).GridDx = fVar14;
  (this_01->Property).bDoQuasistatics = bVar17;
  (this_01->Property).bDoBlended = bVar18;
  *(undefined2 *)&(this_01->Property).field_0x1a = uVar19;
  (this_01->Property).BlendedZeta = fVar20;
  bVar47 = param_1->bEnableCorotatedConstraints;
  bVar15 = param_1->bEnablePositionTargets;
  bVar16 = param_1->bUseGaussSeidelConstraints;
  bVar17 = param_1->bUseSOR;
  uVar13 = *(undefined3 *)&param_1->field_0x25;
  fVar14 = param_1->OmegaSOR;
  bVar18 = param_1->bUseGSNeohookean;
  bVar21 = param_1->bDoSpringCollision;
  bVar22 = param_1->bDoInComponentSpringCollision;
  uVar23 = param_1->field_0x2f;
  (this_01->Property).bEnableGravity = param_1->bEnableGravity;
  (this_01->Property).bEnableCorotatedConstraints = bVar47;
  (this_01->Property).bEnablePositionTargets = bVar15;
  (this_01->Property).bUseGaussSeidelConstraints = bVar16;
  (this_01->Property).bUseSOR = bVar17;
  *(undefined3 *)&(this_01->Property).field_0x25 = uVar13;
  (this_01->Property).OmegaSOR = fVar14;
  (this_01->Property).bUseGSNeohookean = bVar18;
  (this_01->Property).bDoSpringCollision = bVar21;
  (this_01->Property).bDoInComponentSpringCollision = bVar22;
  (this_01->Property).field_0x2f = uVar23;
  fVar14 = param_1->SpringCollisionSearchRadius;
  fVar20 = param_1->SpringCollisionStiffness;
  bVar47 = param_1->bAllowSliding;
  bVar15 = param_1->bDoSphereRepulsion;
  uVar19 = *(undefined2 *)&param_1->field_0x3e;
  (this_01->Property).NRingExcluded = param_1->NRingExcluded;
  (this_01->Property).SpringCollisionSearchRadius = fVar14;
  (this_01->Property).SpringCollisionStiffness = fVar20;
  (this_01->Property).bAllowSliding = bVar47;
  (this_01->Property).bDoSphereRepulsion = bVar15;
  *(undefined2 *)&(this_01->Property).field_0x3e = uVar19;
  fVar14 = param_1->SphereRepulsionStiffness;
  (this_01->Property).SphereRepulsionRadius = param_1->SphereRepulsionRadius;
  (this_01->Property).SphereRepulsionStiffness = fVar14;
  bVar47 = param_1->bOverrideMuscleActivationWithAnimatedCurves;
  bVar15 = param_1->bCollideWithFullMesh;
  bVar16 = param_1->bEnableDynamicSprings;
  puVar3 = &(this_01->MObjects).field_0x8;
  (this_01->Property).bDoLengthBasedMuscleActivation = param_1->bDoLengthBasedMuscleActivation;
  (this_01->Property).bOverrideMuscleActivationWithAnimatedCurves = bVar47;
  (this_01->Property).bCollideWithFullMesh = bVar15;
  (this_01->Property).bEnableDynamicSprings = bVar16;
  if ((undefined8 *)puVar3 != auStack_80) {
    if (*(void **)puVar3 != (void *)0x0) {
      FMemory::Free(*(void **)puVar3);
    }
    *(undefined8 *)puVar3 = 0;
    *(undefined8 *)&(this_01->MObjects).field_0x10 = 0;
  }
  pFVar30 = (FPBDEvolution *)0x0;
  FSolverParticles::FSolverParticles((FSolverParticles *)auStack_148);
  auStack_288._8_8_ = (FScriptContainerElement *)0x0;
  auStack_288._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
  auStack_288._16_8_ = 0;
  auStack_288._24_4_ = 0;
  auStack_288._40_8_ = (void *)0x0;
  auStack_288._48_8_ = 0;
  auStack_288._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  auStack_288[0x38] = 0;
  TArrayCollection::AddArray
            ((TArrayCollection *)auStack_288,(TArrayCollectionArrayBase *)(auStack_288 + 0x20));
  auStack_288._60_4_ = 0;
  auStack_288._0_8_ = &___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  auStack_288._72_8_ = (void *)0x0;
  auStack_288._64_8_ = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  auStack_288._80_8_ = 0;
  auStack_288._88_8_ =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  auStack_288._96_8_ = (TRefCountPtr<Chaos::FImplicitObject> *)0x0;
  auStack_288._104_8_ = 0;
  TArrayCollection::AddArray
            ((TArrayCollection *)auStack_288,(TArrayCollectionArrayBase *)(auStack_288 + 0x40));
  TArrayCollection::AddArray
            ((TArrayCollection *)auStack_288,(TArrayCollectionArrayBase *)(auStack_288 + 0x58));
  pvStack_210 = (void *)0x0;
  auStack_288._0_8_ = &___7FSolverCollisionParticles_Softs_Chaos__6B_;
  uStack_208 = 0;
  TStack_218 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvStack_1f8 = (void *)0x0;
  uStack_1f0 = 0;
  TStack_200 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)auStack_288,&TStack_218);
  TArrayCollection::AddArray((TArrayCollection *)auStack_288,&TStack_200);
  pFVar29 = ::operator_new(0x450);
  if (pFVar29 != (FPBDEvolution *)0x0) {
    TStack_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_1d8.ArrayNum = 0;
    TStack_1d8.ArrayMax = 0;
    pFVar30 = FPBDEvolution::FPBDEvolution
                        (pFVar29,(FSolverParticles *)auStack_148,
                         (FSolverCollisionParticles *)auStack_288,&TStack_1d8,
                         (this_01->Property).NumSolverIterations,0.0,0.0,0.0,0.0,0.0,
                         (this_01->Property).bDoQuasistatics,true);
  }
  pFVar5 = (this_01->Evolution).Ptr;
  if ((pFVar5 != pFVar30) && ((this_01->Evolution).Ptr = pFVar30, pFVar5 != (FPBDEvolution *)0x0)) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  if ((pFVar29 != (FPBDEvolution *)0x0) &&
     (TStack_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(TStack_1d8.AllocatorInstance.Data);
  }
  TArrayCollection::AddArray
            ((TArrayCollection *)&((this_01->Evolution).Ptr)->MParticles,
             (TArrayCollectionArrayBase *)&this_01->MObjects);
  if ((((this_01->Property).bDoSpringCollision != false) ||
      ((this_01->Property).bDoSphereRepulsion != false)) ||
     ((this_01->Property).CacheToFile != false)) {
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->SurfaceElements).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->SurfaceElements).Ptr =
             (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->TetmeshSurfaceElements).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->TetmeshSurfaceElements).Ptr =
             (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
  }
  if (((this_01->Property).bDoSpringCollision != false) ||
     ((this_01->Property).bDoSphereRepulsion != false)) {
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->ParticleComponentIndex).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->ParticleComponentIndex).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    this_02 = ::operator_new(0x148);
    pFVar32 = pFVar42;
    if (this_02 != (FTriangleMesh *)0x0) {
      pFVar32 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
                FTriangleMesh::FTriangleMesh(this_02);
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->SurfaceTriangleMesh).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->SurfaceTriangleMesh).Ptr = (FTriangleMesh *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      FTriangleMesh::~FTriangleMesh((FTriangleMesh *)pFVar31);
      ::operator_delete(pFVar31,0x148);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->SurfaceCollisionVertices).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->SurfaceCollisionVertices).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar32
       , pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
  }
  if ((this_01->Property).bUseGridBasedConstraints != false) {
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllElements).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllElements).Ptr =
             (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
  }
  if ((this_01->Property).bUseGaussSeidelConstraints != false) {
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllElements).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllElements).Ptr =
             (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllIncidentElements).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllIncidentElements).Ptr =
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)
                 ->AllocatorInstance).Data,(int)(pFVar31->ConstraintsData)._padding_);
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllIncidentElementsLocal).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllIncidentElementsLocal).Ptr =
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)
                 ->AllocatorInstance).Data,(int)(pFVar31->ConstraintsData)._padding_);
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllTetEMeshArray).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllTetEMeshArray).Ptr = (TArray<float,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllTetNuMeshArray).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllTetNuMeshArray).Ptr = (TArray<float,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllTetAlphaJArray).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllTetAlphaJArray).Ptr = (TArray<float,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllCorotatedCodEMeshArray).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllCorotatedCodEMeshArray).Ptr =
             (TArray<float,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x10);
    pFVar32 = pFVar42;
    if (pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar31->ConstraintsData)._padding_ = 0;
      pFVar32 = pFVar31;
    }
    pFVar31 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
              (this_01->AllSkinEMeshArray).Ptr;
    if ((pFVar31 != pFVar32) &&
       ((this_01->AllSkinEMeshArray).Ptr = (TArray<float,TSizedDefaultAllocator<32>_> *)pFVar32,
       pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      pFVar6 = (((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar31->_padding_)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar31,0x10);
    }
    pFVar31 = ::operator_new(0x180);
    bVar47 = pFVar31 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0;
    pFVar32 = pFVar42;
    FVar41.Data = TStack_2c0.AllocatorInstance.Data;
    FVar43.Data = TStack_2b0.AllocatorInstance.Data;
    FVar45.Data = TStack_2d0.AllocatorInstance.Data;
    if (bVar47) {
      TStack_2b0.ArrayNum = 0;
      TStack_2b0.ArrayMax = 0;
      TStack_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_1c8.ArrayNum = 0;
      TStack_1c8.ArrayMax = 0;
      TStack_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_2c0.ArrayNum = 0;
      TStack_2c0.ArrayMax = 0;
      TStack_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_2d0.ArrayNum = 0;
      TStack_2d0.ArrayMax = 0;
      TStack_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_2a0.ArrayNum = 0;
      TStack_2a0.ArrayMax = 0;
      TStack_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar32 = FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
                FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>
                          (pFVar31,&TStack_2d0,&TStack_2c0,&TStack_1c8,&TStack_2b0,&TStack_2a0,
                           &GDeformableXPBDWeakConstraintParams);
      FVar41.Data = (FScriptContainerElement *)(TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
      FVar43.Data = (FScriptContainerElement *)pFVar42;
      FVar45.Data = (FScriptContainerElement *)(TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    }
    pFVar42 = (this_01->GSWeakConstraints).Ptr;
    if ((pFVar42 != pFVar32) &&
       ((this_01->GSWeakConstraints).Ptr = pFVar32,
       pFVar42 != (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      (**(code **)(((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pFVar42->_padding_
                   )->AllocatorInstance).Data)(pFVar42,1);
    }
    if (bVar47) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar45.Data,TStack_2d0.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar45.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(FVar45.Data);
      }
    }
    if (bVar47) {
      DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)FVar41.Data,TStack_2c0.ArrayNum);
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)FVar41.Data !=
          (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(FVar41.Data);
      }
    }
    if ((bVar47) && (TStack_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(TStack_1c8.AllocatorInstance.Data);
    }
    if (bVar47) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar43.Data,TStack_2b0.ArrayNum);
      if ((FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)FVar43.Data !=
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
        FMemory::Free(FVar43.Data);
      }
    }
    FVar41.Data = TStack_2a0.AllocatorInstance.Data;
    if (bVar47) {
      DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)TStack_2a0.AllocatorInstance.Data,
                 TStack_2a0.ArrayNum);
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)FVar41.Data !=
          (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(FVar41.Data);
      }
    }
    pFVar33 = ::operator_new(0x198);
    if (pFVar33 == (FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)
    {
      pFVar33 = (FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0;
    }
    else {
      pFVar33 = FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles>::
                FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles>
                          (pFVar33,&GDeformableXPBDWeakConstraintParams);
    }
    pFVar35 = (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)0x0;
    pFVar7 = (this_01->GSDynamicWeakConstraints).Ptr;
    if ((pFVar7 != pFVar33) &&
       ((this_01->GSDynamicWeakConstraints).Ptr = pFVar33,
       pFVar7 != (FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
    this_03 = ::operator_new(0x50);
    pFVar34 = pFVar35;
    if (this_03 !=
        (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      pFVar34 = (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)
                FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
                FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>
                          (this_03,(this_01->Property).SphereRepulsionRadius,
                           (this_01->Property).SphereRepulsionStiffness,
                           &((this_01->Evolution).Ptr)->MParticles,
                           &GDeformableXPBDWeakConstraintParams);
    }
    pFVar8 = (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)
             (this_01->GSSphereRepulsionConstraints).Ptr;
    if ((pFVar8 != pFVar34) &&
       ((this_01->GSSphereRepulsionConstraints).Ptr =
             (FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> *)pFVar34
       , pFVar8 != (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    this_04 = ::operator_new(0x50);
    pFVar34 = pFVar35;
    FVar41.Data = TStack_1b8.AllocatorInstance.Data;
    if (this_04 != (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)0x0
       ) {
      TStack_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_190.ArrayNum = 0;
      TStack_190.ArrayMax = 0;
      TStack_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_1b8.ArrayNum = 0;
      TStack_1b8.ArrayMax = 0;
      pFVar34 = (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)
                FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>::
                FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>
                          (this_04,&((this_01->Evolution).Ptr)->MParticles,&TStack_1b8,&TStack_190);
      FVar41.Data = (FScriptContainerElement *)pFVar35;
    }
    TUniquePtr<Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>,TDefaultDelete<Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>_>_>
    ::Reset(&this_01->GSVolumeConstraints,
            (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)pFVar34);
    if ((this_04 !=
         (FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       ((FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)FVar41.Data !=
        (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      FMemory::Free(FVar41.Data);
    }
    this_00 = &this_01->MuscleIndexOffset;
    bVar47 = 1 < *(int *)&(this_01->MuscleIndexOffset).field_0x48;
    if (!bVar47) {
      TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    *(undefined4 *)&(this_01->MuscleIndexOffset).field_0x8 = 0;
    if (*(int *)&(this_01->MuscleIndexOffset).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this_01->MuscleIndexOffset).field_0xc);
    }
    *(undefined4 *)&(this_01->MuscleIndexOffset).field_0x34 = 0;
    *(undefined4 *)&(this_01->MuscleIndexOffset).field_0x28 = 0;
    *(undefined4 *)&(this_01->MuscleIndexOffset).field_0x30 = 0xffffffff;
    iVar4 = *(int *)&(this_01->MuscleIndexOffset).field_0x2c;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this_01->MuscleIndexOffset).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this_01->MuscleIndexOffset).field_0x10,0)
      ;
    }
    if (bVar47) {
      *(undefined4 *)&(this_01->MuscleIndexOffset).field_0x48 = 1;
      TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,FDefaultSetAllocator>
                *)this_00);
    }
    pFVar34 = ::operator_new(200);
    if (pFVar34 != (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)0x0) {
      (((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
       &pFVar34->MuscleActivationElement)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar34->_padding_ =
           (longlong)
           &___7__FMuscleActivationConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
      (pFVar34->MuscleActivationElement).ArrayNum = 0;
      (pFVar34->MuscleActivationElement).ArrayMax = 0;
      (pFVar34->OriginInsertionPair).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (((TArray<float,TSizedDefaultAllocator<32>_> *)&(pFVar34->OriginInsertionPair).ArrayNum)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar34->MuscleRestLength).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->MuscleRestLength).ArrayNum = 0;
      (pFVar34->MuscleRestLength).ArrayMax = 0;
      (pFVar34->MuscleActivation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->MuscleActivation).ArrayNum = 0;
      (pFVar34->MuscleActivation).ArrayMax = 0;
      (pFVar34->FiberDirectionMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->FiberDirectionMatrix).ArrayNum = 0;
      (pFVar34->FiberDirectionMatrix).ArrayMax = 0;
      (pFVar34->ContractionVolumeScale).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->ContractionVolumeScale).ArrayNum = 0;
      (pFVar34->ContractionVolumeScale).ArrayMax = 0;
      (pFVar34->FiberLengthRatioAtMaxActivation).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar34->FiberLengthRatioAtMaxActivation).ArrayNum = 0;
      (pFVar34->FiberLengthRatioAtMaxActivation).ArrayMax = 0;
      (pFVar34->MuscleLengthRatioThresholdForMaxActivation).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar34->MuscleLengthRatioThresholdForMaxActivation).ArrayNum = 0;
      (pFVar34->MuscleLengthRatioThresholdForMaxActivation).ArrayMax = 0;
      (pFVar34->InflationVolumeScale).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->InflationVolumeScale).ArrayNum = 0;
      (pFVar34->InflationVolumeScale).ArrayMax = 0;
      (pFVar34->LengthActivationCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->LengthActivationCurves).ArrayNum = 0;
      (pFVar34->LengthActivationCurves).ArrayMax = 0;
      (pFVar34->MuscleVertexOffset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->MuscleVertexOffset).ArrayNum = 0;
      (pFVar34->MuscleVertexOffset).ArrayMax = 0;
      (pFVar34->MuscleVertexCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar34->MuscleVertexCount).ArrayNum = 0;
      (pFVar34->MuscleVertexCount).ArrayMax = 0;
      pFVar35 = pFVar34;
    }
    pFVar34 = (this_01->MuscleActivationConstraints).Ptr;
    if ((pFVar34 != pFVar35) &&
       ((this_01->MuscleActivationConstraints).Ptr = pFVar35,
       pFVar34 != (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *)0x0)) {
      (**(code **)pFVar34->_padding_)(pFVar34,1);
    }
  }
  pTVar44 = (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar36 = ::operator_new(0x10);
  pTVar37 = pTVar44;
  if (pTVar36 != (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar36->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar36->ArrayNum = 0;
    pTVar36->ArrayMax = 0;
    pTVar37 = pTVar36;
  }
  pTVar36 = (this_01->AllUnconstrainedSurfaceElementsCorotatedCod).Ptr;
  if ((pTVar36 != pTVar37) &&
     ((this_01->AllUnconstrainedSurfaceElementsCorotatedCod).Ptr = pTVar37,
     pTVar36 != (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)0x0)) {
    pFVar6 = (pTVar36->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pTVar36,0x10);
  }
  pTVar36 = ::operator_new(0x10);
  pTVar37 = pTVar44;
  if (pTVar36 != (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar36->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar36->ArrayNum = 0;
    pTVar36->ArrayMax = 0;
    pTVar37 = pTVar36;
  }
  pTVar36 = (this_01->AllUnconstrainedSurfaceElementsSkin).Ptr;
  if ((pTVar36 != pTVar37) &&
     ((this_01->AllUnconstrainedSurfaceElementsSkin).Ptr = pTVar37,
     pTVar36 != (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)0x0)) {
    pFVar6 = (pTVar36->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pTVar36,0x10);
  }
  FDeformableSolver::InitializeKinematicConstraint(this_01);
  bVar47 = (this_01->Property).bUseFloor;
  this_01->Time = 0.0;
  this_01->Frame = 0;
  this_01->Iteration = 0;
  if (bVar47 != false) {
    TStack_168._s_0.Z = 0.0;
    TStack_168._s_0.X = 0.0;
    TStack_168._s_0.Y = 0.0;
    FPBDEvolution::AddCollisionParticleRange((this_01->Evolution).Ptr,1,0xffffffff,true);
    pFVar29 = (this_01->Evolution).Ptr;
    if (((int)(pFVar29->MCollisionParticles)._padding_ < 1) &&
       (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar47)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puVar9 = (undefined8 *)(pFVar29->MCollisionParticles)._padding_;
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 1) = 0;
    pFVar29 = (this_01->Evolution).Ptr;
    pTVar38 = UE::Math::TQuat<double>::MakeFromEuler(&TStack_68,(TVector<double> *)&TStack_168._s_0)
    ;
    fStack_1a8 = (float)pTVar38->X;
    fStack_1a4 = (float)pTVar38->Y;
    fStack_1a0 = (float)pTVar38->Z;
    fStack_19c = (float)pTVar38->W;
    if (((int)(pFVar29->MCollisionParticles)._padding_ < 1) &&
       (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar47)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puVar9 = (undefined8 *)(pFVar29->MCollisionParticles)._padding_;
    *puVar9 = CONCAT44(fStack_1a4,fStack_1a8);
    puVar9[1] = CONCAT44(fStack_19c,fStack_1a0);
    pFVar29 = (this_01->Evolution).Ptr;
    pFStackX_20 = ::operator_new(0x50);
    if (pFStackX_20 == (FImplicitObject *)0x0) {
      pFStackX_20 = (FImplicitObject *)0x0;
    }
    else {
      FImplicitObject::FImplicitObject(pFStackX_20,0,'\x02');
      pFStackX_20->_padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
      pFStackX_20[1]._padding_ = 0;
      pFStackX_20[1]._padding_ = 0;
      pFStackX_20[1].Margin = 0.0;
      pFStackX_20[1].bIsConvex = false;
      pFStackX_20[1].bDoCollide = false;
      pFStackX_20[1].bHasBoundingBox = false;
      pFStackX_20[1].bIsTracked = false;
      pFStackX_20[1].Type = '\0';
      pFStackX_20[1].CollisionType = '\0';
      pFStackX_20[1].Pad[0] = '\0';
      pFStackX_20[1].Pad[1] = '\0';
      pFStackX_20[1].Pad[2] = '\0';
      pFStackX_20[1].Pad[3] = '\0';
      pFStackX_20[1].Pad[4] = '\0';
      pFStackX_20[1].Pad[5] = '\0';
      pFStackX_20[2]._padding_ = 0;
      pFStackX_20[2]._padding_ = 0x3ff0000000000000;
      LOCK();
      *(int *)&pFStackX_20->_padding_ = (int)pFStackX_20->_padding_ + 1;
      UNLOCK();
    }
    (**(code **)((pFVar29->MCollisionParticles)._padding_ + 0x10))(&pFVar29->MCollisionParticles,0);
    if (pFStackX_20 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFStackX_20->_padding_;
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar24 == 1) && (*(int *)((longlong)&pFStackX_20->_padding_ + 4) == 0)) {
        (**(code **)pFStackX_20->_padding_)(pFStackX_20,1);
      }
    }
  }
  auStack_288._0_8_ = &___7FSolverCollisionParticles_Softs_Chaos__6B_;
  TStack_200 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if (pvStack_1f8 != (void *)0x0) {
    FMemory::Free(pvStack_1f8);
  }
  TStack_218 = (TArrayCollectionArrayBase)
               &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if (pvStack_210 != (void *)0x0) {
    FMemory::Free(pvStack_210);
  }
  auStack_288._0_8_ = &___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  auStack_288._88_8_ =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)auStack_288._96_8_,auStack_288._104_4_);
  if ((TRefCountPtr<Chaos::FImplicitObject> *)auStack_288._96_8_ !=
      (TRefCountPtr<Chaos::FImplicitObject> *)0x0) {
    FMemory::Free((void *)auStack_288._96_8_);
  }
  auStack_288._64_8_ = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  if ((void *)auStack_288._72_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_288._72_8_);
  }
  auStack_288._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
  auStack_288._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if ((void *)auStack_288._40_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_288._40_8_);
  }
  auStack_288._0_8_ = &___7TArrayCollection_Chaos__6B_;
  uVar40 = 0;
  if (0 < (int)auStack_288._16_4_) {
    do {
      uVar26 = 0;
      if ((int)uVar40 < (int)auStack_288._16_4_) {
        uVar26 = ~uVar40 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar40 = uVar40 + 1;
      *(undefined8 *)(auStack_288._8_8_ + (longlong)pTVar44) = 0;
      pTVar44 = (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&pTVar44->ArrayNum;
    } while ((int)uVar40 < (int)auStack_288._16_4_);
  }
  if ((FScriptContainerElement *)auStack_288._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_288._8_8_);
  }
  auStack_148._160_8_ = &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  if (pvStack_a0 != (void *)0x0) {
    FMemory::Free(pvStack_a0);
  }
  auStack_148._136_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
  if ((void *)auStack_148._144_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_148._144_8_);
  }
  auStack_148._112_8_ = &___7__TArrayCollectionArray_M_Chaos__6B_;
  if ((void *)auStack_148._120_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_148._120_8_);
  }
  auStack_148._88_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if ((void *)auStack_148._96_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_148._96_8_);
  }
  auStack_148._64_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if ((void *)auStack_148._72_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_148._72_8_);
  }
  auStack_148._0_8_ = &___7__TParticles_M_02_Chaos__6B_;
  auStack_148._32_8_ = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if ((void *)auStack_148._40_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_148._40_8_);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)auStack_148);
  if (bVar46) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar25) && (FVar39 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_05 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_05 == (FThreadStats *)0x0) {
      this_06 = FThreadStatsPool::Get();
      this_05 = FThreadStatsPool::GetFromPool(this_06);
    }
    if (this_05->bWaitForExplicitFlush < this_05->ScopeCount) {
      FStack_180.NameAndInfo.Index = FVar39.ComparisonIndex.Value;
      FStack_180.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_198);
      FStack_180.StatData.Pad[4] = '\0';
      FStack_180.StatData.Pad[5] = '\0';
      FStack_180.StatData.Pad[6] = '\0';
      FStack_180.StatData.Pad[7] = '\0';
      FStack_180.StatData.Pad[0] = LStack_198.s.LowPart._0_1_;
      FStack_180.StatData.Pad[1] = LStack_198.s.LowPart._1_1_;
      FStack_180.StatData.Pad[2] = LStack_198.s.LowPart._2_1_;
      FStack_180.StatData.Pad[3] = LStack_198.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_05,&FStack_180);
      piVar2 = &this_05->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_05,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_05,false,false);
      }
    }
  }
  return;
}

// Simulate @ 143b41ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::Simulate
          (FPhysicsThreadAccess *this,float param_1)

{
  int *piVar1;
  TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
  *pTVar2;
  FDeformablePackage *pFVar3;
  void *pvVar4;
  FDeformableSolver *this_00;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Simulate> FVar10;
  TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
  TVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FDeformablePackage *pFVar12;
  FNameEntryId FVar13;
  FDeformablePackage *pFVar14;
  FName FVar15;
  bool bVar16;
  LARGE_INTEGER LStackX_8;
  FName aFStackX_18 [2];
  FDeformablePackage *pFStack_78;
  longlong lStack_70;
  FName FStack_68;
  FStatMessage aFStack_58 [2];
  
  this_00 = this->Solver;
  if (this_00 == (FDeformableSolver *)0x0) {
    return;
  }
  FVar10 = StatPtr_STAT_ChaosDeformableSolver_Simulate;
  if (StatPtr_STAT_ChaosDeformableSolver_Simulate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Simulate>)0x0) {
    pFVar9 = ::FName::FName(aFStackX_18,"STAT_ChaosDeformableSolver_Simulate");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Simulate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosDeformableSolver_Simulate,
                        *pFVar9,L"Chaos.Deformable.Solver.Simulate","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FStack_68.ComparisonIndex.Value = 0;
  FStack_68.Number = 0;
  FVar13 = FVar15.ComparisonIndex.Value;
  uVar8 = FVar15.Number;
  if ((FVar13.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar13.Value;
        LStackX_8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x104);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar13.Value;
      LStackX_8.s.HighPart = uVar8;
      FStack_68 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_143a93b37;
    }
  }
  bVar6 = false;
  FVar15 = FStack_68;
LAB_143a93b37:
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId260,"STAT_ChaosDeformableSolver_Simulate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x104);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId260);
  }
  if ((this_00->Property).NumSolverIterations != 0) {
    FDeformableSolver::RemoveSimulationObjects(this_00);
    FDeformableSolver::UpdateProxyInputPackages(this_00);
    FDeformableSolver::InitializeSimulationObjects(this_00);
    InitializeSimulationSpace(this_00);
    if (this_00->bPendingRestart != false) {
      PullRestartPackage(this_00);
      if (pFStack_78 != (FDeformablePackage *)0x0) {
        pTVar2 = &this_00->CurrentRestartPackage;
        pFVar12 = pFStack_78;
        do {
          pFVar14 = (FDeformablePackage *)0x0;
          if (pTVar2 == (TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
                         *)&lStack_70) {
            if (pFVar12 != (FDeformablePackage *)0x0) {
              *(undefined4 *)&(pFVar12->ObjectMap).field_0x48 = 0;
              pvVar4 = *(void **)&(pFVar12->ObjectMap).field_0x40;
              if (pvVar4 != (void *)0x0) {
                FMemory::Free(pvVar4);
              }
              TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&pFVar12->ObjectMap);
              goto LAB_143a93c4f;
            }
          }
          else {
            pFVar3 = pTVar2->Ptr;
            pTVar2->Ptr = pFVar12;
            if (pFVar3 != (FDeformablePackage *)0x0) {
              *(undefined4 *)&(pFVar3->ObjectMap).field_0x48 = 0;
              pvVar4 = *(void **)&(pFVar3->ObjectMap).field_0x40;
              if (pvVar4 != (void *)0x0) {
                FMemory::Free(pvVar4);
              }
              TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&pFVar3->ObjectMap);
              pFVar12 = pFVar3;
LAB_143a93c4f:
              ::operator_delete(pFVar12,0x58);
            }
          }
          TVar11 = PullRestartPackage(this_00);
          if ((FDeformablePackage *)&pFStack_78 != TVar11.Ptr) {
                    /* WARNING: Load size is inaccurate */
            pFVar14 = *TVar11.Ptr;
            (TVar11.Ptr)->Frame = 0;
            (TVar11.Ptr)->_padding_ = 0;
          }
          pvVar4 = (void *)CONCAT44(LStackX_8.s.HighPart,LStackX_8.s.LowPart);
          if (pvVar4 != (void *)0x0) {
            *(undefined4 *)((longlong)pvVar4 + 0x50) = 0;
            if (*(void **)((longlong)pvVar4 + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)pvVar4 + 0x48));
            }
            TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)pvVar4 + 8));
            ::operator_delete(pvVar4,0x58);
          }
          pFVar12 = pFVar14;
        } while (pFVar14 != (FDeformablePackage *)0x0);
      }
      UpdateRestartParticlePositions(this_00);
      this_00->bPendingRestart = false;
    }
    FDeformableSolver::AdvanceDt(this_00,param_1);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      aFStack_58[0].NameAndInfo.Index.Value = FStack_68.ComparisonIndex.Value;
      aFStack_58[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_8);
      aFStack_58[0].StatData.Pad[4] = '\0';
      aFStack_58[0].StatData.Pad[5] = '\0';
      aFStack_58[0].StatData.Pad[6] = '\0';
      aFStack_58[0].StatData.Pad[7] = '\0';
      aFStack_58[0].StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      aFStack_58[0].StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      aFStack_58[0].StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      aFStack_58[0].StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,aFStack_58);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Update @ 143b47620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::Update
          (FPhysicsThreadAccess *this,float param_1)

{
  int *piVar1;
  FPBDEvolution *this_00;
  FDeformableSolver *this_01;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Update> FVar7;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER LStackX_8;
  FName FStackX_18;
  FStatMessage aFStack_38 [2];
  
  this_01 = this->Solver;
  if (this_01 == (FDeformableSolver *)0x0) {
    return;
  }
  FVar10.Value = 0;
  FVar7 = StatPtr_STAT_ChaosDeformableSolver_Update;
  if (StatPtr_STAT_ChaosDeformableSolver_Update ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Update>)0x0) {
    pFVar6 = ::FName::FName(&FStackX_18,"STAT_ChaosDeformableSolver_Update");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_Update>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosDeformableSolver_Update,
                       *pFVar6,L"Chaos.Deformable.Solver.Update","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar5 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar8.Value;
        LStackX_8.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x8f7);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar8.Value;
      LStackX_8.s.HighPart = uVar5;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_143a96577;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143a96577:
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2295,"STAT_ChaosDeformableSolver_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x8f7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2295);
  }
  this_01->bDynamicConstraintIsUpdated = false;
  if (*(int *)&(this_01->Proxies).field_0x8 != *(int *)&(this_01->Proxies).field_0x34) {
    UpdateSimulationObjects(this_01,param_1);
    this_00 = (this_01->Evolution).Ptr;
    if ((this_01->Property).FixTimeStep == false) {
      FPBDEvolution::AdvanceOneTimeStep(this_00,param_1);
      this_01->Time = param_1 + this_01->Time;
    }
    else {
      FPBDEvolution::AdvanceOneTimeStep(this_00,(this_01->Property).TimeStepSize);
      this_01->Time = (this_01->Property).TimeStepSize + this_01->Time;
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      aFStack_38[0].NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      aFStack_38[0].NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&LStackX_8);
      aFStack_38[0].StatData.Pad[4] = '\0';
      aFStack_38[0].StatData.Pad[5] = '\0';
      aFStack_38[0].StatData.Pad[6] = '\0';
      aFStack_38[0].StatData.Pad[7] = '\0';
      aFStack_38[0].StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      aFStack_38[0].StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      aFStack_38[0].StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      aFStack_38[0].StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,aFStack_38);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// UpdateOutputState @ 143b49000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::UpdateOutputState
          (FPhysicsThreadAccess *this,FThreadingProxy *param_1)

{
  byte bVar1;
  longlong lVar2;
  FDeformableSolver *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName FVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_UpdateOutputState> FVar16;
  TManagedArray<UE::Math::TVector<float>_> *pTVar17;
  TVector<float,3> *pTVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  FNameEntryId FVar22;
  uint uVar23;
  longlong lVar24;
  FName FVar25;
  bool bVar26;
  undefined4 uVar41;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar59;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined4 uVar71;
  undefined1 auVar70 [16];
  double dVar72;
  undefined4 uVar73;
  double dVar74;
  uint uVar80;
  undefined4 uVar81;
  undefined1 auVar75 [16];
  double dVar82;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  uint uVar91;
  uint uVar92;
  float fVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  uint uVar98;
  uint uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  FColor_u_0 aFStackX_10 [2];
  FName FStackX_18;
  FName FStackX_20;
  double dStack_168;
  double dStack_160;
  FName FStack_158;
  FName FStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  uint uStack_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [16];
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  
  pFVar3 = this->Solver;
  if (pFVar3 == (FDeformableSolver *)0x0) {
    return;
  }
  FVar16 = StatPtr_STAT_ChaosDeformableSolver_UpdateOutputState;
  if (StatPtr_STAT_ChaosDeformableSolver_UpdateOutputState ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_UpdateOutputState>)0x0) {
    pFVar15 = ::FName::FName(&FStack_158,"STAT_ChaosDeformableSolver_UpdateOutputState");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_UpdateOutputState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosDeformableSolver_UpdateOutputState,*pFVar15,
                        L"Chaos.Deformable.Solver.UpdateOutputState","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar7 = false;
  bVar9 = false;
  FVar22 = FVar25.ComparisonIndex.Value;
  uVar23 = FVar25.Number;
  if ((FVar22.Value == 0) && (uVar23 == 0)) {
LAB_143a98c70:
    bVar8 = false;
    FVar25.ComparisonIndex.Value = 0;
    FVar25.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_18.ComparisonIndex.Value = FVar22.Value;
        FStackX_18.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_18,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x946);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143a98c70;
    FStackX_20.ComparisonIndex.Value = FVar22.Value;
    FStackX_20.Number = uVar23;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar8 = true;
  }
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2374,"STAT_ChaosDeformableSolver_UpdateOutputState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x946);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2374);
  }
  ::FName::FName(&FStackX_20,"Flesh");
  FVar10 = FGeometryCollection::VerticesGroup;
  if ((((FStackX_20.ComparisonIndex.Value != (param_1->TypeName).ComparisonIndex.Value) ||
       (FStackX_20.Number != (param_1->TypeName).Number)) || (param_1 == (FThreadingProxy *)0x0)) ||
     (*(int *)&param_1[0x21].Owner < 0)) goto LAB_143a992c0;
  pFVar15 = ::FName::FName(&FStack_150,"Vertex");
  pTVar17 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                      ((FManagedArrayCollection *)(param_1 + 0x1a),*pFVar15,FVar10);
  iVar19 = *(int *)&param_1[0x21].Owner;
  lVar24 = (((pFVar3->Evolution).Ptr)->MParticles)._padding_;
  iVar13 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
  iVar13 = iVar13 + iVar19;
  if ((int)lVar24 < iVar13) goto LAB_143a992c0;
  bVar1 = (byte)param_1[0x21].TypeName.ComparisonIndex.Value;
  uVar103 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  uVar20 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  uVar23 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  uVar102 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  uVar85 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  uVar86 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  uVar87 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  uVar88 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  uVar89 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  uVar90 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  uVar91 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  uVar92 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  uVar98 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar99 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar100 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar101 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  if (bVar1 == 0) {
    uVar89 = *(undefined4 *)&param_1[5].Owner;
    uVar90 = *(undefined4 *)((longlong)&param_1[5].Owner + 4);
    uVar91 = param_1[5].TypeName.ComparisonIndex.Value;
    uVar92 = param_1[5].TypeName.Number;
    uVar85 = (undefined4)param_1[6]._padding_;
    uVar86 = *(undefined4 *)((longlong)&param_1[6]._padding_ + 4);
    uVar87 = *(undefined4 *)&param_1[6].Owner;
    uVar88 = *(undefined4 *)((longlong)&param_1[6].Owner + 4);
    uVar23 = param_1[6].TypeName.ComparisonIndex.Value;
    uVar80 = param_1[6].TypeName.Number;
    uVar81 = (undefined4)param_1[7]._padding_;
    uVar102 = *(undefined4 *)((longlong)&param_1[7]._padding_ + 4);
    uVar103 = *(undefined4 *)&param_1[7].Owner;
    uVar41 = *(undefined4 *)((longlong)&param_1[7].Owner + 4);
    uVar21 = param_1[7].TypeName.ComparisonIndex.Value;
    uVar20 = param_1[7].TypeName.Number;
    uVar94 = (undefined4)param_1[8]._padding_;
    uVar95 = *(undefined4 *)((longlong)&param_1[8]._padding_ + 4);
    uVar96 = *(undefined4 *)&param_1[8].Owner;
    uVar97 = *(undefined4 *)((longlong)&param_1[8].Owner + 4);
    uVar98 = param_1[8].TypeName.ComparisonIndex.Value;
    uVar99 = param_1[8].TypeName.Number;
    uVar100 = (undefined4)param_1[9]._padding_;
    uVar101 = *(undefined4 *)((longlong)&param_1[9]._padding_ + 4);
    iVar19 = 0;
  }
  else {
    iVar19 = bVar1 - 1;
    if ((iVar19 == 0) || (iVar19 != 1)) {
      uVar94 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar95 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar96 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar97 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar80 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar81 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar21 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    }
    else {
      uVar89 = *(undefined4 *)&param_1[9].Owner;
      uVar90 = *(undefined4 *)((longlong)&param_1[9].Owner + 4);
      uVar91 = param_1[9].TypeName.ComparisonIndex.Value;
      uVar92 = param_1[9].TypeName.Number;
      uVar85 = (undefined4)param_1[10]._padding_;
      uVar86 = *(undefined4 *)((longlong)&param_1[10]._padding_ + 4);
      uVar87 = *(undefined4 *)&param_1[10].Owner;
      uVar88 = *(undefined4 *)((longlong)&param_1[10].Owner + 4);
      uVar23 = param_1[10].TypeName.ComparisonIndex.Value;
      uVar80 = param_1[10].TypeName.Number;
      uVar81 = (undefined4)param_1[0xb]._padding_;
      uVar102 = *(undefined4 *)((longlong)&param_1[0xb]._padding_ + 4);
      uVar103 = *(undefined4 *)&param_1[0xb].Owner;
      uVar41 = *(undefined4 *)((longlong)&param_1[0xb].Owner + 4);
      uVar21 = param_1[0xb].TypeName.ComparisonIndex.Value;
      uVar20 = param_1[0xb].TypeName.Number;
      uVar94 = (undefined4)param_1[0xc]._padding_;
      uVar95 = *(undefined4 *)((longlong)&param_1[0xc]._padding_ + 4);
      uVar96 = *(undefined4 *)&param_1[0xc].Owner;
      uVar97 = *(undefined4 *)((longlong)&param_1[0xc].Owner + 4);
      uVar98 = param_1[0xc].TypeName.ComparisonIndex.Value;
      uVar99 = param_1[0xc].TypeName.Number;
      uVar100 = (undefined4)param_1[0xd]._padding_;
      uVar101 = *(undefined4 *)((longlong)&param_1[0xd]._padding_ + 4);
    }
  }
  auVar43._0_8_ = (double)CONCAT44(uVar41,uVar103);
  auVar43._8_4_ = uVar21;
  auVar43._12_4_ = uVar20;
  dVar42 = auVar43._0_8_ - UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar59 = auVar43._8_8_ - UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  auVar44._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar44._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
  auVar44._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
  dStack_148 = __real_3f1a36e2e0000000;
  uVar64 = SUB84(__real_3f1a36e2e0000000,0);
  auVar36._8_4_ = uVar64;
  auVar36._0_8_ = __real_3f1a36e2e0000000;
  uVar65 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar36._12_4_ = uVar65;
  auVar56._8_8_ = -(ulonglong)(auVar36._8_8_ < auVar44._8_8_);
  auVar56._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar44._0_8_);
  auVar45._0_8_ = (double)CONCAT44(uVar80,uVar23);
  auVar45._8_4_ = uVar81;
  auVar45._12_4_ = uVar102;
  uVar20 = movmskpd(iVar19,auVar56);
  dVar42 = auVar45._0_8_ - UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar59 = auVar45._8_8_ - UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  auVar46._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar46._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
  auVar46._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
  auVar60._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar46._8_8_);
  auVar60._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar46._0_8_);
  iVar19 = movmskpd(iVar13,auVar60);
  if ((uVar20 & 0x3fffffff) == 0 && iVar19 == 0) {
    auVar47._0_8_ = (double)CONCAT44(uVar86,uVar85);
    auVar47._8_4_ = uVar87;
    auVar47._12_4_ = uVar88;
    dStack_140 = __real_3f1a36e2e0000000;
    dVar42 = auVar47._0_8_ - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar59 = auVar47._8_8_ - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    auVar75._0_8_ = (double)CONCAT44(uVar90,uVar89);
    auVar75._8_4_ = uVar91;
    auVar75._12_4_ = uVar92;
    auVar48._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar48._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
    auVar48._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
    auVar27._8_4_ = uVar64;
    auVar27._0_8_ = __real_3f1a36e2e0000000;
    auVar27._12_4_ = uVar65;
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar48._8_8_);
    auVar28._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar48._0_8_);
    iVar13 = movmskpd(0,auVar28);
    auVar49._0_8_ = (double)CONCAT44(uVar90,uVar89);
    auVar49._8_4_ = uVar91;
    auVar49._12_4_ = uVar92;
    dVar42 = auVar49._0_8_ - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar59 = auVar49._8_8_ - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    auVar29._8_4_ = uVar64;
    auVar29._0_8_ = __real_3f1a36e2e0000000;
    auVar29._12_4_ = uVar65;
    auVar50._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar50._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
    auVar50._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < auVar50._8_8_);
    auVar30._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar50._0_8_);
    dVar74 = auVar75._0_8_ + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar82 = auVar75._8_8_ + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar42 = (double)CONCAT44(uVar86,uVar85) +
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar59 = (double)CONCAT44(uVar88,uVar87) +
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    uVar20 = movmskpd(iVar19,auVar30);
    auVar76._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar74,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar76._8_4_ = SUB84(dVar82,0) & _UNK_15061cc88;
    auVar76._12_4_ = (uint)((ulonglong)dVar82 >> 0x20) & _UNK_15061cc8c;
    uVar21 = iVar13 << 2 | uVar20;
    if (uVar21 != 0) {
      auVar31._8_4_ = uVar64;
      auVar31._0_8_ = __real_3f1a36e2e0000000;
      auVar31._12_4_ = uVar65;
      auVar32._8_8_ =
           -(ulonglong)
            (auVar31._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar59,0) & _UNK_15061cc88));
      auVar32._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar21 = movmskpd(uVar21,auVar32);
      auVar61._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar76._8_8_);
      auVar61._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar76._0_8_);
      uVar20 = movmskpd(uVar20,auVar61);
      if ((uVar21 & 0x3fffffff) != 0 || uVar20 != 0) goto LAB_143a99054;
    }
    dStack_138 = __real_3f1a36e2e0000000;
    auVar51._0_8_ = (double)CONCAT44(uVar99,uVar98);
    auVar51._8_4_ = uVar100;
    auVar51._12_4_ = uVar101;
    dVar42 = auVar51._0_8_ - UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar59 = auVar51._8_8_ - UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    auVar52._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar52._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
    auVar52._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
    auVar33._8_4_ = uVar64;
    auVar33._0_8_ = __real_3f1a36e2e0000000;
    auVar33._12_4_ = uVar65;
    auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < auVar52._8_8_);
    auVar34._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar52._0_8_);
    auVar53._0_8_ = (double)CONCAT44(uVar95,uVar94);
    auVar53._8_4_ = uVar96;
    auVar53._12_4_ = uVar97;
    uVar21 = movmskpd(0,auVar34);
    dVar42 = auVar53._0_8_ - UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar59 = auVar53._8_8_ - UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    auVar54._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar54._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
    auVar54._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
    auVar66._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar54._8_8_);
    auVar66._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar54._0_8_);
    iVar19 = movmskpd(uVar20,auVar66);
    if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
      uVar23 = 0;
      iVar19 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
      if (0 < iVar19) {
        lVar24 = 0;
        do {
          pTVar18 = TParticles<float,3>::GetX
                              ((TParticles<float,3> *)&((pFVar3->Evolution).Ptr)->MParticles,
                               *(int *)&param_1[0x21].Owner + uVar23);
          uVar103 = *(undefined4 *)pTVar18;
          uVar85 = *(undefined4 *)&pTVar18->field_0x4;
          uVar89 = *(undefined4 *)&pTVar18->field_0x8;
          uVar98 = 0;
          if ((int)uVar23 < *(int *)&pTVar17->field_0x18) {
            uVar98 = ~uVar23 >> 0x1f;
          }
          if ((uVar98 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&pTVar17->field_0x10;
          uVar23 = uVar23 + 1;
          *(undefined4 *)(lVar2 + lVar24) = uVar103;
          *(undefined4 *)(lVar2 + 4 + lVar24) = uVar85;
          *(undefined4 *)(lVar2 + 8 + lVar24) = uVar89;
          lVar24 = lVar24 + 0xc;
          iVar19 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
        } while ((int)uVar23 < iVar19);
      }
      goto LAB_143a992c0;
    }
  }
LAB_143a99054:
  uVar20 = 0;
  iVar19 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
  if (0 < iVar19) {
    auVar35._4_4_ = uVar90;
    auVar35._0_4_ = uVar89;
    auVar35._8_4_ = uVar91;
    auVar35._12_4_ = uVar92;
    auVar6._4_4_ = uVar86;
    auVar6._0_4_ = uVar85;
    auVar6._8_4_ = uVar87;
    auVar6._12_4_ = uVar88;
    auVar36 = blendpd(auVar35,auVar6,2);
    lVar24 = 0;
    dVar42 = (double)CONCAT44(uVar88,uVar87);
    uStack_128 = uVar91;
    uStack_124 = uVar92;
    uStack_120 = uVar85;
    uStack_11c = uVar86;
    do {
      uVar65 = uStack_11c;
      uVar64 = uStack_120;
      uVar11 = uStack_124;
      uVar21 = uStack_128;
      pTVar18 = TParticles<float,3>::GetX
                          ((TParticles<float,3> *)&((pFVar3->Evolution).Ptr)->MParticles,
                           *(int *)&param_1[0x21].Owner + uVar20);
      uVar14 = 0;
      if ((int)uVar20 < *(int *)&pTVar17->field_0x18) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      auVar37._0_8_ = (double)CONCAT44(uVar11,uVar21);
      auVar37._8_4_ = uVar64;
      auVar37._12_4_ = uVar65;
      dVar74 = (double)*(float *)&pTVar18->field_0x4;
      dStack_108 = (double)*(float *)&pTVar18->field_0x8;
      dVar82 = dStack_108 * (double)CONCAT44(uVar99,uVar98);
      dVar69 = (double)CONCAT44(uVar101,uVar100) * 0.0;
      auStack_118._8_4_ = SUB84(dVar74,0);
      auStack_118._0_8_ = (double)*(float *)pTVar18;
      auStack_118._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
      dVar59 = (double)*(float *)pTVar18 * (double)CONCAT44(uVar95,uVar94);
      dVar74 = dVar74 * (double)CONCAT44(uVar97,uVar96);
      uVar71 = (undefined4)((ulonglong)dVar74 >> 0x20);
      auVar77._8_4_ = SUB84(dVar74,0);
      auVar77._0_8_ = dVar59;
      auVar77._12_4_ = uVar71;
      auVar55._8_4_ = SUB84(dVar74,0);
      auVar55._0_8_ = dVar59;
      auVar55._12_4_ = uVar71;
      auVar5._8_4_ = SUB84(dVar69,0);
      auVar5._0_8_ = dVar82;
      auVar5._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
      auVar56 = blendpd(auVar55,auVar5,2);
      auVar78._0_8_ = auVar77._8_8_ * (double)CONCAT44(uVar90,uVar89) - auVar37._0_8_ * dVar59;
      auVar78._8_8_ = dVar82 * (double)CONCAT44(uVar92,uVar91) - auVar37._8_8_ * dVar74;
      dStack_168 = auVar36._0_8_;
      dStack_160 = auVar36._8_8_;
      auVar70._8_4_ = SUB84(auVar78._8_8_,0);
      auVar70._0_8_ = auVar78._0_8_;
      auVar70._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
      auVar57._0_8_ = auVar56._0_8_ * (double)CONCAT44(uVar86,uVar85) - dStack_168 * dVar82;
      auVar57._8_8_ = auVar56._8_8_ * (double)CONCAT44(uVar88,uVar87) - dStack_160 * dVar69;
      auVar56 = blendpd(auVar78,auVar57,2);
      auVar58._8_4_ = uVar87;
      auVar58._0_8_ = dVar42;
      auVar58._12_4_ = uVar88;
      dVar69 = auVar70._8_8_ + auVar70._8_8_;
      dVar72 = auVar57._0_8_ + auVar57._0_8_;
      auVar79._0_8_ = auVar56._0_8_ + auVar56._0_8_;
      auVar79._8_8_ = auVar56._8_8_ + auVar56._8_8_;
      uVar71 = SUB84(dVar72,0);
      auVar67._8_4_ = uVar71;
      auVar67._0_8_ = dVar69;
      uVar73 = (undefined4)((ulonglong)dVar72 >> 0x20);
      auVar67._12_4_ = uVar73;
      auVar38._8_4_ = uVar71;
      auVar38._0_8_ = dVar69;
      auVar38._12_4_ = uVar73;
      auVar62._8_4_ = uVar71;
      auVar62._0_8_ = dVar69;
      auVar62._12_4_ = uVar73;
      auVar68._0_8_ =
           auVar67._8_8_ * (double)CONCAT44(uVar90,uVar89) -
           dVar69 * (double)CONCAT44(uVar11,uVar21);
      auVar68._8_8_ =
           auVar79._0_8_ * (double)CONCAT44(uVar92,uVar91) -
           auVar38._8_8_ * (double)CONCAT44(uVar65,uVar64);
      auVar39._8_4_ = SUB84(auVar79._8_8_,0);
      auVar39._0_8_ = auVar79._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
      auVar56 = blendpd(auVar62,auVar79,2);
      auVar63._0_8_ = auVar56._0_8_ * (double)CONCAT44(uVar86,uVar85) - auVar79._0_8_ * dStack_168;
      auVar63._8_8_ = auVar56._8_8_ * (double)CONCAT44(uVar88,uVar87) - auVar39._8_8_ * dStack_160;
      auVar40._8_4_ = SUB84(auVar68._8_8_,0);
      auVar40._0_8_ = auVar68._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
      dStack_100 = dVar42 * dVar69 + dVar59 + auVar40._8_8_ + (double)CONCAT44(uVar80,uVar23);
      dStack_f8 = auVar58._8_8_ * dVar72 + dVar74 + auVar63._0_8_ + (double)CONCAT44(uVar102,uVar81)
      ;
      auVar56 = blendpd(auVar68,auVar63,2);
      dStack_f0 = dVar42 * auVar79._0_8_ + dVar82 + auVar56._0_8_ + (double)CONCAT44(uVar41,uVar103)
      ;
      fVar83 = (float)dStack_100;
      fVar93 = (float)dStack_f0;
      fVar84 = (float)dStack_f8;
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&pTVar17->field_0x10;
      uVar20 = uVar20 + 1;
      *(float *)(lVar24 + lVar2) = fVar83;
      *(float *)(lVar24 + 4 + lVar2) = fVar84;
      *(float *)(lVar24 + 8 + lVar2) = fVar93;
      lVar24 = lVar24 + 0xc;
      iVar19 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17);
    } while ((int)uVar20 < iVar19);
  }
LAB_143a992c0:
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// UpdateProxyInputPackages @ 143b49200

/* WARNING: Removing unreachable block (ram,0x000143a996a8) */
/* WARNING: Removing unreachable block (ram,0x000143a996b8) */
/* WARNING: Removing unreachable block (ram,0x000143a996bd) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FDeformableSolver::FPhysicsThreadAccess::UpdateProxyInputPackages
          (FPhysicsThreadAccess *this)

{
  int *piVar1;
  TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
  *pTVar2;
  LARGE_INTEGER LVar3;
  void *pvVar4;
  FDeformablePackage *pFVar5;
  FDeformableSolver *this_00;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_UpdateProxyInputPackages> FVar10;
  TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
  TVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FDeformablePackage *pFVar12;
  FDeformablePackage *pFVar13;
  LARGE_INTEGER LVar14;
  bool bVar15;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FDeformablePackage *pFStack_78;
  FName FStack_70;
  FName FStack_68;
  LARGE_INTEGER LStack_60;
  FStatMessage FStack_50;
  
  this_00 = this->Solver;
  if (this_00 == (FDeformableSolver *)0x0) {
    return;
  }
  FVar10 = StatPtr_STAT_ChaosDeformableSolver_UpdateProxyInputPackages;
  if (StatPtr_STAT_ChaosDeformableSolver_UpdateProxyInputPackages ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_UpdateProxyInputPackages>)0x0) {
    pFVar9 = ::FName::FName(&FStackX_10,"STAT_ChaosDeformableSolver_UpdateProxyInputPackages");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosDeformableSolver_UpdateProxyInputPackages>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosDeformableSolver_UpdateProxyInputPackages,*pFVar9,
                        L"Chaos.Deformable.Solver.UpdateProxyInputPackages","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar10;
  bVar6 = false;
  bVar8 = false;
  LStack_60.s.LowPart = 0;
  LStack_60.s.HighPart = 0;
  if ((LVar14.s.LowPart != 0) || (LVar14.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.QuadPart = LStackX_8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8 = LVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
                   ,0x8e5);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8 = LVar14;
      LStack_60 = LVar14;
      FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
      bVar7 = true;
      goto LAB_143a99494;
    }
  }
  bVar7 = false;
  LVar14 = LStack_60;
LAB_143a99494:
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2277,"STAT_ChaosDeformableSolver_UpdateProxyInputPackages",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Deformable\\ChaosDeformableSolver.cpp"
               ,0x8e5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2277);
  }
  pTVar2 = &this_00->CurrentInputPackage;
  LVar3.QuadPart = (LONGLONG)pTVar2->Ptr;
  if ((FName)LVar3.QuadPart != (FName)0x0) {
    pTVar2->Ptr = (FDeformablePackage *)0x0;
    LStackX_8.QuadPart = LVar3.QuadPart;
    TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>::
    operator=(&this_00->PreviousInputPackage,
              (TUniquePtr<Chaos::Softs::FDeformablePackage,TDefaultDelete<Chaos::Softs::FDeformablePackage>_>
               *)&LStackX_8.s);
    LVar3 = LStackX_8;
    if ((FName)LStackX_8.QuadPart != (FName)0x0) {
      *(undefined4 *)(LStackX_8.QuadPart + 0x50) = 0;
      if (*(void **)(LStackX_8.QuadPart + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)(LStackX_8.QuadPart + 0x48));
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(LVar3.QuadPart + 8));
      ::operator_delete((void *)LVar3,0x58);
    }
    if ((FName *)pTVar2 != &FStack_70) {
      pFVar12 = pTVar2->Ptr;
      pTVar2->Ptr = (FDeformablePackage *)0x0;
      if (pFVar12 != (FDeformablePackage *)0x0) {
        *(undefined4 *)&(pFVar12->ObjectMap).field_0x48 = 0;
        pvVar4 = *(void **)&(pFVar12->ObjectMap).field_0x40;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar12->ObjectMap);
        ::operator_delete(pFVar12,0x58);
      }
    }
  }
  FDeformableSolver::PullInputPackage(this_00);
  pFVar12 = pFStack_78;
  do {
    if (pFVar12 == (FDeformablePackage *)0x0) {
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar7) && ((FName)LVar14.QuadPart != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          FStack_50.NameAndInfo.Index.Value = LStack_60._0_4_;
          FStack_50.NameAndInfo.Number = LVar14.s.HighPart & 0xffff6fffU | 0x6000;
          QueryPerformanceCounter(&LStackX_8);
          FStack_50.StatData.Pad = (uchar  [8])(LStackX_8.QuadPart & 0xffffffff);
          FThreadStats::AddStatMessage(this_01,&FStack_50);
          piVar1 = &this_01->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_01,false,false);
            return;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      return;
    }
    pFVar13 = (FDeformablePackage *)0x0;
    if ((FName *)pTVar2 == &FStack_68) {
      if (pFVar12 != (FDeformablePackage *)0x0) {
        *(undefined4 *)&(pFVar12->ObjectMap).field_0x48 = 0;
        pvVar4 = *(void **)&(pFVar12->ObjectMap).field_0x40;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar12->ObjectMap);
        goto LAB_143a9961c;
      }
    }
    else {
      pFVar5 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar12;
      if (pFVar5 != (FDeformablePackage *)0x0) {
        *(undefined4 *)&(pFVar5->ObjectMap).field_0x48 = 0;
        pvVar4 = *(void **)&(pFVar5->ObjectMap).field_0x40;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar5->ObjectMap);
        pFVar12 = pFVar5;
LAB_143a9961c:
        ::operator_delete(pFVar12,0x58);
      }
    }
    TVar11 = FDeformableSolver::PullInputPackage(this_00);
    LVar3 = LStackX_8;
    if ((FDeformablePackage *)&pFStack_78 != TVar11.Ptr) {
                    /* WARNING: Load size is inaccurate */
      pFVar13 = *TVar11.Ptr;
      (TVar11.Ptr)->Frame = 0;
      (TVar11.Ptr)->_padding_ = 0;
    }
    pFVar12 = pFVar13;
    if ((FName)LStackX_8.QuadPart != (FName)0x0) {
      *(undefined4 *)(LStackX_8.QuadPart + 0x50) = 0;
      if (*(void **)(LStackX_8.QuadPart + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)(LStackX_8.QuadPart + 0x48));
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(LVar3.QuadPart + 8));
      ::operator_delete((void *)LVar3,0x58);
    }
  } while( true );
}

