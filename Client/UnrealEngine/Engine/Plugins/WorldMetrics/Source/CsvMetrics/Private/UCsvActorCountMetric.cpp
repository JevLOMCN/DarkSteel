// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CsvMetrics
// Functions: 14

// StaticClass @ 14f149f90

UClass * __cdecl UCsvActorCountMetric::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CsvMetrics",L"CsvActorCountMetric",
               &Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton,
               StaticRegisterNativesUCsvActorCountMetric,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCsvActorCountMetric>,
               InternalVTableHelperCtorCaller<UCsvActorCountMetric>,local_res8,
               UWorldMetricInterface::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton;
}

// UCsvActorCountMetric @ 14f14a5f0

UCsvActorCountMetric * __thiscall
UCsvActorCountMetric::UCsvActorCountMetric(UCsvActorCountMetric *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldMetricInterface__;
  this->_padding_ = (longlong)&_vftable__for__IWorldMetricsActorTrackerSubscriber__;
  *(undefined8 *)&this->ActorClassNameCounter = 0;
  *(undefined8 *)&(this->ActorClassNameCounter).field_0x8 = 0;
  *(undefined8 *)&(this->ActorClassNameCounter).field_0x20 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x28 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x34 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActorClassNameCounter).field_0x40 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x48 = 0;
  this->TotalActorCount = 0;
  return this;
}

// UCsvActorCountMetric @ 14f14a660

UCsvActorCountMetric * __thiscall
UCsvActorCountMetric::UCsvActorCountMetric(UCsvActorCountMetric *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldMetricInterface__;
  this->_padding_ = (longlong)&_vftable__for__IWorldMetricsActorTrackerSubscriber__;
  *(undefined8 *)&this->ActorClassNameCounter = 0;
  *(undefined8 *)&(this->ActorClassNameCounter).field_0x8 = 0;
  *(undefined8 *)&(this->ActorClassNameCounter).field_0x20 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x28 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x34 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActorClassNameCounter).field_0x40 = 0;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x48 = 0;
  this->TotalActorCount = 0;
  return this;
}

// ~UCsvActorCountMetric @ 14f14a790

void __thiscall UCsvActorCountMetric::~UCsvActorCountMetric(UCsvActorCountMetric *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldMetricInterface__;
  this->_padding_ = (longlong)&_vftable__for__IWorldMetricsActorTrackerSubscriber__;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActorClassNameCounter).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActorClassNameCounter);
  this->_padding_ = (longlong)&___7IWorldMetricsActorTrackerSubscriber__6B_;
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// Deinitialize @ 14f14ada0

void __thiscall UCsvActorCountMetric::Deinitialize(UCsvActorCountMetric *this)

{
  code *pcVar1;
  bool bVar2;
  UWorldMetricsSubsystem *this_00;
  TObjectPtr<UClass>_u_0 local_res8;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UWorldMetricsSubsystem *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4176366498584985583>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricInterface.h"
                       ,0x11,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (UWorldMetricsSubsystem *)0x0;
  }
  local_res8.DebugPtr = Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  UWorldMetricsSubsystem::ReleaseExtension
            (this_00,(UWorldMetricInterface *)this,
             (TSubclassOf<UWorldMetricsExtension> *)&local_res8.ObjectPtr);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->ActorClassNameCounter);
  this->TotalActorCount = 0;
  return;
}

// GetAllocatedSize @ 14f14b030

ulong64 __thiscall UCsvActorCountMetric::GetAllocatedSize(UCsvActorCountMetric *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->ActorClassNameCounter).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return lVar2 + (ulonglong)((*(int *)&(this->ActorClassNameCounter).field_0x2c + 0x1fU >> 5) << 2)
         + (longlong)*(int *)&(this->ActorClassNameCounter).field_0xc * 0x14;
}

// GetPrivateStaticClass @ 14f14b090

UClass * __cdecl UCsvActorCountMetric::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CsvMetrics",L"CsvActorCountMetric",
               &Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton,
               StaticRegisterNativesUCsvActorCountMetric,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCsvActorCountMetric>,
               InternalVTableHelperCtorCaller<UCsvActorCountMetric>,local_res8,
               UWorldMetricInterface::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton;
}

// Initialize @ 14f14b250

void __thiscall UCsvActorCountMetric::Initialize(UCsvActorCountMetric *this)

{
  code *pcVar1;
  bool bVar2;
  UWorldMetricsSubsystem *this_00;
  TObjectPtr<UClass>_u_0 local_res8;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UWorldMetricsSubsystem *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4176366498584985583>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricInterface.h"
                       ,0x11,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (UWorldMetricsSubsystem *)0x0;
  }
  local_res8.DebugPtr = Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  UWorldMetricsSubsystem::AcquireExtension
            (this_00,(UWorldMetricInterface *)this,
             (TSubclassOf<UWorldMetricsExtension> *)&local_res8.ObjectPtr);
  return;
}

// NumActors @ 14f14b3e0

int __thiscall UCsvActorCountMetric::NumActors(UCsvActorCountMetric *this,FName *param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->ActorClassNameCounter,*param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return 0;
}

// OnActorAdded @ 14f14b410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCsvActorCountMetric::OnActorAdded(UCsvActorCountMetric *this,AActor *param_1)

