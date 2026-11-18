// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 29

// StaticClass @ 1462ede50

UClass * __cdecl UDataflowSimulationManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSimulationManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowSimulationManager",
               &Z_Registration_Info_UClass_UDataflowSimulationManager.InnerSingleton,
               StaticRegisterNativesUDataflowSimulationManager,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDataflowSimulationManager>,
               InternalVTableHelperCtorCaller<UDataflowSimulationManager>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSimulationManager.InnerSingleton;
}

// UDataflowSimulationManager @ 1462f26d0

UDataflowSimulationManager * __thiscall
UDataflowSimulationManager::UDataflowSimulationManager
          (UDataflowSimulationManager *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->SimulationData = 0;
  *(undefined8 *)&(this->SimulationData).field_0x8 = 0;
  *(undefined8 *)&(this->SimulationData).field_0x20 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x28 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationData).field_0x34 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SimulationData).field_0x40 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x48 = 0;
  (this->SimulationTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationTasks).ArrayNum = 0;
  (this->SimulationTasks).ArrayMax = 0;
  this->bIsSimulationEnabled = true;
  this->bStepSimulationScene = false;
  return this;
}

// UDataflowSimulationManager @ 1462f2750

UDataflowSimulationManager * __thiscall
UDataflowSimulationManager::UDataflowSimulationManager(UDataflowSimulationManager *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->SimulationData = 0;
  *(undefined8 *)&(this->SimulationData).field_0x8 = 0;
  *(undefined8 *)&(this->SimulationData).field_0x20 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x28 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationData).field_0x34 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SimulationData).field_0x40 = 0;
  *(undefined4 *)&(this->SimulationData).field_0x48 = 0;
  (this->SimulationTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationTasks).ArrayNum = 0;
  (this->SimulationTasks).ArrayMax = 0;
  this->bIsSimulationEnabled = true;
  this->bStepSimulationScene = false;
  return this;
}

// ~UDataflowSimulationManager @ 1462f2fc0

void __thiscall
UDataflowSimulationManager::~UDataflowSimulationManager(UDataflowSimulationManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)(this->SimulationTasks).AllocatorInstance.Data,
             (this->SimulationTasks).ArrayNum);
  pFVar1 = (this->SimulationTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SimulationData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SimulationData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SimulationData);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// AddSimulationInterface @ 1462f3be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDataflowSimulationManager::AddSimulationInterface
          (UDataflowSimulationManager *this,IDataflowSimulationInterface *param_1)

{
  int iVar1;
  code *pcVar2;
  TObjectPtr<UDataflow>_u_0 TVar3;
  bool bVar4;
  TObjectPtr<UDataflow>_u_0 *pTVar5;
  FDataflowSimulationData *this_00;
  TReferenceControllerBase<1> *pTVar6;
  FString *pFVar7;
  TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
  *this_01;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  wchar_t *pwVar10;
  TSimulationContext<UE::Dataflow::FContextSingle> *pTVar11;
  int iVar12;
  IDataflowSimulationInterface *local_res10;
  IDataflowSimulationInterface *local_res18;
  TObjectPtr<UDataflow>_u_0 local_res20;
  TSimulationContext<UE::Dataflow::FContextSingle> *local_58;
  FSharedReferencer<1> FStack_50;
  void *local_48 [2];
  
  if (param_1 != (IDataflowSimulationInterface *)0x0) {
    local_res10 = param_1;
    pTVar5 = (TObjectPtr<UDataflow>_u_0 *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
    local_res20 = (TObjectPtr<UDataflow>_u_0)pTVar5->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_res20.DebugPtr == (UDataflow *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
    }
    TVar3 = local_res20;
    if (local_res20.DebugPtr != (UDataflow *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
      }
      uVar8 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      this_00 = TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
                ::FindOrAddImpl<TObjectPtr<UDataflow>_const_&>
                          ((TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
                            *)&this->SimulationData,uVar8 >> 0x10 ^ uVar8,
                           (TObjectPtr<UDataflow> *)&local_res20.ObjectPtr);
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      pwVar10 = L"";
      iVar12 = 0;
      if ((this_00->SimulationContext).Object ==
          (TSimulationContext<UE::Dataflow::FContextSingle> *)0x0) {
        pTVar6 = ::operator_new(0x430);
        TVar3 = local_res20;
        if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
          local_58 = ___xmm_00000000000000000000000000000010;
          pTVar11 = (TSimulationContext<UE::Dataflow::FContextSingle> *)&DAT_00000010;
          FStack_50.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar6->SharedReferenceCount = (atomic<int>)0x1;
          pTVar6->WeakReferenceCount = (atomic<int>)0x1;
          pTVar6->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TSimulationContext_VFContextSingle_Dataflow_UE___Dataflow_UE___00_SharedPointerInternals__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res20.DebugPtr != (UDataflow *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
          }
          memset(pTVar6 + 1,0,0x360);
          UE::Dataflow::FContext::FContext((FContext *)(pTVar6 + 1));
          pTVar6[1]._padding_ =
               (longlong)
               &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextCacheStore__;
          *(undefined ***)&pTVar6[1].SharedReferenceCount =
               &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
          ((TObjectPtr<UDataflow>_u_0 *)(pTVar6 + 0x37))->DebugPtr = (UDataflow *)TVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar3.DebugPtr != (UDataflow *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
          pTVar6[1]._padding_ =
               (longlong)
               &UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextCacheStore__;
          pTVar11 = (TSimulationContext<UE::Dataflow::FContextSingle> *)(pTVar6 + 1);
          pTVar6[0x38]._padding_ = 0;
          *(undefined ***)&pTVar6[1].SharedReferenceCount =
               &UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
          pTVar6[0x38].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x38].WeakReferenceCount = (atomic<int>)0x0;
          pTVar6[0x3a]._padding_ = 0;
          pTVar6[0x3a].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x3a].WeakReferenceCount = (atomic<int>)0x80;
          *(undefined4 *)&pTVar6[0x3b]._padding_ = 0xffffffff;
          *(undefined4 *)((longlong)&pTVar6[0x3b]._padding_ + 4) = 0;
          pTVar6[0x3c]._padding_ = 0;
          pTVar6[0x3c].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x3d]._padding_ = 0;
          pTVar6[0x3d].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x3d].WeakReferenceCount = (atomic<int>)0x0;
          pTVar6[0x3f]._padding_ = 0;
          pTVar6[0x3f].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x3f].WeakReferenceCount = (atomic<int>)0x80;
          *(undefined4 *)&pTVar6[0x40]._padding_ = 0xffffffff;
          *(undefined4 *)((longlong)&pTVar6[0x40]._padding_ + 4) = 0;
          pTVar6[0x41]._padding_ = 0;
          pTVar6[0x41].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x42]._padding_ = 0;
          pTVar6[0x42].SharedReferenceCount = (atomic<int>)0x0;
          pTVar6[0x42].WeakReferenceCount = (atomic<int>)0x0;
          if ((pTVar11 == (TSimulationContext<UE::Dataflow::FContextSingle> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          FStack_50.ReferenceController = pTVar6;
          pTVar9 = pTVar6;
          local_58 = pTVar11;
        }
        if (&this_00->SimulationContext !=
            (TSharedPtr<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1> *)
            &local_58) {
          (this_00->SimulationContext).Object = pTVar11;
          local_58 = (TSimulationContext<UE::Dataflow::FContextSingle> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this_00->SimulationContext).SharedReferenceCount,&FStack_50);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_50.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      }
      pFVar7 = (FString *)(**(code **)((longlong)*param_1 + 0x70))(param_1,local_48);
      iVar1 = (pFVar7->Data).ArrayNum;
      if (iVar1 != 0) {
        pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        iVar12 = iVar1 + -1;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar10);
      this_01 = TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FString>
                          ((TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
                            *)this_00,uVar8,pFVar7);
      TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
      ::Emplace<IDataflowSimulationInterface_*_const_&>(this_01,&local_res18,(bool *)&local_res10);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
  }
  return;
}

// AdvanceSimulationProxies @ 1462f4020

void __thiscall
UDataflowSimulationManager::AdvanceSimulationProxies
          (UDataflowSimulationManager *this,float param_1,float param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  TObjectPtr<UDataflow> *pTVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = *(int *)&(this->SimulationData).field_0x28;
  puVar1 = &(this->SimulationData).field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1462f40cd;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1462f40cd:
  uVar11 = *(uint *)&(this->SimulationData).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar12);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->SimulationData).field_0x8 -
                       *(int *)&(this->SimulationData).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SimulationData).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1462f41d0;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1462f41d0:
  while( true ) {
    if (*(int *)&(this->SimulationData).field_0x8 - *(int *)&(this->SimulationData).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar11) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pTVar9 = (TObjectPtr<UDataflow> *)
             ((longlong)TStack_70.CurrentBitIndex * 0x70 + *(longlong *)&this->SimulationData);
    UE::Dataflow::EvaluateSimulationGraph
              (pTVar9,(TSharedPtr<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1>
                       *)(pTVar9 + 0xb),param_1,param_2);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// CompleteSimulationTasks @ 1462f4740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDataflowSimulationManager::CompleteSimulationTasks(UDataflowSimulationManager *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FTaskGraphInterface *pFVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  FScriptContainerElement *pFVar11;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined1 auStackY_b8 [32];
  undefined1 local_78 [8];
  TRefCountPtr<FBaseGraphTask> local_70;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar8 = IsInGameThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Simulation\\Private\\Dataflow\\DataflowSimulationManager.cpp"
                       ,0x1d9,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar12 = &this->SimulationTasks;
  pFVar11 = (pTVar12->AllocatorInstance).Data;
  iVar4 = (this->SimulationTasks).ArrayNum;
  pFVar6 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->SimulationTasks).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar11 == pFVar6) break;
    if (*(longlong *)pFVar11 != 0) {
      pFVar9 = FTaskGraphInterface::Get();
      pcVar7 = *(code **)((longlong)*pFVar9 + 0x60);
      local_70.Reference = *(FBaseGraphTask **)pFVar11;
      if (local_70.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(local_70.Reference)->field_0x30 = *(int *)&(local_70.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      local_68.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_40 = 1;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,1,0,&local_68,1,&local_3c);
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
      if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = local_68.SecondaryData;
      }
      ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                ((void *)FVar10,&local_70,1);
      (*pcVar7)(pFVar9,&local_68);
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
      if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = local_68.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar10,local_40);
      if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
      if (local_70.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_70.Reference)->field_0x30;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
        }
      }
      puVar5 = *(undefined8 **)pFVar11;
      if (puVar5 != (undefined8 *)0x0) {
        *(longlong *)pFVar11 = 0;
        LOCK();
        piVar2 = (int *)(puVar5 + 6);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  piVar2 = &(this->SimulationTasks).ArrayMax;
  pFVar6 = (pTVar12->AllocatorInstance).Data;
  iVar4 = (this->SimulationTasks).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)pFVar6,iVar4);
    (this->SimulationTasks).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar12->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)pFVar6,iVar4);
    (this->SimulationTasks).ArrayNum = 0;
  }
  return;
}

