// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FPBDRigidDirtyParticlesBuffer @ 144067e30

FPBDRigidDirtyParticlesBuffer * __thiscall
Chaos::FPBDRigidDirtyParticlesBuffer::FPBDRigidDirtyParticlesBuffer
          (FPBDRigidDirtyParticlesBuffer *this,EMultiBufferMode *param_1,bool param_2)

{
  TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
  *pTVar1;
  IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *pIVar2;
  TUniquePtr<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>,TDefaultDelete<Chaos::IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>_>_>
  TVar3;
  undefined8 *local_res8;
  
  pTVar1 = &this->SolverDataOut;
  this->BufferMode = *param_1;
  (this->ResourceOutLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bUseLock = !param_2;
  pTVar1->Ptr = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)0x0;
  TVar3 = FMultiBufferFactory<Chaos::FPBDRigidDirtyParticlesBufferOut>::CreateBuffer(8);
  if ((IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)pTVar1 != TVar3.Ptr) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)*TVar3.Ptr;
    *TVar3.Ptr = (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut>)0x0;
    if (pIVar2 != (IBufferResource<Chaos::FPBDRigidDirtyParticlesBufferOut> *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return this;
}

// BufferPhysicsResults @ 14407b610

void __thiscall
Chaos::FPBDRigidDirtyParticlesBuffer::BufferPhysicsResults
          (FPBDRigidDirtyParticlesBuffer *this,FPBDRigidsSolver *param_1)

{
  int *piVar1;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *this_00;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  longlong lVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  int iVar10;
  TParticleHandleBase<double,3>_u_0 this_01;
  IPhysicsProxyBase *local_res8;
  IPhysicsProxyBase *local_res10;
  IPhysicsProxyBase *local_78;
  TParticleHandleBase<double,3>_u_0 local_70;
  int iStack_68;
  int iStack_64;
  undefined1 local_60 [24];
  int iStack_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  int local_38;
  
  pFVar7 = (ForAnyElementType *)(**(code **)((longlong)*(this->SolverDataOut).Ptr + 0x10))();
  lVar8 = (**(code **)((longlong)*(this->SolverDataOut).Ptr + 0x10))();
  piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
  *(undefined4 *)&pFVar7[1].Data = 0;
  this_00 = (TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *
            )(lVar8 + 0x10);
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar7,0,piVar1);
  }
  bVar5 = 1 < *(int *)(lVar8 + 0x58);
  if (!bVar5) {
    TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  *(undefined4 *)(lVar8 + 0x18) = 0;
  if (*(int *)(lVar8 + 0x1c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)(lVar8 + 0x1c));
  }
  *(undefined4 *)(lVar8 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar8 + 0x44) = 0;
  *(undefined4 *)(lVar8 + 0x38) = 0;
  if ((*(int *)(lVar8 + 0x3c) < 0) || (0x80 < *(int *)(lVar8 + 0x3c))) {
    *(undefined4 *)(lVar8 + 0x3c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x20),0);
  }
  if (bVar5) {
    *(undefined4 *)(lVar8 + 0x58) = 1;
    TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::Rehash
              (this_00);
  }
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_60,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&(param_1->Particles).DirtyParticlesView);
  if ((TPBDRigidParticles<double,3> *)local_60._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_01 = (TParticleHandleBase<double,3>_u_0)local_60._16_8_;
    iVar10 = iStack_48;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_60);
      pTVar9 = TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,iVar10);
      if (pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar9 = TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,iVar10);
        local_res10 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                (*(TGeometryParticlesImp<double,3,0> **)pTVar9,
                                 *(int *)&pTVar9->field_0x8);
        if (local_res10 != (IPhysicsProxyBase *)0x0) {
          if (local_res10->Type == SingleParticleProxy) {
            local_78 = local_res10;
            if (((pFVar7->Data <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 < pFVar7->Data + (longlong)*piVar1 * 8)) &&
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
            iVar6 = *(int *)&pFVar7[1].Data;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar7,piVar1);
            }
            *(int *)&pFVar7[1].Data = iVar6 + 1;
            *(IPhysicsProxyBase **)(pFVar7->Data + (longlong)iVar6 * 8) = local_78;
          }
          else {
            TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::
            Emplace<IPhysicsProxyBase_*_const_&>(this_00,&local_res8,(bool *)&local_res10);
          }
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_60);
      do {
        uVar4 = local_60._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_60._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar10 = iVar10 + 1;
          iStack_48 = iVar10;
          if (local_3c <= iVar10) {
LAB_14407b835:
            local_40 = local_40 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_60);
            this_01 = (TParticleHandleBase<double,3>_u_0)local_60._16_8_;
            iVar10 = iStack_48;
          }
        }
        else {
          iVar10 = local_38 + 1;
          local_38 = iVar10;
          if (*(int *)(local_60._8_8_ + 8) <= iVar10) goto LAB_14407b835;
          if ((iVar10 < 0) &&
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
          pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar4)->Data + (longlong)iVar10 * 8);
          this_01 = (TParticleHandleBase<double,3>_u_0)pTVar2->GeometryParticles;
          iVar10 = *(int *)(pTVar2 + 1);
          if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_64 = (uint)iStack_64._1_3_ << 8;
          }
          else {
            iStack_64 = CONCAT31(iStack_64._1_3_,(this_01.GeometryParticles)->MParticleType);
          }
          uStack_44 = iStack_64;
          iStack_48 = iVar10;
          local_70 = this_01;
          iStack_68 = iVar10;
          local_60._16_8_ = this_01;
        }
        if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_60);
        bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_60 + 0x10));
      } while (bVar5);
    } while ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// CaptureSolverData @ 14407f110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidDirtyParticlesBuffer::CaptureSolverData
          (FPBDRigidDirtyParticlesBuffer *this,FPBDRigidsSolver *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_CaptureSolverData> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_CaptureSolverData;
  if (StatPtr_STAT_CaptureSolverData == (FThreadSafeStaticStat<FStat_STAT_CaptureSolverData>)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_CaptureSolverData");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_CaptureSolverData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CaptureSolverData,*pFVar5,
                       L"Capture Solver Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidActiveParticlesBuffer.cpp"
                   ,0x12);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14407f26f;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14407f26f:
  if (this->bUseLock != false) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->ResourceOutLock);
  }
  BufferPhysicsResults(this,param_1);
  (**(code **)((longlong)*(this->SolverDataOut).Ptr + 0x30))();
  if (this->bUseLock != false) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ResourceOutLock);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ReadLock @ 14409da80