{
  uint uVar1;
  UClass *pUVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  if ((param_1->_padding_ & 0x30) == 0) {
    pUVar2 = GetParentNativeClass((UClass *)param_1->_padding_);
    if (pUVar2 == (UClass *)0x0) {
      local_res10 = 0;
    }
    else {
      local_res10 = pUVar2->_padding_;
    }
    local_res18 = local_res10;
    uVar1 = ::GetTypeHash((FNameEntryId)(uint)local_res10);
    if ((int)this->_padding_ != *(int *)&(this->ActorClassNameCounter).field_0xc) {
      puVar4 = *(undefined1 **)&(this->ActorClassNameCounter).field_0x18;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->ActorClassNameCounter).field_0x10;
      }
      iVar5 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->ActorClassNameCounter).field_0x20 - 1U &
                                local_res10._4_4_ + uVar1) * 4);
      if (iVar5 != -1) {
        do {
          lVar3 = this->_padding_ + (longlong)iVar5 * 0x14;
          if (*(longlong *)(this->_padding_ + (longlong)iVar5 * 0x14) == local_res18) {
            if (lVar3 != 0) goto LAB_14f14b4ec;
            break;
          }
          iVar5 = *(int *)(lVar3 + 0xc);
        } while (iVar5 != -1);
      }
    }
    local_res20 = &local_res18;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    EmplaceByHash<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->_padding_,(uint)&local_res10,
               (TKeyInitializer<FName_const_&> *)(ulonglong)(local_res10._4_4_ + uVar1),
               (bool *)&local_res20);
    lVar3 = this->_padding_ + (longlong)(int)local_res10 * 0x14;
LAB_14f14b4ec:
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    puVar4 = &(this->ActorClassNameCounter).field_0x28;
    *(int *)puVar4 = *(int *)puVar4 + 1;
  }
  return;
}

// OnActorRemoved @ 14f14b510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCsvActorCountMetric::OnActorRemoved(UCsvActorCountMetric *this,AActor *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  int *piVar3;
  FName FVar4;
  
  if ((param_1->_padding_ & 0x30) == 0) {
    pUVar2 = GetParentNativeClass((UClass *)param_1->_padding_);
    if (pUVar2 == (UClass *)0x0) {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
    }
    else {
      FVar4 = (FName)pUVar2->_padding_;
    }
    piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&this->_padding_,FVar4);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + -1;
    }
    puVar1 = &(this->ActorClassNameCounter).field_0x28;
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  return;
}

// StaticRegisterNativesUCsvActorCountMetric @ 14f14b650

void __cdecl UCsvActorCountMetric::StaticRegisterNativesUCsvActorCountMetric(void)

{
  return;
}

// Update @ 14f14b710

void __thiscall UCsvActorCountMetric::Update(UCsvActorCountMetric *this,float param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FCsvProfiler *this_00;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_00 = FCsvProfiler::Get();
  bVar7 = FCsvProfiler::IsCapturing(this_00);
  pTVar6 = UE::WorldMetrics::Private::CVarCsvRecordActorCountThreshold.Ref;
  if (!bVar7) {
    return;
  }
  bVar7 = IsInParallelGameThread();
  uVar15 = 0;
  uVar16 = 0;
  if (!bVar7) {
    bVar7 = IsInGameThread();
    uVar11 = 4;
    if (!bVar7) goto LAB_14f14b78b;
  }
  uVar11 = uVar15;
LAB_14f14b78b:
  iVar3 = *(int *)&(this->ActorClassNameCounter).field_0x28;
  puVar1 = &(this->ActorClassNameCounter).field_0x10;
  iVar4 = *(int *)((longlong)pTVar6->ShadowedValue + uVar11);
  uVar8 = 1;
  iVar9 = 0;
  uVar13 = uVar16;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->ActorClassNameCounter).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar10 = *puVar18;
    uVar11 = uVar15;
    uVar16 = 0;
    uVar13 = 0;
    while (uVar10 == 0) {
      iVar14 = (int)uVar15;
      uVar16 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uVar16;
      uVar13 = iVar14 + 1;
      uVar15 = (ulonglong)uVar13;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar13) goto LAB_14f14b80d;
      uVar10 = puVar18[(longlong)iVar14 + 1];
    }
    uVar8 = -uVar10 & uVar10;
    uVar15 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar9 = (uVar16 - 1) + local_res20;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14f14b80d:
  uVar10 = *(uint *)&(this->ActorClassNameCounter).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar8,uVar13);
  uVar13 = uVar10 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = uVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ActorClassNameCounter).field_0x8 -
                       *(int *)&(this->ActorClassNameCounter).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)&(this->ActorClassNameCounter).field_0x28;
  if (uVar10 != uVar16) {
    puVar17 = *(undefined1 **)&(this->ActorClassNameCounter).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar8 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar8 == 0) {
      lVar12 = (longlong)iVar14;
      uVar13 = uVar13 + 0x20;
      iVar14 = iVar14 + 1;
      uVar10 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14f14b920;
      uVar8 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar10 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar16 < (int)uVar10) {
      uVar10 = uVar16;
    }
  }
LAB_14f14b920:
  while( true ) {
    if (*(int *)&(this->ActorClassNameCounter).field_0x8 -
        *(int *)&(this->ActorClassNameCounter).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar2 = (FName *)(*(longlong *)&this->ActorClassNameCounter +
                      (longlong)TStack_60.CurrentBitIndex * 0x14);
    if (iVar4 < *(int *)(*(longlong *)&this->ActorClassNameCounter + 8 +
                        (longlong)TStack_60.CurrentBitIndex * 0x14)) {
      FCsvProfiler::Get();
      FCsvProfiler::RecordCustomStat
                (pFVar2,_GCsvCategory_ActorCount.Index,pFVar2[1].ComparisonIndex.Value,Set);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// _getUObject @ 14f14bb50

UObject * __thiscall UCsvActorCountMetric::_getUObject(UCsvActorCountMetric *this)

{
  return (UObject *)&this[-1].ActorClassNameCounter.field_0x30;
}