// Deinitialize @ 1462f5290

void __thiscall UDataflowSimulationManager::Deinitialize(UDataflowSimulationManager *this)

{
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  CompleteSimulationTasks(this);
  return;
}

// DoesSupportWorldType @ 1462f5600

bool __thiscall
UDataflowSimulationManager::DoesSupportWorldType(UDataflowSimulationManager *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UWorldSubsystem::DoesSupportWorldType((UWorldSubsystem *)this,param_1);
  if ((!bVar1) && (2 < param_1 - EditorPreview)) {
    return false;
  }
  return true;
}

// GetPrivateStaticClass @ 1462f6d50

UClass * __cdecl UDataflowSimulationManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSimulationManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowSimulationManager",
               &Z_Registration_Info_UClass_UDataflowSimulationManager.InnerSingleton,
               StaticRegisterNativesUDataflowSimulationManager,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDataflowSimulationManager>,
               InternalVTableHelperCtorCaller<UDataflowSimulationManager>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSimulationManager.InnerSingleton;
}

// GetSimulationContext @ 1462f6f50

TSharedPtr<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1> * __thiscall
UDataflowSimulationManager::GetSimulationContext
          (UDataflowSimulationManager *this,
          TSharedPtr<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1>
          *__return_storage_ptr__,TObjectPtr<UDataflow> *param_1)

{
  UDataflow *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDataflowSimulationData *pFVar3;
  UDataflow *local_res18 [2];
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  if (pUVar1 != (UDataflow *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_res18[0] = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pFVar3 = TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
             ::Find((TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
                     *)&this->SimulationData,(TObjectPtr<UDataflow_const_>)local_res18);
    if (pFVar3 != (FDataflowSimulationData *)0x0) {
      __return_storage_ptr__->Object = (pFVar3->SimulationContext).Object;
      pTVar2 = (pFVar3->SimulationContext).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (TSimulationContext<UE::Dataflow::FContextSingle> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStatId @ 1462f79b0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UDataflowSimulationManager::GetStatId(UDataflowSimulationManager *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDataflowSimulationManager::GetStatId(void)const_::_2_::FStat_UDataflowSimulationManager>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UDataflowSimulationManager ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDataflowSimulationManager::GetStatId(void)const_::_2_::FStat_UDataflowSimulationManager>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UDataflowSimulationManager");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UDataflowSimulationManager,*pFVar1,
                   L"UDataflowSimulationManager","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UDataflowSimulationManager;
  if (StatPtr_UDataflowSimulationManager ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDataflowSimulationManager::GetStatId(void)const_::_2_::FStat_UDataflowSimulationManager>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UDataflowSimulationManager");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDataflowSimulationManager::GetStatId(void)const_::_2_::FStat_UDataflowSimulationManager>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UDataflowSimulationManager,*pFVar1,
                         L"UDataflowSimulationManager","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 1462f7b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ETickableTickType __thiscall
UDataflowSimulationManager::GetTickableTickType(UDataflowSimulationManager *this)

{
  undefined1 *this_00;
  UWorld *pUVar1;
  
  this_00 = &this[-1].SimulationData.field_0x30;
  if ((*(uint *)&this[-1].SimulationData.field_0x38 & 0x10) == 0) {
    pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
    if (pUVar1 != (UWorld *)0x0) {
      UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
      return Always;
    }
  }
  return Never;
}

// HasSimulationInterface @ 1462f7e20

bool __thiscall
UDataflowSimulationManager::HasSimulationInterface
          (UDataflowSimulationManager *this,IDataflowSimulationInterface *param_1)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  FDataflowSimulationData *this_00;
  FString *pFVar3;
  TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
  *this_01;
  IDataflowSimulationInterface **ppIVar4;
  UObject *local_res10;
  void *local_18 [2];
  
  if (param_1 != (IDataflowSimulationInterface *)0x0) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    pUVar1 = (UObject *)*puVar2;
    if (pUVar1 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar1);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      local_res10 = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      this_00 = TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
                ::Find((TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
                        *)&this->SimulationData,(TObjectPtr<UDataflow_const_>)&local_res10);
      if (this_00 != (FDataflowSimulationData *)0x0) {
        pFVar3 = (FString *)(**(code **)((longlong)*param_1 + 0x70))(param_1,local_18);
        this_01 = TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
                  ::Find((TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
                          *)this_00,pFVar3);
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
        if (this_01 !=
            (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
             *)0x0) {
          ppIVar4 = TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
                    ::Find(this_01,param_1);
          return ppIVar4 != (IDataflowSimulationInterface **)0x0;
        }
      }
    }
  }
  return false;
}

// InitSimulationInterfaces @ 1462f7f20

void __thiscall
UDataflowSimulationManager::InitSimulationInterfaces(UDataflowSimulationManager *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  FString *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  FString *pFVar6;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *this_00;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  int iVar23;
  uint *puVar24;
  longlong *plVar25;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar26;
  FString *pFVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  int local_1f0;
  uint uStack_1ec;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  undefined8 local_168;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  FDataflowSimulationProxy *local_118;
  undefined8 local_110;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  longlong *local_100;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_f8;
  FString *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  iVar13 = *(int *)&(this->SimulationData).field_0x28;
  puVar1 = &(this->SimulationData).field_0x10;
  pTVar26 = &this->SimulationData;
  iStack_158 = 0;
  uStack_154 = 1;
  local_140 = 0;
  iStack_144 = 0;
  if (iVar13 != 0) {
    puVar24 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar9 = *puVar24;
    local_140 = 0;
    while (uVar9 == 0) {
      lVar14 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_1462f7fcd;
      uVar9 = puVar24[lVar14 + 1];
    }
    uStack_154 = -uVar9 & uVar9;
    uVar4 = (ulonglong)uStack_154 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_130 = (int)lVar14;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar13 < iStack_144) {
      iStack_144 = iVar13;
    }
  }
LAB_1462f7fcd:
  iStack_138 = *(int *)&(this->SimulationData).field_0x8 -
               *(int *)&(this->SimulationData).field_0x34;
  uStack_1dc = *(uint *)&(this->SimulationData).field_0x28;
  bVar12 = (byte)uStack_1dc & 0x1f;
  local_1f0 = (int)uStack_1dc >> 5;
  uStack_1ec = 1 << bVar12;
  uStack_1d8 = uStack_1dc & 0xffffffe0;
  local_1e0 = -1 << bVar12;
  uStack_148 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_154,iStack_158);
  TStack_b8.CurrentBitIndex = iStack_144;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._28_4_ = local_74;
  TStack_b8.BaseBitIndex = local_140;
  uStack_98 = CONCAT44(uStack_134,iStack_138);
  local_160 = pTVar26;
  local_150 = puVar1;
  local_f8 = pTVar26;
  local_c0 = pTVar26;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uStack_1dc < 0) || (iVar13 < (int)uStack_1dc)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)&(this->SimulationData).field_0x28;
  if (uStack_1dc != uVar9) {
    puVar20 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar17 = local_1e0 & *(uint *)(puVar20 + (longlong)local_1f0 * 4);
    while (uVar17 == 0) {
      uStack_1d8 = uStack_1d8 + 0x20;
      lVar14 = (longlong)local_1f0;
      local_1f0 = local_1f0 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1f0)
      goto LAB_1462f810d;
      uVar17 = *(uint *)(puVar20 + lVar14 * 4 + 4);
      local_1e0 = 0xffffffff;
    }
    uStack_1ec = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_1ec * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_12c = (int)lVar14;
    uStack_1dc = local_12c + -1 + uStack_1d8;
    if ((int)uVar9 < (int)uStack_1dc) {
LAB_1462f810d:
      uStack_1dc = uVar9;
    }
  }
  local_188._padding_ = CONCAT44(uStack_1ec,local_1f0);
  local_188.CurrentBitIndex = uStack_1dc;
  local_188.UnvisitedBitMask = local_1e0;
  local_188._28_4_ = uStack_1d4;
  local_188.BaseBitIndex = uStack_1d8;
  local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  do {
    pTVar7 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b8.CurrentBitIndex == uStack_1dc) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar26))
    {
      return;
    }
    lVar14 = (longlong)TStack_b8.CurrentBitIndex * 0x70 + *(longlong *)pTVar7;
    if (*(longlong *)(lVar14 + 0x58) != 0) {
      TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)(*(longlong *)(lVar14 + 0x58) + 0x370));
    }
    iVar13 = *(int *)(lVar14 + 0x30);
    pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x18);
    plVar2 = (longlong *)(lVar14 + 8);
    iVar19 = 0;
    uVar9 = 1;
    iVar23 = 0;
    iVar10 = 0;
    if (iVar13 != 0) {
      pTVar21 = pTVar28;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
      }
      uVar17 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      iVar23 = 0;
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar19;
        iVar23 = iVar23 + 0x20;
        iVar19 = iVar19 + 1;
        iVar10 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1462f822d;
        uVar17 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar9 = -uVar17 & uVar17;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_128 = (int)lVar15;
      iVar10 = iVar23 + -1 + local_128;
      if (iVar13 < iVar10) {
        iVar10 = iVar13;
      }
    }