void __thiscall Chaos::FPBDRigidDirtyParticlesBuffer::ReadLock(FPBDRigidDirtyParticlesBuffer *this)

{
  if (this->bUseLock != false) {
                    /* WARNING: Could not recover jumptable at 0x00014409da8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    AcquireSRWLockShared((PSRWLOCK)&this->ResourceOutLock);
    return;
  }
  return;
}

// ReadUnlock @ 14409daa0

void __thiscall
Chaos::FPBDRigidDirtyParticlesBuffer::ReadUnlock(FPBDRigidDirtyParticlesBuffer *this)

{
  if (this->bUseLock != false) {
                    /* WARNING: Could not recover jumptable at 0x00014409daaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&this->ResourceOutLock);
    return;
  }
  return;
}

// WriteLock @ 1440bc730

void __thiscall Chaos::FPBDRigidDirtyParticlesBuffer::WriteLock(FPBDRigidDirtyParticlesBuffer *this)

{
  if (this->bUseLock != false) {
                    /* WARNING: Could not recover jumptable at 0x0001440bc73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    AcquireSRWLockExclusive((PSRWLOCK)&this->ResourceOutLock);
    return;
  }
  return;
}

// WriteUnlock @ 1440bc7f0

void __thiscall
Chaos::FPBDRigidDirtyParticlesBuffer::WriteUnlock(FPBDRigidDirtyParticlesBuffer *this)

{
  if (this->bUseLock != false) {
                    /* WARNING: Could not recover jumptable at 0x0001440bc7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ResourceOutLock);
    return;
  }
  return;
}