LAB_1462f822d:
    uVar17 = *(uint *)(lVar14 + 0x30);
    uVar18 = uVar17 & 0xffffffe0;
    local_188._padding_ = CONCAT44(uVar9,iVar19);
    local_188.CurrentBitIndex = iVar10;
    local_188.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar17 >> 5;
    local_188._28_4_ = local_54;
    local_188.BaseBitIndex = iVar23;
    local_168 = CONCAT44(uStack_1a4,*(int *)(lVar14 + 0x10) - *(int *)(lVar14 + 0x3c));
    local_res20 = uVar17;
    local_188.Array = pTVar28;
    local_108 = pTVar28;
    local_100 = plVar2;
    if ((((int)uVar17 < 0) || (iVar13 < (int)uVar17)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(uint *)(lVar14 + 0x30);
    plVar25 = plVar2;
    if (uVar17 != uVar9) {
      pTVar21 = pTVar28;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar19;
        uVar18 = uVar18 + 0x20;
        iVar19 = iVar19 + 1;
        uVar17 = uVar9;
        local_res20 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_1462f8360;
        uVar17 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_124 = (int)lVar15;
      uVar17 = local_124 + -1 + uVar18;
      local_res20 = uVar17;
      if ((int)uVar9 < (int)uVar17) {
        uVar17 = uVar9;
        local_res20 = uVar9;
      }
    }
LAB_1462f8360:
    while( true ) {
      if (*(int *)(lVar14 + 0x10) - *(int *)(lVar14 + 0x3c) != (int)local_168) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((local_188.CurrentBitIndex == uVar17) && (local_188.Array == pTVar28)) &&
         (plVar2 == plVar25)) break;
      iVar23 = 0;
      uVar9 = 1;
      pFVar27 = (FString *)((longlong)local_188.CurrentBitIndex * 0x68 + *plVar2);
      iVar13 = pFVar27[3].Data.ArrayNum;
      pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar27 + 2);
      pFVar3 = pFVar27 + 1;
      iVar10 = iVar23;
      iVar19 = iVar23;
      if (iVar13 != 0) {
        pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar27[3].Data.AllocatorInstance.Data;
        pTVar22 = pTVar28;
        if (pTVar21 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = pTVar21;
        }
        uVar17 = *(uint *)&((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data;
        while (uVar17 == 0) {
          lVar15 = (longlong)iVar23;
          iVar19 = iVar19 + 0x20;
          iVar23 = iVar23 + 1;
          iVar10 = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_1462f842d;
          uVar17 = *(uint *)((longlong)
                             &((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data +
                            lVar15 * 4 + 4);
        }
        uVar9 = -uVar17 & uVar17;
        uVar4 = (ulonglong)uVar9 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_120 = (int)lVar15;
        iVar10 = iVar19 + -1 + local_120;
        if (iVar13 < iVar10) {
          iVar10 = iVar13;
        }
      }
LAB_1462f842d:
      uVar17 = pFVar27[3].Data.ArrayNum;
      uVar18 = uVar17 & 0xffffffe0;
      TStack_e8._padding_ = CONCAT44(uVar9,iVar23);
      TStack_e8.CurrentBitIndex = iVar10;
      TStack_e8.UnvisitedBitMask = 0xffffffff;
      iVar23 = (int)uVar17 >> 5;
      TStack_e8._28_4_ = iStack_144;
      TStack_e8.BaseBitIndex = iVar19;
      uStack_c8 = CONCAT44(uStack_1a4,
                           pFVar27[1].Data.ArrayNum -
                           *(int *)((longlong)&pFVar27[4].Data.AllocatorInstance.Data + 4));
      local_f0 = pFVar3;
      TStack_e8.Array = pTVar28;
      if ((((int)uVar17 < 0) || (iVar13 < (int)uVar17)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = pFVar27[3].Data.ArrayNum;
      if (uVar17 != uVar9) {
        pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar27[3].Data.AllocatorInstance.Data;
        pTVar22 = pTVar28;
        if (pTVar21 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = pTVar21;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                 *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data +
                          (longlong)iVar23 * 4);
        while (uVar17 == 0) {
          lVar15 = (longlong)iVar23;
          uVar18 = uVar18 + 0x20;
          iVar23 = iVar23 + 1;
          uVar17 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
          goto LAB_1462f8540;
          uVar17 = *(uint *)((longlong)
                             &((ForAnyElementType *)(pTVar22->AllocatorInstance).InlineData)->Data +
                            lVar15 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_11c = (int)lVar15;
        uVar17 = local_11c + -1 + uVar18;
        if ((int)uVar9 < (int)uVar17) {
          uVar17 = uVar9;
        }
      }
LAB_1462f8540:
      while( true ) {
        pFVar6 = local_f0;
        if ((local_f0->Data).ArrayNum -
            *(int *)((longlong)&local_f0[3].Data.AllocatorInstance.Data + 4) != (int)uStack_c8) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_e8.CurrentBitIndex == uVar17) && (TStack_e8.Array == pTVar28)) &&
           (pFVar6 == pFVar3)) break;
        plVar25 = *(longlong **)
                   ((pFVar6->Data).AllocatorInstance.Data +
                   (longlong)TStack_e8.CurrentBitIndex * 0x10);
        if (plVar25 != (longlong *)0x0) {
          lVar15 = (**(code **)(*plVar25 + 0x30))(plVar25);
          if (lVar15 == 0) {
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
          lVar15 = (**(code **)(*plVar25 + 0x30))(plVar25);
          if (lVar15 != 0) {
            lVar15 = (**(code **)(*plVar25 + 0x30))(plVar25);
            lVar11 = (**(code **)(*plVar25 + 0x18))(plVar25);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       (lVar15 + 0x28),
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar11 + 8)
                      );
            lVar15 = *(longlong *)(lVar14 + 0x58);
            if (lVar15 != 0) {
              local_110 = (**(code **)(*plVar25 + 0x30))(plVar25);
              iVar19 = (pFVar27->Data).ArrayNum;
              iVar13 = iVar19 + -1;
              if (iVar19 == 0) {
                pwVar16 = L"";
                iVar13 = 0;
              }
              else {
                pwVar16 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
              }
              uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar16);
              this_00 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                        ::FindOrAddImpl<FString_const_&>
                                  ((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                                    *)(lVar15 + 0x370),uVar9,pFVar27);
              TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
              ::Emplace<FDataflowSimulationProxy_*_const_&>(this_00,&local_118,(bool *)&local_110);
            }
          }
        }
        TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
      }
      local_188.UnvisitedBitMask = local_188.UnvisitedBitMask & ~local_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
      plVar25 = local_100;
      pTVar28 = local_108;
      uVar17 = local_res20;
    }
    if (*(TSimulationContext<UE::Dataflow::FContextSingle> **)(lVar14 + 0x58) !=
        (TSimulationContext<UE::Dataflow::FContextSingle> *)0x0) {
      UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::RegisterProxyGroups
                (*(TSimulationContext<UE::Dataflow::FContextSingle> **)(lVar14 + 0x58));
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    pTVar26 = local_f8;
  } while( true );
}

// Initialize @ 1462f86d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDataflowSimulationManager::Initialize
          (UDataflowSimulationManager *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  UWorld *this_00;
  code *pcVar2;
  bool bVar3;
  ETickableTickType EVar4;
  UClass *pUVar5;
  UDataflowSimulationManager *pUStackX_8;
  UDataflowSimulationManager *apUStackX_18 [2];
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      if (((this->_padding_ & 1) == 0) && (this_00->bIsWorldInitialized != '\0')) {
        (**(code **)(this->_padding_ + 0x2c8))(this);
        if ((this->_padding_ & 1) == 0) {
          pUStackX_8 = this;
          `UWorldSubsystem::EnsureHasCalledPostInitialize'::__l2::<lambda_1>::operator()
                    (&pUStackX_8);
        }
      }
      if ((this->_padding_ & 2) == 0) {
        bVar3 = UWorld::HasBegunPlay(this_00);
        if (bVar3) {
          (**(code **)(this->_padding_ + 0x2d8))(this,this_00);
          if ((this->_padding_ & 2) == 0) {
            apUStackX_18[0] = this;
            `UWorldSubsystem::EnsureHasCalledBeginPlay'::__l2::<lambda_1>::operator()(apUStackX_18);
          }
        }
      }
    }
  }
  if ((char)this->_padding_ != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\WorldSubsystem.cpp"
                       ,0x89,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  EVar4 = (**(code **)(this->_padding_ + 8))(&this->_padding_);
  FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,EVar4);
  return;
}

// IsTickableInEditor @ 1462f8bc0

bool __thiscall UDataflowSimulationManager::IsTickableInEditor(UDataflowSimulationManager *this)

{
  return true;
}

// OnShutdown @ 1462f8c40

void __cdecl UDataflowSimulationManager::OnShutdown(void)

{
  if (OnWorldPostActorTick.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPostActorTick,OnWorldPostActorTick);
  }
  if (OnCreatePhysicsStateHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UActorComponent::GlobalCreatePhysicsDelegate,OnCreatePhysicsStateHandle);
  }
  if (OnDestroyPhysicsStateHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UActorComponent::GlobalDestroyPhysicsDelegate,OnDestroyPhysicsStateHandle);
    return;
  }
  return;
}

// OnStartup @ 1462f8ca0

void __cdecl UDataflowSimulationManager::OnStartup(void)

{
  FDelegateHandle FVar1;
  <lambda_1> local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddLambda<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_1>_>
                    (&FWorldDelegates::OnWorldPostActorTick,local_res8);
                    /* WARNING: Load size is inaccurate */
  OnWorldPostActorTick.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
          ::AddLambda<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_2>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
                      *)&UActorComponent::GlobalCreatePhysicsDelegate,(<lambda_2> *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnCreatePhysicsStateHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
          ::AddLambda<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_3>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
                      *)&UActorComponent::GlobalDestroyPhysicsDelegate,(<lambda_3> *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnDestroyPhysicsStateHandle.ID = *FVar1.ID;
  return;
}

// PostProcessSimulation @ 1462f8ea0

void __thiscall
UDataflowSimulationManager::PostProcessSimulation(UDataflowSimulationManager *this,float param_1)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  ForElementType<unsigned_int> FVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  longlong *plVar24;
  longlong *plVar25;
  ForElementType<unsigned_int> FVar26;
  ForElementType<unsigned_int> FVar27;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1b8;
  undefined4 uStack_184;
  undefined4 uStack_154;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  iVar22 = *(int *)&(this->SimulationData).field_0x28;
  puVar1 = &(this->SimulationData).field_0x10;
  iVar18 = 0;
  iVar21 = 0;
  pTVar2 = &this->SimulationData;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar22 != 0) {
    puVar23 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar13 = *puVar23;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar18;
      iVar21 = iVar21 + 0x20;
      iVar18 = iVar18 + 1;
      iVar9 = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1462f8f5e;
      uVar13 = puVar23[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar21 + -1 + (int)lVar11;
    if (iVar22 < iVar9) {
      iVar9 = iVar22;
    }
  }
LAB_1462f8f5e:
  local_1b8 = *(uint *)&(this->SimulationData).field_0x28;
  uVar13 = local_1b8 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar8,iVar18);
  TStack_b0.CurrentBitIndex = iVar9;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_1b8 >> 5;
  TStack_b0._28_4_ = local_6c;
  TStack_b0.BaseBitIndex = iVar21;
  uStack_90 = CONCAT44(uStack_154,
                       *(int *)&(this->SimulationData).field_0x8 -
                       *(int *)&(this->SimulationData).field_0x34);
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_1b8 < 0) || (iVar22 < (int)local_1b8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->SimulationData).field_0x28;
  if (local_1b8 != uVar8) {
    puVar19 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar16 = -1 << ((byte)local_1b8 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      local_1b8 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1462f9071;
      uVar16 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1b8 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar8 < (int)local_1b8) {
      local_1b8 = uVar8;
    }
  }
LAB_1462f9071:
  do {
    pTVar6 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b0.CurrentBitIndex == local_1b8) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    {
      return;
    }
    lVar11 = *(longlong *)pTVar6;
    iVar21 = 0;
    lVar17 = (longlong)TStack_b0.CurrentBitIndex * 0x70;
    iVar22 = 0;
    FVar26 = (ForElementType<unsigned_int>)(lVar11 + 0x18 + lVar17);
    plVar24 = (longlong *)(lVar11 + 8 + lVar17);
    uVar16 = 1;
    uVar8 = *(int *)((longlong)FVar26 + 0x18);
    uVar13 = 0;
    if (uVar8 != 0) {
      FVar27 = FVar26;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar27 = *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10);
      }
      uVar13 = *(uint *)FVar27;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar21;
        iVar22 = iVar22 + 0x20;
        iVar21 = iVar21 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_1462f914f;
        uVar13 = ((uint *)((longlong)FVar27 + 4))[lVar12];
      }
      uVar16 = -uVar13 & uVar13;
      uVar3 = (ulonglong)uVar16 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = iVar22 + -1 + (int)lVar12;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_1462f914f:
    uVar10 = *(uint *)(lVar17 + 0x30 + lVar11);
    uVar14 = uVar10 & 0xffffffe0;
    TStack_e0._padding_ = CONCAT44(uVar16,iVar21);
    TStack_e0.CurrentBitIndex = uVar13;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar10 >> 5;
    TStack_e0._28_4_ = local_4c;
    TStack_e0.BaseBitIndex = iVar22;
    uStack_c0 = CONCAT44(uStack_184,
                         *(int *)(lVar17 + 0x10 + lVar11) - *(int *)(lVar17 + 0x3c + lVar11));
    local_e8 = plVar24;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar26;
    if ((((int)uVar10 < 0) || ((int)uVar8 < (int)uVar10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *(uint *)((longlong)FVar26 + 0x18);
    if (uVar10 != uVar8) {
      FVar27 = FVar26;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar27 = *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10);
      }
      uVar13 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar21 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar21;
        uVar14 = uVar14 + 0x20;
        iVar21 = iVar21 + 1;
        uVar10 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_1462f9260;
        uVar13 = ((uint *)((longlong)FVar27 + 4))[lVar11];
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar10 = (int)lVar11 + -1 + uVar14;
      if ((int)uVar8 < (int)uVar10) {
        uVar10 = uVar8;
      }
    }
LAB_1462f9260:
    while( true ) {
      plVar25 = local_e8;
      if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_e0.CurrentBitIndex == uVar10) &&
          ((ForElementType<unsigned_int>)TStack_e0.Array == FVar26)) && (plVar25 == plVar24)) break;
      lVar11 = *plVar25;
      iVar21 = 0;
      lVar17 = (longlong)TStack_e0.CurrentBitIndex * 0x68;
      iVar22 = 0;
      FVar27 = (ForElementType<unsigned_int>)(lVar11 + 0x20 + lVar17);
      plVar25 = (longlong *)(lVar11 + 0x10 + lVar17);
      uVar16 = 1;
      uVar8 = *(int *)((longlong)FVar27 + 0x18);
      uVar13 = 0;
      if (uVar8 != 0) {
        FVar20 = FVar27;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10);
        }
        uVar13 = *(uint *)FVar20;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar21;
          iVar22 = iVar22 + 0x20;
          iVar21 = iVar21 + 1;
          uVar13 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_1462f932d;
          uVar13 = ((uint *)((longlong)FVar20 + 4))[lVar12];
        }
        uVar16 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = iVar22 + -1 + (int)lVar12;
        if ((int)uVar8 < (int)uVar13) {
          uVar13 = uVar8;
        }
      }
LAB_1462f932d:
      uVar14 = *(uint *)(lVar17 + 0x38 + lVar11);
      uVar15 = uVar14 & 0xffffffe0;
      TStack_110._padding_ = CONCAT44(uVar16,iVar21);
      TStack_110.CurrentBitIndex = uVar13;
      TStack_110.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)uVar14 >> 5;
      TStack_110._28_4_ = iVar9;
      TStack_110.BaseBitIndex = iVar22;
      uStack_f0 = CONCAT44(uStack_184,
                           *(int *)(lVar17 + 0x18 + lVar11) - *(int *)(lVar17 + 0x44 + lVar11));
      TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar27;
      if ((((int)uVar14 < 0) || ((int)uVar8 < (int)uVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)((longlong)FVar27 + 0x18);
      if (uVar14 != uVar8) {
        FVar20 = FVar27;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10);
        }
        uVar13 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar21 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar21;
          uVar15 = uVar15 + 0x20;
          iVar21 = iVar21 + 1;
          uVar14 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_1462f9440;
          uVar13 = ((uint *)((longlong)FVar20 + 4))[lVar11];
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar15;
        if ((int)uVar8 < (int)uVar14) {
          uVar14 = uVar8;
        }
      }
LAB_1462f9440:
      while( true ) {
        if ((int)plVar25[1] - *(int *)((longlong)plVar25 + 0x34) != (int)uStack_f0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((TStack_110.CurrentBitIndex == uVar14) &&
           ((ForElementType<unsigned_int>)TStack_110.Array == FVar27)) break;
        plVar4 = *(longlong **)(*plVar25 + (longlong)TStack_110.CurrentBitIndex * 0x10);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
        }
        TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// PreProcessSimulation @ 1462f9560

void __thiscall
UDataflowSimulationManager::PreProcessSimulation(UDataflowSimulationManager *this,float param_1)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  ForElementType<unsigned_int> FVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  longlong *plVar24;
  longlong *plVar25;
  ForElementType<unsigned_int> FVar26;
  ForElementType<unsigned_int> FVar27;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1b8;
  undefined4 uStack_184;
  undefined4 uStack_154;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  iVar22 = *(int *)&(this->SimulationData).field_0x28;
  puVar1 = &(this->SimulationData).field_0x10;
  iVar18 = 0;
  iVar21 = 0;
  pTVar2 = &this->SimulationData;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar22 != 0) {
    puVar23 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar13 = *puVar23;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar18;
      iVar21 = iVar21 + 0x20;
      iVar18 = iVar18 + 1;
      iVar9 = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1462f961e;
      uVar13 = puVar23[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar21 + -1 + (int)lVar11;
    if (iVar22 < iVar9) {
      iVar9 = iVar22;
    }
  }
LAB_1462f961e:
  local_1b8 = *(uint *)&(this->SimulationData).field_0x28;
  uVar13 = local_1b8 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar8,iVar18);
  TStack_b0.CurrentBitIndex = iVar9;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_1b8 >> 5;
  TStack_b0._28_4_ = local_6c;
  TStack_b0.BaseBitIndex = iVar21;
  uStack_90 = CONCAT44(uStack_154,
                       *(int *)&(this->SimulationData).field_0x8 -
                       *(int *)&(this->SimulationData).field_0x34);
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_1b8 < 0) || (iVar22 < (int)local_1b8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->SimulationData).field_0x28;
  if (local_1b8 != uVar8) {
    puVar19 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar16 = -1 << ((byte)local_1b8 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      local_1b8 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1462f9731;
      uVar16 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1b8 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar8 < (int)local_1b8) {
      local_1b8 = uVar8;
    }
  }
LAB_1462f9731:
  do {
    pTVar6 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b0.CurrentBitIndex == local_1b8) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    {
      return;
    }
    lVar11 = *(longlong *)pTVar6;
    iVar21 = 0;
    lVar17 = (longlong)TStack_b0.CurrentBitIndex * 0x70;
    iVar22 = 0;
    FVar26 = (ForElementType<unsigned_int>)(lVar11 + 0x18 + lVar17);
    plVar24 = (longlong *)(lVar11 + 8 + lVar17);
    uVar16 = 1;
    uVar8 = *(int *)((longlong)FVar26 + 0x18);
    uVar13 = 0;
    if (uVar8 != 0) {
      FVar27 = FVar26;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar27 = *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10);
      }
      uVar13 = *(uint *)FVar27;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar21;
        iVar22 = iVar22 + 0x20;
        iVar21 = iVar21 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_1462f980f;
        uVar13 = ((uint *)((longlong)FVar27 + 4))[lVar12];
      }
      uVar16 = -uVar13 & uVar13;
      uVar3 = (ulonglong)uVar16 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = iVar22 + -1 + (int)lVar12;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_1462f980f:
    uVar10 = *(uint *)(lVar17 + 0x30 + lVar11);
    uVar14 = uVar10 & 0xffffffe0;
    TStack_e0._padding_ = CONCAT44(uVar16,iVar21);
    TStack_e0.CurrentBitIndex = uVar13;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar10 >> 5;
    TStack_e0._28_4_ = local_4c;
    TStack_e0.BaseBitIndex = iVar22;
    uStack_c0 = CONCAT44(uStack_184,
                         *(int *)(lVar17 + 0x10 + lVar11) - *(int *)(lVar17 + 0x3c + lVar11));
    local_e8 = plVar24;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar26;
    if ((((int)uVar10 < 0) || ((int)uVar8 < (int)uVar10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *(uint *)((longlong)FVar26 + 0x18);
    if (uVar10 != uVar8) {
      FVar27 = FVar26;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar27 = *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10);
      }
      uVar13 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar21 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar21;
        uVar14 = uVar14 + 0x20;
        iVar21 = iVar21 + 1;
        uVar10 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_1462f9920;
        uVar13 = ((uint *)((longlong)FVar27 + 4))[lVar11];
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar10 = (int)lVar11 + -1 + uVar14;
      if ((int)uVar8 < (int)uVar10) {
        uVar10 = uVar8;
      }
    }
LAB_1462f9920:
    while( true ) {
      plVar25 = local_e8;
      if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_e0.CurrentBitIndex == uVar10) &&
          ((ForElementType<unsigned_int>)TStack_e0.Array == FVar26)) && (plVar25 == plVar24)) break;
      lVar11 = *plVar25;
      iVar21 = 0;
      lVar17 = (longlong)TStack_e0.CurrentBitIndex * 0x68;
      iVar22 = 0;
      FVar27 = (ForElementType<unsigned_int>)(lVar11 + 0x20 + lVar17);
      plVar25 = (longlong *)(lVar11 + 0x10 + lVar17);
      uVar16 = 1;
      uVar8 = *(int *)((longlong)FVar27 + 0x18);
      uVar13 = 0;
      if (uVar8 != 0) {
        FVar20 = FVar27;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10);
        }
        uVar13 = *(uint *)FVar20;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar21;
          iVar22 = iVar22 + 0x20;
          iVar21 = iVar21 + 1;
          uVar13 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_1462f99ed;
          uVar13 = ((uint *)((longlong)FVar20 + 4))[lVar12];
        }
        uVar16 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = iVar22 + -1 + (int)lVar12;
        if ((int)uVar8 < (int)uVar13) {
          uVar13 = uVar8;
        }
      }
LAB_1462f99ed:
      uVar14 = *(uint *)(lVar17 + 0x38 + lVar11);
      uVar15 = uVar14 & 0xffffffe0;
      TStack_110._padding_ = CONCAT44(uVar16,iVar21);
      TStack_110.CurrentBitIndex = uVar13;
      TStack_110.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)uVar14 >> 5;
      TStack_110._28_4_ = iVar9;
      TStack_110.BaseBitIndex = iVar22;
      uStack_f0 = CONCAT44(uStack_184,
                           *(int *)(lVar17 + 0x18 + lVar11) - *(int *)(lVar17 + 0x44 + lVar11));
      TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar27;
      if ((((int)uVar14 < 0) || ((int)uVar8 < (int)uVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)((longlong)FVar27 + 0x18);
      if (uVar14 != uVar8) {
        FVar20 = FVar27;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10);
        }
        uVar13 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar21 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar21;
          uVar15 = uVar15 + 0x20;
          iVar21 = iVar21 + 1;
          uVar14 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_1462f9b00;
          uVar13 = ((uint *)((longlong)FVar20 + 4))[lVar11];
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar15;
        if ((int)uVar8 < (int)uVar14) {
          uVar14 = uVar8;
        }
      }
LAB_1462f9b00:
      while( true ) {
        if ((int)plVar25[1] - *(int *)((longlong)plVar25 + 0x34) != (int)uStack_f0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((TStack_110.CurrentBitIndex == uVar14) &&
           ((ForElementType<unsigned_int>)TStack_110.Array == FVar27)) break;
        plVar4 = *(longlong **)(*plVar25 + (longlong)TStack_110.CurrentBitIndex * 0x10);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
        }
        TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// ReadRestartData @ 1462f9d80

void __thiscall UDataflowSimulationManager::ReadRestartData(UDataflowSimulationManager *this)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  code *pcVar8;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  int iVar23;
  uint *puVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_18c;
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  iVar6 = *(int *)&(this->SimulationData).field_0x28;
  puVar1 = &(this->SimulationData).field_0x10;
  iVar19 = 0;
  pTVar2 = &this->SimulationData;
  iVar23 = 0;
  uVar11 = 1;
  iVar12 = 0;
  if (iVar6 != 0) {
    puVar24 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar18 = *puVar24;
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar19;
      iVar23 = iVar23 + 0x20;
      iVar19 = iVar19 + 1;
      iVar12 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1462f9e2e;
      uVar18 = puVar24[lVar14 + 1];
    }
    uVar11 = -uVar18 & uVar18;
    uVar5 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = iVar23 + -1 + (int)lVar14;
    if (iVar6 < iVar12) {
      iVar12 = iVar6;
    }
  }
LAB_1462f9e2e:
  uVar18 = *(uint *)&(this->SimulationData).field_0x28;
  uVar16 = uVar18 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar11,iVar19);
  TStack_b8.CurrentBitIndex = iVar12;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_b8._28_4_ = local_74;
  TStack_b8.BaseBitIndex = iVar23;
  uStack_98 = CONCAT44(uStack_15c,
                       *(int *)&(this->SimulationData).field_0x8 -
                       *(int *)&(this->SimulationData).field_0x34);
  local_res20 = uVar18;
  local_c0 = pTVar2;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar6 < (int)uVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)&(this->SimulationData).field_0x28;
  if (uVar18 != uVar11) {
    puVar20 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar19;
      uVar16 = uVar16 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar11;
      local_res20 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_1462f9f50;
      uVar18 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar18 = (int)lVar14 + -1 + uVar16;
    local_res20 = uVar18;
    if ((int)uVar11 < (int)uVar18) {
      uVar18 = uVar11;
      local_res20 = uVar11;
    }
  }
LAB_1462f9f50:
  do {
    pTVar9 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b8.CurrentBitIndex == uVar18) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    {
      return;
    }
    iVar19 = 0;
    iVar23 = 0;
    lVar14 = *(longlong *)pTVar9 + (longlong)TStack_b8.CurrentBitIndex * 0x70;
    uVar11 = 1;
    iVar6 = *(int *)(lVar14 + 0x30);
    pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x18);
    plVar4 = (longlong *)(lVar14 + 8);
    iVar13 = 0;
    if (iVar6 != 0) {
      pTVar21 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
      }
      uVar18 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      while (uVar18 == 0) {
        lVar15 = (longlong)iVar19;
        iVar23 = iVar23 + 0x20;
        iVar19 = iVar19 + 1;
        iVar13 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1462fa01e;
        uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar11 = -uVar18 & uVar18;
      uVar5 = (ulonglong)uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = iVar23 + -1 + (int)lVar15;
      if (iVar6 < iVar13) {
        iVar13 = iVar6;
      }
    }
LAB_1462fa01e:
    uVar18 = *(uint *)(lVar14 + 0x30);
    uVar16 = uVar18 & 0xffffffe0;
    TStack_e8._padding_ = CONCAT44(uVar11,iVar19);
    TStack_e8.CurrentBitIndex = iVar13;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar18 >> 5;
    TStack_e8._28_4_ = local_54;
    TStack_e8.BaseBitIndex = iVar23;
    uStack_c8 = CONCAT44(uStack_18c,*(int *)(lVar14 + 0x10) - *(int *)(lVar14 + 0x3c));
    local_f0 = plVar4;
    TStack_e8.Array = pTVar3;
    if ((((int)uVar18 < 0) || (iVar6 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar11 = *(uint *)(lVar14 + 0x30);
    if (uVar18 != uVar11) {
      pTVar21 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar19;
        uVar16 = uVar16 + 0x20;
        iVar19 = iVar19 + 1;
        uVar18 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_1462fa130;
        uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar18 = (int)lVar14 + -1 + uVar16;
      if ((int)uVar11 < (int)uVar18) {
        uVar18 = uVar11;
      }
    }
LAB_1462fa130:
    while( true ) {
      plVar7 = local_f0;
      if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_e8.CurrentBitIndex == uVar18) && (TStack_e8.Array == pTVar3)) &&
         (plVar7 == plVar4)) break;
      iVar19 = 0;
      iVar23 = 0;
      lVar14 = (longlong)TStack_e8.CurrentBitIndex * 0x68 + *plVar7;
      uVar11 = 1;
      iVar6 = *(int *)(lVar14 + 0x38);
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x20);
      iVar13 = 0;
      if (iVar6 != 0) {
        pTVar22 = pTVar21;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30);
        }
        uVar16 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
        while (uVar16 == 0) {
          lVar15 = (longlong)iVar19;
          iVar23 = iVar23 + 0x20;
          iVar19 = iVar19 + 1;
          iVar13 = iVar6;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1462fa1fd;
          uVar16 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar15 * 4 + 4);
        }
        uVar11 = -uVar16 & uVar16;
        uVar5 = (ulonglong)uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = iVar23 + -1 + (int)lVar15;
        if (iVar6 < iVar13) {
          iVar13 = iVar6;
        }
      }
LAB_1462fa1fd:
      uVar16 = *(uint *)(lVar14 + 0x38);
      uVar17 = uVar16 & 0xffffffe0;
      TStack_118._padding_ = CONCAT44(uVar11,iVar19);
      TStack_118.CurrentBitIndex = iVar13;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar16 >> 5;
      TStack_118._28_4_ = iVar12;
      TStack_118.BaseBitIndex = iVar23;
      uStack_f8 = CONCAT44(uStack_18c,*(int *)(lVar14 + 0x18) - *(int *)(lVar14 + 0x44));
      TStack_118.Array = pTVar21;
      if ((((int)uVar16 < 0) || (iVar6 < (int)uVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = *(uint *)(lVar14 + 0x38);
      if (uVar16 != uVar11) {
        pTVar22 = pTVar21;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30);
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) &
                 *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
        while (uVar16 == 0) {
          lVar15 = (longlong)iVar19;
          uVar17 = uVar17 + 0x20;
          iVar19 = iVar19 + 1;
          uVar16 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_1462fa310;
          uVar16 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar15 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar16 = (int)lVar15 + -1 + uVar17;
        if ((int)uVar11 < (int)uVar16) {
          uVar16 = uVar11;
        }
      }
LAB_1462fa310:
      while( true ) {
        if (*(int *)(lVar14 + 0x18) - *(int *)(lVar14 + 0x44) != (int)uStack_f8) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TStack_118.CurrentBitIndex == uVar16) && (TStack_118.Array == pTVar21)) break;
        plVar7 = *(longlong **)
                  (*(longlong *)(lVar14 + 0x10) + (longlong)TStack_118.CurrentBitIndex * 0x10);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x60))();
        }
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    uVar18 = local_res20;
  } while( true );
}

// ReadSimulationInterfaces @ 1462fa3d0

void __thiscall
UDataflowSimulationManager::ReadSimulationInterfaces
          (UDataflowSimulationManager *this,float param_1,bool param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  ForElementType<unsigned_int> FVar15;
  uint *puVar16;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar17;
  longlong *plVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  ForElementType<unsigned_int> FVar20;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_1c8 [4];
  uint local_1c4;
  uint local_1c0;
  longlong *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  ForElementType<unsigned_int> local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  ForElementType<unsigned_int> local_140;
  longlong *local_138;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  int local_54;
  
  InitSimulationInterfaces(this);
  iVar9 = *(int *)&(this->SimulationData).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SimulationData).field_0x10;
  iStack_180 = 0;
  local_168 = 0;
  pTVar17 = &this->SimulationData;
  uStack_17c = 1;
  iStack_16c = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)pTVar19;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar6 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      iStack_16c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1462fa48e;
      uVar12 = puVar16[lVar6 + 1];
    }
    uStack_17c = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_17c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_158 = (int)lVar6;
    iStack_16c = local_168 + -1 + local_158;
    if (iVar9 < iStack_16c) {
      iStack_16c = iVar9;
    }
  }
LAB_1462fa48e:
  uVar12 = *(uint *)&(this->SimulationData).field_0x28;
  uStack_164 = local_74;
  iStack_160 = *(int *)&(this->SimulationData).field_0x8 -
               *(int *)&(this->SimulationData).field_0x34;
  uVar10 = uVar12 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_17c,iStack_180);
  uStack_170 = 0xffffffff;
  TStack_b8.CurrentBitIndex = iStack_16c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar12 >> 5;
  TStack_b8._28_4_ = local_74;
  TStack_b8.BaseBitIndex = local_168;
  uStack_98 = CONCAT44(uStack_15c,iStack_160);
  local_1c0 = uVar12;
  local_188 = pTVar17;
  local_178 = (undefined1 *)pTVar19;
  local_130 = pTVar19;
  local_128 = pTVar17;
  local_c0 = pTVar17;
  TStack_b8.Array = pTVar19;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = *(uint *)&(this->SimulationData).field_0x28;
  if (uVar12 != uVar11) {
    puVar14 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar19;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar8 * 4);
    while (uVar12 == 0) {
      lVar6 = (longlong)iVar8;
      uVar10 = uVar10 + 0x20;
      iVar8 = iVar8 + 1;
      uVar12 = uVar11;
      local_1c0 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1462fa5a1;
      uVar12 = *(uint *)(puVar14 + lVar6 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_154 = (int)lVar6;
    uVar12 = local_154 + -1 + uVar10;
    local_1c0 = uVar12;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
      local_1c0 = uVar11;
    }
  }
LAB_1462fa5a1:
  do {
    pTVar4 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b8.CurrentBitIndex == uVar12) && (TStack_b8.Array == pTVar19)) &&
       (pTVar4 == pTVar17)) {
      return;
    }
    lVar6 = *(longlong *)pTVar4;
    iStack_1b0 = 0;
    lVar13 = (longlong)TStack_b8.CurrentBitIndex * 0x70;
    local_198 = 0;
    FVar20 = (ForElementType<unsigned_int>)(lVar6 + 0x18 + lVar13);
    plVar18 = (longlong *)(lVar6 + 8 + lVar13);
    uStack_1ac = 1;
    uVar12 = *(int *)((longlong)FVar20 + 0x18);
    uStack_19c = 0;
    if (uVar12 != 0) {
      FVar15 = FVar20;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10);
      }
      uVar10 = *(uint *)FVar15;
      while (uVar10 == 0) {
        lVar7 = (longlong)iStack_1b0;
        local_198 = local_198 + 0x20;
        iStack_1b0 = iStack_1b0 + 1;
        uStack_19c = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b0)
        goto LAB_1462fa67e;
        uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar7];
      }
      uStack_1ac = -uVar10 & uVar10;
      uVar1 = (ulonglong)uStack_1ac * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_150 = (int)lVar7;
      uStack_19c = local_198 + -1 + local_150;
      if ((int)uVar12 < (int)uStack_19c) {
        uStack_19c = uVar12;
      }
    }
LAB_1462fa67e:
    iStack_194 = local_54;
    iStack_190 = *(int *)(lVar13 + 0x10 + lVar6) - *(int *)(lVar13 + 0x3c + lVar6);
    uVar10 = *(uint *)(lVar13 + 0x30 + lVar6);
    TStack_e8._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
    uVar11 = uVar10 & 0xffffffe0;
    uStack_1a0 = 0xffffffff;
    TStack_e8.CurrentBitIndex = uStack_19c;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar10 >> 5;
    TStack_e8._28_4_ = local_54;
    TStack_e8.BaseBitIndex = local_198;
    uStack_c8 = CONCAT44(uStack_18c,iStack_190);
    local_1c4 = uVar10;
    local_1b8 = plVar18;
    local_1a8 = FVar20;
    local_140 = FVar20;
    local_138 = plVar18;
    local_f0 = plVar18;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar20;
    if ((((int)uVar10 < 0) || ((int)uVar12 < (int)uVar10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = *(uint *)((longlong)FVar20 + 0x18);
    if (uVar10 != uVar12) {
      FVar15 = FVar20;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10);
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar9 * 4);
      while (uVar10 == 0) {
        lVar6 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar10 = uVar12;
        local_1c4 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_1462fa7a1;
        uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar6];
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_14c = (int)lVar6;
      uVar10 = local_14c + -1 + uVar11;
      local_1c4 = uVar10;
      if ((int)uVar12 < (int)uVar10) {
        uVar10 = uVar12;
        local_1c4 = uVar12;
      }
    }
LAB_1462fa7a1:
    while( true ) {
      plVar2 = local_f0;
      if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_e8.CurrentBitIndex == uVar10) &&
          ((ForElementType<unsigned_int>)TStack_e8.Array == FVar20)) && (plVar2 == plVar18)) break;
      lVar6 = *plVar2;
      iStack_1b0 = 0;
      lVar13 = (longlong)TStack_e8.CurrentBitIndex * 0x68;
      local_198 = 0;
      FVar20 = (ForElementType<unsigned_int>)(lVar6 + 0x20 + lVar13);
      plVar18 = (longlong *)(lVar6 + 0x10 + lVar13);
      uStack_1ac = 1;
      uVar12 = *(uint *)((longlong)FVar20 + 0x18);
      uStack_19c = 0;
      if (uVar12 != 0) {
        FVar15 = FVar20;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10);
        }
        uVar10 = *(uint *)FVar15;
        while (uVar10 == 0) {
          lVar7 = (longlong)iStack_1b0;
          local_198 = local_198 + 0x20;
          iStack_1b0 = iStack_1b0 + 1;
          uStack_19c = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b0)
          goto LAB_1462fa86d;
          uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar7];
        }
        uStack_1ac = -uVar10 & uVar10;
        uVar1 = (ulonglong)uStack_1ac * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_148 = (int)lVar7;
        uStack_19c = local_198 + -1 + local_148;
        if ((int)uVar12 < (int)uStack_19c) {
          uStack_19c = uVar12;
        }
      }
LAB_1462fa86d:
      iStack_194 = iStack_16c;
      iStack_190 = *(int *)(lVar13 + 0x18 + lVar6) - *(int *)(lVar13 + 0x44 + lVar6);
      uVar10 = *(uint *)(lVar13 + 0x38 + lVar6);
      uVar11 = uVar10 & 0xffffffe0;
      TStack_118._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
      uStack_1a0 = 0xffffffff;
      TStack_118.CurrentBitIndex = uStack_19c;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar10 >> 5;
      TStack_118._28_4_ = iStack_16c;
      TStack_118.BaseBitIndex = local_198;
      uStack_f8 = CONCAT44(uStack_18c,iStack_190);
      local_1b8 = plVar18;
      local_1a8 = FVar20;
      local_120 = plVar18;
      TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar20;
      if ((((int)uVar10 < 0) || ((int)uVar12 < (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = *(uint *)((longlong)FVar20 + 0x18);
      if (uVar10 != uVar12) {
        FVar15 = FVar20;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10);
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar9 * 4);
        while (uVar10 == 0) {
          lVar6 = (longlong)iVar9;
          uVar11 = uVar11 + 0x20;
          iVar9 = iVar9 + 1;
          uVar10 = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_1462fa980;
          uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar6];
        }
        uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_144 = (int)lVar6;
        uVar10 = local_144 + -1 + uVar11;
        if ((int)uVar12 < (int)uVar10) {
          uVar10 = uVar12;
        }
      }
LAB_1462fa980:
      while( true ) {
        plVar2 = local_120;
        if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
          local_1c8[0] = 0;
          `TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c8);
        }
        if (((TStack_118.CurrentBitIndex == uVar10) &&
            ((ForElementType<unsigned_int>)TStack_118.Array == FVar20)) && (plVar2 == plVar18))
        break;
        plVar2 = *(longlong **)(*plVar2 + (longlong)TStack_118.CurrentBitIndex * 0x10);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x50))(plVar2,param_1);
        }
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
      plVar18 = local_138;
      FVar20 = local_140;
      uVar10 = local_1c4;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    pTVar17 = local_128;
    pTVar19 = local_130;
    uVar12 = local_1c0;
  } while( true );
}

// RemoveSimulationInterface @ 1462fcfa0

void __thiscall
UDataflowSimulationManager::RemoveSimulationInterface
          (UDataflowSimulationManager *this,IDataflowSimulationInterface *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  longlong lVar12;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  uint uVar16;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  ForElementType<unsigned_int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  void *local_50 [3];
  
  if (param_1 != (IDataflowSimulationInterface *)0x0) {
    iVar10 = *(int *)&(this->SimulationData).field_0x28;
    uVar8 = 1;
    puVar1 = &(this->SimulationData).field_0x10;
    iVar18 = 0;
    iVar20 = 0;
    iVar9 = 0;
    if (iVar10 != 0) {
      puVar21 = *(uint **)&(this->SimulationData).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar17 = *puVar21;
      iVar20 = 0;
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar18;
        iVar20 = iVar20 + 0x20;
        iVar18 = iVar18 + 1;
        iVar9 = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1462fd05e;
        uVar17 = puVar21[lVar12 + 1];
      }
      uVar8 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iVar9 = local_res20 + -1 + iVar20;
      if (iVar10 < iVar9) {
        iVar9 = iVar10;
      }
    }
LAB_1462fd05e:
    uVar17 = *(uint *)&(this->SimulationData).field_0x28;
    uVar16 = uVar17 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uVar8,iVar18);
    TStack_78.CurrentBitIndex = iVar9;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar17 >> 5;
    TStack_78._28_4_ = iVar9;
    TStack_78.BaseBitIndex = iVar20;
    uStack_58 = CONCAT44(uStack_94,
                         *(int *)&(this->SimulationData).field_0x8 -
                         *(int *)&(this->SimulationData).field_0x34);
    local_res18 = uVar17;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)&(this->SimulationData).field_0x28;
    if (uVar17 != uVar8) {
      puVar19 = *(undefined1 **)&(this->SimulationData).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar18;
        uVar16 = uVar16 + 0x20;
        iVar18 = iVar18 + 1;
        uVar17 = uVar8;
        local_res18 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_1462fd160;
        uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar17 = (int)lVar12 + -1 + uVar16;
      local_res18 = uVar17;
      if ((int)uVar8 < (int)uVar17) {
        uVar17 = uVar8;
        local_res18 = uVar8;
      }
    }
LAB_1462fd160:
    while( true ) {
      if (*(int *)&(this->SimulationData).field_0x8 - *(int *)&(this->SimulationData).field_0x34 !=
          (int)uStack_58) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      lVar12 = (longlong)TStack_78.CurrentBitIndex;
      if ((TStack_78.CurrentBitIndex == uVar17) &&
         (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar15 = *(longlong *)&this->SimulationData;
      pFVar11 = (FString *)(**(code **)((longlong)*param_1 + 0x70))(param_1,local_50);
      iVar18 = (pFVar11->Data).ArrayNum;
      lVar15 = lVar15 + lVar12 * 0x70;
      iVar10 = iVar18 + -1;
      if (iVar18 == 0) {
        pwVar14 = L"";
        iVar10 = 0;
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar14);
      iVar10 = TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                           *)(lVar15 + 8),uVar8,pFVar11);
      if (iVar10 == -1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (longlong)iVar10 * 0x68 + *(longlong *)(lVar15 + 8);
      }
      this_00 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(lVar12 + 0x10);
      if (lVar12 == 0) {
        this_00 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)0x0;
      }
      if (local_50[0] != (void *)0x0) {
        FMemory::Free(local_50[0]);
      }
      if ((this_00 !=
           (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0) && ((this_00->Data).ArrayNum != this_00->NumFreeIndices)) {
        uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        pTVar3 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   **)&this_00[1].Data.ArrayNum;
        pTVar13 = this_00 + 1;
        if (pTVar3 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)0x0) {
          pTVar13 = pTVar3;
        }
        uVar8 = *(uint *)((pTVar13->AllocationFlags).AllocatorInstance.InlineData +
                         ((longlong)*(int *)this_00[1].AllocationFlags.AllocatorInstance.InlineData
                          - 1U & (longlong)(int)(uVar8 >> 0x10 ^ uVar8)) * 4 + -0x10);
        if (uVar8 != 0xffffffff) {
          pFVar4 = (this_00->Data).AllocatorInstance.Data;
LAB_1462fd280:
          lVar12 = (longlong)(int)uVar8 * 0x10;
          if (*(IDataflowSimulationInterface **)(pFVar4 + lVar12) != param_1)
          goto code_r0x0001462fd291;
          if (((int)uVar8 < 0) || ((this_00->AllocationFlags).NumBits <= (int)uVar8)) {
LAB_1462fd2fd:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((this_00->AllocationFlags).NumBits <= (int)uVar8) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar5 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar22 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = FVar5;
            }
            uVar17 = uVar8;
            if ((int)uVar8 < 0) {
              uVar17 = uVar8 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar22 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar8 & 0x1f) &
                1) == 0) goto LAB_1462fd2fd;
          }
          pTVar3 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     **)&this_00[1].Data.ArrayNum;
          pFVar4 = (this_00->Data).AllocatorInstance.Data;
          pTVar13 = this_00 + 1;
          if (pTVar3 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)0x0) {
            pTVar13 = pTVar3;
          }
          pFVar23 = (FScriptContainerElement *)
                    ((pTVar13->AllocationFlags).AllocatorInstance.InlineData +
                    (longlong)*(int *)(pFVar4 + lVar12 + 0xc) * 4 + -0x10);
          while( true ) {
            uVar17 = *(uint *)pFVar23;
            if ((uVar17 == 0xffffffff) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar17 == uVar8) break;
            pFVar23 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10 + 8;
          }
          *(uint *)pFVar23 = *(uint *)(pFVar4 + lVar12 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(this_00,uVar8,1);
          uVar17 = local_res18;
        }
      }
LAB_1462fd3a8:
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return;
code_r0x0001462fd291:
  uVar8 = *(uint *)(pFVar4 + lVar12 + 8);
  if (uVar8 == 0xffffffff) goto LAB_1462fd3a8;
  goto LAB_1462fd280;
}

// ResetSimulationInterfaces @ 1462fd560

void __thiscall
UDataflowSimulationManager::ResetSimulationInterfaces(UDataflowSimulationManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->SimulationData).field_0x28;
  puVar1 = &(this->SimulationData).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1462fd5fd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1462fd5fd:
  uVar10 = *(uint *)&(this->SimulationData).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->SimulationData).field_0x8 -
                       *(int *)&(this->SimulationData).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SimulationData).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1462fd700;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1462fd700:
  while( true ) {
    if (*(int *)&(this->SimulationData).field_0x8 - *(int *)&(this->SimulationData).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)
             ((longlong)TStack_50.CurrentBitIndex * 0x70 + 0x58 + *(longlong *)&this->SimulationData
             );
    if (lVar8 != 0) {
      TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)(lVar8 + 0x370));
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// StartSimulationTasks @ 1462fd930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UDataflowSimulationManager::StartSimulationTasks
          (UDataflowSimulationManager *this,float param_1,float param_2)

{
  undefined1 *puVar1;
  FMutex *this_00;
  int *piVar2;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  atomic<unsigned_char> aVar5;
  uint uVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar10;
  bool bVar11;
  Type TVar12;
  int iVar13;
  FTaskBase *this_01;
  atomic<unsigned___int64> aVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  EExtendedTaskPriority local_res20 [8];
  ETaskPriority local_108;
  bool local_107 [7];
  FTaskBase *local_100;
  int local_f8;
  int local_f4;
  FChaosDDTaskParentContext local_f0;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined4 local_64;
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Simulation\\Private\\Dataflow\\DataflowSimulationManager.cpp"
                          ,0x1bb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  CompleteSimulationTasks(this);
  if (((this->SimulationTasks).ArrayNum != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SimulationTasks.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Simulation\\Private\\Dataflow\\DataflowSimulationManager.cpp"
                          ,0x1c0,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  ChaosDD::Private::FChaosDDTaskParentContext::FChaosDDTaskParentContext(&local_f0);
  iVar13 = *(int *)&(this->SimulationData).field_0x28;
  puVar1 = &(this->SimulationData).field_0x10;
  iStack_d8 = 0;
  local_e0 = &this->SimulationData;
  local_c0 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar13 != 0) {
    puVar21 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar19 = *puVar21;
    while (uVar19 == 0) {
      lVar15 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_1462fda4e;
      uVar19 = puVar21[lVar15 + 1];
    }
    uStack_d4 = -uVar19 & uVar19;
    uVar4 = (ulonglong)uStack_d4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_f8 = (int)lVar15;
    iStack_c4 = local_f8 + -1 + local_c0;
    if (iVar13 < iStack_c4) {
      iStack_c4 = iVar13;
    }
  }
LAB_1462fda4e:
  uVar19 = *(uint *)&(this->SimulationData).field_0x28;
  uStack_bc = local_64;
  uVar17 = uVar19 & 0xffffffe0;
  iStack_b8 = *(int *)&(this->SimulationData).field_0x8 - *(int *)&(this->SimulationData).field_0x34
  ;
  TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
  uStack_c8 = 0xffffffff;
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_a8._28_4_ = local_64;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_d0 = puVar1;
  local_b0 = local_e0;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar13 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->SimulationData).field_0x28;
  if (uVar19 != uVar6) {
    puVar20 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1462fdb50;
      uVar19 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_f4 = (int)lVar15;
    uVar19 = local_f4 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
    }
  }
LAB_1462fdb50:
  do {
    pTVar10 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a8.CurrentBitIndex == uVar19) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar10 == &this->SimulationData)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.Frame.SharedReferenceCount.ReferenceController);
      return;
    }
    lVar15 = *(longlong *)pTVar10;
    lVar18 = (longlong)TStack_a8.CurrentBitIndex * 0x70;
    bVar11 = UE::Dataflow::Private::FDataflowSimulationData::IsEmpty
                       ((FDataflowSimulationData *)(lVar15 + 8 + lVar18));
    if (!bVar11) {
      pTVar3 = &this->SimulationTasks;
      this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x108,8);
      if (this_01 == (FTaskBase *)0x0) {
        this_01 = (FTaskBase *)0x0;
      }
      else {
        this_01->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
        this_01->Pipe = (FPipe *)0x0;
        (this_01->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
        this_01->TaskTriggered = (atomic<bool>)0x0;
        this_01->RefCount = (atomic<unsigned_int>)0x1;
        this_01->NumLocks = (atomic<unsigned_int>)0x1;
        this_01->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
        aVar14 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
        this_01->TraceId = aVar14;
        this_00 = &(this_01->Prerequisites).Mutex;
        (this_01->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
        (this_01->Prerequisites).Prerequisites.ArrayNum = 0;
        (this_01->Prerequisites).Prerequisites.ArrayMax = 1;
        this_00->State = (atomic<unsigned_char>)0x1;
        *(undefined ***)&(this_01->LowLevelTask).field_0x28 =
             &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(undefined8 *)&(this_01->LowLevelTask).field_0x30 = 0;
        *(undefined8 *)&(this_01->LowLevelTask).field_0x38 = 0xe800000000000020;
        (this_01->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
        (this_01->Subsequents).Subsequents.ArrayNum = 0;
        (this_01->Subsequents).Subsequents.ArrayMax = 1;
        (this_01->Subsequents).bIsClosed = (atomic<bool>)0x0;
        (this_01->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
        this_01->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
        LOCK();
        aVar5 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar5 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
        this_01->_padding_ =
             (longlong)&___7__TGraphTask_VFDataflowSimulationTask_Private_Dataflow_UE____6B_;
      }
      pUVar7 = *(UObject **)(lVar18 + lVar15);
      this_01[1]._padding_ = (longlong)pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      this_01[1]._padding_ = *(longlong *)(lVar18 + 0x58 + lVar15);
      lVar15 = *(longlong *)(lVar18 + 0x60 + lVar15);
      this_01[1]._padding_ = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      *(float *)&this_01[1]._padding_ = param_1;
      *(float *)((longlong)&this_01[1]._padding_ + 4) = param_2;
      this_01[1]._padding_ = (longlong)local_f0.Frame.Object;
      this_01[1]._padding_ = (longlong)local_f0.Frame.SharedReferenceCount.ReferenceController;
      if (local_f0.Frame.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.Frame.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.Frame.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      TVar12 = UE::Dataflow::Private::FDataflowSimulationTask::GetDesiredThread();
      UE::Tasks::Private::TranslatePriority(TVar12,&local_108,local_res20);
      UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_108,local_res20[0],None);
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
      local_100 = this_01;
      if (-1 < TaskTrace::TaskChannel->Enabled) {
        TVar12 = UE::Tasks::Private::TranslatePriority
                           ((ETaskPriority)
                            ((ulonglong)*(undefined8 *)&(this_01->LowLevelTask).field_0x38 >> 0x3b)
                            & (Inherit|Default),this_01->ExtendedPriority);
        TaskTrace::Launched((ulong64)this_01->TraceId,
                            (wchar_t *)
                            (*(ulonglong *)&(this_01->LowLevelTask).field_0x38 >> 6 &
                            0x1fffffffffffff),true,TVar12,0x108);
      }
      local_107[0] = true;
      UE::Tasks::Private::FTaskBase::TryUnlock(this_01,local_107);
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_100) &&
          ((FScriptContainerElement *)&local_100 <
           pFVar8 + (longlong)(this->SimulationTasks).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar13 = (this->SimulationTasks).ArrayNum;
      piVar2 = &(this->SimulationTasks).ArrayMax;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->SimulationTasks).ArrayNum = iVar13 + 1;
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar8 + (longlong)iVar13 * 8) = 0;
      *(FTaskBase **)(pFVar8 + (longlong)iVar13 * 8) = local_100;
      local_100 = (FTaskBase *)0x0;
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// StaticRegisterNativesUDataflowSimulationManager @ 1462fdf30

void __cdecl UDataflowSimulationManager::StaticRegisterNativesUDataflowSimulationManager(void)

{
  return;
}

// Tick @ 1462fe270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDataflowSimulationManager::Tick(UDataflowSimulationManager *this,float param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Simulation\\Private\\Dataflow\\DataflowSimulationManager.cpp"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  PreProcessSimulation((UDataflowSimulationManager *)&this[-1].SimulationData.field_0x30,param_1);
  if ((this->SimulationData).field_0x28 != '\0') {
    ReadSimulationInterfaces
              ((UDataflowSimulationManager *)&this[-1].SimulationData.field_0x30,param_1,false);
    this_00 = &this[-1].SimulationData.field_0x30;
    if (UE::Dataflow::Private::DataflowSimulationThreadingMode == 0) {
      pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
      AdvanceSimulationProxies
                ((UDataflowSimulationManager *)&this[-1].SimulationData.field_0x30,param_1,
                 (float)pUVar3->TimeSeconds);
    }
    else {
      pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
      StartSimulationTasks
                ((UDataflowSimulationManager *)&this[-1].SimulationData.field_0x30,param_1,
                 (float)pUVar3->TimeSeconds);
      if (UE::Dataflow::Private::DataflowSimulationThreadingMode != 1) goto LAB_1462fe344;
      CompleteSimulationTasks((UDataflowSimulationManager *)&this[-1].SimulationData.field_0x30);
    }
    WriteSimulationInterfaces
              ((UDataflowSimulationManager *)&this[-1].SimulationData.field_0x30,param_1,false);
  }
LAB_1462fe344:
  PostProcessSimulation((UDataflowSimulationManager *)&this[-1].SimulationData.field_0x30,param_1);
  return;
}

// WriteSimulationInterfaces @ 1462feb40

void __thiscall
UDataflowSimulationManager::WriteSimulationInterfaces
          (UDataflowSimulationManager *this,float param_1,bool param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *pTVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  ForElementType<unsigned_int> FVar15;
  uint *puVar16;
  longlong *plVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  ForElementType<unsigned_int> FVar19;
  undefined1 local_res20 [8];
  undefined1 local_1c8;
  undefined1 local_1c7 [3];
  uint local_1c4;
  uint local_1c0;
  longlong *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  ForElementType<unsigned_int> local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_140;
  ForElementType<unsigned_int> local_138;
  longlong *local_130;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  int local_54;
  
  iVar9 = *(int *)&(this->SimulationData).field_0x28;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SimulationData).field_0x10;
  local_168 = 0;
  iStack_180 = 0;
  local_188 = &this->SimulationData;
  uStack_17c = 1;
  iStack_16c = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(this->SimulationData).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)pTVar18;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar6 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      iStack_16c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1462febfd;
      uVar12 = puVar16[lVar6 + 1];
    }
    uStack_17c = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_17c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_158 = (int)lVar6;
    iStack_16c = local_168 + -1 + local_158;
    if (iVar9 < iStack_16c) {
      iStack_16c = iVar9;
    }
  }
LAB_1462febfd:
  uVar12 = *(uint *)&(this->SimulationData).field_0x28;
  iStack_160 = *(int *)&(this->SimulationData).field_0x8 -
               *(int *)&(this->SimulationData).field_0x34;
  uVar10 = uVar12 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_17c,iStack_180);
  uStack_170 = 0xffffffff;
  TStack_b8.CurrentBitIndex = iStack_16c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar12 >> 5;
  TStack_b8._28_4_ = local_74;
  TStack_b8.BaseBitIndex = local_168;
  uStack_98 = CONCAT44(uStack_15c,iStack_160);
  local_1c0 = uVar12;
  local_178 = (undefined1 *)pTVar18;
  local_140 = local_188;
  local_128 = pTVar18;
  local_c0 = local_188;
  TStack_b8.Array = pTVar18;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = *(uint *)&(this->SimulationData).field_0x28;
  if (uVar12 != uVar11) {
    puVar14 = *(undefined1 **)&(this->SimulationData).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar18;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar8 * 4);
    while (uVar12 == 0) {
      lVar6 = (longlong)iVar8;
      uVar10 = uVar10 + 0x20;
      iVar8 = iVar8 + 1;
      uVar12 = uVar11;
      local_1c0 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1462fed11;
      uVar12 = *(uint *)(puVar14 + lVar6 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_154 = (int)lVar6;
    uVar12 = local_154 + -1 + uVar10;
    local_1c0 = uVar12;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
      local_1c0 = uVar11;
    }
  }
LAB_1462fed11:
  do {
    pTVar4 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b8.CurrentBitIndex == uVar12) && (TStack_b8.Array == pTVar18)) &&
       (pTVar4 == local_140)) {
      if (this->bStepSimulationScene != false) {
        this->bIsSimulationEnabled = false;
        this->bStepSimulationScene = false;
      }
      ResetSimulationInterfaces(this);
      return;
    }
    lVar6 = *(longlong *)pTVar4;
    iStack_1b0 = 0;
    lVar13 = (longlong)TStack_b8.CurrentBitIndex * 0x70;
    local_198 = 0;
    FVar19 = (ForElementType<unsigned_int>)(lVar6 + 0x18 + lVar13);
    plVar17 = (longlong *)(lVar6 + 8 + lVar13);
    uStack_1ac = 1;
    uVar12 = *(int *)((longlong)FVar19 + 0x18);
    uStack_19c = 0;
    if (uVar12 != 0) {
      FVar15 = FVar19;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
      }
      uVar10 = *(uint *)FVar15;
      while (uVar10 == 0) {
        lVar7 = (longlong)iStack_1b0;
        local_198 = local_198 + 0x20;
        iStack_1b0 = iStack_1b0 + 1;
        uStack_19c = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b0)
        goto LAB_1462fedee;
        uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar7];
      }
      uStack_1ac = -uVar10 & uVar10;
      uVar1 = (ulonglong)uStack_1ac * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_150 = (int)lVar7;
      uStack_19c = local_198 + -1 + local_150;
      if ((int)uVar12 < (int)uStack_19c) {
        uStack_19c = uVar12;
      }
    }
LAB_1462fedee:
    iStack_194 = local_54;
    iStack_190 = *(int *)(lVar13 + 0x10 + lVar6) - *(int *)(lVar13 + 0x3c + lVar6);
    uVar10 = *(uint *)(lVar13 + 0x30 + lVar6);
    TStack_e8._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
    uVar11 = uVar10 & 0xffffffe0;
    uStack_1a0 = 0xffffffff;
    TStack_e8.CurrentBitIndex = uStack_19c;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar10 >> 5;
    TStack_e8._28_4_ = local_54;
    TStack_e8.BaseBitIndex = local_198;
    uStack_c8 = CONCAT44(uStack_18c,iStack_190);
    local_1c4 = uVar10;
    local_1b8 = plVar17;
    local_1a8 = FVar19;
    local_138 = FVar19;
    local_130 = plVar17;
    local_f0 = plVar17;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar19;
    if ((((int)uVar10 < 0) || ((int)uVar12 < (int)uVar10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = *(uint *)((longlong)FVar19 + 0x18);
    if (uVar10 != uVar12) {
      FVar15 = FVar19;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar9 * 4);
      while (uVar10 == 0) {
        lVar6 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar10 = uVar12;
        local_1c4 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_1462fef11;
        uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar6];
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_14c = (int)lVar6;
      uVar10 = local_14c + -1 + uVar11;
      local_1c4 = uVar10;
      if ((int)uVar12 < (int)uVar10) {
        uVar10 = uVar12;
        local_1c4 = uVar12;
      }
    }
LAB_1462fef11:
    while( true ) {
      plVar2 = local_f0;
      if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
        local_1c8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
      }
      if (((TStack_e8.CurrentBitIndex == uVar10) &&
          ((ForElementType<unsigned_int>)TStack_e8.Array == FVar19)) && (plVar2 == plVar17)) break;
      lVar6 = *plVar2;
      iStack_1b0 = 0;
      lVar13 = (longlong)TStack_e8.CurrentBitIndex * 0x68;
      local_198 = 0;
      FVar19 = (ForElementType<unsigned_int>)(lVar6 + 0x20 + lVar13);
      plVar17 = (longlong *)(lVar6 + 0x10 + lVar13);
      uStack_1ac = 1;
      uVar12 = *(uint *)((longlong)FVar19 + 0x18);
      uStack_19c = 0;
      if (uVar12 != 0) {
        FVar15 = FVar19;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
        }
        uVar10 = *(uint *)FVar15;
        while (uVar10 == 0) {
          lVar7 = (longlong)iStack_1b0;
          local_198 = local_198 + 0x20;
          iStack_1b0 = iStack_1b0 + 1;
          uStack_19c = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b0)
          goto LAB_1462fefdd;
          uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar7];
        }
        uStack_1ac = -uVar10 & uVar10;
        uVar1 = (ulonglong)uStack_1ac * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_148 = (int)lVar7;
        uStack_19c = local_198 + -1 + local_148;
        if ((int)uVar12 < (int)uStack_19c) {
          uStack_19c = uVar12;
        }
      }
LAB_1462fefdd:
      iStack_194 = iStack_16c;
      iStack_190 = *(int *)(lVar13 + 0x18 + lVar6) - *(int *)(lVar13 + 0x44 + lVar6);
      uVar10 = *(uint *)(lVar13 + 0x38 + lVar6);
      uVar11 = uVar10 & 0xffffffe0;
      TStack_118._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
      uStack_1a0 = 0xffffffff;
      TStack_118.CurrentBitIndex = uStack_19c;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar10 >> 5;
      TStack_118._28_4_ = iStack_16c;
      TStack_118.BaseBitIndex = local_198;
      uStack_f8 = CONCAT44(uStack_18c,iStack_190);
      local_1b8 = plVar17;
      local_1a8 = FVar19;
      local_120 = plVar17;
      TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar19;
      if ((((int)uVar10 < 0) || ((int)uVar12 < (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = *(uint *)((longlong)FVar19 + 0x18);
      if (uVar10 != uVar12) {
        FVar15 = FVar19;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar9 * 4);
        while (uVar10 == 0) {
          lVar6 = (longlong)iVar9;
          uVar11 = uVar11 + 0x20;
          iVar9 = iVar9 + 1;
          uVar10 = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_1462ff0f0;
          uVar10 = ((uint *)((longlong)FVar15 + 4))[lVar6];
        }
        uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_144 = (int)lVar6;
        uVar10 = local_144 + -1 + uVar11;
        if ((int)uVar12 < (int)uVar10) {
          uVar10 = uVar12;
        }
      }
LAB_1462ff0f0:
      while( true ) {
        plVar2 = local_120;
        if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
          local_1c7[0] = 0;
          `TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c7);
        }
        if (((TStack_118.CurrentBitIndex == uVar10) &&
            ((ForElementType<unsigned_int>)TStack_118.Array == FVar19)) && (plVar2 == plVar17))
        break;
        plVar2 = *(longlong **)(*plVar2 + (longlong)TStack_118.CurrentBitIndex * 0x10);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
        }
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
      plVar17 = local_130;
      FVar19 = local_138;
      uVar10 = local_1c4;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    pTVar18 = local_128;
    uVar12 = local_1c0;
  } while( true );
}

